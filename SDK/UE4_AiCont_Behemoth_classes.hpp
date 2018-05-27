#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AiCont_Behemoth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AiCont_Behemoth.AiCont_Behemoth_C
// 0x0010 (0x0490 - 0x0480)
class AAiCont_Behemoth_C : public AArchonAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UBlackboardComponent*                        BBComp;                                                   // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AiCont_Behemoth.AiCont_Behemoth_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUsingBlackBoard(class UBlackboardComponent** BlackboardComp, class UBlackboardData** BlackboardAsset);
	void ExecuteUbergraph_AiCont_Behemoth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
