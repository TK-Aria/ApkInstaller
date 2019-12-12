//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
//
#pragma once

// http://www.c-lang.net/stat/index.html

#include <sys/stat.h>
#include "valueChangedNotifier.h"

class TimeStamp
{
private:

	struct stat statusReceiver;
	std::string target;

	ValueChangedNotifier<time_t> timeChangedNotifier;

public:

	TimeStamp()
		: target(std::string())
		, timeChangedNotifier() { }

	virtual bool Observe()
	{
		auto result = stat(target.data(), &statusReceiver);
		timeChangedNotifier.Observe(statusReceiver.st_mtime);

		return result;
	}

};




