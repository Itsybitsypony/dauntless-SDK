#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_player_animdata_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_player_animdata.BPI_player_animdata_C.GetIntroAnimations
struct UBPI_player_animdata_C_GetIntroAnimations_Params
{
	TArray<class UAnimSequenceBase*>                   IntroAnimations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BPI_player_animdata.BPI_player_animdata_C.GetLocoAnimset
struct UBPI_player_animdata_C_GetLocoAnimset_Params
{
	struct Floco_animset_str                           LocoAnimset;                                              // (Parm, OutParm)
};

// Function BPI_player_animdata.BPI_player_animdata_C.GetActionsAnimset
struct UBPI_player_animdata_C_GetActionsAnimset_Params
{
	struct Factions_animset_str                        ActionsAnimset;                                           // (Parm, OutParm)
};

// Function BPI_player_animdata.BPI_player_animdata_C.GetStaggerAnimset
struct UBPI_player_animdata_C_GetStaggerAnimset_Params
{
	struct Fstagger_animset_str                        StaggerAnimset;                                           // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
