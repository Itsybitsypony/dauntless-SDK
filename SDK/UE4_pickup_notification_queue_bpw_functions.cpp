// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_pickup_notification_queue_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add New Notification
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> ConditionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_queue_bpw_C::Add_New_Notification(const class FString& Item_ID, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add New Notification");

	Upickup_notification_queue_bpw_C_Add_New_Notification_Params params;
	params.Item_ID = Item_ID;
	params.Amount = Amount;
	params.ConditionType = ConditionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Find Empty Notification Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Slot_Found                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Empty_Slot_ID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_queue_bpw_C::Find_Empty_Notification_Slot(bool* Slot_Found, int* Empty_Slot_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Find Empty Notification Slot");

	Upickup_notification_queue_bpw_C_Find_Empty_Notification_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot_Found != nullptr)
		*Slot_Found = params.Slot_Found;
	if (Empty_Slot_ID != nullptr)
		*Empty_Slot_ID = params.Empty_Slot_ID;
}


// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upickup_notification_queue_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Construct");

	Upickup_notification_queue_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add Acquisition For Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> LootCondition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_queue_bpw_C::Add_Acquisition_For_Notification(const class FString& Item_ID, int Amount, TEnumAsByte<Eloot_condition_type> LootCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Add Acquisition For Notification");

	Upickup_notification_queue_bpw_C_Add_Acquisition_For_Notification_Params params;
	params.Item_ID = Item_ID;
	params.Amount = Amount;
	params.LootCondition = LootCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_queue_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.Tick");

	Upickup_notification_queue_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.ExecuteUbergraph_pickup_notification_queue_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upickup_notification_queue_bpw_C::ExecuteUbergraph_pickup_notification_queue_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pickup_notification_queue_bpw.pickup_notification_queue_bpw_C.ExecuteUbergraph_pickup_notification_queue_bpw");

	Upickup_notification_queue_bpw_C_ExecuteUbergraph_pickup_notification_queue_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
