// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_banner_plant_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function banner_plant_ab.banner_plant_ab_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubanner_plant_ab_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.K2_CanActivateAbility");

	Ubanner_plant_ab_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function banner_plant_ab.banner_plant_ab_C.DestroyActiveBanner
// (Public, BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::DestroyActiveBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.DestroyActiveBanner");

	Ubanner_plant_ab_C_DestroyActiveBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnCancelled_694552184707FA54A89019A60BF2ED0A
// (BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::OnCancelled_694552184707FA54A89019A60BF2ED0A()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnCancelled_694552184707FA54A89019A60BF2ED0A");

	Ubanner_plant_ab_C_OnCancelled_694552184707FA54A89019A60BF2ED0A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnInterrupted_694552184707FA54A89019A60BF2ED0A
// (BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::OnInterrupted_694552184707FA54A89019A60BF2ED0A()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnInterrupted_694552184707FA54A89019A60BF2ED0A");

	Ubanner_plant_ab_C_OnInterrupted_694552184707FA54A89019A60BF2ED0A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnBlendOut_694552184707FA54A89019A60BF2ED0A
// (BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::OnBlendOut_694552184707FA54A89019A60BF2ED0A()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnBlendOut_694552184707FA54A89019A60BF2ED0A");

	Ubanner_plant_ab_C_OnBlendOut_694552184707FA54A89019A60BF2ED0A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnCompleted_694552184707FA54A89019A60BF2ED0A
// (BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::OnCompleted_694552184707FA54A89019A60BF2ED0A()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnCompleted_694552184707FA54A89019A60BF2ED0A");

	Ubanner_plant_ab_C_OnCompleted_694552184707FA54A89019A60BF2ED0A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.DidNotSpawn_9FD3B0874A8C6B360BAF96AF82290913
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubanner_plant_ab_C::DidNotSpawn_9FD3B0874A8C6B360BAF96AF82290913(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.DidNotSpawn_9FD3B0874A8C6B360BAF96AF82290913");

	Ubanner_plant_ab_C_DidNotSpawn_9FD3B0874A8C6B360BAF96AF82290913_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.Success_9FD3B0874A8C6B360BAF96AF82290913
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubanner_plant_ab_C::Success_9FD3B0874A8C6B360BAF96AF82290913(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.Success_9FD3B0874A8C6B360BAF96AF82290913");

	Ubanner_plant_ab_C_Success_9FD3B0874A8C6B360BAF96AF82290913_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnLoaded_4614AC24450C5A4181285C8787F0B689
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubanner_plant_ab_C::OnLoaded_4614AC24450C5A4181285C8787F0B689(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnLoaded_4614AC24450C5A4181285C8787F0B689");

	Ubanner_plant_ab_C_OnLoaded_4614AC24450C5A4181285C8787F0B689_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ubanner_plant_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.K2_ActivateAbility");

	Ubanner_plant_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.OnAnimInterrupted
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Ubanner_plant_ab_C::OnAnimInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.OnAnimInterrupted");

	Ubanner_plant_ab_C_OnAnimInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function banner_plant_ab.banner_plant_ab_C.ExecuteUbergraph_banner_plant_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubanner_plant_ab_C::ExecuteUbergraph_banner_plant_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function banner_plant_ab.banner_plant_ab_C.ExecuteUbergraph_banner_plant_ab");

	Ubanner_plant_ab_C_ExecuteUbergraph_banner_plant_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
