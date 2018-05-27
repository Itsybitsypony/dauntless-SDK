// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_base_bp.aoe_base_bp_C.GetPrimitiveOverlappingComponents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive_Component            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      HitResults                     (Parm, OutParm, ZeroConstructor)

void Aaoe_base_bp_C::GetPrimitiveOverlappingComponents(class UPrimitiveComponent* Primitive_Component, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.GetPrimitiveOverlappingComponents");

	Aaoe_base_bp_C_GetPrimitiveOverlappingComponents_Params params;
	params.Primitive_Component = Primitive_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResults != nullptr)
		*HitResults = params.HitResults;
}


// Function aoe_base_bp.aoe_base_bp_C.GetDamageToApply
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PhysicalDamage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageBlunt                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageCutting                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamagePiercing                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageElemental                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageTrue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    AssetTags                      (Parm, OutParm, ZeroConstructor)

void Aaoe_base_bp_C::GetDamageToApply(const struct FName& DamageKey, float* PhysicalDamage, float* DamageBlunt, float* DamageCutting, float* DamagePiercing, float* DamageElemental, float* DamageTrue, TArray<struct FGameplayTag>* AssetTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.GetDamageToApply");

	Aaoe_base_bp_C_GetDamageToApply_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhysicalDamage != nullptr)
		*PhysicalDamage = params.PhysicalDamage;
	if (DamageBlunt != nullptr)
		*DamageBlunt = params.DamageBlunt;
	if (DamageCutting != nullptr)
		*DamageCutting = params.DamageCutting;
	if (DamagePiercing != nullptr)
		*DamagePiercing = params.DamagePiercing;
	if (DamageElemental != nullptr)
		*DamageElemental = params.DamageElemental;
	if (DamageTrue != nullptr)
		*DamageTrue = params.DamageTrue;
	if (AssetTags != nullptr)
		*AssetTags = params.AssetTags;
}


// Function aoe_base_bp.aoe_base_bp_C.GetCustomDamageScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::GetCustomDamageScale(class AActor* TargetActor, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.GetCustomDamageScale");

	Aaoe_base_bp_C_GetCustomDamageScale_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function aoe_base_bp.aoe_base_bp_C.GetDebrisData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fdebris_vfx_struct      FoundVFX                       (Parm, OutParm)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.GetDebrisData");

	Aaoe_base_bp_C_GetDebrisData_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundVFX != nullptr)
		*FoundVFX = params.FoundVFX;
	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (SurfaceName != nullptr)
		*SurfaceName = params.SurfaceName;
}


// Function aoe_base_bp.aoe_base_bp_C.FilterHitsByConeCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitResults                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          ConeAngleDegrees               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ConeRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ConeLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FHitResult>      OutHitResults                  (Parm, OutParm, ZeroConstructor)

void Aaoe_base_bp_C::FilterHitsByConeCheck(float ConeAngleDegrees, const struct FRotator& ConeRotation, const struct FVector& ConeLocation, TArray<struct FHitResult>* HitResults, TArray<struct FHitResult>* OutHitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.FilterHitsByConeCheck");

	Aaoe_base_bp_C_FilterHitsByConeCheck_Params params;
	params.ConeAngleDegrees = ConeAngleDegrees;
	params.ConeRotation = ConeRotation;
	params.ConeLocation = ConeLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResults != nullptr)
		*HitResults = params.HitResults;
	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;
}


// Function aoe_base_bp.aoe_base_bp_C.OnActorHitByAoE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::OnActorHitByAoE(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.OnActorHitByAoE");

	Aaoe_base_bp_C_OnActorHitByAoE_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.GenerateSafeEmitterSpawnLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, OutParm, IsPlainOldData)

void Aaoe_base_bp_C::GenerateSafeEmitterSpawnLocation(struct FVector* SpawnLocation, struct FRotator* SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.GenerateSafeEmitterSpawnLocation");

	Aaoe_base_bp_C_GenerateSafeEmitterSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (SpawnRotation != nullptr)
		*SpawnRotation = params.SpawnRotation;
}


// Function aoe_base_bp.aoe_base_bp_C.ReturnHitActorFromComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMonsterPartComponent*> HitParts                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::ReturnHitActorFromComponent(class UActorComponent* HitComponent, int Index, TArray<class UMonsterPartComponent*>* HitParts, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ReturnHitActorFromComponent");

	Aaoe_base_bp_C_ReturnHitActorFromComponent_Params params;
	params.HitComponent = HitComponent;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitParts != nullptr)
		*HitParts = params.HitParts;
	if (HitActor != nullptr)
		*HitActor = params.HitActor;
}


// Function aoe_base_bp.aoe_base_bp_C.ReturnCollisionTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (Parm, OutParm, ZeroConstructor)

void Aaoe_base_bp_C::ReturnCollisionTypes(class UPrimitiveComponent* Primitive, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ReturnCollisionTypes");

	Aaoe_base_bp_C_ReturnCollisionTypes_Params params;
	params.Primitive = Primitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectTypes != nullptr)
		*ObjectTypes = params.ObjectTypes;
}


// Function aoe_base_bp.aoe_base_bp_C.ApplySingleHitDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         DamageShape                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DamageRowName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::ApplySingleHitDamage(class UShapeComponent* DamageShape, const struct FName& DamageRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ApplySingleHitDamage");

	Aaoe_base_bp_C_ApplySingleHitDamage_Params params;
	params.DamageShape = DamageShape;
	params.DamageRowName = DamageRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.ApplyDividedDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         DamageShape                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DamageRowName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::ApplyDividedDamage(class UShapeComponent* DamageShape, const struct FName& DamageRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ApplyDividedDamage");

	Aaoe_base_bp_C_ApplyDividedDamage_Params params;
	params.DamageShape = DamageShape;
	params.DamageRowName = DamageRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aaoe_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.UserConstructionScript");

	Aaoe_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.Play Hit Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Particle_System_To_Spawn       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aaoe_base_bp_C::Play_Hit_Effects(class UParticleSystem* Particle_System_To_Spawn, const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.Play Hit Effects");

	Aaoe_base_bp_C_Play_Hit_Effects_Params params;
	params.Particle_System_To_Spawn = Particle_System_To_Spawn;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.DrawDebugCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Aaoe_base_bp_C::DrawDebugCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.DrawDebugCollision");

	Aaoe_base_bp_C_DrawDebugCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.DrawDebugLine
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aaoe_base_bp_C::DrawDebugLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.DrawDebugLine");

	Aaoe_base_bp_C_DrawDebugLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aaoe_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ReceiveBeginPlay");

	Aaoe_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.DrawDebugSphere
// (BlueprintCallable, BlueprintEvent)

void Aaoe_base_bp_C::DrawDebugSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.DrawDebugSphere");

	Aaoe_base_bp_C_DrawDebugSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_base_bp.aoe_base_bp_C.ExecuteUbergraph_aoe_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_base_bp_C::ExecuteUbergraph_aoe_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_base_bp.aoe_base_bp_C.ExecuteUbergraph_aoe_base_bp");

	Aaoe_base_bp_C_ExecuteUbergraph_aoe_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
