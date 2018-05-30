#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_event_graph_bpf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_event_graph_bpf.behemoth_event_graph_bpf_C
// 0x0000 (0x0028 - 0x0028)
class Ubehemoth_event_graph_bpf_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_event_graph_bpf.behemoth_event_graph_bpf_C");
		return ptr;
	}


	void STATIC_BehemothEventGraphTick(class APawn* Owner, float DeltaTime, class UObject* __WorldContext, struct Fbehemoth_anim_variables_struc* AnimVariables, struct Fbehemoth_state_anim_variables_struct* StateVariables);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
