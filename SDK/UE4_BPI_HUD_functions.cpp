// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_HUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_HUD.BPI_HUD_C.UpdatePlayerHUDDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::UpdatePlayerHUDDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.UpdatePlayerHUDDetails");

	UBPI_HUD_C_UpdatePlayerHUDDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.GetWeaponPowerTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponPowerTableData   WeaponPowerTable               (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::GetWeaponPowerTable(const struct FName& RowName, struct FWeaponPowerTableData* WeaponPowerTable, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.GetWeaponPowerTable");

	UBPI_HUD_C_GetWeaponPowerTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPowerTable != nullptr)
		*WeaponPowerTable = params.WeaponPowerTable;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function BPI_HUD.BPI_HUD_C.GetPaperdollScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Upaperdoll_scene_component_C* PaperdollScene                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::GetPaperdollScene(class Upaperdoll_scene_component_C** PaperdollScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.GetPaperdollScene");

	UBPI_HUD_C_GetPaperdollScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaperdollScene != nullptr)
		*PaperdollScene = params.PaperdollScene;
}


// Function BPI_HUD.BPI_HUD_C.Get Chat Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChat_MenuRoot_bpw_C*    ChatWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Get_Chat_Widget(class UChat_MenuRoot_bpw_C** ChatWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Get Chat Widget");

	UBPI_HUD_C_Get_Chat_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChatWidget != nullptr)
		*ChatWidget = params.ChatWidget;
}


// Function BPI_HUD.BPI_HUD_C.Try Chat Input
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromGameplay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Try_Chat_Input(bool FromGameplay, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Try Chat Input");

	UBPI_HUD_C_Try_Chat_Input_Params params;
	params.FromGameplay = FromGameplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_HUD.BPI_HUD_C.Progression Awarded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fprogression_award> Grants                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCanvasPanel*            ContainerWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Progression_Awarded(class UCanvasPanel* ContainerWidget, TArray<struct Fprogression_award>* Grants)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Progression Awarded");

	UBPI_HUD_C_Progression_Awarded_Params params;
	params.ContainerWidget = ContainerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grants != nullptr)
		*Grants = params.Grants;
}


// Function BPI_HUD.BPI_HUD_C.Progression Award Finished
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::Progression_Award_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Progression Award Finished");

	UBPI_HUD_C_Progression_Award_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.UpdateBoosts
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::UpdateBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.UpdateBoosts");

	UBPI_HUD_C_UpdateBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.HideStore
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::HideStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.HideStore");

	UBPI_HUD_C_HideStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Hide Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::Hide_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Hide Mission Timer");

	UBPI_HUD_C_Hide_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Show Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::Show_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show Mission Timer");

	UBPI_HUD_C_Show_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Player HUD Ready
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::Player_HUD_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Player HUD Ready");

	UBPI_HUD_C_Player_HUD_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Show Store
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 UI_to_returnTo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturntoGameplay_OnClose       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Show_Store(const class FString& Path, const class FString& InstanceId, class UWidget* UI_to_returnTo, bool ReturntoGameplay_OnClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show Store");

	UBPI_HUD_C_Show_Store_Params params;
	params.Path = Path;
	params.InstanceId = InstanceId;
	params.UI_to_returnTo = UI_to_returnTo;
	params.ReturntoGameplay_OnClose = ReturntoGameplay_OnClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Restore Game Input
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_HUD_C::Restore_Game_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Restore Game Input");

	UBPI_HUD_C_Restore_Game_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Hide HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Hide_HUD(bool HideChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Hide HUD");

	UBPI_HUD_C_Hide_HUD_Params params;
	params.HideChat = HideChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_HUD.BPI_HUD_C.Show HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Game_Input                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_HUD_C::Show_HUD(bool Game_Input, bool ShowChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_HUD.BPI_HUD_C.Show HUD");

	UBPI_HUD_C_Show_HUD_Params params;
	params.Game_Input = Game_Input;
	params.ShowChat = ShowChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
