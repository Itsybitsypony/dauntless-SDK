// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetWeaponPowerTable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponPowerTableData   WeaponPowerTable               (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::GetWeaponPowerTable(const struct FName& RowName, struct FWeaponPowerTableData* WeaponPowerTable, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetWeaponPowerTable");

	ABPH_ArchonHUD_C_GetWeaponPowerTable_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPowerTable != nullptr)
		*WeaponPowerTable = params.WeaponPowerTable;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetPaperdollScene
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Upaperdoll_scene_component_C* PaperdollScene                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::GetPaperdollScene(class Upaperdoll_scene_component_C** PaperdollScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetPaperdollScene");

	ABPH_ArchonHUD_C_GetPaperdollScene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaperdollScene != nullptr)
		*PaperdollScene = params.PaperdollScene;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Get Chat Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChat_MenuRoot_bpw_C*    ChatWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Get_Chat_Widget(class UChat_MenuRoot_bpw_C** ChatWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Get Chat Widget");

	ABPH_ArchonHUD_C_Get_Chat_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChatWidget != nullptr)
		*ChatWidget = params.ChatWidget;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Try Chat Input
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FromGameplay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Try_Chat_Input(bool FromGameplay, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Try Chat Input");

	ABPH_ArchonHUD_C_Try_Chat_Input_Params params;
	params.FromGameplay = FromGameplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Add Progress Widget to Panel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Content                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Add_Progress_Widget_to_Panel(class UCanvasPanel* Panel, class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Add Progress Widget to Panel");

	ABPH_ArchonHUD_C_Add_Progress_Widget_to_Panel_Params params;
	params.Panel = Panel;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Chat Command
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SourceString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Did_Handle                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Handle_Chat_Command(const class FString& SourceString, bool* Did_Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Chat Command");

	ABPH_ArchonHUD_C_Handle_Chat_Command_Params params;
	params.SourceString = SourceString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Handle != nullptr)
		*Did_Handle = params.Did_Handle;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Return to Game
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Return_to_Game(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Return to Game");

	ABPH_ArchonHUD_C_Return_to_Game_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Create Compass Widgets
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Create_Compass_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Create Compass Widgets");

	ABPH_ArchonHUD_C_Create_Compass_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReturnFocusfromUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::ReturnFocusfromUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReturnFocusfromUI");

	ABPH_ArchonHUD_C_ReturnFocusfromUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.UserConstructionScript");

	ABPH_ArchonHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Restore Game Input
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Restore_Game_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Restore Game Input");

	ABPH_ArchonHUD_C_Restore_Game_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Store
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 UI_to_returnTo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturntoGameplay_OnClose       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Show_Store(const class FString& Path, const class FString& InstanceId, class UWidget* UI_to_returnTo, bool ReturntoGameplay_OnClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Store");

	ABPH_ArchonHUD_C_Show_Store_Params params;
	params.Path = Path;
	params.InstanceId = InstanceId;
	params.UI_to_returnTo = UI_to_returnTo;
	params.ReturntoGameplay_OnClose = ReturntoGameplay_OnClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.HideStore
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::HideStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.HideStore");

	ABPH_ArchonHUD_C_HideStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GameplayStart Quest Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestEventData*         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::GameplayStart_Quest_Event(class UQuestEventData* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.GameplayStart Quest Event");

	ABPH_ArchonHUD_C_GameplayStart_Quest_Event_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Award Finished
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Progression_Award_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Award Finished");

	ABPH_ArchonHUD_C_Progression_Award_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Awarded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fprogression_award> Grants                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCanvasPanel*            ContainerWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Progression_Awarded(class UCanvasPanel* ContainerWidget, TArray<struct Fprogression_award>* Grants)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Awarded");

	ABPH_ArchonHUD_C_Progression_Awarded_Params params;
	params.ContainerWidget = ContainerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grants != nullptr)
		*Grants = params.Grants;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Next Progression Award
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Handle_Next_Progression_Award()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Next Progression Award");

	ABPH_ArchonHUD_C_Handle_Next_Progression_Award_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Rank Progression Widget
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Grant                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPH_ArchonHUD_C::Show_Rank_Progression_Widget(const struct Fprogression_award& Grant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Rank Progression Widget");

	ABPH_ArchonHUD_C_Show_Rank_Progression_Widget_Params params;
	params.Grant = Grant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Core Progression Widget
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Grant                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPH_ArchonHUD_C::Show_Core_Progression_Widget(const struct Fprogression_award& Grant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Core Progression Widget");

	ABPH_ArchonHUD_C_Show_Core_Progression_Widget_Params params;
	params.Grant = Grant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.QueueNextProgressionAward
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fprogression_award> ProgressionAwards              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABPH_ArchonHUD_C::QueueNextProgressionAward(TArray<struct Fprogression_award> ProgressionAwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.QueueNextProgressionAward");

	ABPH_ArchonHUD_C_QueueNextProgressionAward_Params params;
	params.ProgressionAwards = ProgressionAwards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Command
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Handle_Command(const class FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Command");

	ABPH_ArchonHUD_C_Handle_Command_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Added by Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Friend_Added_by_Name(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Added by Name");

	ABPH_ArchonHUD_C_Friend_Added_by_Name_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Chat Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputMode_Gameplay             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Chat_Input(bool InputMode_Gameplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Chat Input");

	ABPH_ArchonHUD_C_Chat_Input_Params params;
	params.InputMode_Gameplay = InputMode_Gameplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Friend Events
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Bind_Friend_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Friend Events");

	ABPH_ArchonHUD_C_Bind_Friend_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Removed by Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Friend_Removed_by_Name(bool bWasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Removed by Name");

	ABPH_ArchonHUD_C_Friend_Removed_by_Name_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Friends Command
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::On_Friends_Command()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Friends Command");

	ABPH_ArchonHUD_C_On_Friends_Command_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Help Command
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::On_Help_Command()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Help Command");

	ABPH_ArchonHUD_C_On_Help_Command_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Stuck Command
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::On_Stuck_Command()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Stuck Command");

	ABPH_ArchonHUD_C_On_Stuck_Command_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Blocked by Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Player_Blocked_by_Name(bool bWasSuccessful, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Blocked by Name");

	ABPH_ArchonHUD_C_Player_Blocked_by_Name_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Unblocked by Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Player_Unblocked_by_Name(bool bWasSuccessful, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Unblocked by Name");

	ABPH_ArchonHUD_C_Player_Unblocked_by_Name_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Blocked Player Events
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Bind_Blocked_Player_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Blocked Player Events");

	ABPH_ArchonHUD_C_Bind_Blocked_Player_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Remove Events
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Remove_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Remove Events");

	ABPH_ArchonHUD_C_Remove_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPH_ArchonHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveBeginPlay");

	ABPH_ArchonHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Escape Menu
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Escape_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Escape Menu");

	ABPH_ArchonHUD_C_Escape_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int*                           SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::ReceiveDrawHUD(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveDrawHUD");

	ABPH_ArchonHUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Set_HUD_Visibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Visibility");

	ABPH_ArchonHUD_C_Set_HUD_Visibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Debug Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Debug_String                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonHUD_C::Set_HUD_Debug_Text(const class FString& Debug_String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Debug Text");

	ABPH_ArchonHUD_C_Set_HUD_Debug_Text_Params params;
	params.Debug_String = Debug_String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Display Debug Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Set_Display_Debug_Image(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Display Debug Image");

	ABPH_ArchonHUD_C_Set_Display_Debug_Image_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveEndPlay");

	ABPH_ArchonHUD_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowControlsOverlayWidget
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::ShowControlsOverlayWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowControlsOverlayWidget");

	ABPH_ArchonHUD_C_ShowControlsOverlayWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveControlsOverlayWidget
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::RemoveControlsOverlayWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveControlsOverlayWidget");

	ABPH_ArchonHUD_C_RemoveControlsOverlayWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowXboxLayoutWidget
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::ShowXboxLayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowXboxLayoutWidget");

	ABPH_ArchonHUD_C_ShowXboxLayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveXboxLayoutWidget
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::RemoveXboxLayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveXboxLayoutWidget");

	ABPH_ArchonHUD_C_RemoveXboxLayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Ally Death Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Ally_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Display_Ally_Death_Notification(const class FString& Ally_Name, int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Ally Death Notification");

	ABPH_ArchonHUD_C_Display_Ally_Death_Notification_Params params;
	params.Ally_Name = Ally_Name;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Self Death Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Display_Self_Death_Notification(int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Self Death Notification");

	ABPH_ArchonHUD_C_Display_Self_Death_Notification_Params params;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnHUDVisibityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          PreviousVisibility             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::K2_OnHUDVisibityChanged(bool* PreviousVisibility, bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnHUDVisibityChanged");

	ABPH_ArchonHUD_C_K2_OnHUDVisibityChanged_Params params;
	params.PreviousVisibility = PreviousVisibility;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           TalkingPlayerId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::K2_OnPlayerTalkingStateChanged(int* TalkingPlayerId, bool* bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnPlayerTalkingStateChanged");

	ABPH_ArchonHUD_C_K2_OnPlayerTalkingStateChanged_Params params;
	params.TalkingPlayerId = TalkingPlayerId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Toggle HUD Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Toggle_HUD_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Toggle HUD Visibility");

	ABPH_ArchonHUD_C_Toggle_HUD_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Static Hud Item Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Set_Static_Hud_Item_Visibility(bool Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Static Hud Item Visibility");

	ABPH_ArchonHUD_C_Set_Static_Hud_Item_Visibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.J - PlayerJournal
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::J___PlayerJournal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.J - PlayerJournal");

	ABPH_ArchonHUD_C_J___PlayerJournal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Gameplay HUD Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Visible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Set_Gameplay_HUD_Visibility(bool Is_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Gameplay HUD Visibility");

	ABPH_ArchonHUD_C_Set_Gameplay_HUD_Visibility_Params params;
	params.Is_Visible = Is_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Hide_HUD(bool HideChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide HUD");

	ABPH_ArchonHUD_C_Hide_HUD_Params params;
	params.HideChat = HideChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Game_Input                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::Show_HUD(bool Game_Input, bool ShowChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show HUD");

	ABPH_ArchonHUD_C_Show_HUD_Params params;
	params.Game_Input = Game_Input;
	params.ShowChat = ShowChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.O - Friends Screen
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::O___Friends_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.O - Friends Screen");

	ABPH_ArchonHUD_C_O___Friends_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Refresh HUD Widget Visibility
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Refresh_HUD_Widget_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Refresh HUD Widget Visibility");

	ABPH_ArchonHUD_C_Refresh_HUD_Widget_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABPH_ArchonHUD_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveGameplayStart");

	ABPH_ArchonHUD_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateQuickbar
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::UpdateQuickbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateQuickbar");

	ABPH_ArchonHUD_C_UpdateQuickbar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player HUD Ready
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Player_HUD_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player HUD Ready");

	ABPH_ArchonHUD_C_Player_HUD_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Show_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Mission Timer");

	ABPH_ArchonHUD_C_Show_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Hide_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide Mission Timer");

	ABPH_ArchonHUD_C_Hide_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateBoosts
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::UpdateBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateBoosts");

	ABPH_ArchonHUD_C_UpdateBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdatePlayerHUDDetails
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::UpdatePlayerHUDDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdatePlayerHUDDetails");

	ABPH_ArchonHUD_C_UpdatePlayerHUDDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.L - Player Loadout
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::L___Player_Loadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.L - Player Loadout");

	ABPH_ArchonHUD_C_L___Player_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.I - Player Inventory
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::I___Player_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.I - Player Inventory");

	ABPH_ArchonHUD_C_I___Player_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K - Player Style
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::K___Player_Style()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.K - Player Style");

	ABPH_ArchonHUD_C_K___Player_Style_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Open Map
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonHUD_C::Open_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.Open Map");

	ABPH_ArchonHUD_C_Open_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ExecuteUbergraph_BPH_ArchonHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonHUD_C::ExecuteUbergraph_BPH_ArchonHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonHUD.BPH_ArchonHUD_C.ExecuteUbergraph_BPH_ArchonHUD");

	ABPH_ArchonHUD_C_ExecuteUbergraph_BPH_ArchonHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
