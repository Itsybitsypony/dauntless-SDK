// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_quickslot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_loadout_quickslot.w_loadout_quickslot_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_loadout_quickslot_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.Refresh");

	Uw_loadout_quickslot_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.GetTextFromType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_loadout_quickslot_C::GetTextFromType()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.GetTextFromType");

	Uw_loadout_quickslot_C_GetTextFromType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_loadout_quickslot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.Construct");

	Uw_loadout_quickslot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_loadout_quickslot_C::BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Uw_loadout_quickslot_C_BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_loadout_quickslot_C::BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature");

	Uw_loadout_quickslot_C_BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_quickslot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.PreConstruct");

	Uw_loadout_quickslot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.ExecuteUbergraph_w_loadout_quickslot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_quickslot_C::ExecuteUbergraph_w_loadout_quickslot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.ExecuteUbergraph_w_loadout_quickslot");

	Uw_loadout_quickslot_C_ExecuteUbergraph_w_loadout_quickslot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_loadout_quickslot_C::QuickSlotHovered__DelegateSignature(int QuickSlotIndex, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotHovered__DelegateSignature");

	Uw_loadout_quickslot_C_QuickSlotHovered__DelegateSignature_Params params;
	params.QuickSlotIndex = QuickSlotIndex;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_quickslot_C::QuickSlotClicked__DelegateSignature(int QuickSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotClicked__DelegateSignature");

	Uw_loadout_quickslot_C_QuickSlotClicked__DelegateSignature_Params params;
	params.QuickSlotIndex = QuickSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
