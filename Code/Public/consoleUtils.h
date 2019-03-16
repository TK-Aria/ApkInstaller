//
// @file main.cpp
// @brief ŠÈ’P‚Èà–¾
// @author ì¬Ò
// @date ì¬“ú
// @details Ú×‚Èà–¾
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
	auto pos = appPath.find(searchTarget.data());
	appPath.replace(pos, searchTarget.length(), "");

	return appPath;
}

