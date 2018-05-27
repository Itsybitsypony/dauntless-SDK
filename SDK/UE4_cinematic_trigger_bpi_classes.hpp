#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cinematic_trigger_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cinematic_trigger_bpi.cinematic_trigger_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Ucinematic_trigger_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cinematic_trigger_bpi.cinematic_trigger_bpi_C");
		return ptr;
	}


	void SwapCineMatsOut(class AArchonCharacter* Player_Char);
	void ToggleShowSequenceTime();
	void BlendCameraOut(float BlendTime);
	void SkipCinematic();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
