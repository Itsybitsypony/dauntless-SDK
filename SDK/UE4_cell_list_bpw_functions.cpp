// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_list_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cell_list_bpw.cell_list_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucell_list_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.OnKeyDown");

	Ucell_list_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_list_bpw.cell_list_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ucell_list_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.GetDefaultFocusedWidget");

	Ucell_list_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cell_list_bpw.cell_list_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucell_list_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.Construct");

	Ucell_list_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_list_bpw.cell_list_bpw_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Ucell_list_bpw_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.Close Screen");

	Ucell_list_bpw_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_list_bpw.cell_list_bpw_C.OnCellButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucell_list_bpw_C::OnCellButtonClicked(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.OnCellButtonClicked");

	Ucell_list_bpw_C_OnCellButtonClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_list_bpw.cell_list_bpw_C.ExecuteUbergraph_cell_list_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucell_list_bpw_C::ExecuteUbergraph_cell_list_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.ExecuteUbergraph_cell_list_bpw");

	Ucell_list_bpw_C_ExecuteUbergraph_cell_list_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cell_list_bpw.cell_list_bpw_C.CellSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucell_list_bpw_C::CellSelected__DelegateSignature(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function cell_list_bpw.cell_list_bpw_C.CellSelected__DelegateSignature");

	Ucell_list_bpw_C_CellSelected__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
