#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_killvolume_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.UserConstructionScript
struct Abehemoth_killvolume_bp_C_UserConstructionScript_Params
{
};

// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ReceiveActorBeginOverlap
struct Abehemoth_killvolume_bp_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ExecuteUbergraph_behemoth_killvolume_bp
struct Abehemoth_killvolume_bp_C_ExecuteUbergraph_behemoth_killvolume_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
