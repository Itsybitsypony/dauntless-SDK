// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_mission_builder_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedAtmosphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Udebug_mission_builder_bpw_C::GetSelectedAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedAtmosphere");

	Udebug_mission_builder_bpw_C_GetSelectedAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Udebug_mission_builder_bpw_C::GetSelectedMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedMap");

	Udebug_mission_builder_bpw_C_GetSelectedMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedBehemoth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Udebug_mission_builder_bpw_C::GetSelectedBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedBehemoth");

	Udebug_mission_builder_bpw_C_GetSelectedBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReadyLeader
// (Public, BlueprintCallable, BlueprintEvent)

void Udebug_mission_builder_bpw_C::ReadyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReadyLeader");

	Udebug_mission_builder_bpw_C_ReadyLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ComboBoxItemFormatting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Udebug_mission_builder_bpw_C::ComboBoxItemFormatting(const class FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ComboBoxItemFormatting");

	Udebug_mission_builder_bpw_C_ComboBoxItemFormatting_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Udebug_mission_builder_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnKeyDown");

	Udebug_mission_builder_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Udebug_mission_builder_bpw_C::OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9");

	Udebug_mission_builder_bpw_C_OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Udebug_mission_builder_bpw_C::OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9");

	Udebug_mission_builder_bpw_C_OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReturnFocusedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_MenuButton_C*         FocusedButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_mission_builder_bpw_C::ReturnFocusedButton(class Uw_MenuButton_C* FocusedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReturnFocusedButton");

	Udebug_mission_builder_bpw_C_ReturnFocusedButton_Params params;
	params.FocusedButton = FocusedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Udebug_mission_builder_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.Construct");

	Udebug_mission_builder_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_mission_builder_bpw_C::BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature(int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature");

	Udebug_mission_builder_bpw_C_BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature_Params params;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ExecuteUbergraph_debug_mission_builder_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udebug_mission_builder_bpw_C::ExecuteUbergraph_debug_mission_builder_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ExecuteUbergraph_debug_mission_builder_bpw");

	Udebug_mission_builder_bpw_C_ExecuteUbergraph_debug_mission_builder_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
