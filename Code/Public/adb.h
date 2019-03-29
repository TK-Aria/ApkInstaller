//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
//
#pragma once

#include <stdio.h>
#include <string>


class Terminal
{
public:

	void Stack(const char* command);
	void Run();
}
typedef ShellEmulator;

namespace adb {


	class adbEmulator
	{
	private:

		const std::string adb = "adb ";
		std::string adbBinaryDirectory;

	public:

		adbEmulator(const std::string& adbBinaryDirectory)
			: adbBinaryDirectory(adbBinaryDirectory) {}

        void Install(const char* apkFileName);
        void UnInstall(const char* bundleName);
        
        void Send(const char* basefile, const char* targetDirectory);
        void Receive(const char* basefile, const char* targetDirectory);
        
        void Connect();
        void DisConnect();

		void Shell(const char* shell);

	};

	void adbEmulator::Install(const char* apkFileName)
	{
		std::string commnad = adb;
		command +=  "install -r " + apkFileName;
		system(command.data());
	}

	void adbEmulator::Uninstall(const char* bundleName)
	{
		std::string commnad = adb;
		command +=  "uninstall " + bundleName;
		system(command.data());
	}

	void adbEmulator::Send(const char* basefile, const char* targetDirectory)
	{
		std::string commnad = adb;
		command +=  "push " + basefile + " " + targetDirectory;
		system(command.data());
	}

	void adbEmulator::Receive(const char* basefile, const char* targetDirectory)
	{
		std::string commnad = adb;
		command +=  "pull " + basefile + " " + targetDirectory;
		system(command.data());
	}

	void adbEmulator::Connect()
	{
		std::string commnad = adb;
		command +=  "pull " + basefile + " " + targetDirectory;
		system(command.data());
	}

	void adbEmulator::DisConnect()
	{
		std::string commnad = adb;
		command +=  "pull " + basefile + " " + targetDirectory;
		system(command.data());
	}

	void adbEmulator::Shell(const char* shell);
	{
		std::string commnad = adb;
		command +=  "pull " + basefile + " " + targetDirectory;
		system(command.data());
	}

}
