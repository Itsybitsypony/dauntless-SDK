// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_live_behemoths_generator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function live_behemoths_generator.live_behemoths_generator_C.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ulive_behemoths_generator_C::DoItemGeneration(TArray<struct FVector>* ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function live_behemoths_generator.live_behemoths_generator_C.DoItemGeneration");

	Ulive_behemoths_generator_C_DoItemGeneration_Params params;

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
