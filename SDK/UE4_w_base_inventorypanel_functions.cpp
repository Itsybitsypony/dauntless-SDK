// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_inventorypanel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_base_inventorypanel.w_base_inventorypanel_C.GetDesiredFocusWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::GetDesiredFocusWidget(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.GetDesiredFocusWidget");

	Uw_base_inventorypanel_C_GetDesiredFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildByItemOrInstanceID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ChildIndexFocused              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::FocusChildByItemOrInstanceID(const class FString& ItemID, const class FString& InstanceId, int* ChildIndexFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildByItemOrInstanceID");

	Uw_base_inventorypanel_C_FocusChildByItemOrInstanceID_Params params;
	params.ItemID = ItemID;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildIndexFocused != nullptr)
		*ChildIndexFocused = params.ChildIndexFocused;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ChildWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::GetChild(int ChildIndex, class UWidget** ChildWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.GetChild");

	Uw_base_inventorypanel_C_GetChild_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidget != nullptr)
		*ChildWidget = params.ChildWidget;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.ResetLastFocusedIndex
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_base_inventorypanel_C::ResetLastFocusedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.ResetLastFocusedIndex");

	Uw_base_inventorypanel_C_ResetLastFocusedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_base_inventorypanel_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnFocusReceived");

	Uw_base_inventorypanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.GetCurrentFocusedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentFocusedIndex            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::GetCurrentFocusedIndex(int* CurrentFocusedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.GetCurrentFocusedIndex");

	Uw_base_inventorypanel_C_GetCurrentFocusedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFocusedIndex != nullptr)
		*CurrentFocusedIndex = params.CurrentFocusedIndex;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChildIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::FocusChildIndex(int ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.FocusChildIndex");

	Uw_base_inventorypanel_C_FocusChildIndex_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.SortInventoryPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_direction>   SortDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::SortInventoryPanel(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.SortInventoryPanel");

	Uw_base_inventorypanel_C_SortInventoryPanel_Params params;
	params.SortType = SortType;
	params.SortDirection = SortDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_base_inventorypanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.Construct");

	Uw_base_inventorypanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_base_inventorypanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.Destruct");

	Uw_base_inventorypanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnDataViewChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_base_inventorypanel_C::OnDataViewChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnDataViewChanged");

	Uw_base_inventorypanel_C_OnDataViewChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused_Event_1");

	Uw_base_inventorypanel_C_OnItemFocused_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.ExecuteUbergraph_w_base_inventorypanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::ExecuteUbergraph_w_base_inventorypanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.ExecuteUbergraph_w_base_inventorypanel");

	Uw_base_inventorypanel_C_ExecuteUbergraph_w_base_inventorypanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemSecondaryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemSecondaryClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemSecondaryClicked__DelegateSignature");

	Uw_base_inventorypanel_C_OnItemSecondaryClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemFocused__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemFocused__DelegateSignature");

	Uw_base_inventorypanel_C_OnItemFocused__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UnHoveredIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemUnHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int UnHoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemUnHovered__DelegateSignature");

	Uw_base_inventorypanel_C_OnItemUnHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.UnHoveredIndex = UnHoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            HoveredIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemHovered__DelegateSignature");

	Uw_base_inventorypanel_C_OnItemHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.HoveredIndex = HoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_inventorypanel_C::OnItemClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_inventorypanel.w_base_inventorypanel_C.OnItemClicked__DelegateSignature");

	Uw_base_inventorypanel_C_OnItemClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
