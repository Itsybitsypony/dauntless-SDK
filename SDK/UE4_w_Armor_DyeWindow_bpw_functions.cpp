// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Armor_DyeWindow_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Preview Dye Variant
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDyeVariant             InVariant                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDyeVariant             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDyeVariant Uw_Armor_DyeWindow_bpw_C::Get_Preview_Dye_Variant(struct FDyeVariant* InVariant)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Preview Dye Variant");

	Uw_Armor_DyeWindow_bpw_C_Get_Preview_Dye_Variant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVariant != nullptr)
		*InVariant = params.InVariant;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Dye Target Item ID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_Armor_DyeWindow_bpw_C::Get_Dye_Target_Item_ID(class UArchonInventoryItem* Item, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Dye Target Item ID");

	Uw_Armor_DyeWindow_bpw_C_Get_Dye_Target_Item_ID_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Validate Dye RowName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimary                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ValidRowName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Validate_Dye_RowName(const struct FName& RowName, bool bIsPrimary, struct FName* ValidRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Validate Dye RowName");

	Uw_Armor_DyeWindow_bpw_C_Validate_Dye_RowName_Params params;
	params.RowName = RowName;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidRowName != nullptr)
		*ValidRowName = params.ValidRowName;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Temp_AddPhx4Phx
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::Temp_AddPhx4Phx()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Temp_AddPhx4Phx");

	Uw_Armor_DyeWindow_bpw_C_Temp_AddPhx4Phx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RefreshButtonLegend
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::RefreshButtonLegend()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RefreshButtonLegend");

	Uw_Armor_DyeWindow_bpw_C_RefreshButtonLegend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Has Made Dye Changes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Armor_DyeWindow_bpw_C::Has_Made_Dye_Changes()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Has Made Dye Changes");

	Uw_Armor_DyeWindow_bpw_C_Has_Made_Dye_Changes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_Armor_DyeWindow_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDefaultFocusedWidget");

	Uw_Armor_DyeWindow_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup Default Dye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Armor_DyeWindow_bpw_C::Setup_Default_Dye(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup Default Dye");

	Uw_Armor_DyeWindow_bpw_C_Setup_Default_Dye_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RemoveDefaultTints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           RowNamesIn                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           RowNamesFiltered               (Parm, OutParm, ZeroConstructor)

void Uw_Armor_DyeWindow_bpw_C::RemoveDefaultTints(TArray<struct FName>* RowNamesIn, TArray<struct FName>* RowNamesFiltered)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RemoveDefaultTints");

	Uw_Armor_DyeWindow_bpw_C_RemoveDefaultTints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowNamesIn != nullptr)
		*RowNamesIn = params.RowNamesIn;
	if (RowNamesFiltered != nullptr)
		*RowNamesFiltered = params.RowNamesFiltered;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Armor_DyeWindow_bpw_C::Get_Secondary_Default_DyeBU_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_Visibility_1");

	Uw_Armor_DyeWindow_bpw_C_Get_Secondary_Default_DyeBU_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Armor_DyeWindow_bpw_C::Get_Primary_Default_DyeBU_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_Visibility_1");

	Uw_Armor_DyeWindow_bpw_C_Get_Primary_Default_DyeBU_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_Armor_DyeWindow_bpw_C::Get_Secondary_Default_DyeBU_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_ColorAndOpacity_1");

	Uw_Armor_DyeWindow_bpw_C_Get_Secondary_Default_DyeBU_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_Armor_DyeWindow_bpw_C::Get_Primary_Default_DyeBU_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1");

	Uw_Armor_DyeWindow_bpw_C_Get_Primary_Default_DyeBU_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.SetTintValuesAndClose
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::SetTintValuesAndClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.SetTintValuesAndClose");

	Uw_Armor_DyeWindow_bpw_C_SetTintValuesAndClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Build Dye Swatches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAllTints                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Build_Dye_Swatches(bool ShowAllTints)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Build Dye Swatches");

	Uw_Armor_DyeWindow_bpw_C_Build_Dye_Swatches_Params params;
	params.ShowAllTints = ShowAllTints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDyeInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeN_Row                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)
// int                            RemainingUses                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::GetDyeInfo(const struct FName& DyeN_Row, class FString* ItemInstanceId, int* RemainingUses, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDyeInfo");

	Uw_Armor_DyeWindow_bpw_C_GetDyeInfo_Params params;
	params.DyeN_Row = DyeN_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
	if (RemainingUses != nullptr)
		*RemainingUses = params.RemainingUses;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Armor_DyeWindow_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.OnKeyDown");

	Uw_Armor_DyeWindow_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup");

	Uw_Armor_DyeWindow_bpw_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetSelectedArmourItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_Armour* ArmourItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::GetSelectedArmourItem(class UArchonInventoryItem_Armour** ArmourItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetSelectedArmourItem");

	Uw_Armor_DyeWindow_bpw_C_GetSelectedArmourItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmourItem != nullptr)
		*ArmourItem = params.ArmourItem;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Manage Selection Changes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Primary_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Manage_Selection_Changes(bool Primary_)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Manage Selection Changes");

	Uw_Armor_DyeWindow_bpw_C_Manage_Selection_Changes_Params params;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Primary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Change_Primary_Color(class Ubpw_colorpicksquare_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Primary Color");

	Uw_Armor_DyeWindow_bpw_C_Change_Primary_Color_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Color Selection Made
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Reference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Color_Selection_Made(class Ubpw_colorpicksquare_C* Color_Picker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Color Selection Made");

	Uw_Armor_DyeWindow_bpw_C_Color_Selection_Made_Params params;
	params.Color_Picker_Reference = Color_Picker_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetPrimary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  DyeButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::ResetPrimary(class Ubpw_colorpicksquare_C* DyeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetPrimary");

	Uw_Armor_DyeWindow_bpw_C_ResetPrimary_Params params;
	params.DyeButton = DyeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetSecondary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  DyeButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::ResetSecondary(class Ubpw_colorpicksquare_C* DyeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetSecondary");

	Uw_Armor_DyeWindow_bpw_C_ResetSecondary_Params params;
	params.DyeButton = DyeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Secondary Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Square            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Select_Secondary_Slot(class Ubpw_colorpicksquare_C* Color_Picker_Square)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Secondary Slot");

	Uw_Armor_DyeWindow_bpw_C_Select_Secondary_Slot_Params params;
	params.Color_Picker_Square = Color_Picker_Square;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Primary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Update_Primary_Color(const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Primary Color");

	Uw_Armor_DyeWindow_bpw_C_Update_Primary_Color_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Primary Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Square            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Select_Primary_Slot(class Ubpw_colorpicksquare_C* Color_Picker_Square)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Primary Slot");

	Uw_Armor_DyeWindow_bpw_C_Select_Primary_Slot_Params params;
	params.Color_Picker_Square = Color_Picker_Square;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Secondary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Update_Secondary_Color(const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Secondary Color");

	Uw_Armor_DyeWindow_bpw_C_Update_Secondary_Color_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Secondary Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Reference                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::Change_Secondary_Color(class Ubpw_colorpicksquare_C* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Secondary Color");

	Uw_Armor_DyeWindow_bpw_C_Change_Secondary_Color_Params params;
	params.Reference = Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Construct");

	Uw_Armor_DyeWindow_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Revert Dyes
// (BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::Revert_Dyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Revert Dyes");

	Uw_Armor_DyeWindow_bpw_C_Revert_Dyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Close Screen");

	Uw_Armor_DyeWindow_bpw_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ExecuteUbergraph_w_Armor_DyeWindow_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::ExecuteUbergraph_w_Armor_DyeWindow_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ExecuteUbergraph_w_Armor_DyeWindow_bpw");

	Uw_Armor_DyeWindow_bpw_C_ExecuteUbergraph_w_Armor_DyeWindow_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.UpdatePaperdoll_Tints__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeStruct                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Armor_DyeWindow_bpw_C::UpdatePaperdoll_Tints__DelegateSignature(const struct FDyeVariant& DyeStruct, EArmorType ArmourPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.UpdatePaperdoll_Tints__DelegateSignature");

	Uw_Armor_DyeWindow_bpw_C_UpdatePaperdoll_Tints__DelegateSignature_Params params;
	params.DyeStruct = DyeStruct;
	params.ArmourPart = ArmourPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.CloseButton_RemoveTintWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Armor_DyeWindow_bpw_C::CloseButton_RemoveTintWindow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.CloseButton_RemoveTintWindow__DelegateSignature");

	Uw_Armor_DyeWindow_bpw_C_CloseButton_RemoveTintWindow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
