// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_npc_submenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_base_npc_submenu.w_base_npc_submenu_C.InitializeFromNPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_base_npc_submenu_C::InitializeFromNPCMenu(class AArchonPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_npc_submenu.w_base_npc_submenu_C.InitializeFromNPCMenu");

	Uw_base_npc_submenu_C_InitializeFromNPCMenu_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_base_npc_submenu.w_base_npc_submenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_base_npc_submenu_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_npc_submenu.w_base_npc_submenu_C.OnKeyDown");

	Uw_base_npc_submenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_base_npc_submenu.w_base_npc_submenu_C.OnCloseRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_base_npc_submenu_C::OnCloseRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_base_npc_submenu.w_base_npc_submenu_C.OnCloseRequested__DelegateSignature");

	Uw_base_npc_submenu_C_OnCloseRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
