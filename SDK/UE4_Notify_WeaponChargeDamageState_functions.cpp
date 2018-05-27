// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Notify_WeaponChargeDamageState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Notify_WeaponChargeDamageState.Notify_WeaponChargeDamageState_C.ModifyWeaponDamageKeys
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonWeapon**          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           InDamageKeys                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           OutDamageKeys                  (Parm, OutParm, ZeroConstructor)

void UNotify_WeaponChargeDamageState_C::ModifyWeaponDamageKeys(class AArchonWeapon** Weapon, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, TArray<struct FName>* InDamageKeys, TArray<struct FName>* OutDamageKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function Notify_WeaponChargeDamageState.Notify_WeaponChargeDamageState_C.ModifyWeaponDamageKeys");

	UNotify_WeaponChargeDamageState_C_ModifyWeaponDamageKeys_Params params;
	params.Weapon = Weapon;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDamageKeys != nullptr)
		*InDamageKeys = params.InDamageKeys;
	if (OutDamageKeys != nullptr)
		*OutDamageKeys = params.OutDamageKeys;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
