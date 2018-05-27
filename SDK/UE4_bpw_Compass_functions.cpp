// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_Compass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_Compass.bpw_Compass_C.Draw Compass Marker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarkerComponent*        Marker_Component               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Compass_C::Draw_Compass_Marker(class UMarkerComponent* Marker_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Compass.bpw_Compass_C.Draw Compass Marker");

	Ubpw_Compass_C_Draw_Compass_Marker_Params params;
	params.Marker_Component = Marker_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Compass.bpw_Compass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_Compass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Compass.bpw_Compass_C.Construct");

	Ubpw_Compass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Compass.bpw_Compass_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Compass_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Compass.bpw_Compass_C.Tick");

	Ubpw_Compass_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Compass.bpw_Compass_C.ExecuteUbergraph_bpw_Compass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Compass_C::ExecuteUbergraph_bpw_Compass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Compass.bpw_Compass_C.ExecuteUbergraph_bpw_Compass");

	Ubpw_Compass_C_ExecuteUbergraph_bpw_Compass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
