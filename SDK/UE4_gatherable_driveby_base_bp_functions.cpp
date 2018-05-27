// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_driveby_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SetGrantItemID");

	Agatherable_driveby_base_bp_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EnableHighlightForDuration");

	Agatherable_driveby_base_bp_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agatherable_driveby_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.UserConstructionScript");

	Agatherable_driveby_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.SpawnShinyLoot");

	Agatherable_driveby_base_bp_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Agatherable_driveby_base_bp_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature");

	Agatherable_driveby_base_bp_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_318_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnEnableHighlight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::EventOnEnableHighlight(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnEnableHighlight");

	Agatherable_driveby_base_bp_C_EventOnEnableHighlight_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnDisableHighlight
// (BlueprintCallable, BlueprintEvent)

void Agatherable_driveby_base_bp_C::EventOnDisableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.EventOnDisableHighlight");

	Agatherable_driveby_base_bp_C_EventOnDisableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.OnPickupPayload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        PlayerPickingUp                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::OnPickupPayload(class AArchonCharacter* PlayerPickingUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.OnPickupPayload");

	Agatherable_driveby_base_bp_C_OnPickupPayload_Params params;
	params.PlayerPickingUp = PlayerPickingUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Agatherable_driveby_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ReceiveBeginPlay");

	Agatherable_driveby_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ExecuteUbergraph_gatherable_driveby_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agatherable_driveby_base_bp_C::ExecuteUbergraph_gatherable_driveby_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gatherable_driveby_base_bp.gatherable_driveby_base_bp_C.ExecuteUbergraph_gatherable_driveby_base_bp");

	Agatherable_driveby_base_bp_C_ExecuteUbergraph_gatherable_driveby_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
