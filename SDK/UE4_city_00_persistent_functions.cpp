// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_00_persistent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function city_00_persistent.city_00_persistent_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_00_persistent_C::NewFunction_1(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_persistent.city_00_persistent_C.NewFunction_1");

	Acity_00_persistent_C_NewFunction_1_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_persistent.city_00_persistent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acity_00_persistent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_persistent.city_00_persistent_C.ReceiveBeginPlay");

	Acity_00_persistent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_persistent.city_00_persistent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_00_persistent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_persistent.city_00_persistent_C.ReceiveTick");

	Acity_00_persistent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function city_00_persistent.city_00_persistent_C.ExecuteUbergraph_city_00_persistent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acity_00_persistent_C::ExecuteUbergraph_city_00_persistent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function city_00_persistent.city_00_persistent_C.ExecuteUbergraph_city_00_persistent");

	Acity_00_persistent_C_ExecuteUbergraph_city_00_persistent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
