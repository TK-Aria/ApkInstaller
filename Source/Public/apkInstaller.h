//
// @file apkInstall.h
// @brief �ȒP�Ȑ���
// @author tkaria
// @date 2019/03/16
// @details �ڍׂȐ���
//
#pragma once

#ifndef APKINSTALL_H
#define APKINSTALL_H


// system attribute.
#ifdef DLL_EXPORTS
#define  ApkInstallerAttrubute __declspec(dllexport)
#elif DLL_IMPORTS
#define  ApkInstallerAttrubute __declspec(dllimport)
#elif WASM_EXPORT
#define  ApkInstallerAttrubute __attribute__((visibility("default")))
#else
#define ApkInstallerAttrubute // staticlibrary
#endif

#ifdef __cplusplus
extern "C" {
#endif

	// C#���烊���N����ۂɎg�p���郁�\�b�h�Q.

	static void ApkInstallerAttrubute GenerateTemplateFile()
	{

	}

#ifdef __cplusplus
}
#endif



#endif APKINSTALL_H

