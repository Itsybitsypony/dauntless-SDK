// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_WaypointMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_WaypointMarker.w_WaypointMarker_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_WaypointMarker_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WaypointMarker.w_WaypointMarker_C.OnMouseButtonDown");

	Uw_WaypointMarker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_WaypointMarker.w_WaypointMarker_C.GetWOrldMapManager
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_WaypointMarker_C::GetWOrldMapManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WaypointMarker.w_WaypointMarker_C.GetWOrldMapManager");

	Uw_WaypointMarker_C_GetWOrldMapManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_WaypointMarker.w_WaypointMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_WaypointMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WaypointMarker.w_WaypointMarker_C.Construct");

	Uw_WaypointMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_WaypointMarker.w_WaypointMarker_C.ExecuteUbergraph_w_WaypointMarker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_WaypointMarker_C::ExecuteUbergraph_w_WaypointMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_WaypointMarker.w_WaypointMarker_C.ExecuteUbergraph_w_WaypointMarker");

	Uw_WaypointMarker_C_ExecuteUbergraph_w_WaypointMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
