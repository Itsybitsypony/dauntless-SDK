#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_CreateGuild_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_CreateGuild.bpw_CreateGuild_C.GetDefaultFocusedWidget
struct Ubpw_CreateGuild_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.OnKeyUp
struct Ubpw_CreateGuild_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Name Error
struct Ubpw_CreateGuild_C_Name_Error_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Show Request Processing
struct Ubpw_CreateGuild_C_Show_Request_Processing_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Show Guild Create
struct Ubpw_CreateGuild_C_Show_Guild_Create_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Construct
struct Ubpw_CreateGuild_C_Construct_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.OnCreateGuild
struct Ubpw_CreateGuild_C_OnCreateGuild_Params
{
	bool                                               DidSucceed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Close
struct Ubpw_CreateGuild_C_Close_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Create Guild Confirmed
struct Ubpw_CreateGuild_C_Create_Guild_Confirmed_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
struct Ubpw_CreateGuild_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
struct Ubpw_CreateGuild_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.ExecuteUbergraph_bpw_CreateGuild
struct Ubpw_CreateGuild_C_ExecuteUbergraph_bpw_CreateGuild_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.GuildDialogClosed__DelegateSignature
struct Ubpw_CreateGuild_C_GuildDialogClosed__DelegateSignature_Params
{
};

// Function bpw_CreateGuild.bpw_CreateGuild_C.Guild Created__DelegateSignature
struct Ubpw_CreateGuild_C_Guild_Created__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
