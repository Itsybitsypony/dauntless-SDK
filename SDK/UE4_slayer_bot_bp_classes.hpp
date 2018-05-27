#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_slayer_bot_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass slayer_bot_bp.slayer_bot_bp_C
// 0x005C (0x1609 - 0x15AD)
class Aslayer_bot_bp_C : public ABP_PlayerCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x15AD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x15B0(0x0008) (Transient, DuplicateTransient)
	TArray<class AActor*>                              CityObjs_ToVisit;                                         // 0x15B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              CityObjs_Primary;                                         // 0x15C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              CityObjs_Secondary;                                       // 0x15D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      CityObjs_Start;                                           // 0x15E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FailCount;                                                // 0x15F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponID;                                                 // 0x15F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              base_weapon_classes;                                      // 0x15F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WeaponEquipped_;                                          // 0x1608(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass slayer_bot_bp.slayer_bot_bp_C");
		return ptr;
	}


	void OnRep_WeaponEquipped_();
	void SetupWeapon();
	void MatchBehemothPower();
	void AddRandomPOIs(int Min, int Max, TArray<class AActor*>* TargetArray);
	void BuildCityPath();
	void SetupArmor();
	void MakeRandomDye(struct FDyeVariant* Dye);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage);
	void OnPivotAborted();
	void AuthEquipWeapon(class AArchonWeapon* Weapon);
	void ExecuteUbergraph_slayer_bot_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
