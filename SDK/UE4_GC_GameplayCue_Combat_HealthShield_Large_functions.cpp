// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_HealthShield_Large_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_GameplayCue_Combat_HealthShield_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.UserConstructionScript");

	AGC_GameplayCue_Combat_HealthShield_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGC_GameplayCue_Combat_HealthShield_Large_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__FinishedFunc");

	AGC_GameplayCue_Combat_HealthShield_Large_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGC_GameplayCue_Combat_HealthShield_Large_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.Timeline_0__UpdateFunc");

	AGC_GameplayCue_Combat_HealthShield_Large_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_GameplayCue_Combat_HealthShield_Large_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.K2_HandleGameplayCue");

	AGC_GameplayCue_Combat_HealthShield_Large_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_HealthShield_Large_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ReceiveTick");

	AGC_GameplayCue_Combat_HealthShield_Large_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_HealthShield_Large_C::ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_HealthShield_Large.GC_GameplayCue_Combat_HealthShield_Large_C.ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large");

	AGC_GameplayCue_Combat_HealthShield_Large_C_ExecuteUbergraph_GC_GameplayCue_Combat_HealthShield_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
