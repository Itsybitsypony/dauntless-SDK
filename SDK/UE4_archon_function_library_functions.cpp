// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function archon_function_library.archon_function_library_C.IsOnIslandHunt
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOnIslandHunt                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsOnIslandHunt(class UObject* __WorldContext, bool* IsOnIslandHunt)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsOnIslandHunt");

	Uarchon_function_library_C_IsOnIslandHunt_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnIslandHunt != nullptr)
		*IsOnIslandHunt = params.IsOnIslandHunt;
}


// Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshShouldClothSim
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Elapsed                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          UpdateRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_UpdateSkeletalMeshShouldClothSim(float Delta, float UpdateRate, class AActor* Actor, class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext, float* Elapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshShouldClothSim");

	Uarchon_function_library_C_UpdateSkeletalMeshShouldClothSim_Params params;
	params.Delta = Delta;
	params.UpdateRate = UpdateRate;
	params.Actor = Actor;
	params.SkeletalMesh = SkeletalMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Elapsed != nullptr)
		*Elapsed = params.Elapsed;
}


// Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshesShouldClothSim
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Elapsed                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          UpdateRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASkeletalMeshActor*> SkeletalMeshes                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_UpdateSkeletalMeshesShouldClothSim(float Delta, float UpdateRate, class UObject* __WorldContext, float* Elapsed, TArray<class ASkeletalMeshActor*>* SkeletalMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshesShouldClothSim");

	Uarchon_function_library_C_UpdateSkeletalMeshesShouldClothSim_Params params;
	params.Delta = Delta;
	params.UpdateRate = UpdateRate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Elapsed != nullptr)
		*Elapsed = params.Elapsed;
	if (SkeletalMeshes != nullptr)
		*SkeletalMeshes = params.SkeletalMeshes;
}


// Function archon_function_library.archon_function_library_C.GetPartyMemberControllers
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonPlayerController*> PartyMembers                   (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetPartyMemberControllers(class AArchonPlayerController* Player, class UObject* __WorldContext, TArray<class AArchonPlayerController*>* PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetPartyMemberControllers");

	Uarchon_function_library_C_GetPartyMemberControllers_Params params;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyMembers != nullptr)
		*PartyMembers = params.PartyMembers;
}


// Function archon_function_library.archon_function_library_C.ApplyDamageFromRowPassTableTags
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageTable                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 HitFromDirection               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ApplyDamageFromRowPassTableTags(class AActor* DamagedActor, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UObject* __WorldContext, struct FDamageTableData* DamageTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ApplyDamageFromRowPassTableTags");

	Uarchon_function_library_C_ApplyDamageFromRowPassTableTags_Params params;
	params.DamagedActor = DamagedActor;
	params.HitFromDirection = HitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageTable != nullptr)
		*DamageTable = params.DamageTable;
}


// Function archon_function_library.archon_function_library_C.HealTarget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_HealTarget(class AActor* TargetActor, class AActor* SourceActor, class UObject* SourceObject, float Amount, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.HealTarget");

	Uarchon_function_library_C_HealTarget_Params params;
	params.TargetActor = TargetActor;
	params.SourceActor = SourceActor;
	params.SourceObject = SourceObject;
	params.Amount = Amount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.IsCharacterInvulnerable
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invulnerable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InvulnerableDodge              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InvulnerableEdgeRecovery       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InvulnerablePotion             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInvulnerable_                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsCharacterInvulnerable(class AActor* ActorReference, bool Invulnerable, bool InvulnerableDodge, bool InvulnerableEdgeRecovery, bool InvulnerablePotion, class UObject* __WorldContext, bool* IsInvulnerable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsCharacterInvulnerable");

	Uarchon_function_library_C_IsCharacterInvulnerable_Params params;
	params.ActorReference = ActorReference;
	params.Invulnerable = Invulnerable;
	params.InvulnerableDodge = InvulnerableDodge;
	params.InvulnerableEdgeRecovery = InvulnerableEdgeRecovery;
	params.InvulnerablePotion = InvulnerablePotion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInvulnerable_ != nullptr)
		*IsInvulnerable_ = params.IsInvulnerable_;
}


// Function archon_function_library.archon_function_library_C.Set_ArmourSecondaryDyeSurfaceType
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_Set_ArmourSecondaryDyeSurfaceType(class UMaterialInstanceDynamic* DynamicMaterial, EArmourDyeSurfaceType Selection, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.Set_ArmourSecondaryDyeSurfaceType");

	Uarchon_function_library_C_Set_ArmourSecondaryDyeSurfaceType_Params params;
	params.DynamicMaterial = DynamicMaterial;
	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.Set_ArmourPrimaryDyeSurfaceType
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DynamicMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmourDyeSurfaceType          Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_Set_ArmourPrimaryDyeSurfaceType(class UMaterialInstanceDynamic* DynamicMaterial, EArmourDyeSurfaceType Selection, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.Set_ArmourPrimaryDyeSurfaceType");

	Uarchon_function_library_C_Set_ArmourPrimaryDyeSurfaceType_Params params;
	params.DynamicMaterial = DynamicMaterial;
	params.Selection = Selection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.GetComponentImplementingInterface
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Interface                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         Component                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetComponentImplementingInterface(class AActor* Actor, class UClass* Interface, class UObject* __WorldContext, class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetComponentImplementingInterface");

	Uarchon_function_library_C_GetComponentImplementingInterface_Params params;
	params.Actor = Actor;
	params.Interface = Interface;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function archon_function_library.archon_function_library_C.ApplyBuffsConditionalStart
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartBuffs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fbuff_init_data> BuffInitDat                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BuffTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffInstigator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonBuff*>     AddedBuffs                     (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_ApplyBuffsConditionalStart(bool StartBuffs, class AActor* BuffTarget, class AActor* BuffInstigator, class UObject* __WorldContext, TArray<struct Fbuff_init_data>* BuffInitDat, TArray<class AArchonBuff*>* AddedBuffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ApplyBuffsConditionalStart");

	Uarchon_function_library_C_ApplyBuffsConditionalStart_Params params;
	params.StartBuffs = StartBuffs;
	params.BuffTarget = BuffTarget;
	params.BuffInstigator = BuffInstigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffInitDat != nullptr)
		*BuffInitDat = params.BuffInitDat;
	if (AddedBuffs != nullptr)
		*AddedBuffs = params.AddedBuffs;
}


// Function archon_function_library.archon_function_library_C.ApplyCellBuffsAndEffects
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Feffect_magitudes_struct> GameplayEffectData             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Fbuff_init_data> BuffInitData                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonBuff*>     AppliedBuffs                   (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_ApplyCellBuffsAndEffects(float Magnitude, class AActor* Actor, class UObject* __WorldContext, TArray<struct Feffect_magitudes_struct>* GameplayEffectData, TArray<struct Fbuff_init_data>* BuffInitData, TArray<class AArchonBuff*>* AppliedBuffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ApplyCellBuffsAndEffects");

	Uarchon_function_library_C_ApplyCellBuffsAndEffects_Params params;
	params.Magnitude = Magnitude;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayEffectData != nullptr)
		*GameplayEffectData = params.GameplayEffectData;
	if (BuffInitData != nullptr)
		*BuffInitData = params.BuffInitData;
	if (AppliedBuffs != nullptr)
		*AppliedBuffs = params.AppliedBuffs;
}


// Function archon_function_library.archon_function_library_C.ApplyBuffs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToBuff                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fbuff_init_data> BuffInitData                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonBuff*>     AddedBuffs                     (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_ApplyBuffs(class AActor* ActorToBuff, class UObject* __WorldContext, TArray<struct Fbuff_init_data>* BuffInitData, TArray<class AArchonBuff*>* AddedBuffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ApplyBuffs");

	Uarchon_function_library_C_ApplyBuffs_Params params;
	params.ActorToBuff = ActorToBuff;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffInitData != nullptr)
		*BuffInitData = params.BuffInitData;
	if (AddedBuffs != nullptr)
		*AddedBuffs = params.AddedBuffs;
}


// Function archon_function_library.archon_function_library_C.IsElementConsideredForElementalMultipliers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ConsideredForElementalMultipliers (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsElementConsideredForElementalMultipliers(EElementType Element, class UObject* __WorldContext, bool* ConsideredForElementalMultipliers)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsElementConsideredForElementalMultipliers");

	Uarchon_function_library_C_IsElementConsideredForElementalMultipliers_Params params;
	params.Element = Element;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsideredForElementalMultipliers != nullptr)
		*ConsideredForElementalMultipliers = params.ConsideredForElementalMultipliers;
}


// Function archon_function_library.archon_function_library_C.GetPostMitigationMultiplierAttribute
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SelfMultiplier_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm, OutParm)
// bool                           HasAttribute                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetPostMitigationMultiplierAttribute(EElementType Element, bool SelfMultiplier_, class UObject* __WorldContext, struct FGameplayAttribute* Attribute, bool* HasAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetPostMitigationMultiplierAttribute");

	Uarchon_function_library_C_GetPostMitigationMultiplierAttribute_Params params;
	params.Element = Element;
	params.SelfMultiplier_ = SelfMultiplier_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
	if (HasAttribute != nullptr)
		*HasAttribute = params.HasAttribute;
}


// Function archon_function_library.archon_function_library_C.GetElementOfStat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ELoadoutStatTypes> StatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   ElementType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetElementOfStat(TEnumAsByte<ELoadoutStatTypes> StatType, class UObject* __WorldContext, EElementType* ElementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetElementOfStat");

	Uarchon_function_library_C_GetElementOfStat_Params params;
	params.StatType = StatType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementType != nullptr)
		*ElementType = params.ElementType;
}


// Function archon_function_library.archon_function_library_C.GetElementValueFromArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> ElementList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetElementValueFromArray(EElementType Element, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementList, bool* Found, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetElementValueFromArray");

	Uarchon_function_library_C_GetElementValueFromArray_Params params;
	params.Element = Element;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementList != nullptr)
		*ElementList = params.ElementList;
	if (Found != nullptr)
		*Found = params.Found;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function archon_function_library.archon_function_library_C.GetSumOfPower
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Felement_float_pair> ElementalPowers                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Sum                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetSumOfPower(class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementalPowers, float* Sum)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetSumOfPower");

	Uarchon_function_library_C_GetSumOfPower_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementalPowers != nullptr)
		*ElementalPowers = params.ElementalPowers;
	if (Sum != nullptr)
		*Sum = params.Sum;
}


// Function archon_function_library.archon_function_library_C.GetHUDStatType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Eplayer_stat_type> StatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   ElementType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELoadoutStatTypes> LoadoutStatType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetHUDStatType(TEnumAsByte<Eplayer_stat_type> StatType, EElementType ElementType, class UObject* __WorldContext, TEnumAsByte<ELoadoutStatTypes>* LoadoutStatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetHUDStatType");

	Uarchon_function_library_C_GetHUDStatType_Params params;
	params.StatType = StatType;
	params.ElementType = ElementType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadoutStatType != nullptr)
		*LoadoutStatType = params.LoadoutStatType;
}


// Function archon_function_library.archon_function_library_C.BuildElementalFloatArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          flame                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          frost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          shock                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          radiant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          umbral                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IgnoreElementsWithThisValue    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> ElementalFloatArray            (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_BuildElementalFloatArray(float flame, float frost, float shock, float radiant, float umbral, float IgnoreElementsWithThisValue, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementalFloatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.BuildElementalFloatArray");

	Uarchon_function_library_C_BuildElementalFloatArray_Params params;
	params.flame = flame;
	params.frost = frost;
	params.shock = shock;
	params.radiant = radiant;
	params.umbral = umbral;
	params.IgnoreElementsWithThisValue = IgnoreElementsWithThisValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementalFloatArray != nullptr)
		*ElementalFloatArray = params.ElementalFloatArray;
}


// Function archon_function_library.archon_function_library_C.GetStandardBehemothStrengthMultipiers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NeutralMultiplier              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StrongAgainstMultiplier        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          WeakAgainstMultiplier          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetStandardBehemothStrengthMultipiers(class UObject* __WorldContext, float* NeutralMultiplier, float* StrongAgainstMultiplier, float* WeakAgainstMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetStandardBehemothStrengthMultipiers");

	Uarchon_function_library_C_GetStandardBehemothStrengthMultipiers_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeutralMultiplier != nullptr)
		*NeutralMultiplier = params.NeutralMultiplier;
	if (StrongAgainstMultiplier != nullptr)
		*StrongAgainstMultiplier = params.StrongAgainstMultiplier;
	if (WeakAgainstMultiplier != nullptr)
		*WeakAgainstMultiplier = params.WeakAgainstMultiplier;
}


// Function archon_function_library.archon_function_library_C.GetElementHUDColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetElementHUDColor(EElementType Element, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetElementHUDColor");

	Uarchon_function_library_C_GetElementHUDColor_Params params;
	params.Element = Element;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function archon_function_library.archon_function_library_C.GetBehemothIs_ElementVulnerabilityText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EElementType                   ElementType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ElementName                    (Parm, OutParm)

void Uarchon_function_library_C::STATIC_GetBehemothIs_ElementVulnerabilityText(EElementType ElementType, float Value, class UObject* __WorldContext, struct FText* ElementName)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetBehemothIs_ElementVulnerabilityText");

	Uarchon_function_library_C_GetBehemothIs_ElementVulnerabilityText_Params params;
	params.ElementType = ElementType;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementName != nullptr)
		*ElementName = params.ElementName;
}


// Function archon_function_library.archon_function_library_C.IsCancelWindowNotifyActive
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonAttackActionKeyModifier ModifierKey                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TrueIfNoMontageActive_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsCancelWindowNotifyActive(class AActor* Actor, EArchonAttackActionKeyModifier ModifierKey, bool TrueIfNoMontageActive_, class UObject* __WorldContext, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsCancelWindowNotifyActive");

	Uarchon_function_library_C_IsCancelWindowNotifyActive_Params params;
	params.Actor = Actor;
	params.ModifierKey = ModifierKey;
	params.TrueIfNoMontageActive_ = TrueIfNoMontageActive_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function archon_function_library.archon_function_library_C.BadgeIsBetter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Impressiveness1                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_elite_status> EliteStatus1                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_levels>     BadgeLevel1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Impressiveness2                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_elite_status> EliteStatus2                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_levels>     BadgeLevel2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebadge_compare>    Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_BadgeIsBetter(float Impressiveness1, TEnumAsByte<Ebadge_elite_status> EliteStatus1, TEnumAsByte<Ebadge_levels> BadgeLevel1, float Impressiveness2, TEnumAsByte<Ebadge_elite_status> EliteStatus2, TEnumAsByte<Ebadge_levels> BadgeLevel2, class UObject* __WorldContext, TEnumAsByte<Ebadge_compare>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.BadgeIsBetter");

	Uarchon_function_library_C_BadgeIsBetter_Params params;
	params.Impressiveness1 = Impressiveness1;
	params.EliteStatus1 = EliteStatus1;
	params.BadgeLevel1 = BadgeLevel1;
	params.Impressiveness2 = Impressiveness2;
	params.EliteStatus2 = EliteStatus2;
	params.BadgeLevel2 = BadgeLevel2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function archon_function_library.archon_function_library_C.GetAllResistanceStats
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fnamed_attribute> ResistanceStats                (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetAllResistanceStats(class UObject* __WorldContext, TArray<struct Fnamed_attribute>* ResistanceStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetAllResistanceStats");

	Uarchon_function_library_C_GetAllResistanceStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResistanceStats != nullptr)
		*ResistanceStats = params.ResistanceStats;
}


// Function archon_function_library.archon_function_library_C.GetAllPowerStats
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fnamed_attribute> AttributeInfo                  (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetAllPowerStats(class UObject* __WorldContext, TArray<struct Fnamed_attribute>* AttributeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetAllPowerStats");

	Uarchon_function_library_C_GetAllPowerStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeInfo != nullptr)
		*AttributeInfo = params.AttributeInfo;
}


// Function archon_function_library.archon_function_library_C.InheritPowerFromActor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Einherit_stat_type> InheritType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ApplyPowerToThisActor          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InheritPowerFromThisActor      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_InheritPowerFromActor(TEnumAsByte<Einherit_stat_type> InheritType, class AActor* ApplyPowerToThisActor, class AActor* InheritPowerFromThisActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.InheritPowerFromActor");

	Uarchon_function_library_C_InheritPowerFromActor_Params params;
	params.InheritType = InheritType;
	params.ApplyPowerToThisActor = ApplyPowerToThisActor;
	params.InheritPowerFromThisActor = InheritPowerFromThisActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.PrintAllTagsFunc
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_PrintAllTagsFunc(class UObject* __WorldContext, struct FGameplayTagContainer* Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.PrintAllTagsFunc");

	Uarchon_function_library_C_PrintAllTagsFunc_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
}


// Function archon_function_library.archon_function_library_C.GetElementHitVFX
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       flame                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       frost                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       shock                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       radiant                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       umbral                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       RawElemental                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 World_Context_Object           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LogErrors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetElementHitVFX(class UObject* World_Context_Object, bool LogErrors, class UObject* __WorldContext, struct FGameplayTagContainer* Tags, struct Fhitfx_optimality* flame, struct Fhitfx_optimality* frost, struct Fhitfx_optimality* shock, struct Fhitfx_optimality* radiant, struct Fhitfx_optimality* umbral, struct Fhitfx_optimality* RawElemental, class UParticleSystem** Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetElementHitVFX");

	Uarchon_function_library_C_GetElementHitVFX_Params params;
	params.World_Context_Object = World_Context_Object;
	params.LogErrors = LogErrors;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (flame != nullptr)
		*flame = params.flame;
	if (frost != nullptr)
		*frost = params.frost;
	if (shock != nullptr)
		*shock = params.shock;
	if (radiant != nullptr)
		*radiant = params.radiant;
	if (umbral != nullptr)
		*umbral = params.umbral;
	if (RawElemental != nullptr)
		*RawElemental = params.RawElemental;
	if (Return != nullptr)
		*Return = params.Return;
}


// Function archon_function_library.archon_function_library_C.GetHitOptimality
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Fhitfx_optimality       InVFXOptimality                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RateScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SizeScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetHitOptimality(const struct Fhitfx_optimality& InVFXOptimality, class UObject* __WorldContext, struct FGameplayTagContainer* Tags, class UParticleSystem** Return, float* RateScale, float* SizeScale, float* SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetHitOptimality");

	Uarchon_function_library_C_GetHitOptimality_Params params;
	params.InVFXOptimality = InVFXOptimality;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (Return != nullptr)
		*Return = params.Return;
	if (RateScale != nullptr)
		*RateScale = params.RateScale;
	if (SizeScale != nullptr)
		*SizeScale = params.SizeScale;
	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
}


// Function archon_function_library.archon_function_library_C.LowPassFilterVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Sample                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PreviousValue                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TimeConstant                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SmoothedValue                  (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_LowPassFilterVector(const struct FVector& Sample, const struct FVector& PreviousValue, float TimeConstant, float DeltaSeconds, class UObject* __WorldContext, struct FVector* SmoothedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.LowPassFilterVector");

	Uarchon_function_library_C_LowPassFilterVector_Params params;
	params.Sample = Sample;
	params.PreviousValue = PreviousValue;
	params.TimeConstant = TimeConstant;
	params.DeltaSeconds = DeltaSeconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SmoothedValue != nullptr)
		*SmoothedValue = params.SmoothedValue;
}


// Function archon_function_library.archon_function_library_C.RunTargettingChecksOnTargetSet
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbehemoth_targetting_data> Targetting_Data                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ActorWhoIsTargetting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonCharacter*> TargetSet                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonCharacter*> AvailableTargets               (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_RunTargettingChecksOnTargetSet(class AActor* ActorWhoIsTargetting, class UObject* __WorldContext, TArray<struct Fbehemoth_targetting_data>* Targetting_Data, TArray<class AArchonCharacter*>* TargetSet, TArray<class AArchonCharacter*>* AvailableTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.RunTargettingChecksOnTargetSet");

	Uarchon_function_library_C_RunTargettingChecksOnTargetSet_Params params;
	params.ActorWhoIsTargetting = ActorWhoIsTargetting;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targetting_Data != nullptr)
		*Targetting_Data = params.Targetting_Data;
	if (TargetSet != nullptr)
		*TargetSet = params.TargetSet;
	if (AvailableTargets != nullptr)
		*AvailableTargets = params.AvailableTargets;
}


// Function archon_function_library.archon_function_library_C.GetUnitVectorForDirection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Edirection_enum>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 UnitVector                     (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetUnitVectorForDirection(TEnumAsByte<Edirection_enum> Direction, class UObject* __WorldContext, struct FVector* UnitVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetUnitVectorForDirection");

	Uarchon_function_library_C_GetUnitVectorForDirection_Params params;
	params.Direction = Direction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnitVector != nullptr)
		*UnitVector = params.UnitVector;
}


// Function archon_function_library.archon_function_library_C.GetAngleForDirection
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Edirection_enum>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetAngleForDirection(TEnumAsByte<Edirection_enum> Direction, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetAngleForDirection");

	Uarchon_function_library_C_GetAngleForDirection_Params params;
	params.Direction = Direction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function archon_function_library.archon_function_library_C.CalculateScalingStatValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ScalingFactor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ContributionFromScalingFactor  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CalculatedValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_CalculateScalingStatValue(float ScalingFactor, float BaseValue, float ContributionFromScalingFactor, class UObject* __WorldContext, float* CalculatedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.CalculateScalingStatValue");

	Uarchon_function_library_C_CalculateScalingStatValue_Params params;
	params.ScalingFactor = ScalingFactor;
	params.BaseValue = BaseValue;
	params.ContributionFromScalingFactor = ContributionFromScalingFactor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CalculatedValue != nullptr)
		*CalculatedValue = params.CalculatedValue;
}


// Function archon_function_library.archon_function_library_C.ActorIsAlive
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAlive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ActorIsAlive(class AActor* Actor, class UObject* __WorldContext, bool* IsAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ActorIsAlive");

	Uarchon_function_library_C_ActorIsAlive_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function archon_function_library.archon_function_library_C.GetPlayerCharacters
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IncludeBots                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyAlivePlayers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonCharacter*> PlayerCharacters               (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetPlayerCharacters(bool IncludeBots, bool OnlyAlivePlayers, class UObject* __WorldContext, TArray<class AArchonCharacter*>* PlayerCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetPlayerCharacters");

	Uarchon_function_library_C_GetPlayerCharacters_Params params;
	params.IncludeBots = IncludeBots;
	params.OnlyAlivePlayers = OnlyAlivePlayers;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCharacters != nullptr)
		*PlayerCharacters = params.PlayerCharacters;
}


// Function archon_function_library.archon_function_library_C.NegateFloatPure
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Fin                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Fout                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_NegateFloatPure(float Fin, class UObject* __WorldContext, float* Fout)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.NegateFloatPure");

	Uarchon_function_library_C_NegateFloatPure_Params params;
	params.Fin = Fin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fout != nullptr)
		*Fout = params.Fout;
}


// Function archon_function_library.archon_function_library_C.GetShortestArcRotator
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DefaultAxis                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotator                     (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetShortestArcRotator(const struct FVector& V0, const struct FVector& v1, const struct FVector& DefaultAxis, class UObject* __WorldContext, struct FRotator* OutRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetShortestArcRotator");

	Uarchon_function_library_C_GetShortestArcRotator_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.DefaultAxis = DefaultAxis;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotator != nullptr)
		*OutRotator = params.OutRotator;
}


// Function archon_function_library.archon_function_library_C.LowPassFilter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Sample                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeConstant                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SmoothedValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_LowPassFilter(float Sample, float PreviousValue, float TimeConstant, float DeltaSeconds, class UObject* __WorldContext, float* SmoothedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.LowPassFilter");

	Uarchon_function_library_C_LowPassFilter_Params params;
	params.Sample = Sample;
	params.PreviousValue = PreviousValue;
	params.TimeConstant = TimeConstant;
	params.DeltaSeconds = DeltaSeconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SmoothedValue != nullptr)
		*SmoothedValue = params.SmoothedValue;
}


// Function archon_function_library.archon_function_library_C.IsWithinAngleRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ComparePoint                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ForwardVector                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TotalAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWithinAngleRange             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsWithinAngleRange(const struct FVector& Center, const struct FVector& ComparePoint, const struct FVector& ForwardVector, float TotalAngle, class UObject* __WorldContext, bool* IsWithinAngleRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsWithinAngleRange");

	Uarchon_function_library_C_IsWithinAngleRange_Params params;
	params.Center = Center;
	params.ComparePoint = ComparePoint;
	params.ForwardVector = ForwardVector;
	params.TotalAngle = TotalAngle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWithinAngleRange != nullptr)
		*IsWithinAngleRange = params.IsWithinAngleRange;
}


// Function archon_function_library.archon_function_library_C.XYAngleBetweenVectors
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_XYAngleBetweenVectors(const struct FVector& V0, const struct FVector& v1, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.XYAngleBetweenVectors");

	Uarchon_function_library_C_XYAngleBetweenVectors_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function archon_function_library.archon_function_library_C.AuthGetNewOrExistingGUID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   NewOrExistingGUID              (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_AuthGetNewOrExistingGUID(class AActor* OwnerActor, const struct FName& Name, class UObject* __WorldContext, struct FGuid* NewOrExistingGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.AuthGetNewOrExistingGUID");

	Uarchon_function_library_C_AuthGetNewOrExistingGUID_Params params;
	params.OwnerActor = OwnerActor;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewOrExistingGUID != nullptr)
		*NewOrExistingGUID = params.NewOrExistingGUID;
}


// Function archon_function_library.archon_function_library_C.GetOwnerMesh
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetOwnerMesh(class UActorComponent* Component, class UObject* __WorldContext, class USkeletalMeshComponent** SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetOwnerMesh");

	Uarchon_function_library_C_GetOwnerMesh_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMeshComponent != nullptr)
		*SkeletalMeshComponent = params.SkeletalMeshComponent;
}


// Function archon_function_library.archon_function_library_C.CalculateSpeedOrDurationValue
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fspeed_or_duration_info SpeedOrDuration                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fspeed_or_duration_info UpdatedSpeedOrDuration         (Parm, OutParm)

void Uarchon_function_library_C::STATIC_CalculateSpeedOrDurationValue(const struct Fspeed_or_duration_info& SpeedOrDuration, class UObject* __WorldContext, struct Fspeed_or_duration_info* UpdatedSpeedOrDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.CalculateSpeedOrDurationValue");

	Uarchon_function_library_C_CalculateSpeedOrDurationValue_Params params;
	params.SpeedOrDuration = SpeedOrDuration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedSpeedOrDuration != nullptr)
		*UpdatedSpeedOrDuration = params.UpdatedSpeedOrDuration;
}


// Function archon_function_library.archon_function_library_C.TryAddBuffs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          BuffClasses                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartBuffs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonBuff*>     AppliedBuffs                   (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_TryAddBuffs(class AActor* TargetActor, class AActor* Instigator, bool StartBuffs, class UObject* __WorldContext, TArray<class UClass*>* BuffClasses, TArray<class AArchonBuff*>* AppliedBuffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.TryAddBuffs");

	Uarchon_function_library_C_TryAddBuffs_Params params;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;
	params.StartBuffs = StartBuffs;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffClasses != nullptr)
		*BuffClasses = params.BuffClasses;
	if (AppliedBuffs != nullptr)
		*AppliedBuffs = params.AppliedBuffs;
}


// Function archon_function_library.archon_function_library_C.InheritResistancesFromActor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ApplyResistancesToThisActor    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InheritResistancesFromThisActor (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Einherit_stat_type> InheritType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_InheritResistancesFromActor(class AActor* ApplyResistancesToThisActor, class AActor* InheritResistancesFromThisActor, TEnumAsByte<Einherit_stat_type> InheritType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.InheritResistancesFromActor");

	Uarchon_function_library_C_InheritResistancesFromActor_Params params;
	params.ApplyResistancesToThisActor = ApplyResistancesToThisActor;
	params.InheritResistancesFromThisActor = InheritResistancesFromThisActor;
	params.InheritType = InheritType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.GetRandom2DUnitVector
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Random2DUnitVector             (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetRandom2DUnitVector(class UObject* __WorldContext, struct FVector* Random2DUnitVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetRandom2DUnitVector");

	Uarchon_function_library_C_GetRandom2DUnitVector_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random2DUnitVector != nullptr)
		*Random2DUnitVector = params.Random2DUnitVector;
}


// Function archon_function_library.archon_function_library_C.GetStatusEffectResistanceMultiplier
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SourcePower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetResistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             ScalingCurve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetStatusEffectResistanceMultiplier(float SourcePower, float TargetResistance, class UCurveFloat* ScalingCurve, class UObject* __WorldContext, float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetStatusEffectResistanceMultiplier");

	Uarchon_function_library_C_GetStatusEffectResistanceMultiplier_Params params;
	params.SourcePower = SourcePower;
	params.TargetResistance = TargetResistance;
	params.ScalingCurve = ScalingCurve;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function archon_function_library.archon_function_library_C.GetSpecialEffectsForTags
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FStruct_TagToSpecialEffects> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FStruct_TagToSpecialEffects> Particle_Systems               (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetSpecialEffectsForTags(class UObject* __WorldContext, struct FGameplayTagContainer* Tags, TArray<struct FStruct_TagToSpecialEffects>* Effects, TArray<struct FStruct_TagToSpecialEffects>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetSpecialEffectsForTags");

	Uarchon_function_library_C_GetSpecialEffectsForTags_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (Effects != nullptr)
		*Effects = params.Effects;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function archon_function_library.archon_function_library_C.GetArcPoint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrPoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalPoints                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Facing                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AngleWidth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleCenter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ArcPoint                       (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetArcPoint(int CurrPoint, int TotalPoints, const struct FVector& Center, float Radius, const struct FVector& Facing, float AngleWidth, float AngleCenter, class UObject* __WorldContext, struct FVector* ArcPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetArcPoint");

	Uarchon_function_library_C_GetArcPoint_Params params;
	params.CurrPoint = CurrPoint;
	params.TotalPoints = TotalPoints;
	params.Center = Center;
	params.Radius = Radius;
	params.Facing = Facing;
	params.AngleWidth = AngleWidth;
	params.AngleCenter = AngleCenter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArcPoint != nullptr)
		*ArcPoint = params.ArcPoint;
}


// Function archon_function_library.archon_function_library_C.GetMeshLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetMeshLocation(class AActor* Actor, class UObject* __WorldContext, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetMeshLocation");

	Uarchon_function_library_C_GetMeshLocation_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function archon_function_library.archon_function_library_C.XY
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 In                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Out                            (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_XY(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.XY");

	Uarchon_function_library_C_XY_Params params;
	params.In = In;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function archon_function_library.archon_function_library_C.GetXYAngle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleDegrees                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetXYAngle(const struct FVector& Vector, class UObject* __WorldContext, float* AngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetXYAngle");

	Uarchon_function_library_C_GetXYAngle_Params params;
	params.Vector = Vector;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleDegrees != nullptr)
		*AngleDegrees = params.AngleDegrees;
}


// Function archon_function_library.archon_function_library_C.GetComponentName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ComponentName                  (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetComponentName(class UActorComponent* Component, class UObject* __WorldContext, class FString* ComponentName)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetComponentName");

	Uarchon_function_library_C_GetComponentName_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComponentName != nullptr)
		*ComponentName = params.ComponentName;
}


// Function archon_function_library.archon_function_library_C.IsLocalOrSpectatedCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsLocalOrSpectatedCharacter(class AActor* Actor, class UObject* __WorldContext, bool* IsLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsLocalOrSpectatedCharacter");

	Uarchon_function_library_C_IsLocalOrSpectatedCharacter_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocal != nullptr)
		*IsLocal = params.IsLocal;
}


// Function archon_function_library.archon_function_library_C.GetLocalOrSpectatedCharacter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonCharacter*        LocalOrSpectatedCharacter      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetLocalOrSpectatedCharacter(class UObject* __WorldContext, class AArchonCharacter** LocalOrSpectatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetLocalOrSpectatedCharacter");

	Uarchon_function_library_C_GetLocalOrSpectatedCharacter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalOrSpectatedCharacter != nullptr)
		*LocalOrSpectatedCharacter = params.LocalOrSpectatedCharacter;
}


// Function archon_function_library.archon_function_library_C.GetLocalController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonPlayerController* ArchonPlayerController         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetLocalController(class UObject* __WorldContext, class AArchonPlayerController** ArchonPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetLocalController");

	Uarchon_function_library_C_GetLocalController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchonPlayerController != nullptr)
		*ArchonPlayerController = params.ArchonPlayerController;
}


// Function archon_function_library.archon_function_library_C.DrawDebugHorizontalAngle
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Facing                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ArcColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            FullCylinderColor              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            PartialCylinderColor           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawMaxRangeCylinder           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_DrawDebugHorizontalAngle(const struct FVector& Center, const struct FVector& Facing, float Angle, float Range, const struct FLinearColor& ArcColor, const struct FLinearColor& FullCylinderColor, const struct FLinearColor& PartialCylinderColor, float Duration, bool DrawMaxRangeCylinder, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.DrawDebugHorizontalAngle");

	Uarchon_function_library_C_DrawDebugHorizontalAngle_Params params;
	params.Center = Center;
	params.Facing = Facing;
	params.Angle = Angle;
	params.Range = Range;
	params.ArcColor = ArcColor;
	params.FullCylinderColor = FullCylinderColor;
	params.PartialCylinderColor = PartialCylinderColor;
	params.Duration = Duration;
	params.DrawMaxRangeCylinder = DrawMaxRangeCylinder;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.ConvertAngleTo360
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle360                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ConvertAngleTo360(float Angle, class UObject* __WorldContext, float* Angle360)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ConvertAngleTo360");

	Uarchon_function_library_C_ConvertAngleTo360_Params params;
	params.Angle = Angle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle360 != nullptr)
		*Angle360 = params.Angle360;
}


// Function archon_function_library.archon_function_library_C.GetTopdownAngleBetweenPoints
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 StartPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Facing                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetTopdownAngleBetweenPoints(const struct FVector& StartPoint, const struct FVector& Facing, const struct FVector& EndPoint, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetTopdownAngleBetweenPoints");

	Uarchon_function_library_C_GetTopdownAngleBetweenPoints_Params params;
	params.StartPoint = StartPoint;
	params.Facing = Facing;
	params.EndPoint = EndPoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function archon_function_library.archon_function_library_C.RotateObjectToNormal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_RotateObjectToNormal(const struct FVector& Normal, class UObject* __WorldContext, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.RotateObjectToNormal");

	Uarchon_function_library_C_RotateObjectToNormal_Params params;
	params.Normal = Normal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function archon_function_library.archon_function_library_C.TryDestroyComponent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         ActorComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_TryDestroyComponent(class UActorComponent* ActorComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.TryDestroyComponent");

	Uarchon_function_library_C_TryDestroyComponent_Params params;
	params.ActorComponent = ActorComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.TryDeactivateComponent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         ActorComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_TryDeactivateComponent(class UActorComponent* ActorComponent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.TryDeactivateComponent");

	Uarchon_function_library_C_TryDeactivateComponent_Params params;
	params.ActorComponent = ActorComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.ApplyDamageFromRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageTable                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 HitFromDirection               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ApplyDamageFromRow(class AActor* DamagedActor, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UObject* __WorldContext, struct FDamageTableData* DamageTable, struct FVector* HitFromDirection, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ApplyDamageFromRow");

	Uarchon_function_library_C_ApplyDamageFromRow_Params params;
	params.DamagedActor = DamagedActor;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageTable != nullptr)
		*DamageTable = params.DamageTable;
	if (HitFromDirection != nullptr)
		*HitFromDirection = params.HitFromDirection;
	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function archon_function_library.archon_function_library_C.GetDamageRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageInfo                     (Parm, OutParm)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetDamageRow(class APawn* Instigator, const struct FName& RowName, class UObject* __WorldContext, struct FDamageTableData* DamageInfo, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetDamageRow");

	Uarchon_function_library_C_GetDamageRow_Params params;
	params.Instigator = Instigator;
	params.RowName = RowName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


// Function archon_function_library.archon_function_library_C.GetWeaponSwingStrength
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeaponDamage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SwingStrengthPercent           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetWeaponSwingStrength(class AActor* DamageCauser, float DamageAmount, class AController* DamageInstigator, class UObject* __WorldContext, bool* IsWeaponDamage, float* SwingStrengthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetWeaponSwingStrength");

	Uarchon_function_library_C_GetWeaponSwingStrength_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeaponDamage != nullptr)
		*IsWeaponDamage = params.IsWeaponDamage;
	if (SwingStrengthPercent != nullptr)
		*SwingStrengthPercent = params.SwingStrengthPercent;
}


// Function archon_function_library.archon_function_library_C.GetGlobalBlueprintValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Ebp_globals_enum>  Global                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetGlobalBlueprintValue(TEnumAsByte<Ebp_globals_enum> Global, class UObject* __WorldContext, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetGlobalBlueprintValue");

	Uarchon_function_library_C_GetGlobalBlueprintValue_Params params;
	params.Global = Global;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function archon_function_library.archon_function_library_C.GetGroundPosAndNormal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AmountUpToStart                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToTraceDown            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GroundPos                      (Parm, OutParm, IsPlainOldData)
// struct FVector                 GroundNormal                   (Parm, OutParm, IsPlainOldData)
// bool                           HitGround                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetGroundPosAndNormal(const struct FVector& Location, float AmountUpToStart, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DistanceToTraceDown, class UObject* __WorldContext, TArray<class AActor*>* ActorsToIgnore, struct FVector* GroundPos, struct FVector* GroundNormal, bool* HitGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetGroundPosAndNormal");

	Uarchon_function_library_C_GetGroundPosAndNormal_Params params;
	params.Location = Location;
	params.AmountUpToStart = AmountUpToStart;
	params.DrawDebugType = DrawDebugType;
	params.DistanceToTraceDown = DistanceToTraceDown;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;
	if (GroundPos != nullptr)
		*GroundPos = params.GroundPos;
	if (GroundNormal != nullptr)
		*GroundNormal = params.GroundNormal;
	if (HitGround != nullptr)
		*HitGround = params.HitGround;
}


// Function archon_function_library.archon_function_library_C.PostEventTemp
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEventBase*       AkEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopWhenAttachedToDestroyed    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_PostEventTemp(class UAkAudioEventBase* AkEvent, class AActor* Actor, bool StopWhenAttachedToDestroyed, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.PostEventTemp");

	Uarchon_function_library_C_PostEventTemp_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.StopWhenAttachedToDestroyed = StopWhenAttachedToDestroyed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function archon_function_library.archon_function_library_C.GetAvailablePlayerTargets
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbehemoth_targetting_data> Targetting_Data                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ActorWhoIsTargetting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonCharacter*> AvailableTargets               (Parm, OutParm, ZeroConstructor)

void Uarchon_function_library_C::STATIC_GetAvailablePlayerTargets(class AActor* ActorWhoIsTargetting, class UObject* __WorldContext, TArray<struct Fbehemoth_targetting_data>* Targetting_Data, TArray<class AArchonCharacter*>* AvailableTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetAvailablePlayerTargets");

	Uarchon_function_library_C_GetAvailablePlayerTargets_Params params;
	params.ActorWhoIsTargetting = ActorWhoIsTargetting;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targetting_Data != nullptr)
		*Targetting_Data = params.Targetting_Data;
	if (AvailableTargets != nullptr)
		*AvailableTargets = params.AvailableTargets;
}


// Function archon_function_library.archon_function_library_C.ConvertAngleToSigned180
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Signed180Angle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ConvertAngleToSigned180(float Angle, class UObject* __WorldContext, float* Signed180Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ConvertAngleToSigned180");

	Uarchon_function_library_C_ConvertAngleToSigned180_Params params;
	params.Angle = Angle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Signed180Angle != nullptr)
		*Signed180Angle = params.Signed180Angle;
}


// Function archon_function_library.archon_function_library_C.ScaleHealthByPlayerCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          HealthValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PerPlayerHealthIncRatio        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalPlayers                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaledHealthValue              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ScaleHealthByPlayerCount(float HealthValue, float PerPlayerHealthIncRatio, int TotalPlayers, class UObject* __WorldContext, float* ScaledHealthValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ScaleHealthByPlayerCount");

	Uarchon_function_library_C_ScaleHealthByPlayerCount_Params params;
	params.HealthValue = HealthValue;
	params.PerPlayerHealthIncRatio = PerPlayerHealthIncRatio;
	params.TotalPlayers = TotalPlayers;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScaledHealthValue != nullptr)
		*ScaledHealthValue = params.ScaledHealthValue;
}


// Function archon_function_library.archon_function_library_C.SpawnImpulse
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Farchon_impulse         Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         ComponentToSpawnAt             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleRefIfSpawned           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SpawnImpulse(const struct Farchon_impulse& Impulse, class USceneComponent* ComponentToSpawnAt, class UObject* __WorldContext, class UParticleSystemComponent** ParticleRefIfSpawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SpawnImpulse");

	Uarchon_function_library_C_SpawnImpulse_Params params;
	params.Impulse = Impulse;
	params.ComponentToSpawnAt = ComponentToSpawnAt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleRefIfSpawned != nullptr)
		*ParticleRefIfSpawned = params.ParticleRefIfSpawned;
}


// Function archon_function_library.archon_function_library_C.GetHorizPredictedMovement
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeInFuture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FutureLocation                 (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetHorizPredictedMovement(class AActor* Target, float TimeInFuture, class UObject* __WorldContext, struct FVector* FutureLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetHorizPredictedMovement");

	Uarchon_function_library_C_GetHorizPredictedMovement_Params params;
	params.Target = Target;
	params.TimeInFuture = TimeInFuture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FutureLocation != nullptr)
		*FutureLocation = params.FutureLocation;
}


// Function archon_function_library.archon_function_library_C.CanDoMathWithBlackboardType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Eblackboard_comparable_key_type> BlackboardType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanMath                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_CanDoMathWithBlackboardType(TEnumAsByte<Eblackboard_comparable_key_type> BlackboardType, class UObject* __WorldContext, bool* CanMath)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.CanDoMathWithBlackboardType");

	Uarchon_function_library_C_CanDoMathWithBlackboardType_Params params;
	params.BlackboardType = BlackboardType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanMath != nullptr)
		*CanMath = params.CanMath;
}


// Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Fsimplified_blackboard_key_data Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            IntValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SimplifiedBBData_GetInt(const struct Fsimplified_blackboard_key_data& Data, class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetInt");

	Uarchon_function_library_C_SimplifiedBBData_GetInt_Params params;
	params.Data = Data;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntValue != nullptr)
		*IntValue = params.IntValue;
}


// Function archon_function_library.archon_function_library_C.BlackboardMath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  LeftSideKey                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Eblackboard_comparable_key_type> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eblackboard_math_operators> Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fsimplified_blackboard_key_data RightSideData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_BlackboardMath(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& LeftSideKey, TEnumAsByte<Eblackboard_comparable_key_type> Type, TEnumAsByte<Eblackboard_math_operators> Operator, const struct Fsimplified_blackboard_key_data& RightSideData, class UObject* __WorldContext, float* FloatResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.BlackboardMath");

	Uarchon_function_library_C_BlackboardMath_Params params;
	params.Blackboard = Blackboard;
	params.LeftSideKey = LeftSideKey;
	params.Type = Type;
	params.Operator = Operator;
	params.RightSideData = RightSideData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatResult != nullptr)
		*FloatResult = params.FloatResult;
}


// Function archon_function_library.archon_function_library_C.IsWithinDistanceFast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Pos2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWithinDistance               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsWithinDistanceFast(const struct FVector& Pos1, const struct FVector& Pos2, float Distance, class UObject* __WorldContext, bool* IsWithinDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsWithinDistanceFast");

	Uarchon_function_library_C_IsWithinDistanceFast_Params params;
	params.Pos1 = Pos1;
	params.Pos2 = Pos2;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWithinDistance != nullptr)
		*IsWithinDistance = params.IsWithinDistance;
}


// Function archon_function_library.archon_function_library_C.GetDistanceSqr
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Pos1                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Pos2                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceSqr                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetDistanceSqr(const struct FVector& Pos1, const struct FVector& Pos2, class UObject* __WorldContext, float* DistanceSqr)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetDistanceSqr");

	Uarchon_function_library_C_GetDistanceSqr_Params params;
	params.Pos1 = Pos1;
	params.Pos2 = Pos2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceSqr != nullptr)
		*DistanceSqr = params.DistanceSqr;
}


// Function archon_function_library.archon_function_library_C.GetTopdownAngleBetween
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  CenterActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CenterOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetTopdownAngleBetween(class AActor* CenterActor, const struct FVector& CenterOffset, const struct FVector& Location, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetTopdownAngleBetween");

	Uarchon_function_library_C_GetTopdownAngleBetween_Params params;
	params.CenterActor = CenterActor;
	params.CenterOffset = CenterOffset;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetFloat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Fsimplified_blackboard_key_data Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SimplifiedBBData_GetFloat(const struct Fsimplified_blackboard_key_data& Data, class UBlackboardComponent* Blackboard, class UObject* __WorldContext, float* FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetFloat");

	Uarchon_function_library_C_SimplifiedBBData_GetFloat_Params params;
	params.Data = Data;
	params.Blackboard = Blackboard;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;
}


// Function archon_function_library.archon_function_library_C.SetBlackBoardValue
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  ResultKey                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Fsimplified_blackboard_key_data SourceData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Eblackboard_comparable_key_type> Variable_Type                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Sucessfully_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SetBlackBoardValue(class UBlackboardComponent* BlackboardComponent, const struct FBlackboardKeySelector& ResultKey, const struct Fsimplified_blackboard_key_data& SourceData, TEnumAsByte<Eblackboard_comparable_key_type> Variable_Type, class UObject* __WorldContext, bool* Sucessfully_Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SetBlackBoardValue");

	Uarchon_function_library_C_SetBlackBoardValue_Params params;
	params.BlackboardComponent = BlackboardComponent;
	params.ResultKey = ResultKey;
	params.SourceData = SourceData;
	params.Variable_Type = Variable_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sucessfully_Set != nullptr)
		*Sucessfully_Set = params.Sucessfully_Set;
}


// Function archon_function_library.archon_function_library_C.SimplifyBlackboardKeyType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  KeyTypeClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eblackboard_comparable_key_type> SimplifiedType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SimplifyBlackboardKeyType(class UClass* KeyTypeClass, class UObject* __WorldContext, TEnumAsByte<Eblackboard_comparable_key_type>* SimplifiedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SimplifyBlackboardKeyType");

	Uarchon_function_library_C_SimplifyBlackboardKeyType_Params params;
	params.KeyTypeClass = KeyTypeClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SimplifiedType != nullptr)
		*SimplifiedType = params.SimplifiedType;
}


// Function archon_function_library.archon_function_library_C.IsCompareTypeAllowedForBlackboardKey
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Eblackboard_comparable_key_type> KeyType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_CompareOperators> Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAllowed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_IsCompareTypeAllowedForBlackboardKey(TEnumAsByte<Eblackboard_comparable_key_type> KeyType, TEnumAsByte<Enum_CompareOperators> Operator, class UObject* __WorldContext, bool* IsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.IsCompareTypeAllowedForBlackboardKey");

	Uarchon_function_library_C_IsCompareTypeAllowedForBlackboardKey_Params params;
	params.KeyType = KeyType;
	params.Operator = Operator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAllowed != nullptr)
		*IsAllowed = params.IsAllowed;
}


// Function archon_function_library.archon_function_library_C.CompareBlackboardValues
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LeftSideKeyName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_CompareOperators> CompareOperator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eblackboard_comparable_key_type> CompareType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fsimplified_blackboard_key_data RightSideData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_CompareBlackboardValues(class UBlackboardComponent* BlackboardComponent, const struct FName& LeftSideKeyName, TEnumAsByte<Enum_CompareOperators> CompareOperator, TEnumAsByte<Eblackboard_comparable_key_type> CompareType, const struct Fsimplified_blackboard_key_data& RightSideData, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.CompareBlackboardValues");

	Uarchon_function_library_C_CompareBlackboardValues_Params params;
	params.BlackboardComponent = BlackboardComponent;
	params.LeftSideKeyName = LeftSideKeyName;
	params.CompareOperator = CompareOperator;
	params.CompareType = CompareType;
	params.RightSideData = RightSideData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function archon_function_library.archon_function_library_C.SpawnEmitterFromStruct
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fvfx_with_socket_struct VFXInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         ComponentToAttachTo            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* Particle_System_Component      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_SpawnEmitterFromStruct(const struct Fvfx_with_socket_struct& VFXInfo, class USceneComponent* ComponentToAttachTo, class UObject* __WorldContext, class UParticleSystemComponent** Particle_System_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.SpawnEmitterFromStruct");

	Uarchon_function_library_C_SpawnEmitterFromStruct_Params params;
	params.VFXInfo = VFXInfo;
	params.ComponentToAttachTo = ComponentToAttachTo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Particle_System_Component != nullptr)
		*Particle_System_Component = params.Particle_System_Component;
}


// Function archon_function_library.archon_function_library_C.ModifyProjectileTargetPosition
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprojectile_target_modifier projectile_target_modifier     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 TargetPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ProjectileSpawnLocation        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            TotalNumProjectiles            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentProjectileIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalTargetActor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdjustedTargetPos              (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_ModifyProjectileTargetPosition(const struct FVector& TargetPosition, const struct FVector& ProjectileSpawnLocation, int TotalNumProjectiles, int CurrentProjectileIndex, class AActor* Instigator, class AActor* OptionalTargetActor, class UObject* __WorldContext, struct Fprojectile_target_modifier* projectile_target_modifier, struct FVector* AdjustedTargetPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.ModifyProjectileTargetPosition");

	Uarchon_function_library_C_ModifyProjectileTargetPosition_Params params;
	params.TargetPosition = TargetPosition;
	params.ProjectileSpawnLocation = ProjectileSpawnLocation;
	params.TotalNumProjectiles = TotalNumProjectiles;
	params.CurrentProjectileIndex = CurrentProjectileIndex;
	params.Instigator = Instigator;
	params.OptionalTargetActor = OptionalTargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (projectile_target_modifier != nullptr)
		*projectile_target_modifier = params.projectile_target_modifier;
	if (AdjustedTargetPos != nullptr)
		*AdjustedTargetPos = params.AdjustedTargetPos;
}


// Function archon_function_library.archon_function_library_C.GetPointOnLineForTargets
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TotalSizeOfPerpendicularLine   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPoints                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Uarchon_function_library_C::STATIC_GetPointOnLineForTargets(const struct FVector& Origin, const struct FVector& Target, float TotalSizeOfPerpendicularLine, int NumPoints, int PointIndex, float Angle, class UObject* __WorldContext, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.GetPointOnLineForTargets");

	Uarchon_function_library_C_GetPointOnLineForTargets_Params params;
	params.Origin = Origin;
	params.Target = Target;
	params.TotalSizeOfPerpendicularLine = TotalSizeOfPerpendicularLine;
	params.NumPoints = NumPoints;
	params.PointIndex = PointIndex;
	params.Angle = Angle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function archon_function_library.archon_function_library_C.RescaleAndClamp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          OldMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OldMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          newMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          newMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Old_Value                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_RescaleAndClamp(float OldMin, float OldMax, float newMin, float newMax, float Old_Value, class UObject* __WorldContext, float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.RescaleAndClamp");

	Uarchon_function_library_C_RescaleAndClamp_Params params;
	params.OldMin = OldMin;
	params.OldMax = OldMax;
	params.newMin = newMin;
	params.newMax = newMax;
	params.Old_Value = Old_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function archon_function_library.archon_function_library_C.FindLobbedProjectileAim
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          LateralSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, OutParm, IsPlainOldData)
// float                          TotalGravity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uarchon_function_library_C::STATIC_FindLobbedProjectileAim(const struct FVector& Origin, const struct FVector& Target, float LateralSpeed, float PeakHeight, class UObject* __WorldContext, struct FVector* Velocity, float* TotalGravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_function_library.archon_function_library_C.FindLobbedProjectileAim");

	Uarchon_function_library_C_FindLobbedProjectileAim_Params params;
	params.Origin = Origin;
	params.Target = Target;
	params.LateralSpeed = LateralSpeed;
	params.PeakHeight = PeakHeight;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (TotalGravity != nullptr)
		*TotalGravity = params.TotalGravity;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
