#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shrowd_exotic_charge_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.PerHitMeterGain
struct Ushrowd_exotic_charge_ab_C_PerHitMeterGain_Params
{
	bool                                               Secondary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.HealSelf
struct Ushrowd_exotic_charge_ab_C_HealSelf_Params
{
	float                                              HealAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.GetDetermination
struct Ushrowd_exotic_charge_ab_C_GetDetermination_Params
{
	float                                              Determination;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.DebugOutputToLog
struct Ushrowd_exotic_charge_ab_C_DebugOutputToLog_Params
{
	class FString                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_F8A282F74ACD98F3B36ECE8CF8693997
struct Ushrowd_exotic_charge_ab_C_EventReceived_F8A282F74ACD98F3B36ECE8CF8693997_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912
struct Ushrowd_exotic_charge_ab_C_EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_9B96D0604F5CA231AE7E7B855556BC2B
struct Ushrowd_exotic_charge_ab_C_OnFinish_9B96D0604F5CA231AE7E7B855556BC2B_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C
struct Ushrowd_exotic_charge_ab_C_OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_39EBBEB1494661FE7A5810836000692F
struct Ushrowd_exotic_charge_ab_C_OnChange_39EBBEB1494661FE7A5810836000692F_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_832D54B24CE4507307DEB4879E879169
struct Ushrowd_exotic_charge_ab_C_OnFinish_832D54B24CE4507307DEB4879E879169_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8
struct Ushrowd_exotic_charge_ab_C_EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.K2_ActivateAbility
struct Ushrowd_exotic_charge_ab_C_K2_ActivateAbility_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.StartMeterDecay
struct Ushrowd_exotic_charge_ab_C_StartMeterDecay_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnComboNextMove_Event_1
struct Ushrowd_exotic_charge_ab_C_OnComboNextMove_Event_1_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EndDecay
struct Ushrowd_exotic_charge_ab_C_EndDecay_Params
{
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStartFX
struct Ushrowd_exotic_charge_ab_C_ClientStartFX_Params
{
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aeblade_crowbear_exotic_00_bp_C*             Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStopFX
struct Ushrowd_exotic_charge_ab_C_ClientStopFX_Params
{
	class UObject*                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aeblade_crowbear_exotic_00_bp_C*             Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ExecuteUbergraph_shrowd_exotic_charge_ab
struct Ushrowd_exotic_charge_ab_C_ExecuteUbergraph_shrowd_exotic_charge_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
