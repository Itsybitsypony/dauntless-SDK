#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_floating_combat_text_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnRep_IsActivated
struct Ufloating_combat_text_bpc_C_OnRep_IsActivated_Params
{
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetThresholdIndexForDamage
struct Ufloating_combat_text_bpc_C_GetThresholdIndexForDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.GetFontSizeForDamage
struct Ufloating_combat_text_bpc_C_GetFontSizeForDamage_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FontSize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_6E69D648459A4512843B78B64E1B3C58
struct Ufloating_combat_text_bpc_C_OnLoaded_6E69D648459A4512843B78B64E1B3C58_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_DFC6253B4EEAC3B789AB23A355833C02
struct Ufloating_combat_text_bpc_C_OnLoaded_DFC6253B4EEAC3B789AB23A355833C02_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_11C3411B430F438505E76D9F7032A1AD
struct Ufloating_combat_text_bpc_C_OnLoaded_11C3411B430F438505E76D9F7032A1AD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F
struct Ufloating_combat_text_bpc_C_OnLoaded_C06F42B4478FD6F77CA5A8A54E83B74F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddDamageText
struct Ufloating_combat_text_bpc_C_AddDamageText_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveTick
struct Ufloating_combat_text_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReceiveBeginPlay
struct Ufloating_combat_text_bpc_C_ReceiveBeginPlay_Params
{
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.OnComponentDeactivated_Event_1
struct Ufloating_combat_text_bpc_C_OnComponentDeactivated_Event_1_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddText
struct Ufloating_combat_text_bpc_C_AddText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ReportTotalDamage
struct Ufloating_combat_text_bpc_C_ReportTotalDamage_Params
{
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.AddMultitypeDamageText
struct Ufloating_combat_text_bpc_C_AddMultitypeDamageText_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PartDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaggerDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExposeDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasImpactLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function floating_combat_text_bpc.floating_combat_text_bpc_C.ExecuteUbergraph_floating_combat_text_bpc
struct Ufloating_combat_text_bpc_C_ExecuteUbergraph_floating_combat_text_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
