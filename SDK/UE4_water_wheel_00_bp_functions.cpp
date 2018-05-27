// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_water_wheel_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function water_wheel_00_bp.water_wheel_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awater_wheel_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function water_wheel_00_bp.water_wheel_00_bp_C.UserConstructionScript");

	Awater_wheel_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function water_wheel_00_bp.water_wheel_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Awater_wheel_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function water_wheel_00_bp.water_wheel_00_bp_C.ReceiveTick");

	Awater_wheel_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function water_wheel_00_bp.water_wheel_00_bp_C.ExecuteUbergraph_water_wheel_00_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Awater_wheel_00_bp_C::ExecuteUbergraph_water_wheel_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function water_wheel_00_bp.water_wheel_00_bp_C.ExecuteUbergraph_water_wheel_00_bp");

	Awater_wheel_00_bp_C_ExecuteUbergraph_water_wheel_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
