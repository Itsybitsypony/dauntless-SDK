// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_send_gameplay_event_to_actor_bpo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C.OnStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FArchonGameplayOperationArgs* Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Usend_gameplay_event_to_actor_bpo_C::OnStart(struct FArchonGameplayOperationArgs* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C.OnStart");

	Usend_gameplay_event_to_actor_bpo_C_OnStart_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C.ExecuteUbergraph_send_gameplay_event_to_actor_bpo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usend_gameplay_event_to_actor_bpo_C::ExecuteUbergraph_send_gameplay_event_to_actor_bpo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function send_gameplay_event_to_actor_bpo.send_gameplay_event_to_actor_bpo_C.ExecuteUbergraph_send_gameplay_event_to_actor_bpo");

	Usend_gameplay_event_to_actor_bpo_C_ExecuteUbergraph_send_gameplay_event_to_actor_bpo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
