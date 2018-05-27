#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_RetreatJumpHelper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C
// 0x0038 (0x03C0 - 0x0388)
class ABp_RetreatJumpHelper_C : public ATargetPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USplineComponent*                            PathSpline;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABp_RetreatJumpHelper_C*                     JumpDestination;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              CollisionsToDisable;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_PatrolCenterPoint_C*>             ConnectedPatrolPoints;                                    // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_RetreatJumpHelper.Bp_RetreatJumpHelper_C");
		return ptr;
	}


	void GetPatrolPoint(class ABP_PatrolCenterPoint_C** PatrolPoint);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShowLinks();
	void ExecuteUbergraph_Bp_RetreatJumpHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
