#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_HUD.BPI_HUD_C.UpdatePlayerHUDDetails
struct UBPI_HUD_C_UpdatePlayerHUDDetails_Params
{
};

// Function BPI_HUD.BPI_HUD_C.GetWeaponPowerTable
struct UBPI_HUD_C_GetWeaponPowerTable_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponPowerTableData                       WeaponPowerTable;                                         // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.GetPaperdollScene
struct UBPI_HUD_C_GetPaperdollScene_Params
{
	class Upaperdoll_scene_component_C*                PaperdollScene;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Get Chat Widget
struct UBPI_HUD_C_Get_Chat_Widget_Params
{
	class UChat_MenuRoot_bpw_C*                        ChatWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Try Chat Input
struct UBPI_HUD_C_Try_Chat_Input_Params
{
	bool                                               FromGameplay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Progression Awarded
struct UBPI_HUD_C_Progression_Awarded_Params
{
	TArray<struct Fprogression_award>                  Grants;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCanvasPanel*                                ContainerWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Progression Award Finished
struct UBPI_HUD_C_Progression_Award_Finished_Params
{
};

// Function BPI_HUD.BPI_HUD_C.UpdateBoosts
struct UBPI_HUD_C_UpdateBoosts_Params
{
};

// Function BPI_HUD.BPI_HUD_C.HideStore
struct UBPI_HUD_C_HideStore_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Hide Mission Timer
struct UBPI_HUD_C_Hide_Mission_Timer_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Show Mission Timer
struct UBPI_HUD_C_Show_Mission_Timer_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Player HUD Ready
struct UBPI_HUD_C_Player_HUD_Ready_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Show Store
struct UBPI_HUD_C_Show_Store_Params
{
	class FString                                      Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     UI_to_returnTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturntoGameplay_OnClose;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Restore Game Input
struct UBPI_HUD_C_Restore_Game_Input_Params
{
};

// Function BPI_HUD.BPI_HUD_C.Hide HUD
struct UBPI_HUD_C_Hide_HUD_Params
{
	bool                                               HideChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_HUD.BPI_HUD_C.Show HUD
struct UBPI_HUD_C_Show_HUD_Params
{
	bool                                               Game_Input;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
