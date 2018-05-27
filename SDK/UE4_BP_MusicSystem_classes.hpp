#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_MusicSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MusicSystem.BP_MusicSystem_C
// 0x0038 (0x03C0 - 0x0388)
class ABP_MusicSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 BehemothsState;                                           // 0x0398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	struct FName                                       MatchState;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       MusicState;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentMusicState;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FightStarted;                                             // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MaxDangerActive;                                          // 0x03B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RenderMusicState;                                         // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInIntroCinematic;                                       // 0x03BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IntroCinematicMusicState;                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MusicSystem.BP_MusicSystem_C");
		return ptr;
	}


	void ToggleDebugMusicSystem(bool* Success);
	void NotifyIntroCinematicStarted(bool* Success);
	void NotifyIntroCinematicCompleted(bool* Success);
	void OnRep_MaxDangerActive();
	void SetBehemothState(TEnumAsByte<Ebehemoth_states_enum> State);
	void OnRep_MusicState();
	void OnRep_MatchState();
	void OnRep_BehemothsState();
	void EvaluateMusicState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_MusicSystem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
