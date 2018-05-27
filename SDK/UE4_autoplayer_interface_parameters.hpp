#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function autoplayer_interface.autoplayer_interface_C.GetAutorunMode
struct Uautoplayer_interface_C_GetAutorunMode_Params
{
	bool                                               AutorunMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_interface.autoplayer_interface_C.StopAutoProgression
struct Uautoplayer_interface_C_StopAutoProgression_Params
{
};

// Function autoplayer_interface.autoplayer_interface_C.TestQuestProgression
struct Uautoplayer_interface_C_TestQuestProgression_Params
{
	class FString                                      IDToStopAt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_interface.autoplayer_interface_C.TryToAcceptQuest
struct Uautoplayer_interface_C_TryToAcceptQuest_Params
{
};

// Function autoplayer_interface.autoplayer_interface_C.TryToRedeemQuests
struct Uautoplayer_interface_C_TryToRedeemQuests_Params
{
};

// Function autoplayer_interface.autoplayer_interface_C.TryToCompleteQuests
struct Uautoplayer_interface_C_TryToCompleteQuests_Params
{
};

// Function autoplayer_interface.autoplayer_interface_C.StartAutoplayerComp
struct Uautoplayer_interface_C_StartAutoplayerComp_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
