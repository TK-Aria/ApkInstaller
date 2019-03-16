//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

#include "serializeSupport.h"


struct ApkInstallCommandParameter
{

	String fileName;
	String bundleName;

	template<class Archive> void serialize(Archive& archiveProperty, const std::uint32_t version)
	{
		archiveProperty(CEREAL_NVP(fileName), CEREAL_NVP(bundleName));

		if (1 <= version)
		{
			// 何かする.
		}
	}

};
SerializableClassProperty(ApkInstallCommandParameter, 1);




