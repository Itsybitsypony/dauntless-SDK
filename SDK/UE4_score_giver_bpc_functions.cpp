// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_score_giver_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function score_giver_bpc.score_giver_bpc_C.CalculateScoreForHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageScore                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uscore_giver_bpc_C::CalculateScoreForHit(float DamageAmount, float* DamageScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function score_giver_bpc.score_giver_bpc_C.CalculateScoreForHit");

	Uscore_giver_bpc_C_CalculateScoreForHit_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageScore != nullptr)
		*DamageScore = params.DamageScore;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
