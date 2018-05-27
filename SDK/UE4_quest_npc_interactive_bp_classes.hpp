#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_npc_interactive_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass quest_npc_interactive_bp.quest_npc_interactive_bp_C
// 0x0018 (0x0760 - 0x0748)
class Aquest_npc_interactive_bp_C : public Avendor_interactive_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Skin_Materials;                                   // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass quest_npc_interactive_bp.quest_npc_interactive_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_quest_npc_interactive_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
