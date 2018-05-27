// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loadout_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function loadout_screen_bpw.loadout_screen_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uloadout_screen_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.GetVisibility_1");

	Uloadout_screen_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_7_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uloadout_screen_bpw_C::Get_TextBlock_7_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_7_Text_1");

	Uloadout_screen_bpw_C_Get_TextBlock_7_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_6_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uloadout_screen_bpw_C::Get_TextBlock_6_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_6_Text_1");

	Uloadout_screen_bpw_C_Get_TextBlock_6_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_5_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uloadout_screen_bpw_C::Get_TextBlock_5_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_5_Text_1");

	Uloadout_screen_bpw_C_Get_TextBlock_5_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uloadout_screen_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.GetText_1");

	Uloadout_screen_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenStorefromSelectedItemInstanceID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusedSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::OpenStorefromSelectedItemInstanceID(int FocusedSlot, EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.OpenStorefromSelectedItemInstanceID");

	Uloadout_screen_bpw_C_OpenStorefromSelectedItemInstanceID_Params params;
	params.FocusedSlot = FocusedSlot;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.CategorySubGroups_Focus_Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_WeaponEquipSlot         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable_ArmourButton            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable_ConsumableButton        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::CategorySubGroups_Focus_Enable(bool Enable_WeaponEquipSlot, bool Enable_ArmourButton, bool Enable_ConsumableButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.CategorySubGroups_Focus_Enable");

	Uloadout_screen_bpw_C_CategorySubGroups_Focus_Enable_Params params;
	params.Enable_WeaponEquipSlot = Enable_WeaponEquipSlot;
	params.Enable_ArmourButton = Enable_ArmourButton;
	params.Enable_ConsumableButton = Enable_ConsumableButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ClearTooltips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Weapons                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Consumable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::ClearTooltips(bool Weapons, bool Armour, bool Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ClearTooltips");

	Uloadout_screen_bpw_C_ClearTooltips_Params params;
	params.Weapons = Weapons;
	params.Armour = Armour;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Category_Focus_Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_WeaponCatFocus          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable_ArmourCatFocus          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable_Consumable_Focus        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::Category_Focus_Enable(bool Enable_WeaponCatFocus, bool Enable_ArmourCatFocus, bool Enable_Consumable_Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Category_Focus_Enable");

	Uloadout_screen_bpw_C_Category_Focus_Enable_Params params;
	params.Enable_WeaponCatFocus = Enable_WeaponCatFocus;
	params.Enable_ArmourCatFocus = Enable_ArmourCatFocus;
	params.Enable_Consumable_Focus = Enable_Consumable_Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uloadout_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.OnKeyDown");

	Uloadout_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ArmourIntro_BySlot_PlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  SlotClicked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::ArmourIntro_BySlot_PlayAnimation(TEnumAsByte<Earmor_slot_enum> SlotClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ArmourIntro_BySlot_PlayAnimation");

	Uloadout_screen_bpw_C_ArmourIntro_BySlot_PlayAnimation_Params params;
	params.SlotClicked = SlotClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  EquipSlotClicked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature_Params params;
	params.EquipSlotClicked = EquipSlotClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutMenu_FocusOnStart
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::LoadoutMenu_FocusOnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutMenu_FocusOnStart");

	Uloadout_screen_bpw_C_LoadoutMenu_FocusOnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uloadout_screen_bpw_C::BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature(const class FString& ItemID, EItemGroupType ItemType, const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.ItemType = ItemType;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.HoverLeft
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::HoverLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.HoverLeft");

	Uloadout_screen_bpw_C_HoverLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.HoverRight
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::HoverRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.HoverRight");

	Uloadout_screen_bpw_C_HoverRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Hover Down
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::Hover_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Hover Down");

	Uloadout_screen_bpw_C_Hover_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.OnAnimationFinished");

	Uloadout_screen_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ani_ResetMainStage
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::ani_ResetMainStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ani_ResetMainStage");

	Uloadout_screen_bpw_C_ani_ResetMainStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature(const class FString& ItemID, EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeStruct                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     ArmourSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature(const struct FDyeVariant& DyeStruct, EArmorType ArmourSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature_Params params;
	params.DyeStruct = DyeStruct;
	params.ArmourSlot = ArmourSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  focused_Slot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature(TEnumAsByte<Earmor_slot_enum> focused_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature_Params params;
	params.focused_Slot = focused_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uloadout_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.Construct");

	Uloadout_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutBack
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::LoadoutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutBack");

	Uloadout_screen_bpw_C_LoadoutBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromConsumables
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::MenuNav_ToMainstage_FromConsumables()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromConsumables");

	Uloadout_screen_bpw_C_MenuNav_ToMainstage_FromConsumables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromWeapons
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::MenuNav_ToMainstage_FromWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromWeapons");

	Uloadout_screen_bpw_C_MenuNav_ToMainstage_FromWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainStage_FromArmour
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::MenuNav_ToMainStage_FromArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainStage_FromArmour");

	Uloadout_screen_bpw_C_MenuNav_ToMainStage_FromArmour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ExitWeaponCellStage
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::ExitWeaponCellStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ExitWeaponCellStage");

	Uloadout_screen_bpw_C_ExitWeaponCellStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenWebStore
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::OpenWebStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.OpenWebStore");

	Uloadout_screen_bpw_C_OpenWebStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.CloseTintWindow
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::CloseTintWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.CloseTintWindow");

	Uloadout_screen_bpw_C_CloseTintWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenAdvancedMenu
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::OpenAdvancedMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.OpenAdvancedMenu");

	Uloadout_screen_bpw_C_OpenAdvancedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.GTFO");

	Uloadout_screen_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.FocusWeapons
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::FocusWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.FocusWeapons");

	Uloadout_screen_bpw_C_FocusWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.FocusArmour
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::FocusArmour()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.FocusArmour");

	Uloadout_screen_bpw_C_FocusArmour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.CocusConsumables
// (BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::CocusConsumables()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.CocusConsumables");

	Uloadout_screen_bpw_C_CocusConsumables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.PushFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::PushFocus(TEnumAsByte<ELoadout_ScreenMode> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.PushFocus");

	Uloadout_screen_bpw_C_PushFocus_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On Back__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On Back__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature(const class FString& InstanceId, int SlotIndex, EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.SlotIndex = SlotIndex;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdolLCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uloadout_screen_bpw_C::UpdatePaperdolLCamera(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdolLCamera");

	Uloadout_screen_bpw_C_UpdatePaperdolLCamera_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BlockInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BlockInput(bool BlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BlockInput");

	Uloadout_screen_bpw_C_BlockInput_Params params;
	params.BlockInput = BlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uloadout_screen_bpw_C::BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uloadout_screen_bpw_C::BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            quickslot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature(int quickslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature_Params params;
	params.quickslot = quickslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature
// (BlueprintEvent)

void Uloadout_screen_bpw_C::BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature");

	Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ExecuteUbergraph_loadout_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::ExecuteUbergraph_loadout_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ExecuteUbergraph_loadout_screen_bpw");

	Uloadout_screen_bpw_C_ExecuteUbergraph_loadout_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uloadout_screen_bpw_C::UpdatePaperdoll_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature");

	Uloadout_screen_bpw_C_UpdatePaperdoll_Transmog__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BlockParentInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BlockParentInput__DelegateSignature(bool BlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BlockParentInput__DelegateSignature");

	Uloadout_screen_bpw_C_BlockParentInput__DelegateSignature_Params params;
	params.BlockInput = BlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Anim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::UpdatePaperdoll_Anim__DelegateSignature(EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Anim__DelegateSignature");

	Uloadout_screen_bpw_C_UpdatePaperdoll_Anim__DelegateSignature_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ResetCamera__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::ResetCamera__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ResetCamera__DelegateSignature");

	Uloadout_screen_bpw_C_ResetCamera__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdollCam_LocRot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uloadout_screen_bpw_C::UpdatePaperdollCam_LocRot__DelegateSignature(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdollCam_LocRot__DelegateSignature");

	Uloadout_screen_bpw_C_UpdatePaperdollCam_LocRot__DelegateSignature_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.ExitLoadout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::ExitLoadout__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.ExitLoadout__DelegateSignature");

	Uloadout_screen_bpw_C_ExitLoadout__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_ArmourTint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     NewParam1                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::UpdatePaperdoll_ArmourTint__DelegateSignature(const struct FDyeVariant& NewParam, EArmorType NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_ArmourTint__DelegateSignature");

	Uloadout_screen_bpw_C_UpdatePaperdoll_ArmourTint__DelegateSignature_Params params;
	params.NewParam = NewParam;
	params.NewParam1 = NewParam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.RefreshPaperdoll_Pose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::RefreshPaperdoll_Pose__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.RefreshPaperdoll_Pose__DelegateSignature");

	Uloadout_screen_bpw_C_RefreshPaperdoll_Pose__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_EquipNewItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uloadout_screen_bpw_C::UpdatePaperdoll_EquipNewItem__DelegateSignature(const class FString& ItemID, EItemGroupType Type, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_EquipNewItem__DelegateSignature");

	Uloadout_screen_bpw_C_UpdatePaperdoll_EquipNewItem__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Type = Type;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.BackToMainStage_From__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::BackToMainStage_From__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.BackToMainStage_From__DelegateSignature");

	Uloadout_screen_bpw_C_BackToMainStage_From__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_Consumables__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uloadout_screen_bpw_C::LoadoutCategorySelected_Consumables__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_Consumables__DelegateSignature");

	Uloadout_screen_bpw_C_LoadoutCategorySelected_Consumables__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_R_Armour__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::LoadoutCategorySelected_R_Armour__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_R_Armour__DelegateSignature");

	Uloadout_screen_bpw_C_LoadoutCategorySelected_R_Armour__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_L_Weapons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::LoadoutCategorySelected_L_Weapons__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_L_Weapons__DelegateSignature");

	Uloadout_screen_bpw_C_LoadoutCategorySelected_L_Weapons__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategoryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_screen_bpw_C::LoadoutCategoryHovered__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategoryHovered__DelegateSignature");

	Uloadout_screen_bpw_C_LoadoutCategoryHovered__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
