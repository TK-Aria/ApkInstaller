//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

struct CommnadParameter
{
	int argc;
	const char** argv;
};

String SearchPathFromCommandArg( const String& searchTarget, CommnadParameter& param )
{

	const int AppPathIndex = 0;

	String appPath = param.argv[AppPathIndex];
	auto pos = appPath.find_last_of(searchTarget.data());
	appPath.replace(pos, searchTarget.length(), "");

	return appPath;
}

