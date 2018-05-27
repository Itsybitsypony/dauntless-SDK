#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_NamePlates_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_NamePlates.BPW_NamePlates_C.Set Text Block Opacity
struct UBPW_NamePlates_C_Set_Text_Block_Opacity_Params
{
	class UTextBlock*                                  TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_NamePlates.BPW_NamePlates_C.SetPlayer
struct UBPW_NamePlates_C_SetPlayer_Params
{
	class AArchonCharacter*                            Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_NamePlates.BPW_NamePlates_C.SetGuild
struct UBPW_NamePlates_C_SetGuild_Params
{
	class AArchonGuild*                                Guild;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_NamePlates.BPW_NamePlates_C.Line of Sight Check
struct UBPW_NamePlates_C_Line_of_Sight_Check_Params
{
};

// Function BPW_NamePlates.BPW_NamePlates_C.Construct
struct UBPW_NamePlates_C_Construct_Params
{
};

// Function BPW_NamePlates.BPW_NamePlates_C.Tick
struct UBPW_NamePlates_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_NamePlates.BPW_NamePlates_C.StartFill
struct UBPW_NamePlates_C_StartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_NamePlates.BPW_NamePlates_C.CancelFill
struct UBPW_NamePlates_C_CancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_NamePlates.BPW_NamePlates_C.ExecuteUbergraph_BPW_NamePlates
struct UBPW_NamePlates_C_ExecuteUbergraph_BPW_NamePlates_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
