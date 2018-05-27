#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_partymember_button_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetColour
struct Uw_partymember_button_bpw_C_SetColour_Params
{
	struct FLinearColor                                SpecifiedColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UImage*                                      img;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_Fill_Visibility_1
struct Uw_partymember_button_bpw_C_Get_Fill_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetDyeColourFromID
struct Uw_partymember_button_bpw_C_GetDyeColourFromID_Params
{
	class FString                                      inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                Preview_Color;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.GetBrushColor_1
struct Uw_partymember_button_bpw_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Get_playerValidVisible
struct Uw_partymember_button_bpw_C_Get_playerValidVisible_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A058EA6248D678A919D5DF9139EBB81C
struct Uw_partymember_button_bpw_C_OnLoaded_A058EA6248D678A919D5DF9139EBB81C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82
struct Uw_partymember_button_bpw_C_OnLoaded_A29F8C0E4A5F3B9BE97D59B4FC2D0E82_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Construct
struct Uw_partymember_button_bpw_C_Construct_Params
{
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPlayer
struct Uw_partymember_button_bpw_C_SetupPlayer_Params
{
	struct FText                                       PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TAssetPtr<class UObject>                           playericon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.NoActivePlayer
struct Uw_partymember_button_bpw_C_NoActivePlayer_Params
{
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.SetupPortraitColours
struct Uw_partymember_button_bpw_C_SetupPortraitColours_Params
{
	class FString                                      FabricColourDyeID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      BorderColourDyeID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      SigilColourDyeID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.PreConstruct
struct Uw_partymember_button_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Load Player Icon
struct Uw_partymember_button_bpw_C_Load_Player_Icon_Params
{
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Clear Player Icon
struct Uw_partymember_button_bpw_C_Clear_Player_Icon_Params
{
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.Setup Player Name
struct Uw_partymember_button_bpw_C_Setup_Player_Name_Params
{
};

// Function w_partymember_button_bpw.w_partymember_button_bpw_C.ExecuteUbergraph_w_partymember_button_bpw
struct Uw_partymember_button_bpw_C_ExecuteUbergraph_w_partymember_button_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
