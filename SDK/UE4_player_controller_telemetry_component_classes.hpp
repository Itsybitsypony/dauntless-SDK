#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_telemetry_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_controller_telemetry_component.player_controller_telemetry_component_C
// 0x0020 (0x01F0 - 0x01D0)
class Uplayer_controller_telemetry_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class FString                                      Matchmaking_Event_Name;                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Matchmaking_Start_Time;                                   // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Matchmaking_Attempt_Counter;                              // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_controller_telemetry_component.player_controller_telemetry_component_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void On_Set_Dye_Colour(class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& NewDyeConfiguration);
	void MatchMakingStarted();
	void MatchmakingFailed();
	void MatchmakingCanceled();
	void MatchmakingSuccess();
	void ExecuteUbergraph_player_controller_telemetry_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
