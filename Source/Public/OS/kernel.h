//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
//
#pragma once

#ifdef _WIN32

#include <Windows.h>

#undef GetCurrentDirectory
#define GetCurrentDirectory(dir,size) GetCurrentDirectoryA(size,dir)
#define ChangeDirectory SetCurrentDirectoryA

#define GetFileExtension(src, path) std::string fullpath(path); int index = fullpath.find_last_of("."); auto ext = fullpath.substr(index, fullpath.size() - index); src = ext;
//define GetFileExtension(path) char fileExtension[MAX_BUFF] = {}; _splitpath(path, nullptr, nullptr, nullptr, fileExtension); return std::string(fileExtension);

#define ADB_COMMAND "adb install -r "

// UNIX OS
#else __unix__|__linux__|__FreeBSD__|__NetBSD__

#include <Carbon/Carbon.h>
#include <unistd.h>
#include <string>

#define GetCurrentDirectory getcwd
#define ChangeDirectory chdir

#define GetFileExtension(src, path) std::string fullpath(path); int index = fullpath.find_last_of("."); auto ext = fullpath.substr(index, fullpath.size() - index); src = ext;

#define ADB_COMMAND "./adb install -r "

#endif // OS Dependence

