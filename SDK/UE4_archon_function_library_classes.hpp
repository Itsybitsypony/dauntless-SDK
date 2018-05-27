#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass archon_function_library.archon_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Uarchon_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass archon_function_library.archon_function_library_C");
		return ptr;
	}


	void STATIC_IsOnIslandHunt(class UObject* __WorldContext, bool* IsOnIslandHunt);
	void STATIC_UpdateSkeletalMeshShouldClothSim(float Delta, float UpdateRate, class AActor* Actor, class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext, float* Elapsed);
	void STATIC_UpdateSkeletalMeshesShouldClothSim(float Delta, float UpdateRate, class UObject* __WorldContext, float* Elapsed, TArray<class ASkeletalMeshActor*>* SkeletalMeshes);
	void STATIC_GetPartyMemberControllers(class AArchonPlayerController* Player, class UObject* __WorldContext, TArray<class AArchonPlayerController*>* PartyMembers);
	void STATIC_ApplyDamageFromRowPassTableTags(class AActor* DamagedActor, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UObject* __WorldContext, struct FDamageTableData* DamageTable);
	void STATIC_HealTarget(class AActor* TargetActor, class AActor* SourceActor, class UObject* SourceObject, float Amount, class UObject* __WorldContext);
	void STATIC_IsCharacterInvulnerable(class AActor* ActorReference, bool Invulnerable, bool InvulnerableDodge, bool InvulnerableEdgeRecovery, bool InvulnerablePotion, class UObject* __WorldContext, bool* IsInvulnerable_);
	void STATIC_Set_ArmourSecondaryDyeSurfaceType(class UMaterialInstanceDynamic* DynamicMaterial, EArmourDyeSurfaceType Selection, class UObject* __WorldContext);
	void STATIC_Set_ArmourPrimaryDyeSurfaceType(class UMaterialInstanceDynamic* DynamicMaterial, EArmourDyeSurfaceType Selection, class UObject* __WorldContext);
	void STATIC_GetComponentImplementingInterface(class AActor* Actor, class UClass* Interface, class UObject* __WorldContext, class UActorComponent** Component);
	void STATIC_ApplyBuffsConditionalStart(bool StartBuffs, class AActor* BuffTarget, class AActor* BuffInstigator, class UObject* __WorldContext, TArray<struct Fbuff_init_data>* BuffInitDat, TArray<class AArchonBuff*>* AddedBuffs);
	void STATIC_ApplyCellBuffsAndEffects(float Magnitude, class AActor* Actor, class UObject* __WorldContext, TArray<struct Feffect_magitudes_struct>* GameplayEffectData, TArray<struct Fbuff_init_data>* BuffInitData, TArray<class AArchonBuff*>* AppliedBuffs);
	void STATIC_ApplyBuffs(class AActor* ActorToBuff, class UObject* __WorldContext, TArray<struct Fbuff_init_data>* BuffInitData, TArray<class AArchonBuff*>* AddedBuffs);
	void STATIC_IsElementConsideredForElementalMultipliers(EElementType Element, class UObject* __WorldContext, bool* ConsideredForElementalMultipliers);
	void STATIC_GetPostMitigationMultiplierAttribute(EElementType Element, bool SelfMultiplier_, class UObject* __WorldContext, struct FGameplayAttribute* Attribute, bool* HasAttribute);
	void STATIC_GetElementOfStat(TEnumAsByte<ELoadoutStatTypes> StatType, class UObject* __WorldContext, EElementType* ElementType);
	void STATIC_GetElementValueFromArray(EElementType Element, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementList, bool* Found, float* Value);
	void STATIC_GetSumOfPower(class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementalPowers, float* Sum);
	void STATIC_GetHUDStatType(TEnumAsByte<Eplayer_stat_type> StatType, EElementType ElementType, class UObject* __WorldContext, TEnumAsByte<ELoadoutStatTypes>* LoadoutStatType);
	void STATIC_BuildElementalFloatArray(float flame, float frost, float shock, float radiant, float umbral, float IgnoreElementsWithThisValue, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementalFloatArray);
	void STATIC_GetStandardBehemothStrengthMultipiers(class UObject* __WorldContext, float* NeutralMultiplier, float* StrongAgainstMultiplier, float* WeakAgainstMultiplier);
	void STATIC_GetElementHUDColor(EElementType Element, class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetBehemothIs_ElementVulnerabilityText(EElementType ElementType, float Value, class UObject* __WorldContext, struct FText* ElementName);
	void STATIC_IsCancelWindowNotifyActive(class AActor* Actor, EArchonAttackActionKeyModifier ModifierKey, bool TrueIfNoMontageActive_, class UObject* __WorldContext, bool* Return);
	void STATIC_BadgeIsBetter(float Impressiveness1, TEnumAsByte<Ebadge_elite_status> EliteStatus1, TEnumAsByte<Ebadge_levels> BadgeLevel1, float Impressiveness2, TEnumAsByte<Ebadge_elite_status> EliteStatus2, TEnumAsByte<Ebadge_levels> BadgeLevel2, class UObject* __WorldContext, TEnumAsByte<Ebadge_compare>* Result);
	void STATIC_GetAllResistanceStats(class UObject* __WorldContext, TArray<struct Fnamed_attribute>* ResistanceStats);
	void STATIC_GetAllPowerStats(class UObject* __WorldContext, TArray<struct Fnamed_attribute>* AttributeInfo);
	void STATIC_InheritPowerFromActor(TEnumAsByte<Einherit_stat_type> InheritType, class AActor* ApplyPowerToThisActor, class AActor* InheritPowerFromThisActor, class UObject* __WorldContext);
	void STATIC_PrintAllTagsFunc(class UObject* __WorldContext, struct FGameplayTagContainer* Tags);
	void STATIC_GetElementHitVFX(class UObject* World_Context_Object, bool LogErrors, class UObject* __WorldContext, struct FGameplayTagContainer* Tags, struct Fhitfx_optimality* flame, struct Fhitfx_optimality* frost, struct Fhitfx_optimality* shock, struct Fhitfx_optimality* radiant, struct Fhitfx_optimality* umbral, struct Fhitfx_optimality* RawElemental, class UParticleSystem** Return);
	void STATIC_GetHitOptimality(const struct Fhitfx_optimality& InVFXOptimality, class UObject* __WorldContext, struct FGameplayTagContainer* Tags, class UParticleSystem** Return, float* RateScale, float* SizeScale, float* SphereRadius);
	void STATIC_LowPassFilterVector(const struct FVector& Sample, const struct FVector& PreviousValue, float TimeConstant, float DeltaSeconds, class UObject* __WorldContext, struct FVector* SmoothedValue);
	void STATIC_RunTargettingChecksOnTargetSet(class AActor* ActorWhoIsTargetting, class UObject* __WorldContext, TArray<struct Fbehemoth_targetting_data>* Targetting_Data, TArray<class AArchonCharacter*>* TargetSet, TArray<class AArchonCharacter*>* AvailableTargets);
	void STATIC_GetUnitVectorForDirection(TEnumAsByte<Edirection_enum> Direction, class UObject* __WorldContext, struct FVector* UnitVector);
	void STATIC_GetAngleForDirection(TEnumAsByte<Edirection_enum> Direction, class UObject* __WorldContext, float* Angle);
	void STATIC_CalculateScalingStatValue(float ScalingFactor, float BaseValue, float ContributionFromScalingFactor, class UObject* __WorldContext, float* CalculatedValue);
	void STATIC_ActorIsAlive(class AActor* Actor, class UObject* __WorldContext, bool* IsAlive);
	void STATIC_GetPlayerCharacters(bool IncludeBots, bool OnlyAlivePlayers, class UObject* __WorldContext, TArray<class AArchonCharacter*>* PlayerCharacters);
	void STATIC_NegateFloatPure(float Fin, class UObject* __WorldContext, float* Fout);
	void STATIC_GetShortestArcRotator(const struct FVector& V0, const struct FVector& v1, const struct FVector& DefaultAxis, class UObject* __WorldContext, struct FRotator* OutRotator);
	void STATIC_LowPassFilter(float Sample, float PreviousValue, float TimeConstant, float DeltaSeconds, class UObject* __WorldContext, float* SmoothedValue);
	void STATIC_IsWithinAngleRange(const struct FVector& Center, const struct FVector& ComparePoint, const struct FVector& ForwardVector, float TotalAngle, class UObject* __WorldContext, bool* IsWithinAngleRange);
	void STATIC_XYAngleBetweenVectors(const struct FVector& V0, const struct FVector& v1, class UObject* __WorldContext, float* Angle);
	void STATIC_AuthGetNewOrExistingGUID(class AActor* OwnerActor, const struct FName& Name, class UObject* __WorldContext, struct FGuid* NewOrExistingGUID);
	void STATIC_GetOwnerMesh(class UActorComponent* Component, class UObject* __WorldContext, class USkeletalMeshComponent** SkeletalMeshComponent);
	void STATIC_CalculateSpeedOrDurationValue(const struct Fspeed_or_duration_info& SpeedOrDuration, class UObject* __WorldContext, struct Fspeed_or_duration_info* UpdatedSpeedOrDuration);
	void STATIC_TryAddBuffs(class AActor* TargetActor, class AActor* Instigator, bool StartBuffs, class UObject* __WorldContext, TArray<class UClass*>* BuffClasses, TArray<class AArchonBuff*>* AppliedBuffs);
	void STATIC_InheritResistancesFromActor(class AActor* ApplyResistancesToThisActor, class AActor* InheritResistancesFromThisActor, TEnumAsByte<Einherit_stat_type> InheritType, class UObject* __WorldContext);
	void STATIC_GetRandom2DUnitVector(class UObject* __WorldContext, struct FVector* Random2DUnitVector);
	void STATIC_GetStatusEffectResistanceMultiplier(float SourcePower, float TargetResistance, class UCurveFloat* ScalingCurve, class UObject* __WorldContext, float* Multiplier);
	void STATIC_GetSpecialEffectsForTags(class UObject* __WorldContext, struct FGameplayTagContainer* Tags, TArray<struct FStruct_TagToSpecialEffects>* Effects, TArray<struct FStruct_TagToSpecialEffects>* Particle_Systems);
	void STATIC_GetArcPoint(int CurrPoint, int TotalPoints, const struct FVector& Center, float Radius, const struct FVector& Facing, float AngleWidth, float AngleCenter, class UObject* __WorldContext, struct FVector* ArcPoint);
	void STATIC_GetMeshLocation(class AActor* Actor, class UObject* __WorldContext, struct FVector* Location);
	void STATIC_XY(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_GetXYAngle(const struct FVector& Vector, class UObject* __WorldContext, float* AngleDegrees);
	void STATIC_GetComponentName(class UActorComponent* Component, class UObject* __WorldContext, class FString* ComponentName);
	void STATIC_IsLocalOrSpectatedCharacter(class AActor* Actor, class UObject* __WorldContext, bool* IsLocal);
	void STATIC_GetLocalOrSpectatedCharacter(class UObject* __WorldContext, class AArchonCharacter** LocalOrSpectatedCharacter);
	void STATIC_GetLocalController(class UObject* __WorldContext, class AArchonPlayerController** ArchonPlayerController);
	void STATIC_DrawDebugHorizontalAngle(const struct FVector& Center, const struct FVector& Facing, float Angle, float Range, const struct FLinearColor& ArcColor, const struct FLinearColor& FullCylinderColor, const struct FLinearColor& PartialCylinderColor, float Duration, bool DrawMaxRangeCylinder, class UObject* __WorldContext);
	void STATIC_ConvertAngleTo360(float Angle, class UObject* __WorldContext, float* Angle360);
	void STATIC_GetTopdownAngleBetweenPoints(const struct FVector& StartPoint, const struct FVector& Facing, const struct FVector& EndPoint, class UObject* __WorldContext, float* Angle);
	void STATIC_RotateObjectToNormal(const struct FVector& Normal, class UObject* __WorldContext, struct FRotator* Rotation);
	void STATIC_TryDestroyComponent(class UActorComponent* ActorComponent, class UObject* __WorldContext);
	void STATIC_TryDeactivateComponent(class UActorComponent* ActorComponent, class UObject* __WorldContext);
	void STATIC_ApplyDamageFromRow(class AActor* DamagedActor, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UObject* __WorldContext, struct FDamageTableData* DamageTable, struct FVector* HitFromDirection, struct FHitResult* HitInfo);
	void STATIC_GetDamageRow(class APawn* Instigator, const struct FName& RowName, class UObject* __WorldContext, struct FDamageTableData* DamageInfo, bool* RowFound);
	void STATIC_GetWeaponSwingStrength(class AActor* DamageCauser, float DamageAmount, class AController* DamageInstigator, class UObject* __WorldContext, bool* IsWeaponDamage, float* SwingStrengthPercent);
	void STATIC_GetGlobalBlueprintValue(TEnumAsByte<Ebp_globals_enum> Global, class UObject* __WorldContext, float* Value);
	void STATIC_GetGroundPosAndNormal(const struct FVector& Location, float AmountUpToStart, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DistanceToTraceDown, class UObject* __WorldContext, TArray<class AActor*>* ActorsToIgnore, struct FVector* GroundPos, struct FVector* GroundNormal, bool* HitGround);
	void STATIC_PostEventTemp(class UAkAudioEventBase* AkEvent, class AActor* Actor, bool StopWhenAttachedToDestroyed, class UObject* __WorldContext);
	void STATIC_GetAvailablePlayerTargets(class AActor* ActorWhoIsTargetting, class UObject* __WorldContext, TArray<struct Fbehemoth_targetting_data>* Targetting_Data, TArray<class AArchonCharacter*>* AvailableTargets);
	void STATIC_ConvertAngleToSigned180(float Angle, class UObject* __WorldContext, float* Signed180Angle);
	void STATIC_ScaleHealthByPlayerCount(float HealthValue, float PerPlayerHealthIncRatio, int TotalPlayers, class UObject* __WorldContext, float* ScaledHealthValue);
	void STATIC_SpawnImpulse(const struct Farchon_impulse& Impulse, class USceneComponent* ComponentToSpawnAt, class UObject* __WorldContext, class UParticleSystemComponent** ParticleRefIfSpawned);
	void STATIC_GetHorizPredictedMovement(class AActor* Target, float TimeInFuture, class UObject* __WorldContext, struct FVector* FutureLocation);
	void STATIC_CanDoMathWithBlackboardType(TEnumAsByte<Eblackboard_comparable_key_type> BlackboardType, class UObject* __WorldContext, bool* CanMath);
	void STATIC_SimplifiedBBData_GetInt(const struct Fsimplified_blackboard_key_data& Data, class UBlackboardComponent* Blackboard, class UObject* __WorldContext, int* IntValue);
	void STATIC_BlackboardMath(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& LeftSideKey, TEnumAsByte<Eblackboard_comparable_key_type> Type, TEnumAsByte<Eblackboard_math_operators> Operator, const struct Fsimplified_blackboard_key_data& RightSideData, class UObject* __WorldContext, float* FloatResult);
	void STATIC_IsWithinDistanceFast(const struct FVector& Pos1, const struct FVector& Pos2, float Distance, class UObject* __WorldContext, bool* IsWithinDistance);
	void STATIC_GetDistanceSqr(const struct FVector& Pos1, const struct FVector& Pos2, class UObject* __WorldContext, float* DistanceSqr);
	void STATIC_GetTopdownAngleBetween(class AActor* CenterActor, const struct FVector& CenterOffset, const struct FVector& Location, class UObject* __WorldContext, float* Angle);
	void STATIC_SimplifiedBBData_GetFloat(const struct Fsimplified_blackboard_key_data& Data, class UBlackboardComponent* Blackboard, class UObject* __WorldContext, float* FloatValue);
	void STATIC_SetBlackBoardValue(class UBlackboardComponent* BlackboardComponent, const struct FBlackboardKeySelector& ResultKey, const struct Fsimplified_blackboard_key_data& SourceData, TEnumAsByte<Eblackboard_comparable_key_type> Variable_Type, class UObject* __WorldContext, bool* Sucessfully_Set);
	void STATIC_SimplifyBlackboardKeyType(class UClass* KeyTypeClass, class UObject* __WorldContext, TEnumAsByte<Eblackboard_comparable_key_type>* SimplifiedType);
	void STATIC_IsCompareTypeAllowedForBlackboardKey(TEnumAsByte<Eblackboard_comparable_key_type> KeyType, TEnumAsByte<Enum_CompareOperators> Operator, class UObject* __WorldContext, bool* IsAllowed);
	void STATIC_CompareBlackboardValues(class UBlackboardComponent* BlackboardComponent, const struct FName& LeftSideKeyName, TEnumAsByte<Enum_CompareOperators> CompareOperator, TEnumAsByte<Eblackboard_comparable_key_type> CompareType, const struct Fsimplified_blackboard_key_data& RightSideData, class UObject* __WorldContext, bool* Result);
	void STATIC_SpawnEmitterFromStruct(const struct Fvfx_with_socket_struct& VFXInfo, class USceneComponent* ComponentToAttachTo, class UObject* __WorldContext, class UParticleSystemComponent** Particle_System_Component);
	void STATIC_ModifyProjectileTargetPosition(const struct FVector& TargetPosition, const struct FVector& ProjectileSpawnLocation, int TotalNumProjectiles, int CurrentProjectileIndex, class AActor* Instigator, class AActor* OptionalTargetActor, class UObject* __WorldContext, struct Fprojectile_target_modifier* projectile_target_modifier, struct FVector* AdjustedTargetPos);
	void STATIC_GetPointOnLineForTargets(const struct FVector& Origin, const struct FVector& Target, float TotalSizeOfPerpendicularLine, int NumPoints, int PointIndex, float Angle, class UObject* __WorldContext, struct FVector* Offset);
	void STATIC_RescaleAndClamp(float OldMin, float OldMax, float newMin, float newMax, float Old_Value, class UObject* __WorldContext, float* NewValue);
	void STATIC_FindLobbedProjectileAim(const struct FVector& Origin, const struct FVector& Target, float LateralSpeed, float PeakHeight, class UObject* __WorldContext, struct FVector* Velocity, float* TotalGravity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
