// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interactable_npc_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function interactable_npc_interface.interactable_npc_interface_C.HasItemsToCraft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::HasItemsToCraft(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.HasItemsToCraft");

	Uinteractable_npc_interface_C_HasItemsToCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function interactable_npc_interface.interactable_npc_interface_C.GetProgressTrackName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrackName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::GetProgressTrackName(struct FName* TrackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.GetProgressTrackName");

	Uinteractable_npc_interface_C_GetProgressTrackName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackName != nullptr)
		*TrackName = params.TrackName;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EquipmentVendor>   Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::Get_Vendor_Type(TEnumAsByte<EquipmentVendor>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type");

	Uinteractable_npc_interface_C_Get_Vendor_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Recipe Tag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Tag                            (Parm, OutParm, ZeroConstructor)

void Uinteractable_npc_interface_C::Get_Recipe_Tag(class FString* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Recipe Tag");

	Uinteractable_npc_interface_C_Get_Recipe_Tag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get NPC Camera Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::Get_NPC_Camera_Component(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get NPC Camera Component");

	Uinteractable_npc_interface_C_Get_NPC_Camera_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Crafting Preview Transform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void Uinteractable_npc_interface_C::Get_Crafting_Preview_Transform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Crafting Preview Transform");

	Uinteractable_npc_interface_C_Get_Crafting_Preview_Transform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Button_Label                   (Parm, OutParm)

void Uinteractable_npc_interface_C::Get_Quest_Button_Label(struct FText* Button_Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Label");

	Uinteractable_npc_interface_C_Get_Quest_Button_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Label != nullptr)
		*Button_Label = params.Button_Label;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Type                           (Parm, OutParm)

void Uinteractable_npc_interface_C::Get_Vendor_Type_Label(struct FText* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Type Label");

	Uinteractable_npc_interface_C_Get_Vendor_Type_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)

void Uinteractable_npc_interface_C::Get_Vendor_Title(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Vendor Title");

	Uinteractable_npc_interface_C_Get_Vendor_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Speaker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonSpeaker*          Speaker                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::Get_Speaker(class UArchonSpeaker** Speaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Speaker");

	Uinteractable_npc_interface_C_Get_Speaker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speaker != nullptr)
		*Speaker = params.Speaker;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Class
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Widget_Class                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinteractable_npc_interface_C::Get_Quest_Button_Class(class UClass** Widget_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Get Quest Button Class");

	Uinteractable_npc_interface_C_Get_Quest_Button_Class_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Class != nullptr)
		*Widget_Class = params.Widget_Class;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Has Available Quests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uinteractable_npc_interface_C::Has_Available_Quests()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Has Available Quests");

	Uinteractable_npc_interface_C_Has_Available_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function interactable_npc_interface.interactable_npc_interface_C.Has Redeemable Quests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uinteractable_npc_interface_C::Has_Redeemable_Quests()
{
	static auto fn = UObject::FindObject<UFunction>("Function interactable_npc_interface.interactable_npc_interface_C.Has Redeemable Quests");

	Uinteractable_npc_interface_C_Has_Redeemable_Quests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
