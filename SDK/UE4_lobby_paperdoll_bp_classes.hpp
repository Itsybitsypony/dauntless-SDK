#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_paperdoll_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lobby_paperdoll_bp.lobby_paperdoll_bp_C
// 0x0088 (0x0830 - 0x07A8)
class Alobby_paperdoll_bp_C : public AArchonLobbyPaperDoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07A8(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           MouseHitVolume;                                           // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Player_Materials;                                 // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Selected_Hair_Row;                                        // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Selected_Beard_Row;                                       // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     BeardAppearanceAsset;                                     // 0x07D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class USkeletalMesh>                     HairAppearanceAsset;                                      // 0x07F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMeshComponent*                      BeardlSlot;                                               // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedSkinToneRow;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedMakeupRow;                                        // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lobby_paperdoll_bp.lobby_paperdoll_bp_C");
		return ptr;
	}


	void SetFacialHair();
	void SetupHair();
	void SetupFaceAndAppearance(TArray<struct FAppearanceStringData>* NewParam);
	void GetScreenSpacePositionBottom(class APlayerController* Player, struct FVector2D* Location);
	void GetScreenSpacePositionTop(class APlayerController* Player, struct FVector2D* Location);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BlueprintSetupSkinAndAppearance(TArray<struct FAppearanceStringData>* StringData);
	void BlueprintSetDye(struct FName* DyeName, TArray<class UMaterialInstanceDynamic*>* DynamicMaterials, bool* bPrimary);
	void ExecuteUbergraph_lobby_paperdoll_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
