#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_sheathe_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsLocalPlayerOrBot
struct Uweapon_sheathe_bpc_C_IsLocalPlayerOrBot_Params
{
	bool                                               IsLocalPlayerOrBot;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsMontageRelevantToCurrentSheathing
struct Uweapon_sheathe_bpc_C_IsMontageRelevantToCurrentSheathing_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRelevant;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSheathing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.TrySetSheatheState
struct Uweapon_sheathe_bpc_C_TrySetSheatheState_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           SheathState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.LocalSetSheatheState
struct Uweapon_sheathe_bpc_C_LocalSetSheatheState_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_CanPerformSheathe
struct Uweapon_sheathe_bpc_C_Private_CanPerformSheathe_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_GetAnimSet
struct Uweapon_sheathe_bpc_C_Private_GetAnimSet_Params
{
	struct Factions_animset_str                        AnimSet;                                                  // (Parm, OutParm)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.GetWeaponSheatheState
struct Uweapon_sheathe_bpc_C_GetWeaponSheatheState_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           SheatheState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.DebugInfo
struct Uweapon_sheathe_bpc_C_DebugInfo_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetSheatheWeapon
struct Uweapon_sheathe_bpc_C_SetSheatheWeapon_Params
{
	bool                                               PlayAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetUnSheatheWeapon
struct Uweapon_sheathe_bpc_C_SetUnSheatheWeapon_Params
{
	bool                                               PlayAnim;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheathStateBegin_Event
struct Uweapon_sheathe_bpc_C_OnSheathStateBegin_Event_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_UpdateSheatheStatus
struct Uweapon_sheathe_bpc_C_Server_UpdateSheatheStatus_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           ClientSheatheState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnMontageBlendingOut_Event_1
struct Uweapon_sheathe_bpc_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnSheatheWeaponAnimEnd
struct Uweapon_sheathe_bpc_C_MulticastOnSheatheWeaponAnimEnd_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnSheatheWeaponEnd
struct Uweapon_sheathe_bpc_C_Server_CallOnSheatheWeaponEnd_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerUnSheatheWeapon
struct Uweapon_sheathe_bpc_C_ServerUnSheatheWeapon_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerSheatheWeapon
struct Uweapon_sheathe_bpc_C_ServerSheatheWeapon_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveTick
struct Uweapon_sheathe_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnUnSheatheWeaponAnimEnd
struct Uweapon_sheathe_bpc_C_MulticastOnUnSheatheWeaponAnimEnd_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnUnSheatheWeaponEnd
struct Uweapon_sheathe_bpc_C_Server_CallOnUnSheatheWeaponEnd_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveBeginPlay
struct Uweapon_sheathe_bpc_C_ReceiveBeginPlay_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged_Event_1
struct Uweapon_sheathe_bpc_C_OnAnimationBlueprintChanged_Event_1_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ToggleSheatheWeapon
struct Uweapon_sheathe_bpc_C_ToggleSheatheWeapon_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ExecuteUbergraph_weapon_sheathe_bpc
struct Uweapon_sheathe_bpc_C_ExecuteUbergraph_weapon_sheathe_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.AuthOnSheatheStateChanged__DelegateSignature
struct Uweapon_sheathe_bpc_C_AuthOnSheatheStateChanged__DelegateSignature_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           SheatheState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnCanAttack__DelegateSignature
struct Uweapon_sheathe_bpc_C_OnCanAttack__DelegateSignature_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheStateChanged__DelegateSignature
struct Uweapon_sheathe_bpc_C_OnSheatheStateChanged__DelegateSignature_Params
{
	TEnumAsByte<Eplayer_sheathe_states_enum>           PreviousState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eplayer_sheathe_states_enum>           NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged__DelegateSignature
struct Uweapon_sheathe_bpc_C_OnAnimationBlueprintChanged__DelegateSignature_Params
{
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnUnSheatheWeaponAnimEnd__DelegateSignature
struct Uweapon_sheathe_bpc_C_OnUnSheatheWeaponAnimEnd__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheWeaponAnimEnd__DelegateSignature
struct Uweapon_sheathe_bpc_C_OnSheatheWeaponAnimEnd__DelegateSignature_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
