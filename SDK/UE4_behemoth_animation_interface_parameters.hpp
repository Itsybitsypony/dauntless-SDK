#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_animation_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_animation_interface.behemoth_animation_interface_C.SetEnableAimOffset
struct Ubehemoth_animation_interface_C_SetEnableAimOffset_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_animation_interface.behemoth_animation_interface_C.SetCustomState
struct Ubehemoth_animation_interface_C_SetCustomState_Params
{
	struct FName                                       CustomStateName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
