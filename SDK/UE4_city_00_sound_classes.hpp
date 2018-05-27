#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_00_sound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass city_00_sound.city_00_sound_C
// 0x0008 (0x0398 - 0x0390)
class Acity_00_sound_C : public AArchonIslandScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass city_00_sound.city_00_sound_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void mutemusic();
	void unmutemusic();
	void muteaudio();
	void unmuteaudio();
	void ReceiveGameplayStart();
	void CineRRStartCitySound();
	void CineRRMusicStart();
	void CineRRStart();
	void CineRREnd();
	void ExecuteUbergraph_city_00_sound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
