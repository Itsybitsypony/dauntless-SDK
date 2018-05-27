// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NeoFur_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NeoFur.NeoFurComponent.SetVisibleLengthScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewVisibleLengthScale          (Parm, ZeroConstructor, IsPlainOldData)

void UNeoFurComponent::SetVisibleLengthScale(float NewVisibleLengthScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeoFur.NeoFurComponent.SetVisibleLengthScale");

	UNeoFurComponent_SetVisibleLengthScale_Params params;
	params.NewVisibleLengthScale = NewVisibleLengthScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeoFur.NeoFurComponent.SetShellDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UNeoFurComponent::SetShellDistance(float NewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeoFur.NeoFurComponent.SetShellDistance");

	UNeoFurComponent_SetShellDistance_Params params;
	params.NewDistance = NewDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeoFur.NeoFurComponent.SetFurPhysicsParameters
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNeoFurPhysicsParameters Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UNeoFurComponent::SetFurPhysicsParameters(const struct FNeoFurPhysicsParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeoFur.NeoFurComponent.SetFurPhysicsParameters");

	UNeoFurComponent_SetFurPhysicsParameters_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeoFur.NeoFurComponent.GetTotalActiveShellCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNeoFurComponent::STATIC_GetTotalActiveShellCount(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeoFur.NeoFurComponent.GetTotalActiveShellCount");

	UNeoFurComponent_GetTotalActiveShellCount_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NeoFur.NeoFurComponent.GetFurPhysicsParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FNeoFurPhysicsParameters ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FNeoFurPhysicsParameters UNeoFurComponent::GetFurPhysicsParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeoFur.NeoFurComponent.GetFurPhysicsParameters");

	UNeoFurComponent_GetFurPhysicsParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
