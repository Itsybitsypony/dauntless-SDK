#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_badge_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function badge_base_bp.badge_base_bp_C.GetSpecificBadgeScore
struct Abadge_base_bp_C_GetSpecificBadgeScore_Params
{
	class Aplayer_state_bp_C*                          PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitBadgeThreshold;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ImpressivenessScore;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   EliteLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function badge_base_bp.badge_base_bp_C.GetBadgeScores
struct Abadge_base_bp_C_GetBadgeScores_Params
{
	TArray<struct Fbadge_score_data>                   PlayerBadgeScoreInfo;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function badge_base_bp.badge_base_bp_C.UserConstructionScript
struct Abadge_base_bp_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
