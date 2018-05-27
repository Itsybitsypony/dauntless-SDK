#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_sheathe_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weapon_sheathe_bpc.weapon_sheathe_bpc_C
// 0x00A8 (0x0278 - 0x01D0)
class Uweapon_sheathe_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnSheatheWeaponAnimEnd;                                   // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AArchonCharacter*                            Character;                                                // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Factions_animset_str                        AnimSet;                                                  // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<Eplayer_sheathe_states_enum>           SheatheState;                                             // 0x0210(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class AArchonWeapon*                               Weapon;                                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LSheathingAnim;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUnSheatheWeaponAnimEnd;                                 // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationBlueprintChanged;                              // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSheatheStateChanged;                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCanAttack;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AuthOnSheatheStateChanged;                                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_sheathe_bpc.weapon_sheathe_bpc_C");
		return ptr;
	}


	void IsLocalPlayerOrBot(bool* IsLocalPlayerOrBot);
	void IsMontageRelevantToCurrentSheathing(class UAnimMontage* Montage, bool* IsRelevant, bool* IsSheathing);
	void TrySetSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum> SheathState, bool* Success);
	void LocalSetSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum> NewState);
	void Private_CanPerformSheathe(bool* Result);
	void Private_GetAnimSet(struct Factions_animset_str* AnimSet);
	void GetWeaponSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum>* SheatheState);
	void DebugInfo(bool Enable);
	void SetSheatheWeapon(bool PlayAnim);
	void SetUnSheatheWeapon(bool PlayAnim);
	void OnSheathStateBegin_Event(TEnumAsByte<Eplayer_sheathe_states_enum> State);
	void Server_UpdateSheatheStatus(TEnumAsByte<Eplayer_sheathe_states_enum> ClientSheatheState);
	void OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted);
	void MulticastOnSheatheWeaponAnimEnd(bool Success);
	void Server_CallOnSheatheWeaponEnd(bool Success);
	void ServerUnSheatheWeapon();
	void ServerSheatheWeapon();
	void ReceiveTick(float* DeltaSeconds);
	void MulticastOnUnSheatheWeaponAnimEnd(bool Success);
	void Server_CallOnUnSheatheWeaponEnd(bool Success);
	void ReceiveBeginPlay();
	void OnAnimationBlueprintChanged_Event_1();
	void ToggleSheatheWeapon();
	void ExecuteUbergraph_weapon_sheathe_bpc(int EntryPoint);
	void AuthOnSheatheStateChanged__DelegateSignature(TEnumAsByte<Eplayer_sheathe_states_enum> SheatheState);
	void OnCanAttack__DelegateSignature();
	void OnSheatheStateChanged__DelegateSignature(TEnumAsByte<Eplayer_sheathe_states_enum> PreviousState, TEnumAsByte<Eplayer_sheathe_states_enum> NewState);
	void OnAnimationBlueprintChanged__DelegateSignature();
	void OnUnSheatheWeaponAnimEnd__DelegateSignature(bool Success);
	void OnSheatheWeaponAnimEnd__DelegateSignature(bool Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
