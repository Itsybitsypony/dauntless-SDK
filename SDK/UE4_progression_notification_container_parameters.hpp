#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_notification_container_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_notification_container.progression_notification_container_C.AddNotification
struct Uprogression_notification_container_C_AddNotification_Params
{
	class FString                                      DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function progression_notification_container.progression_notification_container_C.Find Empty Notification Slot
struct Uprogression_notification_container_C_Find_Empty_Notification_Slot_Params
{
	bool                                               Slot_Found;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Empty_Slot_ID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_container.progression_notification_container_C.Construct
struct Uprogression_notification_container_C_Construct_Params
{
};

// Function progression_notification_container.progression_notification_container_C.Tick
struct Uprogression_notification_container_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_container.progression_notification_container_C.OnChallengeCompleted
struct Uprogression_notification_container_C_OnChallengeCompleted_Params
{
	class FString                                      ChallengeID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UDataTable*                                  ChallengeTable;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_container.progression_notification_container_C.ExecuteUbergraph_progression_notification_container
struct Uprogression_notification_container_C_ExecuteUbergraph_progression_notification_container_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
