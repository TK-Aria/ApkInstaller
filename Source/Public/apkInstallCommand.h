//
// @file main.cpp
// @brief ŠÈ’P‚Èà–¾
// @author ì¬Ò
// @date ì¬“ú
// @details Ú×‚Èà–¾
//
#pragma once

#include "commandInterface.h"
#include "apkInstallCommandParameter.h"


class ApkInstallCommand : public ICommand
{
private:

	ApkInstallCommandParameter commnadParam;

public:
	ApkInstallCommand(ApkInstallCommandParameter param) {}

	virtual void Invoke() override
	{

		auto filename = commnadParam.fileName;
		auto bundlename = commnadParam.bundleName;

		// launch_android.sh ‚Ì‹N“®.
		system("pwd");
		system("ls");
		system("bash ./launch_android.sh");
	}

private:

	void GrepPackage()
	{
		/* < ruby >
		def grep_packages(grep_word)
		package_list      = `./bin/adb shell pm list package`
		grep_package_list = package_list.split(/\s+/).map { |line| line.sub(/^package:/, '') }.select { |line| line.include?(grep_word) }

		if grep_package_list.size == 1
		return grep_package_list[0]
		elsif grep_package_list.size > 1
		return `echo #{grep_package_list.join(" ")} | xargs -n 1 echo | peco`.chomp
		else
		raise "not found packages to match with #{ grep_word }"
		end
		end
		*/
	}

	void RunCommand(const char* command)
	{
		system(command);
		/* < ruby >
		def run_command(command)
		puts command
		`#{command}`
		end
		*/
	}

	void FetchPackageAndClassName()
	{
		/* < ruby >
		def fetch_package_and_classname(manifestFile)
		base_package = `xmllint #{manifestFile} --xpath 'string(/manifest/@package)'`
		classname = `xmllint #{manifestFile} --xpath 'string(//action[@*[namespace-uri()="http://schemas.android.com/apk/res/android" and local-name()="name"]="android.intent.action.MAIN"]/parent::node()/parent::node()/@*[1])'`

		return  classname.start_with?('.')? base_package + classname : classname
		end
		*/
	}

};

