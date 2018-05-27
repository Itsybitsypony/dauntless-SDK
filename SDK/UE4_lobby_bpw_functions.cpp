// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lobby_bpw.lobby_bpw_C.LobbyReadyRequestSafetyTimer
// (Public, BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::LobbyReadyRequestSafetyTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.LobbyReadyRequestSafetyTimer");

	Ulobby_bpw_C_LobbyReadyRequestSafetyTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.CanHandleReadyUpButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ulobby_bpw_C::CanHandleReadyUpButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.CanHandleReadyUpButton");

	Ulobby_bpw_C_CanHandleReadyUpButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.IsActiveSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::IsActiveSlot(int Index, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.IsActiveSlot");

	Ulobby_bpw_C_IsActiveSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ulobby_bpw_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnPreviewMouseButtonDown");

	Ulobby_bpw_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot3_Left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot3_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot3_Left");

	Ulobby_bpw_C_OnSlot3_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot3_Right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot3_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot3_Right");

	Ulobby_bpw_C_OnSlot3_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot0_Left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot0_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot0_Left");

	Ulobby_bpw_C_OnSlot0_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot0_Right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot0_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot0_Right");

	Ulobby_bpw_C_OnSlot0_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot1_Left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot1_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot1_Left");

	Ulobby_bpw_C_OnSlot1_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot1_Right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot1_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot1_Right");

	Ulobby_bpw_C_OnSlot1_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot2_Left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot2_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot2_Left");

	Ulobby_bpw_C_OnSlot2_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnSlot2_Right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::OnSlot2_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnSlot2_Right");

	Ulobby_bpw_C_OnSlot2_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ulobby_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GetDefaultFocusedWidget");

	Ulobby_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ulobby_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnKeyDown");

	Ulobby_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpw.lobby_bpw_C.GetLobbyGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Alobby_bpgm_C*           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::GetLobbyGameMode(class Alobby_bpgm_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GetLobbyGameMode");

	Ulobby_bpw_C_GetLobbyGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.IsPaperDollSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::IsPaperDollSlot(int Index, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.IsPaperDollSlot");

	Ulobby_bpw_C_IsPaperDollSlot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.GetPaperDoll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Alobby_paperdoll_bp_C*   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::GetPaperDoll(int Index, class Alobby_paperdoll_bp_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GetPaperDoll");

	Ulobby_bpw_C_GetPaperDoll_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.GetNameSlotWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_lobby_slot_bpw_C*     Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::GetNameSlotWidget(int Index, class Uw_lobby_slot_bpw_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GetNameSlotWidget");

	Ulobby_bpw_C_GetNameSlotWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.GetNameSlotWidgetPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_lobby_slot_bpw_C*     Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::GetNameSlotWidgetPlayer(class Uw_lobby_slot_bpw_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GetNameSlotWidgetPlayer");

	Ulobby_bpw_C_GetNameSlotWidgetPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function lobby_bpw.lobby_bpw_C.OnLoaded_91DF647A4647F4E4BB5EB787DD10A733
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::OnLoaded_91DF647A4647F4E4BB5EB787DD10A733(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLoaded_91DF647A4647F4E4BB5EB787DD10A733");

	Ulobby_bpw_C_OnLoaded_91DF647A4647F4E4BB5EB787DD10A733_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ulobby_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Construct");

	Ulobby_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyIslandTransitionStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ulobby_bpw_C::OnLobbyIslandTransitionStart(const class FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyIslandTransitionStart");

	Ulobby_bpw_C_OnLobbyIslandTransitionStart_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ulobby_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Destruct");

	Ulobby_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandCountdownStarted
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindEventLobbyIslandCountdownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandCountdownStarted");

	Ulobby_bpw_C_BindEventLobbyIslandCountdownStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyIslandCountdownStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CountDownTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::OnLobbyIslandCountdownStarted(float CountDownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyIslandCountdownStarted");

	Ulobby_bpw_C_OnLobbyIslandCountdownStarted_Params params;
	params.CountDownTime = CountDownTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandTransitionStart
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindEventLobbyIslandTransitionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandTransitionStart");

	Ulobby_bpw_C_BindEventLobbyIslandTransitionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandCountdownStarted
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::UnbindEventLobbyIslandCountdownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandCountdownStarted");

	Ulobby_bpw_C_UnbindEventLobbyIslandCountdownStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandTransitionStart
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::UnbindEventLobbyIslandTransitionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandTransitionStart");

	Ulobby_bpw_C_UnbindEventLobbyIslandTransitionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindOnOverrideBehemothChange
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindOnOverrideBehemothChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindOnOverrideBehemothChange");

	Ulobby_bpw_C_BindOnOverrideBehemothChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindOnHuntIdChange
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindOnHuntIdChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindOnHuntIdChange");

	Ulobby_bpw_C_BindOnHuntIdChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyHuntIdChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  HuntId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ulobby_bpw_C::OnLobbyHuntIdChange(const class FString& HuntId)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyHuntIdChange");

	Ulobby_bpw_C_OnLobbyHuntIdChange_Params params;
	params.HuntId = HuntId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyBehemothOverrideChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  OverrideBehemoth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ulobby_bpw_C::OnLobbyBehemothOverrideChange(const class FString& OverrideBehemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyBehemothOverrideChange");

	Ulobby_bpw_C_OnLobbyBehemothOverrideChange_Params params;
	params.OverrideBehemoth = OverrideBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OpenLoadout
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::OpenLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OpenLoadout");

	Ulobby_bpw_C_OpenLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.ShowLobby_FromLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::ShowLobby_FromLoadout(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.ShowLobby_FromLoadout");

	Ulobby_bpw_C_ShowLobby_FromLoadout_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.HideLobbyMenu
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::HideLobbyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.HideLobbyMenu");

	Ulobby_bpw_C_HideLobbyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.ShowLobbyMenu
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::ShowLobbyMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.ShowLobbyMenu");

	Ulobby_bpw_C_ShowLobbyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OpenExamineMenu
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::OpenExamineMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OpenExamineMenu");

	Ulobby_bpw_C_OpenExamineMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Navigate_BACK
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::Navigate_BACK()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Navigate_BACK");

	Ulobby_bpw_C_Navigate_BACK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.GTFO");

	Ulobby_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindOnPlayerReadyChange
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindOnPlayerReadyChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindOnPlayerReadyChange");

	Ulobby_bpw_C_BindOnPlayerReadyChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindPlayerLoadoutChange
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindPlayerLoadoutChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindPlayerLoadoutChange");

	Ulobby_bpw_C_BindPlayerLoadoutChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyUserReadyStatusChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStatus                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::OnLobbyUserReadyStatusChange(const class FString& UserId, int SlotIndex, bool bStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyUserReadyStatusChange");

	Ulobby_bpw_C_OnLobbyUserReadyStatusChange_Params params;
	params.UserId = UserId;
	params.SlotIndex = SlotIndex;
	params.bStatus = bStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyUserLoadoutChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonLobbyPaperDollData LoadoutData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ulobby_bpw_C::OnLobbyUserLoadoutChange(const class FString& UserId, int SlotIndex, const struct FArchonLobbyPaperDollData& LoadoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyUserLoadoutChange");

	Ulobby_bpw_C_OnLobbyUserLoadoutChange_Params params;
	params.UserId = UserId;
	params.SlotIndex = SlotIndex;
	params.LoadoutData = LoadoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindLobbyUserLeft
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindLobbyUserLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindLobbyUserLeft");

	Ulobby_bpw_C_BindLobbyUserLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLobbyUserLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::OnLobbyUserLeft(const class FString& UserId, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLobbyUserLeft");

	Ulobby_bpw_C_OnLobbyUserLeft_Params params;
	params.UserId = UserId;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature
// (BlueprintEvent)

void Ulobby_bpw_C::BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature");

	Ulobby_bpw_C_BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.ExitConfirmPopup
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::ExitConfirmPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.ExitConfirmPopup");

	Ulobby_bpw_C_ExitConfirmPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Tick");

	Ulobby_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.ReadyUpHotkey
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::ReadyUpHotkey()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.ReadyUpHotkey");

	Ulobby_bpw_C_ReadyUpHotkey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OpenEscapeMenu
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::OpenEscapeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OpenEscapeMenu");

	Ulobby_bpw_C_OpenEscapeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ulobby_bpw_C::CustomEvent_1(const class FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.CustomEvent_1");

	Ulobby_bpw_C_CustomEvent_1_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.BindOnLobbyCandidateFailed
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::BindOnLobbyCandidateFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.BindOnLobbyCandidateFailed");

	Ulobby_bpw_C_BindOnLobbyCandidateFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnLeavePartyComplete
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        RemovedPlayerID                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ulobby_bpw_C::OnLeavePartyComplete(bool bSuccess, const struct FUniqueNetIdRepl& RemovedPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnLeavePartyComplete");

	Ulobby_bpw_C_OnLeavePartyComplete_Params params;
	params.bSuccess = bSuccess;
	params.RemovedPlayerID = RemovedPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.MMFailed_Leave
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::MMFailed_Leave()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.MMFailed_Leave");

	Ulobby_bpw_C_MMFailed_Leave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Set Active Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::Set_Active_Slot(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Set Active Slot");

	Ulobby_bpw_C_Set_Active_Slot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Open Examine or Loadout
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::Open_Examine_or_Loadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Open Examine or Loadout");

	Ulobby_bpw_C_Open_Examine_or_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.CloseExamineMenu
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::CloseExamineMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.CloseExamineMenu");

	Ulobby_bpw_C_CloseExamineMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.Refresh Button Legend
// (BlueprintCallable, BlueprintEvent)

void Ulobby_bpw_C::Refresh_Button_Legend()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.Refresh Button Legend");

	Ulobby_bpw_C_Refresh_Button_Legend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.OnAquireTopOfFocusStack
// (Event, Public, BlueprintEvent)

void Ulobby_bpw_C::OnAquireTopOfFocusStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.OnAquireTopOfFocusStack");

	Ulobby_bpw_C_OnAquireTopOfFocusStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpw.lobby_bpw_C.ExecuteUbergraph_lobby_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulobby_bpw_C::ExecuteUbergraph_lobby_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpw.lobby_bpw_C.ExecuteUbergraph_lobby_bpw");

	Ulobby_bpw_C_ExecuteUbergraph_lobby_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
