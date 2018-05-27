// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vendor_interactive_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function vendor_interactive_bp.vendor_interactive_bp_C.HasItemsToCraft
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::HasItemsToCraft(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.HasItemsToCraft");

	Avendor_interactive_bp_C_HasItemsToCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.GetProgressTrackName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::GetProgressTrackName(struct FName* TrackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.GetProgressTrackName");

	Avendor_interactive_bp_C_GetProgressTrackName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackName != nullptr)
		*TrackName = params.TrackName;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EquipmentVendor>   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Get_Vendor_Type(TEnumAsByte<EquipmentVendor>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type");

	Avendor_interactive_bp_C_Get_Vendor_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Type                           (Parm, OutParm)

void Avendor_interactive_bp_C::Get_Vendor_Type_Label(struct FText* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Type Label");

	Avendor_interactive_bp_C_Get_Vendor_Type_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Recipe Tag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Tag                            (Parm, OutParm, ZeroConstructor)

void Avendor_interactive_bp_C::Get_Recipe_Tag(class FString* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Recipe Tag");

	Avendor_interactive_bp_C_Get_Recipe_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get NPC Camera Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Get_NPC_Camera_Component(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get NPC Camera Component");

	Avendor_interactive_bp_C_Get_NPC_Camera_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Crafting Preview Transform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void Avendor_interactive_bp_C::Get_Crafting_Preview_Transform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Crafting Preview Transform");

	Avendor_interactive_bp_C_Get_Crafting_Preview_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Button_Label                   (Parm, OutParm)

void Avendor_interactive_bp_C::Get_Quest_Button_Label(struct FText* Button_Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Label");

	Avendor_interactive_bp_C_Get_Quest_Button_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Label != nullptr)
		*Button_Label = params.Button_Label;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Speaker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonSpeaker*          Speaker                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Get_Speaker(class UArchonSpeaker** Speaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Speaker");

	Avendor_interactive_bp_C_Get_Speaker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speaker != nullptr)
		*Speaker = params.Speaker;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)

void Avendor_interactive_bp_C::Get_Vendor_Title(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Vendor Title");

	Avendor_interactive_bp_C_Get_Vendor_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget_Class                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Get_Quest_Button_Class(class UClass** Widget_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Get Quest Button Class");

	Avendor_interactive_bp_C_Get_Quest_Button_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Class != nullptr)
		*Widget_Class = params.Widget_Class;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Has Redeemable Quests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Avendor_interactive_bp_C::Has_Redeemable_Quests()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Has Redeemable Quests");

	Avendor_interactive_bp_C_Has_Redeemable_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Has Available Quests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Avendor_interactive_bp_C::Has_Available_Quests()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Has Available Quests");

	Avendor_interactive_bp_C_Has_Available_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.AssignVOTransformsTemporary
// (Public, BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::AssignVOTransformsTemporary()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.AssignVOTransformsTemporary");

	Avendor_interactive_bp_C_AssignVOTransformsTemporary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.RaiseInteractionwithSpeaker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::RaiseInteractionwithSpeaker(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.RaiseInteractionwithSpeaker");

	Avendor_interactive_bp_C_RaiseInteractionwithSpeaker_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.DisplayStore
// (Public, BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::DisplayStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.DisplayStore");

	Avendor_interactive_bp_C_DisplayStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.SetupVendorMesh
// (Public, BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::SetupVendorMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.SetupVendorMesh");

	Avendor_interactive_bp_C_SetupVendorMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.GetMarkerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMarkerComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMarkerComponent* Avendor_interactive_bp_C::GetMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.GetMarkerComponent");

	Avendor_interactive_bp_C_GetMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Available Quests
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available_Quests_Found         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Vendor_Has_Available_Quests(bool* Available_Quests_Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Available Quests");

	Avendor_interactive_bp_C_Vendor_Has_Available_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Available_Quests_Found != nullptr)
		*Available_Quests_Found = params.Available_Quests_Found;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Redeemable Quests
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Redeemable_Quests_Found        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::Vendor_Has_Redeemable_Quests(bool* Redeemable_Quests_Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Vendor Has Redeemable Quests");

	Avendor_interactive_bp_C_Vendor_Has_Redeemable_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Redeemable_Quests_Found != nullptr)
		*Redeemable_Quests_Found = params.Redeemable_Quests_Found;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.UserConstructionScript");

	Avendor_interactive_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Refresh Quest Indicator
// (BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::Refresh_Quest_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Refresh Quest Indicator");

	Avendor_interactive_bp_C_Refresh_Quest_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.OnQuestSystemReady
// (BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::OnQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.OnQuestSystemReady");

	Avendor_interactive_bp_C_OnQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.ExecutePayload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  SuccessfulInteractor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::ExecutePayload(class APawn** SuccessfulInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.ExecutePayload");

	Avendor_interactive_bp_C_ExecutePayload_Params params;
	params.SuccessfulInteractor = SuccessfulInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.Marks Quests as Viewed
// (BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::Marks_Quests_as_Viewed()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.Marks Quests as Viewed");

	Avendor_interactive_bp_C_Marks_Quests_as_Viewed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.OnMenuClosed
// (BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.OnMenuClosed");

	Avendor_interactive_bp_C_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.StateTrigger
// (BlueprintCallable, BlueprintEvent)

void Avendor_interactive_bp_C::StateTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.StateTrigger");

	Avendor_interactive_bp_C_StateTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Avendor_interactive_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveBeginPlay");

	Avendor_interactive_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Avendor_interactive_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.ReceiveGameplayStart");

	Avendor_interactive_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      pc                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::K2_OnBecomeViewTarget(class APlayerController** pc)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.K2_OnBecomeViewTarget");

	Avendor_interactive_bp_C_K2_OnBecomeViewTarget_Params params;
	params.pc = pc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.OnUserCompletedInteraction");

	Avendor_interactive_bp_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vendor_interactive_bp.vendor_interactive_bp_C.ExecuteUbergraph_vendor_interactive_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Avendor_interactive_bp_C::ExecuteUbergraph_vendor_interactive_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function vendor_interactive_bp.vendor_interactive_bp_C.ExecuteUbergraph_vendor_interactive_bp");

	Avendor_interactive_bp_C_ExecuteUbergraph_vendor_interactive_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
