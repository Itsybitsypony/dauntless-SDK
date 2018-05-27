// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Hammer_Primed_Blast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_GameplayCue_Combat_Hammer_Primed_Blast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.UserConstructionScript");

	AGC_GameplayCue_Combat_Hammer_Primed_Blast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_GameplayCue_Combat_Hammer_Primed_Blast_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.K2_HandleGameplayCue");

	AGC_GameplayCue_Combat_Hammer_Primed_Blast_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.ExecuteUbergraph_GC_GameplayCue_Combat_Hammer_Primed_Blast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_Hammer_Primed_Blast_C::ExecuteUbergraph_GC_GameplayCue_Combat_Hammer_Primed_Blast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Hammer_Primed_Blast.GC_GameplayCue_Combat_Hammer_Primed_Blast_C.ExecuteUbergraph_GC_GameplayCue_Combat_Hammer_Primed_Blast");

	AGC_GameplayCue_Combat_Hammer_Primed_Blast_C_ExecuteUbergraph_GC_GameplayCue_Combat_Hammer_Primed_Blast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
