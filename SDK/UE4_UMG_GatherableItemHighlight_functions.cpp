// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UMG_GatherableItemHighlight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_GatherableItemHighlight_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Construct");

	UUMG_GatherableItemHighlight_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GatherableItemHighlight_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.Tick");

	UUMG_GatherableItemHighlight_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.ExecuteUbergraph_UMG_GatherableItemHighlight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_GatherableItemHighlight_C::ExecuteUbergraph_UMG_GatherableItemHighlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GatherableItemHighlight.UMG_GatherableItemHighlight_C.ExecuteUbergraph_UMG_GatherableItemHighlight");

	UUMG_GatherableItemHighlight_C_ExecuteUbergraph_UMG_GatherableItemHighlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
