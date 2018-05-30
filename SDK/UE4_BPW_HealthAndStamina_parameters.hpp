#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_HealthAndStamina_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetVisibility_Shield
struct UBPW_HealthAndStamina_C_GetVisibility_Shield_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetText_Shield
struct UBPW_HealthAndStamina_C_GetText_Shield_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get_RedBar_ColorAndOpacity_1
struct UBPW_HealthAndStamina_C_Get_RedBar_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Adjust Health Delay Flash Value
struct UBPW_HealthAndStamina_C_Adjust_Health_Delay_Flash_Value_Params
{
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetText_StaminaValues
struct UBPW_HealthAndStamina_C_GetText_StaminaValues_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetText_HealthValues
struct UBPW_HealthAndStamina_C_GetText_HealthValues_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetText_ShieldValues
struct UBPW_HealthAndStamina_C_GetText_ShieldValues_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Shield Bar Percent
struct UBPW_HealthAndStamina_C_Get_Shield_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GeRewardFillColorAndOpacity
struct UBPW_HealthAndStamina_C_GeRewardFillColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetDangerPercent
struct UBPW_HealthAndStamina_C_GetDangerPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.GetText_1
struct UBPW_HealthAndStamina_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get_BleedoutBar_Percent_1
struct UBPW_HealthAndStamina_C_Get_BleedoutBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get_Health Bar_FillColorAndOpacity_1
struct UBPW_HealthAndStamina_C_Get_Health_Bar_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Adjust Stamina Delay Bar Value
struct UBPW_HealthAndStamina_C_Adjust_Stamina_Delay_Bar_Value_Params
{
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Stamina Bar FillColorAndOpacity
struct UBPW_HealthAndStamina_C_Get_Stamina_Bar_FillColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Stamina Bar Color
struct UBPW_HealthAndStamina_C_Get_Stamina_Bar_Color_Params
{
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Revive Token Visibility
struct UBPW_HealthAndStamina_C_Get_Revive_Token_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Stamina Bar Percent
struct UBPW_HealthAndStamina_C_Get_Stamina_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Adjust Health Delay Bar Value
struct UBPW_HealthAndStamina_C_Adjust_Health_Delay_Bar_Value_Params
{
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Get Health Bar Percent
struct UBPW_HealthAndStamina_C_Get_Health_Bar_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Tick
struct UBPW_HealthAndStamina_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.Construct
struct UBPW_HealthAndStamina_C_Construct_Params
{
};

// Function BPW_HealthAndStamina.BPW_HealthAndStamina_C.ExecuteUbergraph_BPW_HealthAndStamina
struct UBPW_HealthAndStamina_C_ExecuteUbergraph_BPW_HealthAndStamina_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
