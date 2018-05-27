// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LoadoutSec_Consumables_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Set Quickslot Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_loadout_quickslot_C*  LoadoutQuickslot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::Set_Quickslot_Slot(class Uw_loadout_quickslot_C* LoadoutQuickslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Set Quickslot Slot");

	Uw_LoadoutSec_Consumables_Button_C_Set_Quickslot_Slot_Params params;
	params.LoadoutQuickslot = LoadoutQuickslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Consumables_Button_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.GetVisibility_2");

	Uw_LoadoutSec_Consumables_Button_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Consumables_Button_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.GetVisibility_1");

	Uw_LoadoutSec_Consumables_Button_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.TEMP_DisableFakeFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::TEMP_DisableFakeFocus(bool Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.TEMP_DisableFakeFocus");

	Uw_LoadoutSec_Consumables_Button_C_TEMP_DisableFakeFocus_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SetQuickSlots_Focusable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Focusable_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::SetQuickSlots_Focusable(bool Focusable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SetQuickSlots_Focusable");

	Uw_LoadoutSec_Consumables_Button_C_SetQuickSlots_Focusable_Params params;
	params.Focusable_ = Focusable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_LoadoutSec_Consumables_Button_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.OnFocusReceived");

	Uw_LoadoutSec_Consumables_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Construct");

	Uw_LoadoutSec_Consumables_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Show Hover");

	Uw_LoadoutSec_Consumables_Button_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Hide Hover");

	Uw_LoadoutSec_Consumables_Button_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_FakeFocusUpperRight_K2Node_ComponentBoundEvent_263_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__w_FakeFocusUpperRight_K2Node_ComponentBoundEvent_263_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_FakeFocusUpperRight_K2Node_ComponentBoundEvent_263_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__w_FakeFocusUpperRight_K2Node_ComponentBoundEvent_263_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_FakeFocusUpperLeft_K2Node_ComponentBoundEvent_272_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__w_FakeFocusUpperLeft_K2Node_ComponentBoundEvent_272_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_FakeFocusUpperLeft_K2Node_ComponentBoundEvent_272_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__w_FakeFocusUpperLeft_K2Node_ComponentBoundEvent_272_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_Left_K2Node_ComponentBoundEvent_282_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__FakeFocus_Left_K2Node_ComponentBoundEvent_282_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_Left_K2Node_ComponentBoundEvent_282_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__FakeFocus_Left_K2Node_ComponentBoundEvent_282_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_293_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_293_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_293_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_293_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_IN_TOP_K2Node_ComponentBoundEvent_1250_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__FakeFocus_IN_TOP_K2Node_ComponentBoundEvent_1250_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__FakeFocus_IN_TOP_K2Node_ComponentBoundEvent_1250_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__FakeFocus_IN_TOP_K2Node_ComponentBoundEvent_1250_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_370_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_370_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_370_OnClicked__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_370_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BigClick
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::BigClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.BigClick");

	Uw_LoadoutSec_Consumables_Button_C_BigClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SetupQSArray
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::SetupQSArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SetupQSArray");

	Uw_LoadoutSec_Consumables_Button_C_SetupQSArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QSClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::QSClicked(int QuickSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QSClicked");

	Uw_LoadoutSec_Consumables_Button_C_QSClicked_Params params;
	params.QuickSlotIndex = QuickSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QS_Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_LoadoutSec_Consumables_Button_C::QS_Hovered(int QuickSlotIndex, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QS_Hovered");

	Uw_LoadoutSec_Consumables_Button_C_QS_Hovered_Params params;
	params.QuickSlotIndex = QuickSlotIndex;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.PreConstruct");

	Uw_LoadoutSec_Consumables_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.ExecuteUbergraph_w_LoadoutSec_Consumables_Button
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::ExecuteUbergraph_w_LoadoutSec_Consumables_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.ExecuteUbergraph_w_LoadoutSec_Consumables_Button");

	Uw_LoadoutSec_Consumables_Button_C_ExecuteUbergraph_w_LoadoutSec_Consumables_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.OpenAdvancedMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::OpenAdvancedMenu__DelegateSignature(EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.OpenAdvancedMenu__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_OpenAdvancedMenu__DelegateSignature_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.ConsumableSlotHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Quick_Slot_Index               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::ConsumableSlotHovered__DelegateSignature(const class FString& ItemID, int Quick_Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.ConsumableSlotHovered__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_ConsumableSlotHovered__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Quick_Slot_Index = Quick_Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocus_Self__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::SendFocus_Self__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocus_Self__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_SendFocus_Self__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocusRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::SendFocusRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocusRight__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_SendFocusRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocusLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::SendFocusLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.SendFocusLeft__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_SendFocusLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QuickSlotIndex_Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            quickslot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Consumables_Button_C::QuickSlotIndex_Pressed__DelegateSignature(int quickslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.QuickSlotIndex_Pressed__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_QuickSlotIndex_Pressed__DelegateSignature_Params params;
	params.quickslot = quickslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Main Button Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::Main_Button_Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Main Button Hovered__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_Main_Button_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Main Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Consumables_Button_C::Main_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Consumables_Button.w_LoadoutSec_Consumables_Button_C.Main Button Clicked__DelegateSignature");

	Uw_LoadoutSec_Consumables_Button_C_Main_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
