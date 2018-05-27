// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_cell_gear_slot_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_slot_entry_C::SetIsSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetIsSelected");

	Ubpw_debug_cell_gear_slot_entry_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_debug_cell_gear_slot_entry_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.OnMouseButtonDown_1");

	Ubpw_debug_cell_gear_slot_entry_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECellType                      CellType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemRarityLevelType           CellRarity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  EquippedName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            NameColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class Ubpw_debug_cell_gear_entry_C* OwningWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellSlotIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Empty                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemRarityLevelType           EquippedItemRarity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_slot_entry_C::SetData(ECellType CellType, EItemRarityLevelType CellRarity, const class FString& EquippedName, const struct FLinearColor& NameColor, class Ubpw_debug_cell_gear_entry_C* OwningWidget, int CellSlotIndex, bool Empty, EItemRarityLevelType EquippedItemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetData");

	Ubpw_debug_cell_gear_slot_entry_C_SetData_Params params;
	params.CellType = CellType;
	params.CellRarity = CellRarity;
	params.EquippedName = EquippedName;
	params.NameColor = NameColor;
	params.OwningWidget = OwningWidget;
	params.CellSlotIndex = CellSlotIndex;
	params.Empty = Empty;
	params.EquippedItemRarity = EquippedItemRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
