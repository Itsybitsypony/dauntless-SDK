#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_radio_prototype_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetTokenSubstitution
struct Ulantern_radio_prototype_bpw_C_GetTokenSubstitution_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWithinSubstitution;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SubstitutionText;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               RetainBrackets;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetAxisTokens
struct Ulantern_radio_prototype_bpw_C_GetAxisTokens_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseOrder;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              AxesValues;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.GetMoveTokenSubstitution
struct Ulantern_radio_prototype_bpw_C_GetMoveTokenSubstitution_Params
{
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceAxisToken
struct Ulantern_radio_prototype_bpw_C_ReplaceAxisToken_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               UseSubstitution;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceInputToken
struct Ulantern_radio_prototype_bpw_C_ReplaceInputToken_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               UseSubstitution;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ReplaceToken
struct Ulantern_radio_prototype_bpw_C_ReplaceToken_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               TokenReplaced;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ProcessInputMappingTextTokens
struct Ulantern_radio_prototype_bpw_C_ProcessInputMappingTextTokens_Params
{
	struct FText                                       Processed_Text;                                           // (Parm, OutParm)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdatePlayerInstructionText
struct Ulantern_radio_prototype_bpw_C_UpdatePlayerInstructionText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.HideLanternRadio
struct Ulantern_radio_prototype_bpw_C_HideLanternRadio_Params
{
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ShowLanternRadio
struct Ulantern_radio_prototype_bpw_C_ShowLanternRadio_Params
{
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.UpdateLanternRadioText
struct Ulantern_radio_prototype_bpw_C_UpdateLanternRadioText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.Construct
struct Ulantern_radio_prototype_bpw_C_Construct_Params
{
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.OnInputSwap
struct Ulantern_radio_prototype_bpw_C_OnInputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_radio_prototype_bpw.lantern_radio_prototype_bpw_C.ExecuteUbergraph_lantern_radio_prototype_bpw
struct Ulantern_radio_prototype_bpw_C_ExecuteUbergraph_lantern_radio_prototype_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
