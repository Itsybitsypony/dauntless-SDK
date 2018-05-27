// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CinematicPlayerInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetCinematicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void UCinematicPlayerInterface_C::SetCinematicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetCinematicMaterials");

	UCinematicPlayerInterface_C_SetCinematicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetClientCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematicPlayerInterface_C::SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetClientCinematicState");

	UCinematicPlayerInterface_C_SetClientCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
