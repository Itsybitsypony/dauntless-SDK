// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loot_dropper_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function loot_dropper_bpc.loot_dropper_bpc_C.GetIndexOfLootInstanceForPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fplayer_loot_instance> LootInstances                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uloot_dropper_bpc_C::GetIndexOfLootInstanceForPlayer(class APlayerState* PlayerState, TArray<struct Fplayer_loot_instance>* LootInstances, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.GetIndexOfLootInstanceForPlayer");

	Uloot_dropper_bpc_C_GetIndexOfLootInstanceForPlayer_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootInstances != nullptr)
		*LootInstances = params.LootInstances;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.GetMaxRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGiveItemInfo>   Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EItemRarityLevelType           MaxRarity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uloot_dropper_bpc_C::GetMaxRarity(TArray<struct FGiveItemInfo>* Items, EItemRarityLevelType* MaxRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.GetMaxRarity");

	Uloot_dropper_bpc_C_GetMaxRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (MaxRarity != nullptr)
		*MaxRarity = params.MaxRarity;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.CreateLootForActivePlayers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemRarityLevelType           HideAndAutoGrantIfBelowThisRarity (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_bodypart_type> BrokenBodyPart                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fplayer_loot_instance> LootInstances                  (Parm, OutParm, ZeroConstructor)

void Uloot_dropper_bpc_C::CreateLootForActivePlayers(const struct FName& LootID, EItemRarityLevelType HideAndAutoGrantIfBelowThisRarity, TEnumAsByte<Ebehemoth_bodypart_type> BrokenBodyPart, TArray<struct Fplayer_loot_instance>* LootInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.CreateLootForActivePlayers");

	Uloot_dropper_bpc_C_CreateLootForActivePlayers_Params params;
	params.LootID = LootID;
	params.HideAndAutoGrantIfBelowThisRarity = HideAndAutoGrantIfBelowThisRarity;
	params.BrokenBodyPart = BrokenBodyPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootInstances != nullptr)
		*LootInstances = params.LootInstances;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.AuthTrySpawnShiny
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemRarityLevelType           MinRarityToSpawnShiny          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_bodypart_type> BodyPartType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloot_dropper_bpc_C::AuthTrySpawnShiny(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime, EItemRarityLevelType MinRarityToSpawnShiny, TEnumAsByte<Ebehemoth_bodypart_type> BodyPartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.AuthTrySpawnShiny");

	Uloot_dropper_bpc_C_AuthTrySpawnShiny_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;
	params.MinRarityToSpawnShiny = MinRarityToSpawnShiny;
	params.BodyPartType = BodyPartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uloot_dropper_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.ReceiveBeginPlay");

	Uloot_dropper_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.OnSpawnedProjectile_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uloot_dropper_bpc_C::OnSpawnedProjectile_Event_1(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.OnSpawnedProjectile_Event_1");

	Uloot_dropper_bpc_C_OnSpawnedProjectile_Event_1_Params params;
	params.Projectile = Projectile;
	params.Target = Target;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loot_dropper_bpc.loot_dropper_bpc_C.ExecuteUbergraph_loot_dropper_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloot_dropper_bpc_C::ExecuteUbergraph_loot_dropper_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loot_dropper_bpc.loot_dropper_bpc_C.ExecuteUbergraph_loot_dropper_bpc");

	Uloot_dropper_bpc_C_ExecuteUbergraph_loot_dropper_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
