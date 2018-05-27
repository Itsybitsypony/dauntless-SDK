#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_score_giver_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass score_giver_bpc.score_giver_bpc_C
// 0x0004 (0x01D4 - 0x01D0)
class Uscore_giver_bpc_C : public UActorComponent
{
public:
	float                                              DamageScoreMultiplier;                                    // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass score_giver_bpc.score_giver_bpc_C");
		return ptr;
	}


	void CalculateScoreForHit(float DamageAmount, float* DamageScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
