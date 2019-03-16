//
// @file main.cpp
// @brief ŠÈ’P‚Èà–¾
// @author ì¬Ò
// @date ì¬“ú
// @details Ú×‚Èà–¾
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




