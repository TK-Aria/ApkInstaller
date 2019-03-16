//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
//
#pragma once

// UNIX OS 
#ifdef __unix__|__linux__|__FreeBSD__|__NetBSD__ 

#include <Carbon/Carbon.h>
#include <unistd.h>

#define GetCurrentDirectory getcwd
#define ChangeDirectory chdir

#else _WIN32

#include <Windows.h>

#undef GetCurrentDirectory
#define GetCurrentDirectory(dir,size) GetCurrentDirectoryA(size,dir)
#define ChangeDirectory SetCurrentDirectoryA

#endif // OS Dependence

