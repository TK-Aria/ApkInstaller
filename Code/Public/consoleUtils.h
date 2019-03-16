//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
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

