#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamemode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_gamemode.bpi_gamemode_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_gamemode_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_gamemode.bpi_gamemode_C");
		return ptr;
	}


	void GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem);
	void GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths);
	void IsIntroCinematicEnabled(bool* Enabled);
	void MoveCharactersToArrival();
	void TriggerEndOfHuntSequence();
	void TriggerIntroCinematic(class APlayerController* Player);
	bool DidSetupIntroCinematic();
	void GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
