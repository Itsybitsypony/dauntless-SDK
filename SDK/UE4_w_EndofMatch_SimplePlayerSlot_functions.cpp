// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndofMatch_SimplePlayerSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.Get_Wrapper_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_EndofMatch_SimplePlayerSlot_C::Get_Wrapper_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.Get_Wrapper_Visibility_1");

	Uw_EndofMatch_SimplePlayerSlot_C_Get_Wrapper_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EndofMatch_SimplePlayerSlot_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.GetText_2");

	Uw_EndofMatch_SimplePlayerSlot_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EndofMatch_SimplePlayerSlot_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.GetText_1");

	Uw_EndofMatch_SimplePlayerSlot_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.UpdateBoostInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasChampion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasPatron                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndofMatch_SimplePlayerSlot_C::UpdateBoostInfo(bool HasChampion, bool HasPatron)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.UpdateBoostInfo");

	Uw_EndofMatch_SimplePlayerSlot_C_UpdateBoostInfo_Params params;
	params.HasChampion = HasChampion;
	params.HasPatron = HasPatron;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.ExecuteUbergraph_w_EndofMatch_SimplePlayerSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndofMatch_SimplePlayerSlot_C::ExecuteUbergraph_w_EndofMatch_SimplePlayerSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndofMatch_SimplePlayerSlot.w_EndofMatch_SimplePlayerSlot_C.ExecuteUbergraph_w_EndofMatch_SimplePlayerSlot");

	Uw_EndofMatch_SimplePlayerSlot_C_ExecuteUbergraph_w_EndofMatch_SimplePlayerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
