// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LoadoutSec_Wep_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ResetWeaponMeter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::ResetWeaponMeter(bool* Successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ResetWeaponMeter");

	Uw_LoadoutSec_Wep_Button_C_ResetWeaponMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successful != nullptr)
		*Successful = params.Successful;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Wep_Button_C::GetVisibility_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_3");

	Uw_LoadoutSec_Wep_Button_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Wep_Button_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_2");

	Uw_LoadoutSec_Wep_Button_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Wep_Button_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_1");

	Uw_LoadoutSec_Wep_Button_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Refresh");

	Uw_LoadoutSec_Wep_Button_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Get_txt_ElementalPower_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_LoadoutSec_Wep_Button_C::Get_txt_ElementalPower_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Get_txt_ElementalPower_Visibility_1");

	Uw_LoadoutSec_Wep_Button_C_Get_txt_ElementalPower_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateEquippedWeaponName
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::UpdateEquippedWeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateEquippedWeaponName");

	Uw_LoadoutSec_Wep_Button_C_UpdateEquippedWeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.SwitchOnIndexCall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::SwitchOnIndexCall(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.SwitchOnIndexCall");

	Uw_LoadoutSec_Wep_Button_C_SwitchOnIndexCall_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.EquippedWeaponSlotClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::EquippedWeaponSlotClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.EquippedWeaponSlotClicked");

	Uw_LoadoutSec_Wep_Button_C_EquippedWeaponSlotClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.AddWeaponDamageTypeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELoadoutStatTypes> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::AddWeaponDamageTypeIcon(float Value, TEnumAsByte<ELoadoutStatTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.AddWeaponDamageTypeIcon");

	Uw_LoadoutSec_Wep_Button_C_AddWeaponDamageTypeIcon_Params params;
	params.Value = Value;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.LookupEquippedWeaponPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::LookupEquippedWeaponPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.LookupEquippedWeaponPower");

	Uw_LoadoutSec_Wep_Button_C_LookupEquippedWeaponPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateCharacterStats_Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::UpdateCharacterStats_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateCharacterStats_Weapon");

	Uw_LoadoutSec_Wep_Button_C_UpdateCharacterStats_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_LoadoutSec_Wep_Button_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnFocusReceived");

	Uw_LoadoutSec_Wep_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Construct");

	Uw_LoadoutSec_Wep_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Tick");

	Uw_LoadoutSec_Wep_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Show Hover");

	Uw_LoadoutSec_Wep_Button_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Hide Hover");

	Uw_LoadoutSec_Wep_Button_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On Left Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On_Left_Selected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On Left Selected__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On_Left_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On Right Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On_Right_Selected__DelegateSignature(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On Right Selected__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On_Right_Selected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateGroupName
// (BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::UpdateGroupName()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateGroupName");

	Uw_LoadoutSec_Wep_Button_C_UpdateGroupName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On Group Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On_Group_Selected__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On Group Selected__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On_Group_Selected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_LoadoutSec_Wep_Button_C::OnItemEquipped(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnItemEquipped");

	Uw_LoadoutSec_Wep_Button_C_OnItemEquipped_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.InputSwap");

	Uw_LoadoutSec_Wep_Button_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.RefreshInventoryPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Elist_focus_type>  FocusType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::RefreshInventoryPanel(EWeaponType WeaponType, TEnumAsByte<Elist_focus_type> FocusType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.RefreshInventoryPanel");

	Uw_LoadoutSec_Wep_Button_C_RefreshInventoryPanel_Params params;
	params.WeaponType = WeaponType;
	params.FocusType = FocusType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ExecuteUbergraph_w_LoadoutSec_Wep_Button
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::ExecuteUbergraph_w_LoadoutSec_Wep_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ExecuteUbergraph_w_LoadoutSec_Wep_Button");

	Uw_LoadoutSec_Wep_Button_C_ExecuteUbergraph_w_LoadoutSec_Wep_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PushCategoryFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::PushCategoryFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PushCategoryFocus__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_PushCategoryFocus__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ClearTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::ClearTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ClearTooltip__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_ClearTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GroupPipSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::GroupPipSelected__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GroupPipSelected__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_GroupPipSelected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.CenterPicker_Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::CenterPicker_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.CenterPicker_Selected__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_CenterPicker_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Right__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::PickerBox_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Right__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_PickerBox_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::PickerBox_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Left__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_PickerBox_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_LoadoutSec_Wep_Button_C::Button_Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Hovered__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_Button_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_LoadoutSec_Wep_Button_C::Button_Clicked__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Clicked__DelegateSignature");

	Uw_LoadoutSec_Wep_Button_C_Button_Clicked__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
