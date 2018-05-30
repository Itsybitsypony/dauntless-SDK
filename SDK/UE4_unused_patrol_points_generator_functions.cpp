// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_unused_patrol_points_generator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function unused_patrol_points_generator.unused_patrol_points_generator_C.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uunused_patrol_points_generator_C::DoItemGeneration(TArray<struct FVector>* ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function unused_patrol_points_generator.unused_patrol_points_generator_C.DoItemGeneration");

	Uunused_patrol_points_generator_C_DoItemGeneration_Params params;

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
