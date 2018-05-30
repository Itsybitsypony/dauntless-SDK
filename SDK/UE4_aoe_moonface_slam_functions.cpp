// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_moonface_slam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_moonface_slam.aoe_moonface_slam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aaoe_moonface_slam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_moonface_slam.aoe_moonface_slam_C.UserConstructionScript");

	Aaoe_moonface_slam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_moonface_slam.aoe_moonface_slam_C.OnActorHitByAoE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_moonface_slam_C::OnActorHitByAoE(class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_moonface_slam.aoe_moonface_slam_C.OnActorHitByAoE");

	Aaoe_moonface_slam_C_OnActorHitByAoE_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_moonface_slam.aoe_moonface_slam_C.ExecuteUbergraph_aoe_moonface_slam
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_moonface_slam_C::ExecuteUbergraph_aoe_moonface_slam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_moonface_slam.aoe_moonface_slam_C.ExecuteUbergraph_aoe_moonface_slam");

	Aaoe_moonface_slam_C_ExecuteUbergraph_aoe_moonface_slam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
