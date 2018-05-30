// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_event_graph_bpf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_event_graph_bpf.behemoth_event_graph_bpf_C.BehemothEventGraphTick
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbehemoth_anim_variables_struc AnimVariables                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fbehemoth_state_anim_variables_struct StateVariables                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APawn*                   Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_event_graph_bpf_C::STATIC_BehemothEventGraphTick(class APawn* Owner, float DeltaTime, class UObject* __WorldContext, struct Fbehemoth_anim_variables_struc* AnimVariables, struct Fbehemoth_state_anim_variables_struct* StateVariables)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_event_graph_bpf.behemoth_event_graph_bpf_C.BehemothEventGraphTick");

	Ubehemoth_event_graph_bpf_C_BehemothEventGraphTick_Params params;
	params.Owner = Owner;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimVariables != nullptr)
		*AnimVariables = params.AnimVariables;
	if (StateVariables != nullptr)
		*StateVariables = params.StateVariables;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
