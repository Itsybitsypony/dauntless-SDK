#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PatrolCenterPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PatrolCenterPoint.BP_PatrolCenterPoint_C
// 0x002B (0x03B3 - 0x0388)
class ABP_PatrolCenterPoint_C : public ATargetPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            PathSpline;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABp_RetreatJumpHelper_C*>             ConnectedJumpPoints;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      ConnectedAetherVent;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AllowedSpawnLocation;                                     // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BehemothHasUsed;                                          // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreferedLocation;                                         // 0x03B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PatrolCenterPoint.BP_PatrolCenterPoint_C");
		return ptr;
	}


	void GetBehemothHasUsed(bool* HasBehemothUsed);
	void GetRetreatJump(class ABp_RetreatJumpHelper_C** JumpPoint);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShowLinks();
	void SetBehemothHasUsed(bool HasBehemothUsed);
	void ExecuteUbergraph_BP_PatrolCenterPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
