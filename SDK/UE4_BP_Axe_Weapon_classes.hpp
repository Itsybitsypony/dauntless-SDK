#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Axe_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Axe_Weapon.BP_Axe_Weapon_C
// 0x01AF (0x0BF8 - 0x0A49)
class ABP_Axe_Weapon_C : public ABP_BaseArchonWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Charge_Location;                                          // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ucombat_combo_counter_bpc_C*                 combat_combo_counter_bpc;                                 // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_gaxe_determination;                                     // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeMultThree_ChargeThreePlayerMaterial_3D4F07F846CF4802152C508ABBEEC3FC;// 0x0A70(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChargeMultThree__Direction_3D4F07F846CF4802152C508ABBEEC3FC;// 0x0A74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChargeMultThree;                                          // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeMultTwo_ChargeTwoPlayerMaterial_8AF70F5E4AF820F1336EB0AEA67AB58D;// 0x0A80(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChargeMultTwo__Direction_8AF70F5E4AF820F1336EB0AEA67AB58D;// 0x0A84(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A85(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChargeMultTwo;                                            // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeMultOne_ChargeOnePlayerMaterial_8ABD1D2A48CD9673850F389577EE2115;// 0x0A90(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChargeMultOne__Direction_8ABD1D2A48CD9673850F389577EE2115;// 0x0A94(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A95(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChargeMultOne;                                            // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WeaponDynamicMaterial;                                    // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BASE_COLOR;                                               // 0x0AA8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DAMAGE_WINDOW_COLOR;                                      // 0x0AB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_GA_ParticleTrailSystems>     Weapon_Trail_Types;                                       // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Current_Charge_Level;                                     // 0x0AD8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        Charge_Color_Levels;                                      // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        VFX_Charge_Color_Levels;                                  // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     Charge_Level_Axe_Particle_Templates;                      // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    Current_Charge_Axe_Particle;                              // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Determination_Max;                                        // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B1C(0x0004) MISSED OFFSET
	TArray<float>                                      Determination_Level_Buff_Times;                           // 0x0B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     Charge_Level_Player_Particle_Templates;                   // 0x0B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    Current_Charge_Player_Particle;                           // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Audio_Charge_Sound;                                       // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max_Determination_Level;                                  // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Rev_Determination_Speed_Modifier;                         // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        DeterminationOnHitPerChargeLevel;                         // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Determination_Special_OnStart_Cost;                       // 0x0B68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Determination_Special_OnFinish_Cost_1;                    // 0x0B6C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Axe_Base_Move_Skill_Cost;                                 // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Move_Skill_out_of_charge_cost;                            // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Player_Materials;                                         // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTexture*>                            Determination_Charge_Level_Mask_Array;                    // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Determination_VFX_Intensity;                              // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Particle_Beam;                                            // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PreviousChargeLevel;                                      // 0x0BB8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastChargeWasHorizontal;                                  // 0x0BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAxe;                                                 // 0x0BBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0BBE(0x0002) MISSED OFFSET
	int                                                DeterminationOverride;                                    // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousChargeLevelDuration;                              // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousChargeLevelTime;                                  // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XReapeatAttackPlayRate;                                   // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AArchonBuff*                                 ActiveSuperArmour;                                        // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseTime;                                                // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	class UParticleSystem*                             p_gaxe_determination_01;                                  // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             p_deter_lvl_02;                                           // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             p_deter_lvl_03;                                           // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Axe_Weapon.BP_Axe_Weapon_C");
		return ptr;
	}


	void GetCurrentDetermination(int* Determination);
	void SetDeterminationOverride(int DeterminationLevel, bool* Success);
	void GetCurrentChargeLevel(int* ChargeLevel);
	void GetDeterminationOnHitPerChargeLevel(TArray<int>* DeterminationOnHitPerChargeLevel);
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void IsPreviousChargeActive(bool* Active);
	void SetPreviousChargeLevel(int ChargeLevel);
	void SpecialAttackReady(bool* QReady);
	void InternalClearChargeParticles();
	void DisableDeterminationAudio(int Level);
	void EnableDeterminationAudio(int Level);
	void DisableDeterminationVFX(int Level);
	void EnableDeterminationVFX(int Level);
	void Modify_Damage_Row_Name_Based_On_Scriptable_Hook();
	void Spawn_Charge_Level_Particle___Audio(int Charge_level);
	void OnRep_Current_Charge_Level();
	void Spawn_Charge_Level_Change_Particle___Old_Flash_Color_Implementation(int New_Charge_Level);
	void Get_Appropriate_Weapon_Trails();
	void Debug_Set_Weapon_Color(const struct FLinearColor& Color);
	void UserConstructionScript();
	void ChargeMultOne__FinishedFunc();
	void ChargeMultOne__UpdateFunc();
	void ChargeMultTwo__FinishedFunc();
	void ChargeMultTwo__UpdateFunc();
	void ChargeMultThree__FinishedFunc();
	void ChargeMultThree__UpdateFunc();
	void GameplayCue_Combat_Determination_OnLvl1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Determination_OnLvl2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Determination_OnLvl3(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Determination_ReadyToLevel(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_VFX_Axe_Special(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Determination_OnLvl4(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Determination_OnLvl5(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnComboStarted();
	void OnComboEnded();
	void OnChargeLevelChanged(int* PreviousChargeLevel, int* NewChargeLevel);
	void Cheat_Charge_Weapon();
	void OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer);
	void K2_OnUnEquip();
	void Clear_Charge_Level();
	void Clear_Charge_Particles();
	void OnMoveSkill();
	void OnChargeEnded();
	void CallWeaponSpecificFunction(struct FName* Function_Name);
	void ActivateSuper();
	void OnRep_Equipped_();
	void ClientTestForOwner();
	void SetCurrentChargeLevel(int CurrentChargeLevel);
	void ChargeOnePlayerMaterial();
	void ChargeTwoPlayerMaterial();
	void ChargeThreePlayerMaterial();
	void OnComboIncremented_Event_1(EArchonAttackActionKey AttackType);
	void ReceiveBeginPlay();
	void DeterminationOneAxeMaterial();
	void DeterminationTwoAxeMaterial();
	void DeterminationThreeAxeMaterial();
	void DeterminationZeroAxeMaterial();
	void DisablePlayerEffects();
	void ExecuteUbergraph_BP_Axe_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
