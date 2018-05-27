// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ColourPalette_Thumbs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Get_PaletteName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_ColourPalette_Thumbs_C::Get_PaletteName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Get_PaletteName_Text_1");

	Uw_ColourPalette_Thumbs_C_Get_PaletteName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_ColourPalette_Thumbs_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	Uw_ColourPalette_Thumbs_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.ExecuteUbergraph_w_ColourPalette_Thumbs
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ColourPalette_Thumbs_C::ExecuteUbergraph_w_ColourPalette_Thumbs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.ExecuteUbergraph_w_ColourPalette_Thumbs");

	Uw_ColourPalette_Thumbs_C_ExecuteUbergraph_w_ColourPalette_Thumbs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Cancelled_NewPalette__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_ColourPalette_Thumbs_C::Cancelled_NewPalette__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Cancelled_NewPalette__DelegateSignature");

	Uw_ColourPalette_Thumbs_C_Cancelled_NewPalette__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Selected_NewPalette__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName_Out                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ColourPalette_Thumbs_C::Selected_NewPalette__DelegateSignature(const struct FName& RowName_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ColourPalette_Thumbs.w_ColourPalette_Thumbs_C.Selected_NewPalette__DelegateSignature");

	Uw_ColourPalette_Thumbs_C_Selected_NewPalette__DelegateSignature_Params params;
	params.RowName_Out = RowName_Out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
