// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_InteractionActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_InteractionActor.BPI_InteractionActor_C.SetInteractionAvailability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_InteractionActor_C::SetInteractionAvailability(bool Active, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_InteractionActor.BPI_InteractionActor_C.SetInteractionAvailability");

	UBPI_InteractionActor_C_SetInteractionAvailability_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BPI_InteractionActor.BPI_InteractionActor_C.CanUserStartInteraction 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_InteractionActor_C::CanUserStartInteraction_(class UArchonInteractionUserComponent* User, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_InteractionActor.BPI_InteractionActor_C.CanUserStartInteraction ");

	UBPI_InteractionActor_C_CanUserStartInteraction__Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
