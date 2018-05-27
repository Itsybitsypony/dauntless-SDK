// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugInventoryScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_byTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_DebugInventoryScreen_C::Show_byTag(const class FString& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_byTag");

	UBPW_DebugInventoryScreen_C_Show_byTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetText_AmountOfItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_DebugInventoryScreen_C::GetText_AmountOfItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetText_AmountOfItems");

	UBPW_DebugInventoryScreen_C_GetText_AmountOfItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.OnGenerateWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBPW_DebugInventoryScreen_C::OnGenerateWidget_1(const class FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.OnGenerateWidget_1");

	UBPW_DebugInventoryScreen_C_OnGenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_PLATINUM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_DebugInventoryScreen_C::GetTextAmount_PLATINUM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_PLATINUM");

	UBPW_DebugInventoryScreen_C_GetTextAmount_PLATINUM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_NOTES
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_DebugInventoryScreen_C::GetTextAmount_NOTES()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_NOTES");

	UBPW_DebugInventoryScreen_C_GetTextAmount_NOTES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_Weapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventoryScreen_C::Show_Weapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_Weapons");

	UBPW_DebugInventoryScreen_C_Show_Weapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.hide
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugInventoryScreen_C::hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.hide");

	UBPW_DebugInventoryScreen_C_hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventoryScreen_C::Show(EItemGroupType B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show");

	UBPW_DebugInventoryScreen_C_Show_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventoryScreen_C::BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugInventoryScreen_C_BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_DebugInventoryScreen_C::BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature");

	UBPW_DebugInventoryScreen_C_BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.ExecuteUbergraph_BPW_DebugInventoryScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugInventoryScreen_C::ExecuteUbergraph_BPW_DebugInventoryScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.ExecuteUbergraph_BPW_DebugInventoryScreen");

	UBPW_DebugInventoryScreen_C_ExecuteUbergraph_BPW_DebugInventoryScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
