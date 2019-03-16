//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

//namespace Seed::Utillity {

	template<class X> class ValueChangedNotifier
	{
	public:
		X lastValue;
		X currentValue;
		bool valueChanged;

		void Observe(X newValue)
		{

			// 値が変わったとき.
			if (valueChanged = (lastValue == newValue))
			{
				// 何かする.
			}

			// 新しいフレームデータを格納.
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

// sistemなどに通知する.
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
	// イベントを裁く
	// systemの初期化、更新、終了
};

// base class
class GameUnit
{
	// Parameter;
	// view どんな見た目をしているか。
	// どんなうごきをするのか？
};

//  特殊なゲームユニット.
class GameMaster : public GameUnit
{
	
};

//標準出力にふっく
#include <stdio.h>
// setvbuf(stdout, buff, _IOFBF, sizeof(buff));

// electonのコマンド引数処理の設計


#include <typeinfo>
#define ToString(type) typeid(type).name

// 終了時に呼ぶ関数を32個登録できる。
#include <cstdlib>
// atexit()


namespace Seed
{

	// ランタイム上に一体しか存在できない。
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

	// 疑似的なガベージコレクションの設計.
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
		// rendererからrendererhandleへのバインドなど.
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

