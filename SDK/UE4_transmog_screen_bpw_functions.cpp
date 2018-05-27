// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_transmog_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Button Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Label                          (Parm, OutParm)

void Utransmog_screen_bpw_C::Get_Transmog_Button_Label(struct FText* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Button Label");

	Utransmog_screen_bpw_C_Get_Transmog_Button_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Player Token Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Refresh_Player_Token_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Player Token Count");

	Utransmog_screen_bpw_C_Refresh_Player_Token_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Utransmog_screen_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyUp");

	Utransmog_screen_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Utransmog_screen_bpw_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.OnPreviewKeyDown");

	Utransmog_screen_bpw_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Is Apply Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Utransmog_screen_bpw_C::Is_Apply_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Is Apply Key");

	Utransmog_screen_bpw_C_Is_Apply_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Preview ItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Utransmog_screen_bpw_C::Get_Transmog_Preview_ItemId(class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Preview ItemId");

	Utransmog_screen_bpw_C_Get_Transmog_Preview_ItemId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Has Selected New Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Utransmog_screen_bpw_C::Has_Selected_New_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Has Selected New Target");

	Utransmog_screen_bpw_C_Has_Selected_New_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Can Transmog Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Utransmog_screen_bpw_C::Can_Transmog_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Can Transmog Target");

	Utransmog_screen_bpw_C_Can_Transmog_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Target Token Cost
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Transmog_Cost                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Utransmog_screen_bpw_C::Get_Target_Token_Cost(int* Transmog_Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Get Target Token Cost");

	Utransmog_screen_bpw_C_Get_Target_Token_Cost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transmog_Cost != nullptr)
		*Transmog_Cost = params.Transmog_Cost;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Player Token Count
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            NumTokens                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Utransmog_screen_bpw_C::Get_Player_Token_Count(int* NumTokens)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Get Player Token Count");

	Utransmog_screen_bpw_C_Get_Player_Token_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumTokens != nullptr)
		*NumTokens = params.NumTokens;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Button Legend
// (Public, BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Refresh_Button_Legend()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Button Legend");

	Utransmog_screen_bpw_C_Refresh_Button_Legend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Setup Revert Transmog
// (Public, BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Setup_Revert_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Setup Revert Transmog");

	Utransmog_screen_bpw_C_Setup_Revert_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Utransmog_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyDown");

	Utransmog_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Item Details
// (Public, BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Refresh_Item_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Item Details");

	Utransmog_screen_bpw_C_Refresh_Item_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Is Armour Transmog Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Armour* TransmogItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Utransmog_screen_bpw_C::Is_Armour_Transmog_Target(class UObject* Target, class UArchonInventoryItem_Armour* TransmogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Is Armour Transmog Target");

	Utransmog_screen_bpw_C_Is_Armour_Transmog_Target_Params params;
	params.Target = Target;
	params.TransmogItem = TransmogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Available Armour Transmog Targets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          Targets                        (Parm, OutParm, ZeroConstructor)

void Utransmog_screen_bpw_C::Get_Available_Armour_Transmog_Targets(TArray<class FString>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Get Available Armour Transmog Targets");

	Utransmog_screen_bpw_C_Get_Available_Armour_Transmog_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Utransmog_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.GetDefaultFocusedWidget");

	Utransmog_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Targets Panel
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Refresh_Targets_Panel()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Targets Panel");

	Utransmog_screen_bpw_C_Refresh_Targets_Panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Utransmog_screen_bpw_C::Transmog_Target_Selected(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Selected");

	Utransmog_screen_bpw_C_Transmog_Target_Selected_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utransmog_screen_bpw_C::Transmog_Target_Focused(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Focused");

	Utransmog_screen_bpw_C_Transmog_Target_Focused_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Events
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_Transmog_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Events");

	Utransmog_screen_bpw_C_Bind_Transmog_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Selected
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_Transmog_Target_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Selected");

	Utransmog_screen_bpw_C_Bind_Transmog_Target_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Focused
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_Transmog_Target_Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Focused");

	Utransmog_screen_bpw_C_Bind_Transmog_Target_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Select Current Transmog Target
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Select_Current_Transmog_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Select Current Transmog Target");

	Utransmog_screen_bpw_C_Select_Current_Transmog_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Close Transmog
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Close_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Close Transmog");

	Utransmog_screen_bpw_C_Close_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Revert Changes
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Revert_Changes()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Revert Changes");

	Utransmog_screen_bpw_C_Revert_Changes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.On Confirm Transmog
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::On_Confirm_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.On Confirm Transmog");

	Utransmog_screen_bpw_C_On_Confirm_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Clear Selected
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_Transmog_Clear_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Clear Selected");

	Utransmog_screen_bpw_C_Bind_Transmog_Clear_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Clear Selected
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Transmog_Clear_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Clear Selected");

	Utransmog_screen_bpw_C_Transmog_Clear_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.On Selected Transmog Updated
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::On_Selected_Transmog_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.On Selected Transmog Updated");

	Utransmog_screen_bpw_C_On_Selected_Transmog_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Apply Complete
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_to_Apply_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Apply Complete");

	Utransmog_screen_bpw_C_Bind_to_Apply_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Apply Button Mouse Events
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_Apply_Button_Mouse_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Apply Button Mouse Events");

	Utransmog_screen_bpw_C_Bind_Apply_Button_Mouse_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Start
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::On_Apply_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Start");

	Utransmog_screen_bpw_C_On_Apply_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Cancel
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::On_Apply_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Cancel");

	Utransmog_screen_bpw_C_On_Apply_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.On Instance Items Updated
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::On_Instance_Items_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.On Instance Items Updated");

	Utransmog_screen_bpw_C_On_Instance_Items_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh All
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Refresh_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh All");

	Utransmog_screen_bpw_C_Refresh_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Utransmog_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Construct");

	Utransmog_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utransmog_screen_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.PreConstruct");

	Utransmog_screen_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Inventory Change
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::Bind_to_Inventory_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Inventory Change");

	Utransmog_screen_bpw_C_Bind_to_Inventory_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.OnInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void Utransmog_screen_bpw_C::OnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.OnInventoryChanged");

	Utransmog_screen_bpw_C_OnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.ExecuteUbergraph_transmog_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utransmog_screen_bpw_C::ExecuteUbergraph_transmog_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.ExecuteUbergraph_transmog_screen_bpw");

	Utransmog_screen_bpw_C_ExecuteUbergraph_transmog_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function transmog_screen_bpw.transmog_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Utransmog_screen_bpw_C::UpdatePaperdoll_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function transmog_screen_bpw.transmog_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature");

	Utransmog_screen_bpw_C_UpdatePaperdoll_Transmog__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
