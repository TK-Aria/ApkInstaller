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
