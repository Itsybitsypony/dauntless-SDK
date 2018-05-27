// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_badge_untouchable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function badge_untouchable.badge_untouchable_C.GetSpecificBadgeScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aplayer_state_bp_C**     PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitBadgeThreshold              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ImpressivenessScore            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_elite_status> EliteLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abadge_untouchable_C::GetSpecificBadgeScore(class Aplayer_state_bp_C** PlayerState, bool* HitBadgeThreshold, float* ImpressivenessScore, TEnumAsByte<Ebadge_elite_status>* EliteLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function badge_untouchable.badge_untouchable_C.GetSpecificBadgeScore");

	Abadge_untouchable_C_GetSpecificBadgeScore_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitBadgeThreshold != nullptr)
		*HitBadgeThreshold = params.HitBadgeThreshold;
	if (ImpressivenessScore != nullptr)
		*ImpressivenessScore = params.ImpressivenessScore;
	if (EliteLevel != nullptr)
		*EliteLevel = params.EliteLevel;
}


// Function badge_untouchable.badge_untouchable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abadge_untouchable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function badge_untouchable.badge_untouchable_C.UserConstructionScript");

	Abadge_untouchable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
