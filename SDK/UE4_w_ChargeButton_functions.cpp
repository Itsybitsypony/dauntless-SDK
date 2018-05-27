// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ChargeButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_ChargeButton.w_ChargeButton_C.HideMessage
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::HideMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.HideMessage");

	Uw_ChargeButton_C_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_ChargeButton_C::ShowMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.ShowMessage");

	Uw_ChargeButton_C_ShowMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.RefreshButtonLabel
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::RefreshButtonLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.RefreshButtonLabel");

	Uw_ChargeButton_C_RefreshButtonLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.CancelCraftInProgress
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::CancelCraftInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.CancelCraftInProgress");

	Uw_ChargeButton_C_CancelCraftInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.StartCraftingButton
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::StartCraftingButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.StartCraftingButton");

	Uw_ChargeButton_C_StartCraftingButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.TryStartCraftingButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanCraftCurrentItem            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::TryStartCraftingButton(bool CanCraftCurrentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.TryStartCraftingButton");

	Uw_ChargeButton_C_TryStartCraftingButton_Params params;
	params.CanCraftCurrentItem = CanCraftCurrentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Set Energy Wave Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Set_Energy_Wave_Intensity(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Set Energy Wave Intensity");

	Uw_ChargeButton_C_Set_Energy_Wave_Intensity_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Refresh Gamepad Hint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Refresh_Gamepad_Hint(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Refresh Gamepad Hint");

	Uw_ChargeButton_C_Refresh_Gamepad_Hint_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Clear Components
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Clear_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Clear Components");

	Uw_ChargeButton_C_Clear_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Get Player Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonInventory* Uw_ChargeButton_C::Get_Player_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Get Player Inventory");

	Uw_ChargeButton_C_Get_Player_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_ChargeButton.w_ChargeButton_C.Setup Equipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Setup_Equipment(class UEquipmentItem* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Setup Equipment");

	Uw_ChargeButton_C_Setup_Equipment_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Update Appearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Update_Appearance(const struct FText& Label, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Update Appearance");

	Uw_ChargeButton_C_Update_Appearance_Params params;
	params.Label = Label;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Set Progress Visible
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Visible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Set_Progress_Visible(bool Is_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Set Progress Visible");

	Uw_ChargeButton_C_Set_Progress_Visible_Params params;
	params.Is_Visible = Is_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Key Hold Ended
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Key_Hold_Ended()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Key Hold Ended");

	Uw_ChargeButton_C_Key_Hold_Ended_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Key Hold Started
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Key_Hold_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Key Hold Started");

	Uw_ChargeButton_C_Key_Hold_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.OnLoaded_A058EA6248D678A919D5DF9119466E69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::OnLoaded_A058EA6248D678A919D5DF9119466E69(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.OnLoaded_A058EA6248D678A919D5DF9119466E69");

	Uw_ChargeButton_C_OnLoaded_A058EA6248D678A919D5DF9119466E69_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_ChargeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Construct");

	Uw_ChargeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Tick");

	Uw_ChargeButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Key Hold Complete
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Key_Hold_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Key Hold Complete");

	Uw_ChargeButton_C_Key_Hold_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Ended
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Key_Hold_Ended()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Key Hold Ended");

	Uw_ChargeButton_C_On_Key_Hold_Ended_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Started
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Key_Hold_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Key Hold Started");

	Uw_ChargeButton_C_On_Key_Hold_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.OnAnimationFinished");

	Uw_ChargeButton_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Stop Crafting Animation
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Stop_Crafting_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Stop Crafting Animation");

	Uw_ChargeButton_C_Stop_Crafting_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Vendor Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::Vendor_Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Vendor Refresh");

	Uw_ChargeButton_C_Vendor_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_ChargeButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature");

	Uw_ChargeButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_ChargeButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	Uw_ChargeButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_ChargeButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.OnSynchronizeProperties");

	Uw_ChargeButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.Input Swap");

	Uw_ChargeButton_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.RefreshButtonIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::RefreshButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.RefreshButtonIcon");

	Uw_ChargeButton_C_RefreshButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.ExecuteUbergraph_w_ChargeButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_ChargeButton_C::ExecuteUbergraph_w_ChargeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.ExecuteUbergraph_w_ChargeButton");

	Uw_ChargeButton_C_ExecuteUbergraph_w_ChargeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Mouse Up__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Mouse_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Mouse Up__DelegateSignature");

	Uw_ChargeButton_C_On_Mouse_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Mouse Down__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Mouse_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Mouse Down__DelegateSignature");

	Uw_ChargeButton_C_On_Mouse_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Vendor Refresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Vendor_Refresh__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Vendor Refresh__DelegateSignature");

	Uw_ChargeButton_C_On_Vendor_Refresh__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_ChargeButton.w_ChargeButton_C.On Key Hold Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_ChargeButton_C::On_Key_Hold_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_ChargeButton.w_ChargeButton_C.On Key Hold Complete__DelegateSignature");

	Uw_ChargeButton_C_On_Key_Hold_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
