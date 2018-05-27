// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Trail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetFirstTrailThatMeetsRequirements
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct Ftag_to_combat_trails_struct> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Ftag_to_combat_trails_struct FirstMatch                     (Parm, OutParm)
// bool                           FoundTrail                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_Trail_C::GetFirstTrailThatMeetsRequirements(const struct FGameplayTagContainer& Tags, class AActor* Owner, TArray<struct Ftag_to_combat_trails_struct>* Effects, struct Ftag_to_combat_trails_struct* FirstMatch, bool* FoundTrail)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetFirstTrailThatMeetsRequirements");

	AGC_GameplayCue_Combat_Trail_C_GetFirstTrailThatMeetsRequirements_Params params;
	params.Tags = Tags;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (FirstMatch != nullptr)
		*FirstMatch = params.FirstMatch;
	if (FoundTrail != nullptr)
		*FoundTrail = params.FoundTrail;
}


// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetMeshAndSocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   TopSocket                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BottomSocket                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   LeftSocket                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   RightSocket                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   MiddleSocket                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_Trail_C::GetMeshAndSocket(const struct FGameplayTagContainer& Tags, class AActor* Actor, class USkeletalMeshComponent** Mesh, struct FName* TopSocket, struct FName* BottomSocket, struct FName* LeftSocket, struct FName* RightSocket, struct FName* MiddleSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetMeshAndSocket");

	AGC_GameplayCue_Combat_Trail_C_GetMeshAndSocket_Params params;
	params.Tags = Tags;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
	if (TopSocket != nullptr)
		*TopSocket = params.TopSocket;
	if (BottomSocket != nullptr)
		*BottomSocket = params.BottomSocket;
	if (LeftSocket != nullptr)
		*LeftSocket = params.LeftSocket;
	if (RightSocket != nullptr)
		*RightSocket = params.RightSocket;
	if (MiddleSocket != nullptr)
		*MiddleSocket = params.MiddleSocket;
}


// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetTrailEffectsForTags
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FStruct_TagToTrailEffects> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStruct_TagToTrailEffects> Particle_Systems               (Parm, OutParm, ZeroConstructor)

void AGC_GameplayCue_Combat_Trail_C::GetTrailEffectsForTags(const struct FGameplayTagContainer& Tags, TArray<struct FStruct_TagToTrailEffects>* Effects, TArray<struct FStruct_TagToTrailEffects>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetTrailEffectsForTags");

	AGC_GameplayCue_Combat_Trail_C_GetTrailEffectsForTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_GameplayCue_Combat_Trail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.UserConstructionScript");

	AGC_GameplayCue_Combat_Trail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_GameplayCue_Combat_Trail_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.K2_HandleGameplayCue");

	AGC_GameplayCue_Combat_Trail_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.ExecuteUbergraph_GC_GameplayCue_Combat_Trail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_GameplayCue_Combat_Trail_C::ExecuteUbergraph_GC_GameplayCue_Combat_Trail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.ExecuteUbergraph_GC_GameplayCue_Combat_Trail");

	AGC_GameplayCue_Combat_Trail_C_ExecuteUbergraph_GC_GameplayCue_Combat_Trail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
