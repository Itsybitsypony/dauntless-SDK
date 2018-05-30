// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_killvolume_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abehemoth_killvolume_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.UserConstructionScript");

	Abehemoth_killvolume_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_killvolume_bp_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ReceiveActorBeginOverlap");

	Abehemoth_killvolume_bp_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ExecuteUbergraph_behemoth_killvolume_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_killvolume_bp_C::ExecuteUbergraph_behemoth_killvolume_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_killvolume_bp.behemoth_killvolume_bp_C.ExecuteUbergraph_behemoth_killvolume_bp");

	Abehemoth_killvolume_bp_C_ExecuteUbergraph_behemoth_killvolume_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
