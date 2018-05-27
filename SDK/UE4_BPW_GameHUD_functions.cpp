// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_GameHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_GameHUD.BPW_GameHUD_C.RefreshBoosts
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_GameHUD_C::RefreshBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.RefreshBoosts");

	UBPW_GameHUD_C_RefreshBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Reset Weapon UI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Initialization_Successful      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Reset_Weapon_UI(bool* Initialization_Successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Reset Weapon UI");

	UBPW_GameHUD_C_Reset_Weapon_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Initialization_Successful != nullptr)
		*Initialization_Successful = params.Initialization_Successful;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Clear Weapon UI
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_GameHUD_C::Clear_Weapon_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Clear Weapon UI");

	UBPW_GameHUD_C_Clear_Weapon_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Display Ally Death Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Display_Ally_Death_Notification(const class FString& Player_Name, int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Display Ally Death Notification");

	UBPW_GameHUD_C_Display_Ally_Death_Notification_Params params;
	params.Player_Name = Player_Name;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Display Self Death Notification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Display_Self_Death_Notification(int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Display Self Death Notification");

	UBPW_GameHUD_C_Display_Self_Death_Notification_Params params;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Add Announcement Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Announcement_Widget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Add_Announcement_Widget(class UUserWidget* Announcement_Widget, float DisplayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Add Announcement Widget");

	UBPW_GameHUD_C_Add_Announcement_Widget_Params params;
	params.Announcement_Widget = Announcement_Widget;
	params.DisplayTime = DisplayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Tick");

	UBPW_GameHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Re-initialize Weapon UI
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameHUD_C::Re_initialize_Weapon_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Re-initialize Weapon UI");

	UBPW_GameHUD_C_Re_initialize_Weapon_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Set Static Hud Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::Set_Static_Hud_Visibility(bool Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Set Static Hud Visibility");

	UBPW_GameHUD_C_Set_Static_Hud_Visibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_GameHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Construct");

	UBPW_GameHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.Refresh Watermark
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameHUD_C::Refresh_Watermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.Refresh Watermark");

	UBPW_GameHUD_C_Refresh_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.RefreshPlayerDeets
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameHUD_C::RefreshPlayerDeets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.RefreshPlayerDeets");

	UBPW_GameHUD_C_RefreshPlayerDeets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameHUD.BPW_GameHUD_C.ExecuteUbergraph_BPW_GameHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameHUD_C::ExecuteUbergraph_BPW_GameHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameHUD.BPW_GameHUD_C.ExecuteUbergraph_BPW_GameHUD");

	UBPW_GameHUD_C_ExecuteUbergraph_BPW_GameHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
