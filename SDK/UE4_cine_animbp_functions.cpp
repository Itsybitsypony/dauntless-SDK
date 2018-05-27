// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_animbp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cine_animbp.cine_animbp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_animbp_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_animbp.cine_animbp_C.BlueprintUpdateAnimation");

	Ucine_animbp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_animbp.cine_animbp_C.AnimNotify_force_physics_reset
// (BlueprintCallable, BlueprintEvent)

void Ucine_animbp_C::AnimNotify_force_physics_reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_animbp.cine_animbp_C.AnimNotify_force_physics_reset");

	Ucine_animbp_C_AnimNotify_force_physics_reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cine_animbp.cine_animbp_C.ExecuteUbergraph_cine_animbp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucine_animbp_C::ExecuteUbergraph_cine_animbp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cine_animbp.cine_animbp_C.ExecuteUbergraph_cine_animbp");

	Ucine_animbp_C_ExecuteUbergraph_cine_animbp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
