// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_infusion_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cell_infusion_bpw.cell_infusion_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucell_infusion_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.OnKeyDown");

	Ucell_infusion_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ucell_infusion_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.GetDefaultFocusedWidget");

	Ucell_infusion_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucell_infusion_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_1");

	Ucell_infusion_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Get_Image_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucell_infusion_bpw_C::Get_Image_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Get_Image_0_Visibility_1");

	Ucell_infusion_bpw_C_Get_Image_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_InfusionButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ucell_infusion_bpw_C::GetVisibility_InfusionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_InfusionButton");

	Ucell_infusion_bpw_C_GetVisibility_InfusionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.ClearTooltipInfo
// (Public, BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::ClearTooltipInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.ClearTooltipInfo");

	Ucell_infusion_bpw_C_ClearTooltipInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Set Cell Tooltip Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  CellID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Preview                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECellType                      SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::Set_Cell_Tooltip_Info(const class FString& CellID, int Slot, bool Preview, ECellType SlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Set Cell Tooltip Info");

	Ucell_infusion_bpw_C_Set_Cell_Tooltip_Info_Params params;
	params.CellID = CellID;
	params.Slot = Slot;
	params.Preview = Preview;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.SetPreviewCellID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Cell_Preview                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucell_infusion_bpw_C::SetPreviewCellID(const class FString& Cell_Preview)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.SetPreviewCellID");

	Ucell_infusion_bpw_C_SetPreviewCellID_Params params;
	params.Cell_Preview = Cell_Preview;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Get_txt_itemName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ucell_infusion_bpw_C::Get_txt_itemName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Get_txt_itemName_Text_1");

	Ucell_infusion_bpw_C_Get_txt_itemName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucell_infusion_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Construct");

	Ucell_infusion_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.SetupSlots
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucell_infusion_bpw_C::SetupSlots(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.SetupSlots");

	Ucell_infusion_bpw_C_SetupSlots_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.SlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECellType                      Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::SlotClicked(int Index, ECellType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.SlotClicked");

	Ucell_infusion_bpw_C_SlotClicked_Params params;
	params.Index = Index;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshAvailableCells
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::RefreshAvailableCells()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshAvailableCells");

	Ucell_infusion_bpw_C_RefreshAvailableCells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.PreviewSlottedCell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Cell_InstanceID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Cell_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucell_infusion_bpw_C::PreviewSlottedCell(const class FString& Cell_InstanceID, const class FString& Cell_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.PreviewSlottedCell");

	Ucell_infusion_bpw_C_PreviewSlottedCell_Params params;
	params.Cell_InstanceID = Cell_InstanceID;
	params.Cell_ID = Cell_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.UpdateTooltip
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::UpdateTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.UpdateTooltip");

	Ucell_infusion_bpw_C_UpdateTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.CommitChanges
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::CommitChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.CommitChanges");

	Ucell_infusion_bpw_C_CommitChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Clear All to None
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::Clear_All_to_None()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Clear All to None");

	Ucell_infusion_bpw_C_Clear_All_to_None_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On Key Hold Complete__DelegateSignature
// (BlueprintEvent)

void Ucell_infusion_bpw_C::BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On_Key_Hold_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On Key Hold Complete__DelegateSignature");

	Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On_Key_Hold_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On Mouse Down__DelegateSignature
// (BlueprintEvent)

void Ucell_infusion_bpw_C::BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On_Mouse_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On Mouse Down__DelegateSignature");

	Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On_Mouse_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On Mouse Up__DelegateSignature
// (BlueprintEvent)

void Ucell_infusion_bpw_C::BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On_Mouse_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On Mouse Up__DelegateSignature");

	Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On_Mouse_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.GetEquippedCellInfo
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::GetEquippedCellInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.GetEquippedCellInfo");

	Ucell_infusion_bpw_C_GetEquippedCellInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshItem
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::RefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshItem");

	Ucell_infusion_bpw_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.SlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Slot_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::SlotHovered(const class FString& ItemID, int Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.SlotHovered");

	Ucell_infusion_bpw_C_SlotHovered_Params params;
	params.ItemID = ItemID;
	params.Slot_Index = Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.UnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::UnHover(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.UnHover");

	Ucell_infusion_bpw_C_UnHover_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.TryCloseScreen
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::TryCloseScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.TryCloseScreen");

	Ucell_infusion_bpw_C_TryCloseScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.ExtractCellButtonClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_tooltip_cell_infusion_C* ObjectThatContainsButton       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::ExtractCellButtonClicked_Event_1(class Uw_tooltip_cell_infusion_C* ObjectThatContainsButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.ExtractCellButtonClicked_Event_1");

	Ucell_infusion_bpw_C_ExtractCellButtonClicked_Event_1_Params params;
	params.ObjectThatContainsButton = ObjectThatContainsButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.ConfirmExtraction
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::ConfirmExtraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.ConfirmExtraction");

	Ucell_infusion_bpw_C_ConfirmExtraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.Close Screen");

	Ucell_infusion_bpw_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.ExecuteUbergraph_cell_infusion_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_infusion_bpw_C::ExecuteUbergraph_cell_infusion_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.ExecuteUbergraph_cell_infusion_bpw");

	Ucell_infusion_bpw_C_ExecuteUbergraph_cell_infusion_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_infusion_bpw.cell_infusion_bpw_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ucell_infusion_bpw_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_infusion_bpw.cell_infusion_bpw_C.OnClosed__DelegateSignature");

	Ucell_infusion_bpw_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
