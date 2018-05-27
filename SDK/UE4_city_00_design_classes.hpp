#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_city_00_design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass city_00_design.city_00_design_C
// 0x0078 (0x0408 - 0x0390)
class Acity_00_design_C : public AArchonIslandScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	int                                                CurrentConversationSegment;                               // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<float>                                      ConversationProtoSegmentJumpTimes;                        // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPlayingConversationProto;                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	TArray<float>                                      nar_bosun_mission1_start_SegmentTimes;                    // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPlaying_nar_bosun_mission1_start;                       // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<float>                                      nar_bosun_mission1_end_SegmentTimes;                      // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsPlaying_nar_bosun_mission1_end;                         // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class APawn*                                       PlayerInstigator;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NPC_POIs;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class Aquest_npc_interactive_bp_C*                 npc_harbourmaster_quest_ExecuteUbergraph_city_00_design_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass city_00_design.city_00_design_C");
		return ptr;
	}


	void UnSpawnCityBots();
	void ReceiveBeginPlay();
	void SpawnCityBots();
	void ExecuteUbergraph_city_00_design(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
