// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shiny_drop_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.EnableHighlightForDuration");

	Ashiny_drop_base_bp_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetGrantItemID");

	Ashiny_drop_base_bp_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetLocalRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemRarityLevelType           NewLocalRarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::SetLocalRarity(EItemRarityLevelType NewLocalRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetLocalRarity");

	Ashiny_drop_base_bp_C_SetLocalRarity_Params params;
	params.NewLocalRarity = NewLocalRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnRep_PlayerLootInstances
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Ashiny_drop_base_bp_C::OnRep_PlayerLootInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnRep_PlayerLootInstances");

	Ashiny_drop_base_bp_C_OnRep_PlayerLootInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.AuthSetPlayerLootInstances
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fplayer_loot_instance> NewPlayerLootInstances         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ashiny_drop_base_bp_C::AuthSetPlayerLootInstances(TArray<struct Fplayer_loot_instance>* NewPlayerLootInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.AuthSetPlayerLootInstances");

	Ashiny_drop_base_bp_C_AuthSetPlayerLootInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPlayerLootInstances != nullptr)
		*NewPlayerLootInstances = params.NewPlayerLootInstances;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.GrantItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::GrantItem(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.GrantItem");

	Ashiny_drop_base_bp_C_GrantItem_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ashiny_drop_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.UserConstructionScript");

	Ashiny_drop_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.SpawnShinyLoot");

	Ashiny_drop_base_bp_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ashiny_drop_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.ReceiveBeginPlay");

	Ashiny_drop_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ashiny_drop_base_bp_C::BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Ashiny_drop_base_bp_C_BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.InteractComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::InteractComplete(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.InteractComplete");

	Ashiny_drop_base_bp_C_InteractComplete_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnProjectileStopped
// (BlueprintCallable, BlueprintEvent)

void Ashiny_drop_base_bp_C::OnProjectileStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnProjectileStopped");

	Ashiny_drop_base_bp_C_OnProjectileStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.DisableShiny
// (BlueprintCallable, BlueprintEvent)

void Ashiny_drop_base_bp_C::DisableShiny()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.DisableShiny");

	Ashiny_drop_base_bp_C_DisableShiny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.CleanUpSoonSinceWeHaveNoLootToGiveAnymore
// (BlueprintCallable, BlueprintEvent)

void Ashiny_drop_base_bp_C::CleanUpSoonSinceWeHaveNoLootToGiveAnymore()
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.CleanUpSoonSinceWeHaveNoLootToGiveAnymore");

	Ashiny_drop_base_bp_C_CleanUpSoonSinceWeHaveNoLootToGiveAnymore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shiny_drop_base_bp.shiny_drop_base_bp_C.ExecuteUbergraph_shiny_drop_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ashiny_drop_base_bp_C::ExecuteUbergraph_shiny_drop_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shiny_drop_base_bp.shiny_drop_base_bp_C.ExecuteUbergraph_shiny_drop_base_bp");

	Ashiny_drop_base_bp_C_ExecuteUbergraph_shiny_drop_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
