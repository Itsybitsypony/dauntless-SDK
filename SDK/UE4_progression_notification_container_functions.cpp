// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_notification_container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_notification_container.progression_notification_container_C.AddNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_notification_container_C::AddNotification(const class FString& DisplayName, TAssetPtr<class UTexture2D> Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.AddNotification");

	Uprogression_notification_container_C_AddNotification_Params params;
	params.DisplayName = DisplayName;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_container.progression_notification_container_C.Find Empty Notification Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Slot_Found                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Empty_Slot_ID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_container_C::Find_Empty_Notification_Slot(bool* Slot_Found, int* Empty_Slot_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.Find Empty Notification Slot");

	Uprogression_notification_container_C_Find_Empty_Notification_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot_Found != nullptr)
		*Slot_Found = params.Slot_Found;
	if (Empty_Slot_ID != nullptr)
		*Empty_Slot_ID = params.Empty_Slot_ID;
}


// Function progression_notification_container.progression_notification_container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uprogression_notification_container_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.Construct");

	Uprogression_notification_container_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_container.progression_notification_container_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_container_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.Tick");

	Uprogression_notification_container_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_container.progression_notification_container_C.OnChallengeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ChallengeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UDataTable*              ChallengeTable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_container_C::OnChallengeCompleted(const class FString& ChallengeID, class UDataTable* ChallengeTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.OnChallengeCompleted");

	Uprogression_notification_container_C_OnChallengeCompleted_Params params;
	params.ChallengeID = ChallengeID;
	params.ChallengeTable = ChallengeTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_notification_container.progression_notification_container_C.ExecuteUbergraph_progression_notification_container
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_notification_container_C::ExecuteUbergraph_progression_notification_container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_notification_container.progression_notification_container_C.ExecuteUbergraph_progression_notification_container");

	Uprogression_notification_container_C_ExecuteUbergraph_progression_notification_container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
