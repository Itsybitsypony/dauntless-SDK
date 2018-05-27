#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_audio_weapon_setup_bpfl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass audio_weapon_setup_bpfl.audio_weapon_setup_bpfl_C
// 0x0000 (0x0028 - 0x0028)
class Uaudio_weapon_setup_bpfl_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass audio_weapon_setup_bpfl.audio_weapon_setup_bpfl_C");
		return ptr;
	}


	void STATIC_Audio___Weapon_Audio_Setup(const struct FName& Character_Weapon, const struct FName& Character_Weapon_Specific, const struct FName& Weapon_Elemental, class AActor* Pawn_Owner, class UObject* __WorldContext, TArray<class UAkAudioBank*>* Weapon_Audio_Banks);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
