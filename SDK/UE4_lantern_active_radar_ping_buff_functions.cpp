// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_active_radar_ping_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alantern_active_radar_ping_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.UserConstructionScript");

	Alantern_active_radar_ping_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Alantern_active_radar_ping_buff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.MulticastOnAdded");

	Alantern_active_radar_ping_buff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.ExecuteUbergraph_lantern_active_radar_ping_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_active_radar_ping_buff_C::ExecuteUbergraph_lantern_active_radar_ping_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_radar_ping_buff.lantern_active_radar_ping_buff_C.ExecuteUbergraph_lantern_active_radar_ping_buff");

	Alantern_active_radar_ping_buff_C_ExecuteUbergraph_lantern_active_radar_ping_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
