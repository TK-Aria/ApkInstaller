//
//  main.cpp
//  ApkInstaller
//
//  Created by tkaria on 2018/03/16.
//  Copyright © 2018年 tkaria. All rights reserved.
//

#define _CRT_SECURE_NO_WARNINGS

#include "config.h"

#include <stdio.h>
#include <iostream>
#include "string.h"
#include <unordered_map>
#include <functional>

#include "../Public/OS/kernel.h"
#include "../Public/consoleUtils.h"
#include "../Public/apkInstallCommand.h"

/*
namespace Seed::Runtime::Service
{

	class Singleton;
	class LibraryCtrlManager;


#if defined(SEED_WIN32) | defined(SEED_UWP)
	#include <windows.h> // http://yamatyuu.net/computer/program/sdk/base/dynamic_dll/index.html
// ex)
//        HMODULE hMod = LoadLibrary(L"user32.dll");
//		if (hMod == NULL)
//		{
//          return 1;
//      }
//		MessageBoxWFunc func=0;
//        func = (MessageBoxWFunc)GetProcAddress(hMod, "MessageBoxW");
//        if (func)
//                (*func)(0, L"MessageBoxの呼び出しに成功しました", L"メッセージ", MB_OK);
//        FreeLibrary(hMod);
//        return (int)0;
//
#elif defined(SEED_OSX) | defined(SEED_LINUX)
	#include <dlfcn.h> // https://brightenfuture.com/blog/shared-lib-linux/
// ex)
//		void *ptrHandle = dlopen("shared.so", RTLD_LAZY);
//		HOGE_FUNCTION ptrDllFunc = (void (*)(void))dlsym(ptrHandle, "hoge");
//		ptrDllFunc();
//
#endif 

	/// <summary>
	///  アプリケーションの抽象クラス. https://www.gesource.jp/programming/bcb/dll/03.html
	/// </summary>
	class SEED_SERVICE_API AppService : public Singleton<AppService>
	{
		DisAllowCopyAndAssign(AppService);

	private:

	public:
		void Initialize();
		void Shutdown();
		void Update();

		void SubProcess(char* param, char* output = stdout)
		{
			system(param);
		}

		void LoadLibrary()
		{
			LibraryCtrlManager.LoadLibrary();
		}

		void UnloadLibrary()
		{
			LibraryCtrlManager.UnloadLibrary();
		}
	};

}
*/
int main(int argc, const char * argv[])
{

	using namespace std;
	using namespace cereal;

    auto commandParameter = new CommnadParameter {
        argc,
        argv,
    };
    
	unordered_map<String,function<void()>> commandAlias;
	{
		commandAlias["--help"] = []() {};
	}

	static char rcvBuffer[8192] = { 0 };
	setvbuf(stdout, rcvBuffer, _IOFBF, sizeof(rcvBuffer));

	{ // Directory Operation .

		// get application path.
		auto appPath = SearchPathFromCommandArg(ApplicationName, *commandParameter);

		// confirm current directory.
		char currentDirectory[MAX_BUFF] = { 0 };
		GetCurrentDirectory(currentDirectory, MAX_BUFF);

		cout << "[ Current Directory ] : " << currentDirectory << endl;
		cout << "[ App Directory ] : " << appPath << endl;        
        
		// change current directory.
		ChangeDirectory(appPath.data());
	}

	ApkInstallCommandParameter param;
	{
		param.fileName = "package.apk";
		param.bundleName = "com.Default.Company";
	}


	if(commandParameter->argv[1])
	{ 

		//char fileExtension[MAX_BUFF] = {};
        std::string fileExtension;
		cout << "[ CommandParameter ] : " << commandParameter->argv[1] << endl;
		//_splitpath(commandParameter->argv[1], nullptr, nullptr, nullptr, fileExtension);
        GetFileExtension(fileExtension,commandParameter->argv[1]);
        cout << "[ FileExtension ] : " << fileExtension.data() << endl;

		if (strcmp(fileExtension.data(), ".apk") == 0)
		{
			string fullpath = commandParameter->argv[1];
			string command(ADB_COMMAND + fullpath);
			system(command.data());
		}

	}
	else
	{

		/*

		// Archive parameter.
		stringstream strStream;
		{
			JSONOutputArchive jsonSerializer(strStream);
			jsonSerializer(param);
		}
		cout << "[ Json ] : " << strStream.str() << endl;

		auto fileHandle = fopen(JSON_FILE_NAME, "wb+");
		{
			fwrite(strStream.str().data(), strStream.str().size(),1, fileHandle);
		}
		fclose(fileHandle);

		*/

		// Deserialize parameter
		stringstream strStream;
		char* streamBuffer = nullptr;
		FILE* fileHandle = nullptr;
		if (fileHandle = fopen(JSON_FILE_NAME, "rb+"))
		{

			unsigned int buffSize = fseek(fileHandle, 0, SEEK_END);
			streamBuffer = new char[MAX_BUFF] { 0 };
			fseek(fileHandle, 0, SEEK_SET);

			fread(streamBuffer, MAX_BUFF, 1, fileHandle);

			strStream << streamBuffer;

			fclose(fileHandle);
		}

		cout << "[ Json ] : " << strStream.str() << endl;

		JSONInputArchive jsonDesirializer(strStream);
		jsonDesirializer(param);

		delete streamBuffer;

		// invoke apkinstall command.
		string command(ADB_COMMAND + param.fileName);
		system(command.data());

	}

	rewind(stdin);
	getchar();

	fflush(stdout);
    
    // read jsonfile.
    //boost::property_tree::ptree json;
    //read_json(JSON_FILE_NAME, json);
    
    
	delete commandParameter;
    
    return 0;
    
}




