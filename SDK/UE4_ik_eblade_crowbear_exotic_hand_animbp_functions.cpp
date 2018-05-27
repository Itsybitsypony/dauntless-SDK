// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ik_eblade_crowbear_exotic_hand_animbp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uik_eblade_crowbear_exotic_hand_animbp_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.BlueprintUpdateAnimation");

	Uik_eblade_crowbear_exotic_hand_animbp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.Pause Montage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length_of_Pause                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uik_eblade_crowbear_exotic_hand_animbp_C::Pause_Montage(float Length_of_Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.Pause Montage");

	Uik_eblade_crowbear_exotic_hand_animbp_C_Pause_Montage_Params params;
	params.Length_of_Pause = Length_of_Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_animbp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uik_eblade_crowbear_exotic_hand_animbp_C::ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_animbp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C.ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_animbp");

	Uik_eblade_crowbear_exotic_hand_animbp_C_ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_animbp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
