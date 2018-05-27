// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_flares_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function style_flares_bpw.style_flares_bpw_C.RefreshFlareGrid
// (Public, BlueprintCallable, BlueprintEvent)

void Ustyle_flares_bpw_C::RefreshFlareGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_flares_bpw.style_flares_bpw_C.RefreshFlareGrid");

	Ustyle_flares_bpw_C_RefreshFlareGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_flares_bpw.style_flares_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustyle_flares_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_flares_bpw.style_flares_bpw_C.Construct");

	Ustyle_flares_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_flares_bpw.style_flares_bpw_C.Equip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridInt                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_flares_bpw_C::Equip(const class FString& ItemInstance, const class FString& ItemID, int GridInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_flares_bpw.style_flares_bpw_C.Equip");

	Ustyle_flares_bpw_C_Equip_Params params;
	params.ItemInstance = ItemInstance;
	params.ItemID = ItemID;
	params.GridInt = GridInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_flares_bpw.style_flares_bpw_C.ExecuteUbergraph_style_flares_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_flares_bpw_C::ExecuteUbergraph_style_flares_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_flares_bpw.style_flares_bpw_C.ExecuteUbergraph_style_flares_bpw");

	Ustyle_flares_bpw_C_ExecuteUbergraph_style_flares_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
