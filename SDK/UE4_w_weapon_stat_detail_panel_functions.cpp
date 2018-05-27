// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_weapon_stat_detail_panel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.RefreshWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_weapon_stat_detail_panel_C::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.RefreshWidget");

	Uw_weapon_stat_detail_panel_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.CreateStatWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentDetail_Keyword_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class Uw_EquipmentDetail_Keyword_C* Uw_weapon_stat_detail_panel_C::CreateStatWidget(const struct FName& Keyword, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.CreateStatWidget");

	Uw_weapon_stat_detail_panel_C_CreateStatWidget_Params params;
	params.Keyword = Keyword;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_weapon_stat_detail_panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.Construct");

	Uw_weapon_stat_detail_panel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.UpdateOnEquipped
// (BlueprintCallable, BlueprintEvent)

void Uw_weapon_stat_detail_panel_C::UpdateOnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.UpdateOnEquipped");

	Uw_weapon_stat_detail_panel_C_UpdateOnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.ExecuteUbergraph_w_weapon_stat_detail_panel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_weapon_stat_detail_panel_C::ExecuteUbergraph_w_weapon_stat_detail_panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.ExecuteUbergraph_w_weapon_stat_detail_panel");

	Uw_weapon_stat_detail_panel_C_ExecuteUbergraph_w_weapon_stat_detail_panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
