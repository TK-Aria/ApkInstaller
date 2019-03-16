//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

#include <stdio.h>
#include <string>

namespace adb {


	class adbEmulator
	{
	private:

		const std::string adb = "adb ";
		std::string adbBinaryDirectory;

	public:

		adbEmulator(const std::string& adbBinaryDirectory)
			: adbBinaryDirectory(adbBinaryDirectory) {}



	};

}
