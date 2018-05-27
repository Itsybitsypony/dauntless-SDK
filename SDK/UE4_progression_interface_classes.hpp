#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass progression_interface.progression_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uprogression_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass progression_interface.progression_interface_C");
		return ptr;
	}


	void RequestPendingRewards(class UCanvasPanel* DisplayPanel);
	void SetRankInTrack(const struct FName& Track, int Rank);
	void GetRankInTrack(const struct FName& Track, int* Rank);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
