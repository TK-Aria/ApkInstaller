//
//  main.cpp
//  EasyApkInstaller
//
//  Created by tkaria on 2018/10/24.
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

    // get application path.
    auto appPath = SearchPathFromCommandArg( ApplicationName, *commandParameter );
    
    // confirm current directory.
    char currentDirectory[ MAX_BUFF ] = { 0 };
	GetCurrentDirectory( currentDirectory, MAX_BUFF );
    
    cout << "[ Current Directory ] : " << currentDirectory << endl;
    cout << "[ App Directory ] : " << appPath << endl;
    
    // change current directory.
    ChangeDirectory(appPath.data());

	ApkInstallCommandParameter param;
	{
		param.fileName = "package.apk";
		param.bundleName = "com.Default.Company";
	}

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
	if(fileHandle = fopen(JSON_FILE_NAME, "rb+"))
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


	rewind(stdin);
	getchar();

	fflush(stdout);
    
    // read jsonfile.
    //boost::property_tree::ptree json;
    //read_json(JSON_FILE_NAME, json);
    
    
    // invoke apkinstall command.

	delete commandParameter;
    
    return 0;
    
}




