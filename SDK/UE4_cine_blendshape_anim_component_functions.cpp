// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_blendshape_anim_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ucine_blendshape_anim_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveBeginPlay");

	Ucine_blendshape_anim_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_blendshape_anim_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveTick");

	Ucine_blendshape_anim_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ExecuteUbergraph_cine_blendshape_anim_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_blendshape_anim_component_C::ExecuteUbergraph_cine_blendshape_anim_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ExecuteUbergraph_cine_blendshape_anim_component");

	Ucine_blendshape_anim_component_C_ExecuteUbergraph_cine_blendshape_anim_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
