// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_w_ArmourTinting_SubPanel_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetDyeInfo
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)
// int                            RemainingUses                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::GetDyeInfo(const struct FName& DyeRow, class FString* ItemInstanceId, int* RemainingUses, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetDyeInfo");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_GetDyeInfo_Params params;
	params.DyeRow = DyeRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
	if (RemainingUses != nullptr)
		*RemainingUses = params.RemainingUses;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdateDyeSwatches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAllTints                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::UpdateDyeSwatches(bool ShowAllTints)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdateDyeSwatches");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_UpdateDyeSwatches_Params params;
	params.ShowAllTints = ShowAllTints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Init
// (Private, BlueprintCallable, BlueprintEvent)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Init");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetSelectedArmourItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_Armour* ArmourItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::GetSelectedArmourItem(class UArchonInventoryItem_Armour** ArmourItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.GetSelectedArmourItem");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_GetSelectedArmourItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmourItem != nullptr)
		*ArmourItem = params.ArmourItem;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Manage Selection Changes
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Primary_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Manage_Selection_Changes(bool Primary_)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Manage Selection Changes");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Manage_Selection_Changes_Params params;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Primary Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Square            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Select_Primary_Slot(class Ubpw_colorpicksquare_C* Color_Picker_Square)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Primary Slot");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Select_Primary_Slot_Params params;
	params.Color_Picker_Square = Color_Picker_Square;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Secondary Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Square            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Select_Secondary_Slot(class Ubpw_colorpicksquare_C* Color_Picker_Square)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Select Secondary Slot");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Select_Secondary_Slot_Params params;
	params.Color_Picker_Square = Color_Picker_Square;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Color Selection Made - Durable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Reference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Color_Selection_Made___Durable(class Ubpw_colorpicksquare_C* Color_Picker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Color Selection Made - Durable");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Color_Selection_Made___Durable_Params params;
	params.Color_Picker_Reference = Color_Picker_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Primary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Change_Primary_Color(class Ubpw_colorpicksquare_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Primary Color");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Change_Primary_Color_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Secondary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Change_Secondary_Color(class Ubpw_colorpicksquare_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Change Secondary Color");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Change_Secondary_Color_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.Construct");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_ExecuteUbergraph_debug_w_ArmourTinting_SubPanel_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdatePaperdoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Udebug_w_ArmourTinting_SubPanel_bpw_C::UpdatePaperdoll__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_w_ArmourTinting_SubPanel_bpw.debug_w_ArmourTinting_SubPanel_bpw_C.UpdatePaperdoll__DelegateSignature");

	Udebug_w_ArmourTinting_SubPanel_bpw_C_UpdatePaperdoll__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
