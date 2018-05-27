// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_player_animdata_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_player_animdata.BPI_player_animdata_C.GetIntroAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimSequenceBase*> IntroAnimations                (Parm, OutParm, ZeroConstructor)

void UBPI_player_animdata_C::GetIntroAnimations(TArray<class UAnimSequenceBase*>* IntroAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_player_animdata.BPI_player_animdata_C.GetIntroAnimations");

	UBPI_player_animdata_C_GetIntroAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntroAnimations != nullptr)
		*IntroAnimations = params.IntroAnimations;
}


// Function BPI_player_animdata.BPI_player_animdata_C.GetLocoAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Floco_animset_str       LocoAnimset                    (Parm, OutParm)

void UBPI_player_animdata_C::GetLocoAnimset(struct Floco_animset_str* LocoAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_player_animdata.BPI_player_animdata_C.GetLocoAnimset");

	UBPI_player_animdata_C_GetLocoAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocoAnimset != nullptr)
		*LocoAnimset = params.LocoAnimset;
}


// Function BPI_player_animdata.BPI_player_animdata_C.GetActionsAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Factions_animset_str    ActionsAnimset                 (Parm, OutParm)

void UBPI_player_animdata_C::GetActionsAnimset(struct Factions_animset_str* ActionsAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_player_animdata.BPI_player_animdata_C.GetActionsAnimset");

	UBPI_player_animdata_C_GetActionsAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionsAnimset != nullptr)
		*ActionsAnimset = params.ActionsAnimset;
}


// Function BPI_player_animdata.BPI_player_animdata_C.GetStaggerAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fstagger_animset_str    StaggerAnimset                 (Parm, OutParm)

void UBPI_player_animdata_C::GetStaggerAnimset(struct Fstagger_animset_str* StaggerAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_player_animdata.BPI_player_animdata_C.GetStaggerAnimset");

	UBPI_player_animdata_C_GetStaggerAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerAnimset != nullptr)
		*StaggerAnimset = params.StaggerAnimset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
