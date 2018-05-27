// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_generic_inventorypanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ChildWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::GetChild(int* ChildIndex, class UWidget** ChildWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetChild");

	Uw_generic_inventorypanel_C_GetChild_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidget != nullptr)
		*ChildWidget = params.ChildWidget;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnDataViewChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_generic_inventorypanel_C::OnDataViewChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnDataViewChanged");

	Uw_generic_inventorypanel_C_OnDataViewChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::AddItem(const class FString& InstanceId, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.AddItem");

	Uw_generic_inventorypanel_C_AddItem_Params params;
	params.InstanceId = InstanceId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::ItemClicked(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemClicked");

	Uw_generic_inventorypanel_C_ItemClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.FocusChildIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::FocusChildIndex(int* ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.FocusChildIndex");

	Uw_generic_inventorypanel_C_FocusChildIndex_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.DustButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::DustButtonClicked(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.DustButtonClicked");

	Uw_generic_inventorypanel_C_DustButtonClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetTooltipWarning_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_generic_inventorypanel_C::GetTooltipWarning_Event_1(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.GetTooltipWarning_Event_1");

	Uw_generic_inventorypanel_C_GetTooltipWarning_Event_1_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::ItemHovered(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemHovered");

	Uw_generic_inventorypanel_C_ItemHovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::ItemUnhovered(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemUnhovered");

	Uw_generic_inventorypanel_C_ItemUnhovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_equipment_list_entry_bpw_C* List_Entry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::Bind_to_ItemButtonClicked(class Uw_equipment_list_entry_bpw_C* List_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonClicked");

	Uw_generic_inventorypanel_C_Bind_to_ItemButtonClicked_Params params;
	params.List_Entry = List_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonSecondaryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_equipment_list_entry_bpw_C* List_Entry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::Bind_to_ItemButtonSecondaryClicked(class Uw_equipment_list_entry_bpw_C* List_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.Bind to ItemButtonSecondaryClicked");

	Uw_generic_inventorypanel_C_Bind_to_ItemButtonSecondaryClicked_Params params;
	params.List_Entry = List_Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemSecondaryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::ItemSecondaryClicked(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.ItemSecondaryClicked");

	Uw_generic_inventorypanel_C_ItemSecondaryClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.ExecuteUbergraph_w_generic_inventorypanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::ExecuteUbergraph_w_generic_inventorypanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.ExecuteUbergraph_w_generic_inventorypanel");

	Uw_generic_inventorypanel_C_ExecuteUbergraph_w_generic_inventorypanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_generic_inventorypanel_C::OnTooltipWarningChanged__DelegateSignature(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature");

	Uw_generic_inventorypanel_C_OnTooltipWarningChanged__DelegateSignature_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_generic_inventorypanel_C::OnSalvageButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_generic_inventorypanel.w_generic_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature");

	Uw_generic_inventorypanel_C_OnSalvageButtonClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
