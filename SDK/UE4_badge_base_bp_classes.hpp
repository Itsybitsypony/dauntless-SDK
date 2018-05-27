#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_badge_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass badge_base_bp.badge_base_bp_C
// 0x0088 (0x0410 - 0x0388)
class Abadge_base_bp_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EliteScoreThreshold;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BadgeScoreThreshold;                                      // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        BadgeIcon;                                                // 0x0398(0x0020) (Edit, BlueprintVisible)
	struct FText                                       BadgeName;                                                // 0x03B8(0x0018) (Edit, BlueprintVisible)
	float                                              MinimumDamageRequired;                                    // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FText                                       BadgeTooltip;                                             // 0x03D8(0x0018) (Edit, BlueprintVisible)
	bool                                               RequiresMinimumDamage;                                    // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FText                                       EliteTooltip;                                             // 0x03F8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass badge_base_bp.badge_base_bp_C");
		return ptr;
	}


	void GetSpecificBadgeScore(class Aplayer_state_bp_C* PlayerState, bool* HitBadgeThreshold, float* ImpressivenessScore, TEnumAsByte<Ebadge_elite_status>* EliteLevel);
	void GetBadgeScores(TArray<struct Fbadge_score_data>* PlayerBadgeScoreInfo);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
