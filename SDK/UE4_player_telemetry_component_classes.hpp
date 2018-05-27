#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_telemetry_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_telemetry_component.player_telemetry_component_C
// 0x00A8 (0x0278 - 0x01D0)
class Uplayer_telemetry_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	int                                                Montage_Counter;                                          // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class FString                                      Character_Name;                                           // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerLocationPingRate;                                   // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                InterMontageTimer;                                        // 0x01F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class Uplayer_interface_C>        Owner_Player_Interface;                                   // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SessionStartTime;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Montage_Start_Position;                                   // 0x0214(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Montage_Start_Velocity;                                   // 0x0220(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Montage_Start_Facing;                                     // 0x022C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Montage_Start_Camera;                                     // 0x0238(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FJsonBPObjectField>                  Quests;                                                   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJsonBPObjectField>                  Currencies;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJsonBPObjectField>                  Items;                                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_telemetry_component.player_telemetry_component_C");
		return ptr;
	}


	void GetCurrentWeapon(class FString* CurrentWeapon);
	void GetClosestBehemoth(class FString* ClosestBehemothName);
	void GetHuntID(class FString* HuntId);
	void POST_Server_Player_Logout_In_Island();
	void POST_Server_Player_Login_In_Island();
	void POST_Server_Player_Logout_In_City();
	void POST_Server_Player_Login_In_City();
	void POST_Server_Player_Spawned_In_Island();
	void POST_Server_Player_Spawned_In_City();
	void Fill_Montage_Start_Data();
	void POST_Server_Player_Montage_Event(class UAnimMontage* Montage, bool Interrupted, bool Started);
	void OnGameModeStartCityEvent();
	void On_Recover_From_Fall_Event();
	void Get_Player_Info(struct FJsonBPObjectField* player_id, struct FJsonBPObjectField* character_id, struct FJsonBPObjectField* Position, struct FJsonBPObjectField* Facing, struct FJsonBPObjectField* Camera, struct FJsonBPObjectField* Velocity, struct FJsonBPObjectField* player_stats);
	void POST_Player_Location_Telemetry();
	void TIMER_Player_Location_Telemetry();
	void Get_Loadout();
	void ReceiveTick(float* DeltaSeconds);
	void Montage_Started(class UAnimMontage* Montage);
	void Montage_Blending_Out(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_player_telemetry_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
