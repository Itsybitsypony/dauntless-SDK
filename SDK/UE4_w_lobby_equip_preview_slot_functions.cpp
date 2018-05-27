// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_equip_preview_slot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.OnLoaded_8BDD386A443CC4E226662EBB82568CC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_equip_preview_slot_C::OnLoaded_8BDD386A443CC4E226662EBB82568CC7(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.OnLoaded_8BDD386A443CC4E226662EBB82568CC7");

	Uw_lobby_equip_preview_slot_C_OnLoaded_8BDD386A443CC4E226662EBB82568CC7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_lobby_equip_preview_slot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Construct");

	Uw_lobby_equip_preview_slot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Set Lobby Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyItemData    LobbyItemData                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_lobby_equip_preview_slot_C::Set_Lobby_Item(const struct FArchonLobbyItemData& LobbyItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Set Lobby Item");

	Uw_lobby_equip_preview_slot_C_Set_Lobby_Item_Params params;
	params.LobbyItemData = LobbyItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_equip_preview_slot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.PreConstruct");

	Uw_lobby_equip_preview_slot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Try Load Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_lobby_equip_preview_slot_C::Try_Load_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Try Load Icon");

	Uw_lobby_equip_preview_slot_C_Try_Load_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Use Default Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_lobby_equip_preview_slot_C::Use_Default_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.Use Default Icon");

	Uw_lobby_equip_preview_slot_C_Use_Default_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.ExecuteUbergraph_w_lobby_equip_preview_slot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_equip_preview_slot_C::ExecuteUbergraph_w_lobby_equip_preview_slot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_equip_preview_slot.w_lobby_equip_preview_slot_C.ExecuteUbergraph_w_lobby_equip_preview_slot");

	Uw_lobby_equip_preview_slot_C_ExecuteUbergraph_w_lobby_equip_preview_slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
