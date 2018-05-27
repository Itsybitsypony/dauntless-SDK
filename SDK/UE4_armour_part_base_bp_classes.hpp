#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armour_part_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass armour_part_base_bp.armour_part_base_bp_C
// 0x0130 (0x0598 - 0x0468)
class Aarmour_part_base_bp_C : public AArchonArmor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Part;                                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Instance_Materials;                               // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Debug_Tint;                                               // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        Tint_Colors;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      Debug_Color;                                              // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FName                                       Audio_Character_Armor;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UAkAudioBank>                      Armour_Soundbank;                                         // 0x04B8(0x0020) (Edit, BlueprintVisible, Transient)
	class UAkAudioBank*                                Local_Armour_Soundbank;                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     Local_Skeletal_Mesh;                                      // 0x04E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                                  L_CutMask;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasMorphTargets;                                          // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasAssetLoaded;                                           // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x050A(0x0006) MISSED OFFSET
	TArray<struct Ftier_armour_data>                   TierData;                                                 // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HasTabard;                                                // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasHeavySkirt;                                            // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0522(0x0006) MISSED OFFSET
	TAssetPtr<class USkeletalMesh>                     LocalTransmog;                                            // 0x0528(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        CutMask;                                                  // 0x0548(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USkeletalMesh*                               L_SkeletalMeshReference;                                  // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFemaleCutMask;                                         // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        FemaleCutMask;                                            // 0x0578(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass armour_part_base_bp.armour_part_base_bp_C");
		return ptr;
	}


	void OutputDebugInformation();
	bool HasFinishedLoading();
	void GetDefaultPrimaryDye(struct FName* DyeRowName);
	void GetDefaultSecondaryDye(struct FName* DyeRowName);
	void GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset);
	bool LookupSetItemTableRow(struct FName* RowName, struct FArmourSetItemResistanceTableData* OutResistanceTableRow);
	bool LookupResistanceTableRow(struct FName* RowName, struct FArmourResistanceTableData* OutResistanceTableRow);
	void OnOwnerHidden(bool Hidden, bool* OutHidden);
	void GetSkeletalMeshAssetID(TAssetPtr<class USkeletalMesh>* Out);
	void SetSecondaryMotionProperties();
	void SetTierAttributes(class UMaterialInterface* Material_interface, int Array_Index);
	void ResetArmourHiding();
	void GetIsJumping(bool* Is_Jumping_);
	void ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success);
	void OnGameModeStartEvent(bool* Success);
	void GetIsFalling(bool* Is_Falling_);
	void GetIsInSlowChargeState(bool* Is_slow_charging_);
	void GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_);
	void GetIsSheathed(bool* Weapon_Sheathed);
	void GetIsInCity(bool* Is_In_City);
	void GetPlayerStats(float* Current_Health, float* Current_Stamina);
	void GetClientUsedGamePad(bool* ClientUsedGamePad);
	void GetClientUsedMouse(bool* ClientUsedMouse);
	void GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData);
	void GetBleedOutTimer(struct FTimerHandle* BleedOutTImer);
	void GetNamePlate(class UWidgetComponent** Nameplate);
	void GetCurrentHealth(float* CurrentHealth);
	void GetReviveHealthThreshold(float* ReviveHealthThreshold);
	void GetBleedOutState(bool* BleedOutState);
	void GetIsDying(bool* IsDying);
	void GetFollowCamera(class UCameraComponent** FollowCamera);
	void GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp);
	void GetWeaponMesh(class USkeletalMeshComponent** Mesh);
	void GetBodyType(EArchonBodyType* BodyType);
	void GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent);
	void UserConstructionScript();
	void OnLoaded_378134254CA67BC28732379C25907FC6(class UObject* Loaded);
	void OnLoaded_574EFF0C41E058D1635965A61AB667E6(class UObject* Loaded);
	void OnLoaded_182A3F9B4742D91996AFD2892981F7E3(class UObject* Loaded);
	void OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnDyeChanged();
	void BP_OnArmourEquipped();
	void BP_OnArmourUnEquipped();
	void ReEquip();
	void ReceiveGameplayStart();
	void Check_For_Transmog();
	void BPCallableOnDyeChanged();
	void OnActorSetHiddenInGame(bool bNewHidden);
	void ExecuteUbergraph_armour_part_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
