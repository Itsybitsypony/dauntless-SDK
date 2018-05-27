#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_City_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGM_City.BPGM_City_C
// 0x00A5 (0x064D - 0x05A8)
class ABPGM_City_C : public AArchonGameMode_City
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (Transient, DuplicateTransient)
	class UGuildSystemComponent*                       GuildSystem;                                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CityPointsOfInterest_Primary;                             // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TAssetPtr<class UClass>                            SlayerClassID;                                            // 0x05D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AArchonCharacter*>                    Bots;                                                     // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                NumOfPlayers;                                             // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MAX_BOTS;                                                 // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSpawnBots;                                          // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CityPointsOfInterest_Secondary;                           // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      CityPOI_Start;                                            // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAtmosphereIndex;                                   // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	class AAtmosphereSpawner*                          CurrentAtmosphereSpawner;                                 // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAtmosphereBase*                             SpawnedAtmosphere;                                        // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACloudConfiguration*                         SpawnedCloudConfiguration;                                // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerLoadRetryCount;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               validPlayerStateFound;                                    // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGM_City.BPGM_City_C");
		return ptr;
	}


	void GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths);
	void GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem);
	void IsIntroCinematicEnabled(bool* Enabled);
	bool DidSetupIntroCinematic();
	void GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType);
	void SpawnAtmosphereFromClass(class UClass* In_Class);
	void SetupAtmosphereVariables(class AArchonGameMode* GameMode);
	void SpawnAtmosphere();
	bool CheckIfShouldRemoveBot();
	bool CheckIfShouldSpawnBot();
	void RemoveBots();
	void SpawnBots();
	void UserConstructionScript();
	void OnLoaded_29A28FD8408E34782C4AE781BBA07BF8(class UClass* Loaded);
	void TriggerIntroCinematic(class APlayerController* Player);
	void TriggerEndOfHuntSequence();
	void MoveCharactersToArrival();
	void ReceiveBeginPlay();
	void K2_PostLogin(class APlayerController** NewPlayer);
	void K2_OnLogout(class AController** ExitingController);
	void K2_OnSetMatchState(struct FName* NewState);
	void StreamNewAtmosphere(int NewAtmosphereIndex);
	void CycleAtmosphere();
	void ExecuteUbergraph_BPGM_City(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
