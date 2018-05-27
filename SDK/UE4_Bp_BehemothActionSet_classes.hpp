#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_BehemothActionSet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_BehemothActionSet.Bp_BehemothActionSet_C
// 0x003C (0x03C4 - 0x0388)
class ABp_BehemothActionSet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_BehemothAction_C*>                ActionArray;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class ABp_Behemoth_C*                              BehemothSetOwner;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UClass*>                              ActionClasses;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DebugTextY;                                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_BehemothActionSet.Bp_BehemothActionSet_C");
		return ptr;
	}


	void GetActionByClass(class UClass* ActionClass, class ABP_BehemothAction_C** Action);
	void SpawnActionActor(class ABp_Behemoth_C* OwningBehemoth, struct FStruct_ActionSet* Struct_ActionSet, TArray<class ABP_BehemothAction_C*>* InputPin, class ABP_BehemothAction_C** Action);
	void UserConstructionScript();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Bp_BehemothActionSet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
