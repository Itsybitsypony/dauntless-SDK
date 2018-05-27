// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_danger_eqgen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_danger_eqgen.fauna_danger_eqgen_C.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ufauna_danger_eqgen_C::DoItemGeneration(TArray<struct FVector>* ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_danger_eqgen.fauna_danger_eqgen_C.DoItemGeneration");

	Ufauna_danger_eqgen_C_DoItemGeneration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextLocations != nullptr)
		*ContextLocations = params.ContextLocations;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
