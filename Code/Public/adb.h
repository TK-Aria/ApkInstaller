//
// @file main.cpp
// @brief ŠÈ’P‚Èà–¾
// @author ì¬Ò
// @date ì¬“ú
// @details Ú×‚Èà–¾
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
