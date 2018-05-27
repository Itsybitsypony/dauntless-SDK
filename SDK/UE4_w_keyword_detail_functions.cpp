// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_keyword_detail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_keyword_detail.w_keyword_detail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_keyword_detail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_detail.w_keyword_detail_C.Construct");

	Uw_keyword_detail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_detail.w_keyword_detail_C.SetCellEffectIDAndRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CellEffectID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_keyword_detail_C::SetCellEffectIDAndRefresh(const struct FName& CellEffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_detail.w_keyword_detail_C.SetCellEffectIDAndRefresh");

	Uw_keyword_detail_C_SetCellEffectIDAndRefresh_Params params;
	params.CellEffectID = CellEffectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_keyword_detail.w_keyword_detail_C.ExecuteUbergraph_w_keyword_detail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_keyword_detail_C::ExecuteUbergraph_w_keyword_detail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_keyword_detail.w_keyword_detail_C.ExecuteUbergraph_w_keyword_detail");

	Uw_keyword_detail_C_ExecuteUbergraph_w_keyword_detail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
