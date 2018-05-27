// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FallRecoveryVolume_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FallRecoveryVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.UserConstructionScript");

	ABP_FallRecoveryVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FallRecoveryVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ReceiveBeginPlay");

	ABP_FallRecoveryVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.OnActorBeginOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FallRecoveryVolume_C::OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.OnActorBeginOverlap_Event_1");

	ABP_FallRecoveryVolume_C_OnActorBeginOverlap_Event_1_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ExecuteUbergraph_BP_FallRecoveryVolume
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FallRecoveryVolume_C::ExecuteUbergraph_BP_FallRecoveryVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FallRecoveryVolume.BP_FallRecoveryVolume_C.ExecuteUbergraph_BP_FallRecoveryVolume");

	ABP_FallRecoveryVolume_C_ExecuteUbergraph_BP_FallRecoveryVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
