//
// @file main.cpp
// @brief �ȒP�Ȑ�
// @author �쐬��
// @date �쐬��
// @details �ڍׂȐ�
//
#pragma once

//namespace Seed::Utillity {

	template<class X> class NotifyPropertyChanged
	{
	private:

		X lastValue;

	public:
		X currentValue;
		bool valueChanged;

		ValueChangedNotifier() = default;

		void Observe(X newValue)
		{

			// �l���ς�����Ƃ�.
			if (valueChanged = (lastValue == newValue))
			{
				// ��������.
			}

			// �V�����t���[���f�[�^��i�[.
			lastValue = currentValue;
			currentValue = newValue;
			setvbuf()
		}

	};

	class MainThreadExecuter
	{

	};


//}

class EventTrigger
{

};

// sistem�Ȃǂɒʒm����.
class EventNotifier
{

};

class Event
{

};

class GameSystem
{

};

class GameSystemModel
{

};

class GameService
{
	// �C�x���g��ق�
	// system�̏������A�X�V�A�I��
};

// base class
class GameUnit
{
	// Parameter;
	// view �ǂ�Ȍ����ڂ�Ă��邩�B
	// �ǂ�Ȃ��������̂��H
};

//  ����ȃQ�[�����j�b�g.
class GameMaster : public GameUnit
{
	
};

//�W���o�͂ɂӂ���
#include <stdio.h>
// setvbuf(stdout, buff, _IOFBF, sizeof(buff));

// electon�̃R�}���h���������̐݌v


#include <typeinfo>
#define ToString(type) typeid(type).name

// �I�����ɌĂԊ֐���32�o�^�ł���B
#include <cstdlib>
// atexit()


namespace Seed
{

	// �����^�C����Ɉ�̂������݂ł��Ȃ��B
	class FinalizeManager /* : DesignPattern::Singleton */
	{

	};

	class TerminalEmulator
	{


	}typedef ShellEmulator;

}

#define SeedMemoryManagementAttribute
namespace Seed::MemoryManagement
{


	class SeedMemoryManagementAttribute STLAllocator
	{

	};

	// �^���I�ȃK�x�[�W�R���N�V�����̐݌v.
	class SeedMemoryManagementAttribute IGarbageCollection
	{

	}typedef GC;


	class SeedMemoryManagementAttribute ScriptableGarbageCollection
	{


	}typedef ScriptableGC;

}

#define SeedGraphicsAttribute

namespace Seed::Graphics
{


	enum GraphicsRendererKinds : _Uint32t
	{

	};

	class SeedGraphicsAttribute GraphicsRendererManager
	{
		// renderer����rendererhandle�ւ̃o�C���h�Ȃ�.
	};

	class SeedGraphicsAttribute GraphicsRenderer
	{

	}typedef GfxRenderer;

#define MobilePlatform APILevel9
	namespace APILevel9 {

		class SeedGraphicsAttribute GraphicRendererHandle
		{

		};
	}

#define ConsumerHighEndPlatform APILevel11
	namespace APILevel11 {
		 
		class SeedGraphicsAttribute GraphicsRendererHandle
		{

		};
	}

#define RayTracingPlatform APILevel12
	namespace APILevel12 {

		class SeedGraphicsAttribute GraphicsRendererHandle
		{

		};
	}

}

