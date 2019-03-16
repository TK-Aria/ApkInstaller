//
// @file main.cpp
// @brief �ȒP�Ȑ���
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ���
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
			// ��������.
		}
	}

};
SerializableClassProperty(ApkInstallCommandParameter, 1);




