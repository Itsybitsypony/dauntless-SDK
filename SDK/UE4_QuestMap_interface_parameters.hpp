#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuestMap_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function QuestMap_interface.QuestMap_interface_C.GetQuestWorldLocation
struct UQuestMap_interface_C_GetQuestWorldLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function QuestMap_interface.QuestMap_interface_C.HasAvailableQuests
struct UQuestMap_interface_C_HasAvailableQuests_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMap_interface.QuestMap_interface_C.HasRedeemableQuests
struct UQuestMap_interface_C_HasRedeemableQuests_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestMap_interface.QuestMap_interface_C.DragLocationVector
struct UQuestMap_interface_C_DragLocationVector_Params
{
	struct FVector2D                                   Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function QuestMap_interface.QuestMap_interface_C.FastTravel
struct UQuestMap_interface_C_FastTravel_Params
{
	class AArchonWorldLocation_C*                      Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
