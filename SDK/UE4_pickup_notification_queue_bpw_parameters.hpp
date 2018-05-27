#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_pickup_notification_queue_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add New Notification
struct Upickup_notification_queue_bpw_C_Add_New_Notification_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  ConditionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Find Empty Notification Slot
struct Upickup_notification_queue_bpw_C_Find_Empty_Notification_Slot_Params
{
	bool                                               Slot_Found;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Empty_Slot_ID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Construct
struct Upickup_notification_queue_bpw_C_Construct_Params
{
};

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add Acquisition For Notification
struct Upickup_notification_queue_bpw_C_Add_Acquisition_For_Notification_Params
{
	class FString                                      Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eloot_condition_type>                  LootCondition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Tick
struct Upickup_notification_queue_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.ExecuteUbergraph_pickup_notification_queue_bpw
struct Upickup_notification_queue_bpw_C_ExecuteUbergraph_pickup_notification_queue_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
