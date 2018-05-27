#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_go_to_next_city_obj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass go_to_next_city_obj.go_to_next_city_obj_C
// 0x003C (0x00DC - 0x00A0)
class Ugo_to_next_city_obj_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Obj;                                                      // 0x00A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CurrrentObj;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass go_to_next_city_obj.go_to_next_city_obj_C");
		return ptr;
	}


	void OnFail_896B159D430F9ED210BC9EA238A18591(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_896B159D430F9ED210BC9EA238A18591(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_go_to_next_city_obj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
