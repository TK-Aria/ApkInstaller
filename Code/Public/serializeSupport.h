//
//!		@file main.cpp
//!		@brief �ȒP�Ȑ�
//!		@author �쐬��
//!		@date �쐬��
//!		@details �ڍׂȐ�
//
#pragma once

#define CEREAL_THREAD_SAFE 1
#include <cereal/cereal.hpp>
#include <cereal/archives/json.hpp>

#include <cereal/types/string.hpp>
#include <cereal/types/vector.hpp>
#include <cereal/types/list.hpp>
#include <cereal/types/unordered_map.hpp>

//! Json�ϊ����Ȃǂɕϐ�����ۑ�����.
#define SerializeProperty CEREAL_NVP

//! �V���A���C�Y�̃o�[�W�����Ǘ��Ȃ�.
#define SerializableClassProperty CEREAL_CLASS_VERSION



