// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_animation_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_animation_interface.npc_animation_interface_C.SetReadyToTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReadyToTransition_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_animation_interface_C::SetReadyToTransition(bool ReadyToTransition_)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_animation_interface.npc_animation_interface_C.SetReadyToTransition");

	Unpc_animation_interface_C_SetReadyToTransition_Params params;
	params.ReadyToTransition_ = ReadyToTransition_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_animation_interface.npc_animation_interface_C.SetIsInteracting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInteracting_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_animation_interface_C::SetIsInteracting(bool IsInteracting_)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_animation_interface.npc_animation_interface_C.SetIsInteracting");

	Unpc_animation_interface_C_SetIsInteracting_Params params;
	params.IsInteracting_ = IsInteracting_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_animation_interface.npc_animation_interface_C.SetIsEntering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEntering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_animation_interface_C::SetIsEntering(bool IsEntering)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_animation_interface.npc_animation_interface_C.SetIsEntering");

	Unpc_animation_interface_C_SetIsEntering_Params params;
	params.IsEntering = IsEntering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
