#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_message_slate_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_message_slate_bpw.w_message_slate_bpw_C.GetTokenSubstitution
struct Uw_message_slate_bpw_C_GetTokenSubstitution_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWithinSubstitution;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SubstitutionText;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               RetainBrackets;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Process Tokens for Message
struct Uw_message_slate_bpw_C_Process_Tokens_for_Message_Params
{
	struct FText                                       Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Processed_Text;                                           // (Parm, OutParm)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Input Token
struct Uw_message_slate_bpw_C_Replace_Input_Token_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               bUseSubstitution;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Replace Token
struct Uw_message_slate_bpw_C_Replace_Token_Params
{
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Substitution;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               TokenReplaced;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.OnMouseButtonUp
struct Uw_message_slate_bpw_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.OnKeyUp
struct Uw_message_slate_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.GetDefaultFocusedWidget
struct Uw_message_slate_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.OnLoaded_5A567FC54B867285FEF160AE05451C8E
struct Uw_message_slate_bpw_C_OnLoaded_5A567FC54B867285FEF160AE05451C8E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.PreConstruct
struct Uw_message_slate_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Construct
struct Uw_message_slate_bpw_C_Construct_Params
{
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Load Background Texture
struct Uw_message_slate_bpw_C_Load_Background_Texture_Params
{
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Add Tutorial Slate Image
struct Uw_message_slate_bpw_C_Add_Tutorial_Slate_Image_Params
{
	struct Fmessage_slate_image                        Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Close
struct Uw_message_slate_bpw_C_Close_Params
{
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.OnInputSwap
struct Uw_message_slate_bpw_C_OnInputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.Process Message Tokens
struct Uw_message_slate_bpw_C_Process_Message_Tokens_Params
{
};

// Function w_message_slate_bpw.w_message_slate_bpw_C.ExecuteUbergraph_w_message_slate_bpw
struct Uw_message_slate_bpw_C_ExecuteUbergraph_w_message_slate_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
