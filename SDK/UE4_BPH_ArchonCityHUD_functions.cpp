// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonCityHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.TryShowWelcomeMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDidShow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::TryShowWelcomeMessage(bool* bDidShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.TryShowWelcomeMessage");

	ABPH_ArchonCityHUD_C_TryShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDidShow != nullptr)
		*bDidShow = params.bDidShow;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ShouldShowWelcomeMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPH_ArchonCityHUD_C::ShouldShowWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ShouldShowWelcomeMessage");

	ABPH_ArchonCityHUD_C_ShouldShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.DrawObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::DrawObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.DrawObjective");

	ABPH_ArchonCityHUD_C_DrawObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Update Player Ready Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Ready                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::Update_Player_Ready_Display(bool Is_Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Update Player Ready Display");

	ABPH_ArchonCityHUD_C_Update_Player_Ready_Display_Params params;
	params.Is_Ready = Is_Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UserConstructionScript");

	ABPH_ArchonCityHUD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.On Invite Sent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonCityHUD_C::On_Invite_Sent(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.On Invite Sent");

	ABPH_ArchonCityHUD_C_On_Invite_Sent_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Handle Command
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABPH_ArchonCityHUD_C::Handle_Command(class FString* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Handle Command");

	ABPH_ArchonCityHUD_C_Handle_Command_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPH_ArchonCityHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveBeginPlay");

	ABPH_ArchonCityHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveTick");

	ABPH_ArchonCityHUD_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.J - PlayerJournal
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::J___PlayerJournal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.J - PlayerJournal");

	ABPH_ArchonCityHUD_C_J___PlayerJournal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Escape Menu
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Escape_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Escape Menu");

	ABPH_ArchonCityHUD_C_Escape_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int*                           SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::ReceiveDrawHUD(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveDrawHUD");

	ABPH_ArchonCityHUD_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.M - Map
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::M___Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.M - Map");

	ABPH_ArchonCityHUD_C_M___Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Refresh HUD Widget Visibility
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Refresh_HUD_Widget_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Refresh HUD Widget Visibility");

	ABPH_ArchonCityHUD_C_Refresh_HUD_Widget_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.K2_OnHUDVisibityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          PreviousVisibility             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::K2_OnHUDVisibityChanged(bool* PreviousVisibility, bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.K2_OnHUDVisibityChanged");

	ABPH_ArchonCityHUD_C_K2_OnHUDVisibityChanged_Params params;
	params.PreviousVisibility = PreviousVisibility;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Set Gameplay HUD Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Visible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::Set_Gameplay_HUD_Visibility(bool* Is_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Set Gameplay HUD Visibility");

	ABPH_ArchonCityHUD_C_Set_Gameplay_HUD_Visibility_Params params;
	params.Is_Visible = Is_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Register Party Notifications
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Register_Party_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Register Party Notifications");

	ABPH_ArchonCityHUD_C_Register_Party_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABPH_ArchonCityHUD_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveGameplayStart");

	ABPH_ArchonCityHUD_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Game_Input                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowChat                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::Show_HUD(bool* Game_Input, bool* ShowChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show HUD");

	ABPH_ArchonCityHUD_C_Show_HUD_Params params;
	params.Game_Input = Game_Input;
	params.ShowChat = ShowChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.P - Party Menu
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::P___Party_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.P - Party Menu");

	ABPH_ArchonCityHUD_C_P___Party_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Return to Game
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode>* Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::Return_to_Game(TEnumAsByte<Eui_character_screen_mode>* Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Return to Game");

	ABPH_ArchonCityHUD_C_Return_to_Game_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Player HUD Ready
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Player_HUD_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Player HUD Ready");

	ABPH_ArchonCityHUD_C_Player_HUD_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Show_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Mission Timer");

	ABPH_ArchonCityHUD_C_Show_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Hide Mission Timer
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::Hide_Mission_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Hide Mission Timer");

	ABPH_ArchonCityHUD_C_Hide_Mission_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Store
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Path                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString*                 InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget**                UI_to_returnTo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ReturntoGameplay_OnClose       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::Show_Store(class FString* Path, class FString* InstanceId, class UWidget** UI_to_returnTo, bool* ReturntoGameplay_OnClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Store");

	ABPH_ArchonCityHUD_C_Show_Store_Params params;
	params.Path = Path;
	params.InstanceId = InstanceId;
	params.UI_to_returnTo = UI_to_returnTo;
	params.ReturntoGameplay_OnClose = ReturntoGameplay_OnClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.GetLastLogin
// (BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::GetLastLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.GetLastLogin");

	ABPH_ArchonCityHUD_C_GetLastLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UpdatePlayerHUDDetails
// (Public, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::UpdatePlayerHUDDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UpdatePlayerHUDDetails");

	ABPH_ArchonCityHUD_C_UpdatePlayerHUDDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ExecuteUbergraph_BPH_ArchonCityHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPH_ArchonCityHUD_C::ExecuteUbergraph_BPH_ArchonCityHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ExecuteUbergraph_BPH_ArchonCityHUD");

	ABPH_ArchonCityHUD_C_ExecuteUbergraph_BPH_ArchonCityHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReturnFocustoMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPH_ArchonCityHUD_C::ReturnFocustoMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReturnFocustoMenu__DelegateSignature");

	ABPH_ArchonCityHUD_C_ReturnFocustoMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
