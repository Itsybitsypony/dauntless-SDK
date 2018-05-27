// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function monsterpart_bpc.monsterpart_bpc_C.GetSeverPhatBones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SeverPhatBones                 (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpc_C::GetSeverPhatBones(TArray<struct FName>* SeverPhatBones)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetSeverPhatBones");

	Umonsterpart_bpc_C_GetSeverPhatBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeverPhatBones != nullptr)
		*SeverPhatBones = params.SeverPhatBones;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetPhatBones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           PhATBones                      (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpc_C::GetPhatBones(TArray<struct FName>* PhATBones)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetPhatBones");

	Umonsterpart_bpc_C_GetPhatBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhATBones != nullptr)
		*PhATBones = params.PhATBones;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetCurrentPartType(TEnumAsByte<Ebehemoth_part_type>* PartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartType");

	Umonsterpart_bpc_C_GetCurrentPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartType != nullptr)
		*PartType = params.PartType;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBodyPartType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_bodypart_type> BodyPartType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetBodyPartType(TEnumAsByte<Ebehemoth_bodypart_type>* BodyPartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBodyPartType");

	Umonsterpart_bpc_C_GetBodyPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyPartType != nullptr)
		*BodyPartType = params.BodyPartType;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ProcShockDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Giver                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        Original_Damage_Event          (BlueprintVisible, BlueprintReadOnly, Parm)

void Umonsterpart_bpc_C::ProcShockDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ProcShockDamage");

	Umonsterpart_bpc_C_ProcShockDamage_Params params;
	params.Damage_Giver = Damage_Giver;
	params.Original_Damage_Event = Original_Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ProcFrostDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Giver                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        Original_Damage_Event          (BlueprintVisible, BlueprintReadOnly, Parm)

void Umonsterpart_bpc_C::ProcFrostDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ProcFrostDamage");

	Umonsterpart_bpc_C_ProcFrostDamage_Params params;
	params.Damage_Giver = Damage_Giver;
	params.Original_Damage_Event = Original_Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HealElementToMax
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute      MaxHealthAttribute             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GameplayEffectData             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::HealElementToMax(const struct FGameplayAttribute& MaxHealthAttribute, const struct FName& GameplayEffectData)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HealElementToMax");

	Umonsterpart_bpc_C_HealElementToMax_Params params;
	params.MaxHealthAttribute = MaxHealthAttribute;
	params.GameplayEffectData = GameplayEffectData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ProcFireDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Damage_Giver                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        Original_Damage_Event          (BlueprintVisible, BlueprintReadOnly, Parm)

void Umonsterpart_bpc_C::ProcFireDamage(class AActor* Damage_Giver, const struct FDamageEventData& Original_Damage_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ProcFireDamage");

	Umonsterpart_bpc_C_ProcFireDamage_Params params;
	params.Damage_Giver = Damage_Giver;
	params.Original_Damage_Event = Original_Damage_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetLootBreakNameFromPartData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fpart_break_stage> PartBreakData                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   LootName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetLootBreakNameFromPartData(int Index, TArray<struct Fpart_break_stage>* PartBreakData, struct FName* LootName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetLootBreakNameFromPartData");

	Umonsterpart_bpc_C_GetLootBreakNameFromPartData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartBreakData != nullptr)
		*PartBreakData = params.PartBreakData;
	if (LootName != nullptr)
		*LootName = params.LootName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ResolvePartStageData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fpart_break_stage> PartStageData                  (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpc_C::ResolvePartStageData(TArray<struct Fpart_break_stage>* PartStageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ResolvePartStageData");

	Umonsterpart_bpc_C_ResolvePartStageData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartStageData != nullptr)
		*PartStageData = params.PartStageData;
}


// Function monsterpart_bpc.monsterpart_bpc_C.SetCollisionStateFromPartType
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::SetCollisionStateFromPartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.SetCollisionStateFromPartType");

	Umonsterpart_bpc_C_SetCollisionStateFromPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartType
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_PartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartType");

	Umonsterpart_bpc_C_OnRep_PartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ActivateChildShapes
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::ActivateChildShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ActivateChildShapes");

	Umonsterpart_bpc_C_ActivateChildShapes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.DeactivateChildShapes
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::DeactivateChildShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.DeactivateChildShapes");

	Umonsterpart_bpc_C_DeactivateChildShapes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.InitMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::InitMaterialParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.InitMaterialParams");

	Umonsterpart_bpc_C_InitMaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetPowerDelta
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<float>                  ResistanceDeltas               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          PowerDelta                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetPowerDelta(const struct FGameplayTagContainer& Tags, TArray<float>* ResistanceDeltas, float* PowerDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetPowerDelta");

	Umonsterpart_bpc_C_GetPowerDelta_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistanceDeltas != nullptr)
		*ResistanceDeltas = params.ResistanceDeltas;
	if (PowerDelta != nullptr)
		*PowerDelta = params.PowerDelta;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetScarredMaterialName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HealthMaterialName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetScarredMaterialName(struct FName* HealthMaterialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetScarredMaterialName");

	Umonsterpart_bpc_C_GetScarredMaterialName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthMaterialName != nullptr)
		*HealthMaterialName = params.HealthMaterialName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.SetupBaseHealthValues
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::SetupBaseHealthValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.SetupBaseHealthValues");

	Umonsterpart_bpc_C_SetupBaseHealthValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_IsActivated
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_IsActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_IsActivated");

	Umonsterpart_bpc_C_OnRep_IsActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeBrokenByThisAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PartCanBeBrokenByThisAttack    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::CanPartBeBrokenByThisAttack(class AActor* Instigator, const struct FGameplayTagContainer& DamageTags, bool* PartCanBeBrokenByThisAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeBrokenByThisAttack");

	Umonsterpart_bpc_C_CanPartBeBrokenByThisAttack_Params params;
	params.Instigator = Instigator;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartCanBeBrokenByThisAttack != nullptr)
		*PartCanBeBrokenByThisAttack = params.PartCanBeBrokenByThisAttack;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetParticleAttachBoneAndLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetFromBone                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 FinalWorldLocation             (Parm, OutParm, IsPlainOldData)

void Umonsterpart_bpc_C::GetParticleAttachBoneAndLocation(class USceneComponent** AttachComponent, struct FName* BoneName, struct FVector* OffsetFromBone, struct FVector* FinalWorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetParticleAttachBoneAndLocation");

	Umonsterpart_bpc_C_GetParticleAttachBoneAndLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachComponent != nullptr)
		*AttachComponent = params.AttachComponent;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OffsetFromBone != nullptr)
		*OffsetFromBone = params.OffsetFromBone;
	if (FinalWorldLocation != nullptr)
		*FinalWorldLocation = params.FinalWorldLocation;
}


// Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeExposed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanBeExposed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::CanPartBeExposed(bool* CanBeExposed)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.CanPartBeExposed");

	Umonsterpart_bpc_C_CanPartBeExposed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanBeExposed != nullptr)
		*CanBeExposed = params.CanBeExposed;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetExposedPartMaterialName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ExposedMaterialName            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetExposedPartMaterialName(struct FName* ExposedMaterialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetExposedPartMaterialName");

	Umonsterpart_bpc_C_GetExposedPartMaterialName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExposedMaterialName != nullptr)
		*ExposedMaterialName = params.ExposedMaterialName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_ExposedPartType
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_ExposedPartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_ExposedPartType");

	Umonsterpart_bpc_C_OnRep_ExposedPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HandlePartExposed
// (Public, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::HandlePartExposed()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HandlePartExposed");

	Umonsterpart_bpc_C_HandlePartExposed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetExposeMultiplier
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExposeMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetExposeMultiplier(float* ExposeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetExposeMultiplier");

	Umonsterpart_bpc_C_GetExposeMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExposeMultiplier != nullptr)
		*ExposeMultiplier = params.ExposeMultiplier;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetPartType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetPartType(TEnumAsByte<Ebehemoth_part_type>* PartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetPartType");

	Umonsterpart_bpc_C_GetPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartType != nullptr)
		*PartType = params.PartType;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HandleExposeDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExplicitExposeDamage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PrimaryElementPowerDelta       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExposeDamageDealt              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PartWasExposedByThisDamage     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::HandleExposeDamage(float BaseDamage, float ExplicitExposeDamage, class AActor* DamageInstigator, const struct FGameplayTagContainer& DamageTags, float PrimaryElementPowerDelta, float* ExposeDamageDealt, bool* PartWasExposedByThisDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HandleExposeDamage");

	Umonsterpart_bpc_C_HandleExposeDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.ExplicitExposeDamage = ExplicitExposeDamage;
	params.DamageInstigator = DamageInstigator;
	params.DamageTags = DamageTags;
	params.PrimaryElementPowerDelta = PrimaryElementPowerDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExposeDamageDealt != nullptr)
		*ExposeDamageDealt = params.ExposeDamageDealt;
	if (PartWasExposedByThisDamage != nullptr)
		*PartWasExposedByThisDamage = params.PartWasExposedByThisDamage;
}


// Function monsterpart_bpc.monsterpart_bpc_C.UpdateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::UpdateMaterials(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.UpdateMaterials");

	Umonsterpart_bpc_C_UpdateMaterials_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetStageTypeInterpTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TurningOn_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetStageTypeInterpTime(TEnumAsByte<Ebehemoth_part_type> PartType, bool TurningOn_, float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetStageTypeInterpTime");

	Umonsterpart_bpc_C_GetStageTypeInterpTime_Params params;
	params.PartType = PartType;
	params.TurningOn_ = TurningOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetIndexOfMaterialInterpData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MaterialName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetIndexOfMaterialInterpData(const struct FName& MaterialName, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetIndexOfMaterialInterpData");

	Umonsterpart_bpc_C_GetIndexOfMaterialInterpData_Params params;
	params.MaterialName = MaterialName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_MaterialParams
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_MaterialParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_MaterialParams");

	Umonsterpart_bpc_C_OnRep_MaterialParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetPartAndTypeMaterialName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StageMaterialName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetPartAndTypeMaterialName(TEnumAsByte<Ebehemoth_part_type> PartType, struct FName* StageMaterialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetPartAndTypeMaterialName");

	Umonsterpart_bpc_C_GetPartAndTypeMaterialName_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StageMaterialName != nullptr)
		*StageMaterialName = params.StageMaterialName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetHealthMaterialName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HealthMaterialName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetHealthMaterialName(struct FName* HealthMaterialName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetHealthMaterialName");

	Umonsterpart_bpc_C_GetHealthMaterialName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthMaterialName != nullptr)
		*HealthMaterialName = params.HealthMaterialName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetDamageParticleInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DamageValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SizeUpThreshold                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamagePerSmall                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumToSpawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetDamageParticleInfo(float DamageValue, float SizeUpThreshold, float DamagePerSmall, int* NumToSpawn, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetDamageParticleInfo");

	Umonsterpart_bpc_C_GetDamageParticleInfo_Params params;
	params.DamageValue = DamageValue;
	params.SizeUpThreshold = SizeUpThreshold;
	params.DamagePerSmall = DamagePerSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumToSpawn != nullptr)
		*NumToSpawn = params.NumToSpawn;
	if (Size != nullptr)
		*Size = params.Size;
}


// Function monsterpart_bpc.monsterpart_bpc_C.EstimateDamageDone
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamageGiver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageDone                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::EstimateDamageDone(const struct FDamageEventData& DamageEventData, class AActor* DamageGiver, float* DamageDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.EstimateDamageDone");

	Umonsterpart_bpc_C_EstimateDamageDone_Params params;
	params.DamageEventData = DamageEventData;
	params.DamageGiver = DamageGiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageDone != nullptr)
		*DamageDone = params.DamageDone;
}


// Function monsterpart_bpc.monsterpart_bpc_C.DoDamageEventEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageGiver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CoreDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PartDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExposeDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasHitResult                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::DoDamageEventEffects(class AActor* DamageGiver, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasHitResult, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.DoDamageEventEffects");

	Umonsterpart_bpc_C_DoDamageEventEffects_Params params;
	params.DamageGiver = DamageGiver;
	params.CoreDamage = CoreDamage;
	params.PartDamage = PartDamage;
	params.StaggerDamage = StaggerDamage;
	params.ExposeDamage = ExposeDamage;
	params.HasHitResult = HasHitResult;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ApplyPartPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PresetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ApplyPartPreset(class UClass* PresetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ApplyPartPreset");

	Umonsterpart_bpc_C_ApplyPartPreset_Params params;
	params.PresetClass = PresetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ApplyDamageToCore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ApplyDamageToCore(float BaseDamage, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ApplyDamageToCore");

	Umonsterpart_bpc_C_ApplyDamageToCore_Params params;
	params.BaseDamage = BaseDamage;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnPreMitigateDamageBP
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamageGiver                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   DamageEventTags                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bHasHitResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bOverrideDamageData            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OutDamageEventTags             (Parm, OutParm)
// struct FDamageEventData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDamageEventData Umonsterpart_bpc_C::OnPreMitigateDamageBP(class AActor** DamageGiver, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnPreMitigateDamageBP");

	Umonsterpart_bpc_C_OnPreMitigateDamageBP_Params params;
	params.DamageGiver = DamageGiver;
	params.bHasHitResult = bHasHitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEventData != nullptr)
		*DamageEventData = params.DamageEventData;
	if (DamageEventTags != nullptr)
		*DamageEventTags = params.DamageEventTags;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (bOverrideDamageData != nullptr)
		*bOverrideDamageData = params.bOverrideDamageData;
	if (OutDamageEventTags != nullptr)
		*OutDamageEventTags = params.OutDamageEventTags;

	return params.ReturnValue;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExplicitStaggerDamage          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageEventTags                (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PrimaryElementPowerDelta       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamageDealt             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::HandleStaggerDamage(float BaseDamage, float ExplicitStaggerDamage, class AActor* DamageInstigator, const struct FGameplayTagContainer& DamageEventTags, float PrimaryElementPowerDelta, float* StaggerDamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerDamage");

	Umonsterpart_bpc_C_HandleStaggerDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.ExplicitStaggerDamage = ExplicitStaggerDamage;
	params.DamageInstigator = DamageInstigator;
	params.DamageEventTags = DamageEventTags;
	params.PrimaryElementPowerDelta = PrimaryElementPowerDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerDamageDealt != nullptr)
		*StaggerDamageDealt = params.StaggerDamageDealt;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartResistType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartResistType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetCurrentPartResistType(TEnumAsByte<Ebehemoth_part_type>* PartResistType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentPartResistType");

	Umonsterpart_bpc_C_GetCurrentPartResistType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartResistType != nullptr)
		*PartResistType = params.PartResistType;
}


// Function monsterpart_bpc.monsterpart_bpc_C.VisualLogNameArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Umonsterpart_bpc_C::VisualLogNameArray(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.VisualLogNameArray");

	Umonsterpart_bpc_C_VisualLogNameArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function monsterpart_bpc.monsterpart_bpc_C.BreakTypeToName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Ebreak_part_descriptions> BreakType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::BreakTypeToName(TEnumAsByte<Ebreak_part_descriptions> BreakType, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.BreakTypeToName");

	Umonsterpart_bpc_C_BreakTypeToName_Params params;
	params.BreakType = BreakType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionForStage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpart_break_description BreakDescription               (Parm, OutParm)

void Umonsterpart_bpc_C::GetBreakDescriptionForStage(int NewParam, struct Fpart_break_description* BreakDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionForStage");

	Umonsterpart_bpc_C_GetBreakDescriptionForStage_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakDescription != nullptr)
		*BreakDescription = params.BreakDescription;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleCollisionUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::AuthHandleCollisionUpdate(int NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleCollisionUpdate");

	Umonsterpart_bpc_C_AuthHandleCollisionUpdate_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NextStage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::AuthOnBreak(int NextStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreak");

	Umonsterpart_bpc_C_AuthOnBreak_Params params;
	params.NextStage = NextStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBaseLootName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BaseLootName                   (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpc_C::GetBaseLootName(class FString* BaseLootName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBaseLootName");

	Umonsterpart_bpc_C_GetBaseLootName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseLootName != nullptr)
		*BaseLootName = params.BaseLootName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.DoStaggerFromPart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Estagger_type>     StaggerTypeNew                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PartSevered                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_stagger_type> StaggerSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::DoStaggerFromPart(TEnumAsByte<Estagger_type> StaggerTypeNew, bool PartSevered, class AActor* StaggerInstigator, TEnumAsByte<Ebehemoth_stagger_type> StaggerSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.DoStaggerFromPart");

	Umonsterpart_bpc_C_DoStaggerFromPart_Params params;
	params.StaggerTypeNew = StaggerTypeNew;
	params.PartSevered = PartSevered;
	params.StaggerInstigator = StaggerInstigator;
	params.StaggerSource = StaggerSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleBreak
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BreakInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextStage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BreakHitLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::AuthHandleBreak(class AActor* BreakInstigator, int NextStage, const struct FVector& BreakHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthHandleBreak");

	Umonsterpart_bpc_C_AuthHandleBreak_Params params;
	params.BreakInstigator = BreakInstigator;
	params.NextStage = NextStage;
	params.BreakHitLocation = BreakHitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetOwningBehemothActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  OwningBehemothActor            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetOwningBehemothActor(class AActor** OwningBehemothActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetOwningBehemothActor");

	Umonsterpart_bpc_C_GetOwningBehemothActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OwningBehemothActor != nullptr)
		*OwningBehemothActor = params.OwningBehemothActor;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_CurrentBreakStage
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_CurrentBreakStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_CurrentBreakStage");

	Umonsterpart_bpc_C_OnRep_CurrentBreakStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthAddLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BreakIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BreakHitLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::AuthAddLoot(int BreakIndex, class AActor* Instigator, const struct FVector& BreakHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthAddLoot");

	Umonsterpart_bpc_C_AuthAddLoot_Params params;
	params.BreakIndex = BreakIndex;
	params.Instigator = Instigator;
	params.BreakHitLocation = BreakHitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthMoveToNextStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebreak_stage_transit_reason> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetByHandStage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocationForBreak            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::AuthMoveToNextStage(TEnumAsByte<Ebreak_stage_transit_reason> Reason, int SetByHandStage, class AActor* OptionalInstigator, const struct FVector& HitLocationForBreak)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthMoveToNextStage");

	Umonsterpart_bpc_C_AuthMoveToNextStage_Params params;
	params.Reason = Reason;
	params.SetByHandStage = SetByHandStage;
	params.OptionalInstigator = OptionalInstigator;
	params.HitLocationForBreak = HitLocationForBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentBreakStage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct Fpart_break_stage       BreakStage                     (Parm, OutParm)
// struct Fpart_break_description StageDescription               (Parm, OutParm)

void Umonsterpart_bpc_C::GetCurrentBreakStage(struct Fpart_break_stage* BreakStage, struct Fpart_break_description* StageDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetCurrentBreakStage");

	Umonsterpart_bpc_C_GetCurrentBreakStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakStage != nullptr)
		*BreakStage = params.BreakStage;
	if (StageDescription != nullptr)
		*StageDescription = params.StageDescription;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HandleDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 ServerHitLoc                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::HandleDamage(class AActor* DamageCauser, float DamageAmount, const struct FGameplayTagContainer& DamageTags, const struct FVector& ServerHitLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HandleDamage");

	Umonsterpart_bpc_C_HandleDamage_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageAmount = DamageAmount;
	params.DamageTags = DamageTags;
	params.ServerHitLoc = ServerHitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerProne
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PartDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExposeDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CoreDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasStaggered                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::HandleStaggerProne(const struct FGameplayTagContainer& DamageTags, float PartDamage, float StaggerDamage, float ExposeDamage, float CoreDamage, bool* WasStaggered, TEnumAsByte<Estagger_type>* StaggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.HandleStaggerProne");

	Umonsterpart_bpc_C_HandleStaggerProne_Params params;
	params.DamageTags = DamageTags;
	params.PartDamage = PartDamage;
	params.StaggerDamage = StaggerDamage;
	params.ExposeDamage = ExposeDamage;
	params.CoreDamage = CoreDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasStaggered != nullptr)
		*WasStaggered = params.WasStaggered;
	if (StaggerType != nullptr)
		*StaggerType = params.StaggerType;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionByType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Ebreak_part_descriptions> BreakType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpart_break_description BreakDescription               (Parm, OutParm)

void Umonsterpart_bpc_C::GetBreakDescriptionByType(TEnumAsByte<Ebreak_part_descriptions> BreakType, struct Fpart_break_description* BreakDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBreakDescriptionByType");

	Umonsterpart_bpc_C_GetBreakDescriptionByType_Params params;
	params.BreakType = BreakType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakDescription != nullptr)
		*BreakDescription = params.BreakDescription;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakStageForIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpart_break_stage       BreakStage                     (Parm, OutParm)

void Umonsterpart_bpc_C::GetBreakStageForIndex(int Index, struct Fpart_break_stage* BreakStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBreakStageForIndex");

	Umonsterpart_bpc_C_GetBreakStageForIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakStage != nullptr)
		*BreakStage = params.BreakStage;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetBreakLootName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BreakIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LootName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetBreakLootName(int BreakIndex, struct FName* LootName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetBreakLootName");

	Umonsterpart_bpc_C_GetBreakLootName_Params params;
	params.BreakIndex = BreakIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootName != nullptr)
		*LootName = params.LootName;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ValidateBreakData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DataIsValid                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ValidateBreakData(bool* DataIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ValidateBreakData");

	Umonsterpart_bpc_C_ValidateBreakData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataIsValid != nullptr)
		*DataIsValid = params.DataIsValid;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthSetBreakStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StageIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebreak_stage_transit_reason> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalHitLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::AuthSetBreakStage(int StageIndex, TEnumAsByte<Ebreak_stage_transit_reason> Reason, class AActor* OptionalInstigator, const struct FVector& OptionalHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthSetBreakStage");

	Umonsterpart_bpc_C_AuthSetBreakStage_Params params;
	params.StageIndex = StageIndex;
	params.Reason = Reason;
	params.OptionalInstigator = OptionalInstigator;
	params.OptionalHitLocation = OptionalHitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.GetResistancesForPartType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCalculatePerTypeModifiers (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CuttingResistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CuttingCorePassthrough         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BluntResistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BluntCorePassthrough           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PiercingResistance             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PiercingCorePassthrough        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::GetResistancesForPartType(TEnumAsByte<Ebehemoth_part_type> PartType, bool ShouldCalculatePerTypeModifiers, float* CuttingResistance, float* CuttingCorePassthrough, float* BluntResistance, float* BluntCorePassthrough, float* PiercingResistance, float* PiercingCorePassthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.GetResistancesForPartType");

	Umonsterpart_bpc_C_GetResistancesForPartType_Params params;
	params.PartType = PartType;
	params.ShouldCalculatePerTypeModifiers = ShouldCalculatePerTypeModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CuttingResistance != nullptr)
		*CuttingResistance = params.CuttingResistance;
	if (CuttingCorePassthrough != nullptr)
		*CuttingCorePassthrough = params.CuttingCorePassthrough;
	if (BluntResistance != nullptr)
		*BluntResistance = params.BluntResistance;
	if (BluntCorePassthrough != nullptr)
		*BluntCorePassthrough = params.BluntCorePassthrough;
	if (PiercingResistance != nullptr)
		*PiercingResistance = params.PiercingResistance;
	if (PiercingCorePassthrough != nullptr)
		*PiercingCorePassthrough = params.PiercingCorePassthrough;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthChangePartType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> NewPartType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::AuthChangePartType(TEnumAsByte<Ebehemoth_part_type> NewPartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthChangePartType");

	Umonsterpart_bpc_C_AuthChangePartType_Params params;
	params.NewPartType = NewPartType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartSevered
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::OnRep_PartSevered()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnRep_PartSevered");

	Umonsterpart_bpc_C_OnRep_PartSevered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.IsAttackIDAlreadyRegistered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                   AttackID                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AttackExisted                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::IsAttackIDAlreadyRegistered(const struct FGuid& AttackID, bool* AttackExisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.IsAttackIDAlreadyRegistered");

	Umonsterpart_bpc_C_IsAttackIDAlreadyRegistered_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackExisted != nullptr)
		*AttackExisted = params.AttackExisted;
}


// Function monsterpart_bpc.monsterpart_bpc_C.DoesAttackExist
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FGuid>           AttackTable                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   NewAttackID                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Exists                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::DoesAttackExist(const struct FGuid& NewAttackID, TArray<struct FGuid>* AttackTable, bool* Exists)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.DoesAttackExist");

	Umonsterpart_bpc_C_DoesAttackExist_Params params;
	params.NewAttackID = NewAttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackTable != nullptr)
		*AttackTable = params.AttackTable;
	if (Exists != nullptr)
		*Exists = params.Exists;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AddAttackID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGuid>           AttackTable                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGuid                   NewAttackID                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::AddAttackID(const struct FGuid& NewAttackID, TArray<struct FGuid>* AttackTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AddAttackID");

	Umonsterpart_bpc_C_AddAttackID_Params params;
	params.NewAttackID = NewAttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackTable != nullptr)
		*AttackTable = params.AttackTable;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastStagger
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::MulticastStagger(class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastStagger");

	Umonsterpart_bpc_C_MulticastStagger_Params params;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Umonsterpart_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ReceiveBeginPlay");

	Umonsterpart_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastCollisionUpdate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CollisionEnabled               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::MulticastCollisionUpdate(bool CollisionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastCollisionUpdate");

	Umonsterpart_bpc_C_MulticastCollisionUpdate_Params params;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.UpdateCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CollisionEnabled               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::UpdateCollision(bool CollisionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.UpdateCollision");

	Umonsterpart_bpc_C_UpdateCollision_Params params;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastLoot
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LootName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::MulticastLoot(class AActor* Instigator, const struct FName& LootName)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastLoot");

	Umonsterpart_bpc_C_MulticastLoot_Params params;
	params.Instigator = Instigator;
	params.LootName = LootName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastBreakText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::MulticastBreakText()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastBreakText");

	Umonsterpart_bpc_C_MulticastBreakText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ReceiveTick");

	Umonsterpart_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastSpawnBreakImpulses
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::MulticastSpawnBreakImpulses()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastSpawnBreakImpulses");

	Umonsterpart_bpc_C_MulticastSpawnBreakImpulses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.DestroyBreakWidgets
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::DestroyBreakWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.DestroyBreakWidgets");

	Umonsterpart_bpc_C_DestroyBreakWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ForceSetSeveredSet
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::ForceSetSeveredSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ForceSetSeveredSet");

	Umonsterpart_bpc_C_ForceSetSeveredSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastDamageNumbers
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CoreDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PartDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExposeDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasImpactLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Umonsterpart_bpc_C::MulticastDamageNumbers(class AActor* Instigator, float CoreDamage, float PartDamage, float StaggerDamage, float ExposeDamage, bool HasImpactLocation, const struct FVector& ImpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastDamageNumbers");

	Umonsterpart_bpc_C_MulticastDamageNumbers_Params params;
	params.Instigator = Instigator;
	params.CoreDamage = CoreDamage;
	params.PartDamage = PartDamage;
	params.StaggerDamage = StaggerDamage;
	params.ExposeDamage = ExposeDamage;
	params.HasImpactLocation = HasImpactLocation;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthReplicateExpose
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::AuthReplicateExpose()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthReplicateExpose");

	Umonsterpart_bpc_C_AuthReplicateExpose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ReplicateExpose
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ReplicateExpose(float Current, float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ReplicateExpose");

	Umonsterpart_bpc_C_ReplicateExpose_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.MulticastExposeEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::MulticastExposeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.MulticastExposeEffects");

	Umonsterpart_bpc_C_MulticastExposeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.RefreshHealth
// (BlueprintCallable, BlueprintEvent)

void Umonsterpart_bpc_C::RefreshHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.RefreshHealth");

	Umonsterpart_bpc_C_RefreshHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.ExecuteUbergraph_monsterpart_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::ExecuteUbergraph_monsterpart_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.ExecuteUbergraph_monsterpart_bpc");

	Umonsterpart_bpc_C_ExecuteUbergraph_monsterpart_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnStageChangedByBreak__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::OnStageChangedByBreak__DelegateSignature(class Umonsterpart_bpc_C* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnStageChangedByBreak__DelegateSignature");

	Umonsterpart_bpc_C_OnStageChangedByBreak__DelegateSignature_Params params;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnSevered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      Part                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::OnSevered__DelegateSignature(class Umonsterpart_bpc_C* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnSevered__DelegateSignature");

	Umonsterpart_bpc_C_OnSevered__DelegateSignature_Params params;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreakStageChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Umonsterpart_bpc_C*      PartChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::AuthOnBreakStageChanged__DelegateSignature(class Umonsterpart_bpc_C* PartChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.AuthOnBreakStageChanged__DelegateSignature");

	Umonsterpart_bpc_C_AuthOnBreakStageChanged__DelegateSignature_Params params;
	params.PartChanged = PartChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monsterpart_bpc.monsterpart_bpc_C.OnStaggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PartJustBroken                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PartJustSevered                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpc_C::OnStaggered__DelegateSignature(bool PartJustBroken, bool PartJustSevered, class AActor* StaggerInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpc.monsterpart_bpc_C.OnStaggered__DelegateSignature");

	Umonsterpart_bpc_C_OnStaggered__DelegateSignature_Params params;
	params.PartJustBroken = PartJustBroken;
	params.PartJustSevered = PartJustSevered;
	params.StaggerInstigator = StaggerInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
