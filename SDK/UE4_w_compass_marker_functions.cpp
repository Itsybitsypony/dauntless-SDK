// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_compass_marker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_compass_marker.w_compass_marker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_compass_marker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_compass_marker.w_compass_marker_C.Construct");

	Uw_compass_marker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_compass_marker.w_compass_marker_C.New Brush
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_compass_marker_C::New_Brush(const struct FSlateBrush& Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_compass_marker.w_compass_marker_C.New Brush");

	Uw_compass_marker_C_New_Brush_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_compass_marker.w_compass_marker_C.ExecuteUbergraph_w_compass_marker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_compass_marker_C::ExecuteUbergraph_w_compass_marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_compass_marker.w_compass_marker_C.ExecuteUbergraph_w_compass_marker");

	Uw_compass_marker_C_ExecuteUbergraph_w_compass_marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
