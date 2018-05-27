// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_modifier_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_lobby_modifier_item.w_lobby_modifier_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_lobby_modifier_item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_modifier_item.w_lobby_modifier_item_C.Construct");

	Uw_lobby_modifier_item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_modifier_item.w_lobby_modifier_item_C.ExecuteUbergraph_w_lobby_modifier_item
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_modifier_item_C::ExecuteUbergraph_w_lobby_modifier_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_modifier_item.w_lobby_modifier_item_C.ExecuteUbergraph_w_lobby_modifier_item");

	Uw_lobby_modifier_item_C_ExecuteUbergraph_w_lobby_modifier_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
