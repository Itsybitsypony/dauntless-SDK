// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flag_windsock_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.GetWeatherType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eweather_type_enum> Weather                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aflag_windsock_00_bp_C::GetWeatherType(TEnumAsByte<Eweather_type_enum>* Weather)
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.GetWeatherType");

	Aflag_windsock_00_bp_C_GetWeatherType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weather != nullptr)
		*Weather = params.Weather;
}


// Function flag_windsock_00_bp.flag_windsock_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aflag_windsock_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.UserConstructionScript");

	Aflag_windsock_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aflag_windsock_00_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveBeginPlay");

	Aflag_windsock_00_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aflag_windsock_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveTick");

	Aflag_windsock_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flag_windsock_00_bp.flag_windsock_00_bp_C.SetWindRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SetWindRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aflag_windsock_00_bp_C::SetWindRotation(float SetWindRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.SetWindRotation");

	Aflag_windsock_00_bp_C_SetWindRotation_Params params;
	params.SetWindRotation = SetWindRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ExecuteUbergraph_flag_windsock_00_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aflag_windsock_00_bp_C::ExecuteUbergraph_flag_windsock_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function flag_windsock_00_bp.flag_windsock_00_bp_C.ExecuteUbergraph_flag_windsock_00_bp");

	Aflag_windsock_00_bp_C_ExecuteUbergraph_flag_windsock_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
