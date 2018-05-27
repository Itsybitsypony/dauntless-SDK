#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_player_animdata_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_player_animdata.BPI_player_animdata_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_player_animdata_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_player_animdata.BPI_player_animdata_C");
		return ptr;
	}


	void GetIntroAnimations(TArray<class UAnimSequenceBase*>* IntroAnimations);
	void GetLocoAnimset(struct Floco_animset_str* LocoAnimset);
	void GetActionsAnimset(struct Factions_animset_str* ActionsAnimset);
	void GetStaggerAnimset(struct Fstagger_animset_str* StaggerAnimset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
