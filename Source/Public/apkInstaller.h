//
// @file apkInstall.h
// @brief 簡単な説明
// @author tkaria
// @date 2019/03/16
// @details 詳細な説明
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

	// C#からリンクする際に使用するメソッド群.

	static void ApkInstallerAttrubute GenerateTemplateFile()
	{

	}

#ifdef __cplusplus
}
#endif



#endif APKINSTALL_H

