// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_generic_stat_details_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_generic_stat_details.w_generic_stat_details_C.GetColorForAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void Uw_generic_stat_details_C::GetColorForAmount(float Amount, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_stat_details.w_generic_stat_details_C.GetColorForAmount");

	Uw_generic_stat_details_C_GetColorForAmount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function w_generic_stat_details.w_generic_stat_details_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_generic_stat_details_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_stat_details.w_generic_stat_details_C.Construct");

	Uw_generic_stat_details_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_stat_details.w_generic_stat_details_C.ExecuteUbergraph_w_generic_stat_details
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_stat_details_C::ExecuteUbergraph_w_generic_stat_details(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_stat_details.w_generic_stat_details_C.ExecuteUbergraph_w_generic_stat_details");

	Uw_generic_stat_details_C_ExecuteUbergraph_w_generic_stat_details_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
