#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function archon_function_library.archon_function_library_C.IsOnIslandHunt
struct Uarchon_function_library_C_IsOnIslandHunt_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnIslandHunt;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshShouldClothSim
struct Uarchon_function_library_C_UpdateSkeletalMeshShouldClothSim_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Elapsed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              UpdateRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.UpdateSkeletalMeshesShouldClothSim
struct Uarchon_function_library_C_UpdateSkeletalMeshesShouldClothSim_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Elapsed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              UpdateRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASkeletalMeshActor*>                  SkeletalMeshes;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetPartyMemberControllers
struct Uarchon_function_library_C_GetPartyMemberControllers_Params
{
	class AArchonPlayerController*                     Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonPlayerController*>             PartyMembers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.ApplyDamageFromRowPassTableTags
struct Uarchon_function_library_C_ApplyDamageFromRowPassTableTags_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageTable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     HitFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.HealTarget
struct Uarchon_function_library_C_HealTarget_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.IsCharacterInvulnerable
struct Uarchon_function_library_C_IsCharacterInvulnerable_Params
{
	class AActor*                                      ActorReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Invulnerable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InvulnerableDodge;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InvulnerableEdgeRecovery;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InvulnerablePotion;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInvulnerable_;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.Set_ArmourSecondaryDyeSurfaceType
struct Uarchon_function_library_C_Set_ArmourSecondaryDyeSurfaceType_Params
{
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.Set_ArmourPrimaryDyeSurfaceType
struct Uarchon_function_library_C_Set_ArmourPrimaryDyeSurfaceType_Params
{
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetComponentImplementingInterface
struct Uarchon_function_library_C_GetComponentImplementingInterface_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Component;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ApplyBuffsConditionalStart
struct Uarchon_function_library_C_ApplyBuffsConditionalStart_Params
{
	bool                                               StartBuffs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fbuff_init_data>                     BuffInitDat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BuffTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffInstigator;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         AddedBuffs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.ApplyCellBuffsAndEffects
struct Uarchon_function_library_C_ApplyCellBuffsAndEffects_Params
{
	TArray<struct Feffect_magitudes_struct>            GameplayEffectData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct Fbuff_init_data>                     BuffInitData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         AppliedBuffs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.ApplyBuffs
struct Uarchon_function_library_C_ApplyBuffs_Params
{
	class AActor*                                      ActorToBuff;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fbuff_init_data>                     BuffInitData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         AddedBuffs;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.IsElementConsideredForElementalMultipliers
struct Uarchon_function_library_C_IsElementConsideredForElementalMultipliers_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsideredForElementalMultipliers;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetPostMitigationMultiplierAttribute
struct Uarchon_function_library_C_GetPostMitigationMultiplierAttribute_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelfMultiplier_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, OutParm)
	bool                                               HasAttribute;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetElementOfStat
struct Uarchon_function_library_C_GetElementOfStat_Params
{
	TEnumAsByte<ELoadoutStatTypes>                     StatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       ElementType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetElementValueFromArray
struct Uarchon_function_library_C_GetElementValueFromArray_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetSumOfPower
struct Uarchon_function_library_C_GetSumOfPower_Params
{
	TArray<struct Felement_float_pair>                 ElementalPowers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Sum;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetHUDStatType
struct Uarchon_function_library_C_GetHUDStatType_Params
{
	TEnumAsByte<Eplayer_stat_type>                     StatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       ElementType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutStatTypes>                     LoadoutStatType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.BuildElementalFloatArray
struct Uarchon_function_library_C_BuildElementalFloatArray_Params
{
	float                                              flame;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              frost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              shock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              radiant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              umbral;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IgnoreElementsWithThisValue;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Felement_float_pair>                 ElementalFloatArray;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.GetStandardBehemothStrengthMultipiers
struct Uarchon_function_library_C_GetStandardBehemothStrengthMultipiers_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NeutralMultiplier;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StrongAgainstMultiplier;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              WeakAgainstMultiplier;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetElementHUDColor
struct Uarchon_function_library_C_GetElementHUDColor_Params
{
	EElementType                                       Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetBehemothIs_ElementVulnerabilityText
struct Uarchon_function_library_C_GetBehemothIs_ElementVulnerabilityText_Params
{
	EElementType                                       ElementType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ElementName;                                              // (Parm, OutParm)
};

// Function archon_function_library.archon_function_library_C.IsCancelWindowNotifyActive
struct Uarchon_function_library_C_IsCancelWindowNotifyActive_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TrueIfNoMontageActive_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.BadgeIsBetter
struct Uarchon_function_library_C_BadgeIsBetter_Params
{
	float                                              Impressiveness1;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   EliteStatus1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_levels>                         BadgeLevel1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impressiveness2;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_elite_status>                   EliteStatus2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_levels>                         BadgeLevel2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebadge_compare>                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetAllResistanceStats
struct Uarchon_function_library_C_GetAllResistanceStats_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fnamed_attribute>                    ResistanceStats;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.GetAllPowerStats
struct Uarchon_function_library_C_GetAllPowerStats_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fnamed_attribute>                    AttributeInfo;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.InheritPowerFromActor
struct Uarchon_function_library_C_InheritPowerFromActor_Params
{
	TEnumAsByte<Einherit_stat_type>                    InheritType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ApplyPowerToThisActor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InheritPowerFromThisActor;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.PrintAllTagsFunc
struct Uarchon_function_library_C_PrintAllTagsFunc_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetElementHitVFX
struct Uarchon_function_library_C_GetElementHitVFX_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           flame;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           frost;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           shock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           radiant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           umbral;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           RawElemental;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     World_Context_Object;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LogErrors;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetHitOptimality
struct Uarchon_function_library_C_GetHitOptimality_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct Fhitfx_optimality                           InVFXOptimality;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SizeScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.LowPassFilterVector
struct Uarchon_function_library_C_LowPassFilterVector_Params
{
	struct FVector                                     Sample;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PreviousValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TimeConstant;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmoothedValue;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.RunTargettingChecksOnTargetSet
struct Uarchon_function_library_C_RunTargettingChecksOnTargetSet_Params
{
	TArray<struct Fbehemoth_targetting_data>           Targetting_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ActorWhoIsTargetting;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonCharacter*>                    TargetSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonCharacter*>                    AvailableTargets;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.GetUnitVectorForDirection
struct Uarchon_function_library_C_GetUnitVectorForDirection_Params
{
	TEnumAsByte<Edirection_enum>                       Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UnitVector;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetAngleForDirection
struct Uarchon_function_library_C_GetAngleForDirection_Params
{
	TEnumAsByte<Edirection_enum>                       Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.CalculateScalingStatValue
struct Uarchon_function_library_C_CalculateScalingStatValue_Params
{
	float                                              ScalingFactor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ContributionFromScalingFactor;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ActorIsAlive
struct Uarchon_function_library_C_ActorIsAlive_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetPlayerCharacters
struct Uarchon_function_library_C_GetPlayerCharacters_Params
{
	bool                                               IncludeBots;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyAlivePlayers;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonCharacter*>                    PlayerCharacters;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.NegateFloatPure
struct Uarchon_function_library_C_NegateFloatPure_Params
{
	float                                              Fin;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fout;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetShortestArcRotator
struct Uarchon_function_library_C_GetShortestArcRotator_Params
{
	struct FVector                                     V0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DefaultAxis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotator;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.LowPassFilter
struct Uarchon_function_library_C_LowPassFilter_Params
{
	float                                              Sample;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeConstant;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.IsWithinAngleRange
struct Uarchon_function_library_C_IsWithinAngleRange_Params
{
	struct FVector                                     Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ComparePoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TotalAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWithinAngleRange;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.XYAngleBetweenVectors
struct Uarchon_function_library_C_XYAngleBetweenVectors_Params
{
	struct FVector                                     V0;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.AuthGetNewOrExistingGUID
struct Uarchon_function_library_C_AuthGetNewOrExistingGUID_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NewOrExistingGUID;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetOwnerMesh
struct Uarchon_function_library_C_GetOwnerMesh_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.CalculateSpeedOrDurationValue
struct Uarchon_function_library_C_CalculateSpeedOrDurationValue_Params
{
	struct Fspeed_or_duration_info                     SpeedOrDuration;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fspeed_or_duration_info                     UpdatedSpeedOrDuration;                                   // (Parm, OutParm)
};

// Function archon_function_library.archon_function_library_C.TryAddBuffs
struct Uarchon_function_library_C_TryAddBuffs_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              BuffClasses;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartBuffs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         AppliedBuffs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.InheritResistancesFromActor
struct Uarchon_function_library_C_InheritResistancesFromActor_Params
{
	class AActor*                                      ApplyResistancesToThisActor;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InheritResistancesFromThisActor;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Einherit_stat_type>                    InheritType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetRandom2DUnitVector
struct Uarchon_function_library_C_GetRandom2DUnitVector_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Random2DUnitVector;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetStatusEffectResistanceMultiplier
struct Uarchon_function_library_C_GetStatusEffectResistanceMultiplier_Params
{
	float                                              SourcePower;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetResistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ScalingCurve;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetSpecialEffectsForTags
struct Uarchon_function_library_C_GetSpecialEffectsForTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FStruct_TagToSpecialEffects>         Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_TagToSpecialEffects>         Particle_Systems;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.GetArcPoint
struct Uarchon_function_library_C_GetArcPoint_Params
{
	int                                                CurrPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalPoints;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AngleWidth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleCenter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArcPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetMeshLocation
struct Uarchon_function_library_C_GetMeshLocation_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.XY
struct Uarchon_function_library_C_XY_Params
{
	struct FVector                                     In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetXYAngle
struct Uarchon_function_library_C_GetXYAngle_Params
{
	struct FVector                                     Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDegrees;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetComponentName
struct Uarchon_function_library_C_GetComponentName_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ComponentName;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.IsLocalOrSpectatedCharacter
struct Uarchon_function_library_C_IsLocalOrSpectatedCharacter_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetLocalOrSpectatedCharacter
struct Uarchon_function_library_C_GetLocalOrSpectatedCharacter_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonCharacter*                            LocalOrSpectatedCharacter;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetLocalController
struct Uarchon_function_library_C_GetLocalController_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonPlayerController*                     ArchonPlayerController;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.DrawDebugHorizontalAngle
struct Uarchon_function_library_C_DrawDebugHorizontalAngle_Params
{
	struct FVector                                     Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ArcColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                FullCylinderColor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                PartialCylinderColor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawMaxRangeCylinder;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ConvertAngleTo360
struct Uarchon_function_library_C_ConvertAngleTo360_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle360;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetTopdownAngleBetweenPoints
struct Uarchon_function_library_C_GetTopdownAngleBetweenPoints_Params
{
	struct FVector                                     StartPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.RotateObjectToNormal
struct Uarchon_function_library_C_RotateObjectToNormal_Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.TryDestroyComponent
struct Uarchon_function_library_C_TryDestroyComponent_Params
{
	class UActorComponent*                             ActorComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.TryDeactivateComponent
struct Uarchon_function_library_C_TryDeactivateComponent_Params
{
	class UActorComponent*                             ActorComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ApplyDamageFromRow
struct Uarchon_function_library_C_ApplyDamageFromRow_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageTable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     HitFromDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetDamageRow
struct Uarchon_function_library_C_GetDamageRow_Params
{
	class APawn*                                       Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageInfo;                                               // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetWeaponSwingStrength
struct Uarchon_function_library_C_GetWeaponSwingStrength_Params
{
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeaponDamage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SwingStrengthPercent;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetGlobalBlueprintValue
struct Uarchon_function_library_C_GetGlobalBlueprintValue_Params
{
	TEnumAsByte<Ebp_globals_enum>                      Global;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetGroundPosAndNormal
struct Uarchon_function_library_C_GetGroundPosAndNormal_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              AmountUpToStart;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToTraceDown;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroundPos;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     GroundNormal;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               HitGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.PostEventTemp
struct Uarchon_function_library_C_PostEventTemp_Params
{
	class UAkAudioEventBase*                           AkEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenAttachedToDestroyed;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetAvailablePlayerTargets
struct Uarchon_function_library_C_GetAvailablePlayerTargets_Params
{
	TArray<struct Fbehemoth_targetting_data>           Targetting_Data;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ActorWhoIsTargetting;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonCharacter*>                    AvailableTargets;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function archon_function_library.archon_function_library_C.ConvertAngleToSigned180
struct Uarchon_function_library_C_ConvertAngleToSigned180_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Signed180Angle;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ScaleHealthByPlayerCount
struct Uarchon_function_library_C_ScaleHealthByPlayerCount_Params
{
	float                                              HealthValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PerPlayerHealthIncRatio;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayers;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledHealthValue;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SpawnImpulse
struct Uarchon_function_library_C_SpawnImpulse_Params
{
	struct Farchon_impulse                             Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             ComponentToSpawnAt;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleRefIfSpawned;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetHorizPredictedMovement
struct Uarchon_function_library_C_GetHorizPredictedMovement_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeInFuture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FutureLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.CanDoMathWithBlackboardType
struct Uarchon_function_library_C_CanDoMathWithBlackboardType_Params
{
	TEnumAsByte<Eblackboard_comparable_key_type>       BlackboardType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanMath;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetInt
struct Uarchon_function_library_C_SimplifiedBBData_GetInt_Params
{
	struct Fsimplified_blackboard_key_data             Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.BlackboardMath
struct Uarchon_function_library_C_BlackboardMath_Params
{
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      LeftSideKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Eblackboard_comparable_key_type>       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_math_operators>            Operator;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fsimplified_blackboard_key_data             RightSideData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.IsWithinDistanceFast
struct Uarchon_function_library_C_IsWithinDistanceFast_Params
{
	struct FVector                                     Pos1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWithinDistance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetDistanceSqr
struct Uarchon_function_library_C_GetDistanceSqr_Params
{
	struct FVector                                     Pos1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceSqr;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetTopdownAngleBetween
struct Uarchon_function_library_C_GetTopdownAngleBetween_Params
{
	class AActor*                                      CenterActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SimplifiedBBData_GetFloat
struct Uarchon_function_library_C_SimplifiedBBData_GetFloat_Params
{
	struct Fsimplified_blackboard_key_data             Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBlackboardComponent*                        Blackboard;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SetBlackBoardValue
struct Uarchon_function_library_C_SetBlackBoardValue_Params
{
	class UBlackboardComponent*                        BlackboardComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      ResultKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Fsimplified_blackboard_key_data             SourceData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Eblackboard_comparable_key_type>       Variable_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Sucessfully_Set;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SimplifyBlackboardKeyType
struct Uarchon_function_library_C_SimplifyBlackboardKeyType_Params
{
	class UClass*                                      KeyTypeClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_comparable_key_type>       SimplifiedType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.IsCompareTypeAllowedForBlackboardKey
struct Uarchon_function_library_C_IsCompareTypeAllowedForBlackboardKey_Params
{
	TEnumAsByte<Eblackboard_comparable_key_type>       KeyType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CompareOperators>                 Operator;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.CompareBlackboardValues
struct Uarchon_function_library_C_CompareBlackboardValues_Params
{
	class UBlackboardComponent*                        BlackboardComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftSideKeyName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CompareOperators>                 CompareOperator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eblackboard_comparable_key_type>       CompareType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fsimplified_blackboard_key_data             RightSideData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.SpawnEmitterFromStruct
struct Uarchon_function_library_C_SpawnEmitterFromStruct_Params
{
	struct Fvfx_with_socket_struct                     VFXInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             ComponentToAttachTo;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle_System_Component;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.ModifyProjectileTargetPosition
struct Uarchon_function_library_C_ModifyProjectileTargetPosition_Params
{
	struct Fprojectile_target_modifier                 projectile_target_modifier;                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     TargetPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ProjectileSpawnLocation;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                TotalNumProjectiles;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentProjectileIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalTargetActor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdjustedTargetPos;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.GetPointOnLineForTargets
struct Uarchon_function_library_C_GetPointOnLineForTargets_Params
{
	struct FVector                                     Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TotalSizeOfPerpendicularLine;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPoints;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.RescaleAndClamp
struct Uarchon_function_library_C_RescaleAndClamp_Params
{
	float                                              OldMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              newMin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              newMax;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Old_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function archon_function_library.archon_function_library_C.FindLobbedProjectileAim
struct Uarchon_function_library_C_FindLobbedProjectileAim_Params
{
	struct FVector                                     Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              LateralSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PeakHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              TotalGravity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
