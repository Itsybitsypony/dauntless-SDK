// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EQGenerator_LivePlayers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EQGenerator_LivePlayers.EQGenerator_LivePlayers_C.DoItemGeneration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEQGenerator_LivePlayers_C::DoItemGeneration(TArray<struct FVector>* ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function EQGenerator_LivePlayers.EQGenerator_LivePlayers_C.DoItemGeneration");

	UEQGenerator_LivePlayers_C_DoItemGeneration_Params params;

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
