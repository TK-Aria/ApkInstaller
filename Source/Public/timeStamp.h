//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
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




