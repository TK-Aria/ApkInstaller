//
// @file main.cpp
// @brief ŠÈ’P‚Èà–¾
// @author ì¬Ò
// @date ì¬“ú
// @details Ú×‚Èà–¾
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
			// ‰½‚©‚·‚é.
		}
	}

};
SerializableClassProperty(ApkInstallCommandParameter, 1);




