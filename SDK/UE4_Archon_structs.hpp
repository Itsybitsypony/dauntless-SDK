#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_GameplayAbilities_classes.hpp"
#include "UE4_AkAudio_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_UMG_classes.hpp"
#include "UE4_GameplayTags_classes.hpp"
#include "UE4_AIModule_classes.hpp"
#include "UE4_InputCore_classes.hpp"
#include "UE4_OnlineSubsystemPhoenix_classes.hpp"
#include "UE4_OnlineSubsystemUtils_classes.hpp"
#include "UE4_SlateCore_classes.hpp"
#include "UE4_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Archon.EElementType
enum class EElementType : uint8_t
{
	EElementType__ElementType_PHYSICAL = 0,
	EElementType__ElementType_FLAME = 1,
	EElementType__ElementType_FROST = 2,
	EElementType__ElementType_SHOCK = 3,
	EElementType__ElementType_RADIANT = 4,
	EElementType__ElementType_UMBRAL = 5,
	EElementType__ElementType_RAW  = 6,
	EElementType__ElementType_COUNT = 7,
	EElementType__ElementType_MAX  = 8
};


// Enum Archon.EPhysicalType
enum class EPhysicalType : uint8_t
{
	EPhysicalType__PhysicalType_CUTTING = 0,
	EPhysicalType__PhysicalType_BLUNT = 1,
	EPhysicalType__PhysicalType_PIERCING = 2,
	EPhysicalType__PhysicalType_COUNT = 3,
	EPhysicalType__PhysicalType_MAX = 4
};


// Enum Archon.EQuestStatus
enum class EQuestStatus : uint8_t
{
	EQuestStatus__Unavailable      = 0,
	EQuestStatus__Accepted         = 1,
	EQuestStatus__Redeemable       = 2,
	EQuestStatus__Redeemed         = 3,
	EQuestStatus__Available        = 4,
	EQuestStatus__EQuestStatus_MAX = 5
};


// Enum Archon.EGatherableTier
enum class EGatherableTier : uint8_t
{
	EGatherableTier__Tier0         = 0,
	EGatherableTier__Tier1         = 1,
	EGatherableTier__Tier2         = 2,
	EGatherableTier__Tier3         = 3,
	EGatherableTier__Tier4         = 4,
	EGatherableTier__EGatherableTier_MAX = 5
};


// Enum Archon.EHuntBiome
enum class EHuntBiome : uint8_t
{
	EHuntBiome__Moss               = 0,
	EHuntBiome__Ice                = 1,
	EHuntBiome__Arid               = 2,
	EHuntBiome__EHuntBiome_MAX     = 3
};


// Enum Archon.EArchonCharacterCreationState
enum class EArchonCharacterCreationState : uint8_t
{
	EArchonCharacterCreationState__NewCharacter = 0,
	EArchonCharacterCreationState__FaceComplete = 1,
	EArchonCharacterCreationState__EArchonCharacterCreationState_MAX = 2
};


// Enum Archon.EArchonPresenceStatus
enum class EArchonPresenceStatus : uint8_t
{
	EArchonPresenceStatus__PresenceStatus_Online = 0,
	EArchonPresenceStatus__PresenceStatus_Offline = 1,
	EArchonPresenceStatus__PresenceStatus_Away = 2,
	EArchonPresenceStatus__PresenceStatus_ExtendedAway = 3,
	EArchonPresenceStatus__PresenceStatus_DoNotDisturb = 4,
	EArchonPresenceStatus__PresenceStatus_Chat = 5,
	EArchonPresenceStatus__PresenceStatus_MAX = 6
};


// Enum Archon.ELobbyMemberChangedReason
enum class ELobbyMemberChangedReason : uint8_t
{
	ELobbyMemberChangedReason__Disconnected = 0,
	ELobbyMemberChangedReason__Promoted = 1,
	ELobbyMemberChangedReason__Kicked = 2,
	ELobbyMemberChangedReason__LobbyDestroyed = 3,
	ELobbyMemberChangedReason__ELobbyMemberChangedReason_MAX = 4
};


// Enum Archon.EArchonPartyState
enum class EArchonPartyState : uint8_t
{
	EArchonPartyState__Idle        = 0,
	EArchonPartyState__Matchmaking = 1,
	EArchonPartyState__Matched     = 2,
	EArchonPartyState__EArchonPartyState_MAX = 3
};


// Enum Archon.EPartyMemberChangedReason
enum class EPartyMemberChangedReason : uint8_t
{
	EPartyMemberChangedReason__Disconnected = 0,
	EPartyMemberChangedReason__Promoted = 1,
	EPartyMemberChangedReason__Kicked = 2,
	EPartyMemberChangedReason__PartyDestroyed = 3,
	EPartyMemberChangedReason__EPartyMemberChangedReason_MAX = 4
};


// Enum Archon.EArmorTier
enum class EArmorTier : uint8_t
{
	EArmorTier__ArmorTier          = 0,
	EArmorTier__ArmorTier01        = 1,
	EArmorTier__ArmorTier02        = 2,
	EArmorTier__ArmorTier03        = 3,
	EArmorTier__ArmorTier04        = 4,
	EArmorTier__ArmorTier_MAX      = 5
};


// Enum Archon.EArmorType
enum class EArmorType : uint8_t
{
	EArmorType__ArmorType_HELMET   = 0,
	EArmorType__ArmorType_CHEST    = 1,
	EArmorType__ArmorType_LEGS     = 2,
	EArmorType__ArmorType_ARMS     = 3,
	EArmorType__ArmorType_NONE     = 4,
	EArmorType__ArmorType_MAX      = 5
};


// Enum Archon.EArmourDyeSurfaceType
enum class EArmourDyeSurfaceType : uint8_t
{
	EArmourDyeSurfaceType__Default = 0,
	EArmourDyeSurfaceType__Glossy  = 1,
	EArmourDyeSurfaceType__Metallic = 2,
	EArmourDyeSurfaceType__Emissive = 3,
	EArmourDyeSurfaceType__Velvet  = 4,
	EArmourDyeSurfaceType__Weathered = 5,
	EArmourDyeSurfaceType__EArmourDyeSurfaceType_MAX = 6
};


// Enum Archon.EArchonAttributeModifierType
enum class EArchonAttributeModifierType : uint8_t
{
	EArchonAttributeModifierType__Multiplicative = 0,
	EArchonAttributeModifierType__Additive = 1,
	EArchonAttributeModifierType__EArchonAttributeModifierType_MAX = 2
};


// Enum Archon.EArchonBuffStackStrategy
enum class EArchonBuffStackStrategy : uint8_t
{
	EArchonBuffStackStrategy__StackStrategy_RefreshExisting = 0,
	EArchonBuffStackStrategy__StackStrategy_IgnoreNew = 1,
	EArchonBuffStackStrategy__StackStrategy_Stack = 2,
	EArchonBuffStackStrategy__StackStrategy_Custom = 3,
	EArchonBuffStackStrategy__StackStrategy_MAX = 4
};


// Enum Archon.EArchonGameplayAbilityInputBinds
enum class EArchonGameplayAbilityInputBinds : uint8_t
{
	EArchonGameplayAbilityInputBinds__Ability1 = 0,
	EArchonGameplayAbilityInputBinds__Ability2 = 1,
	EArchonGameplayAbilityInputBinds__Ability3 = 2,
	EArchonGameplayAbilityInputBinds__Ability4 = 3,
	EArchonGameplayAbilityInputBinds__Ability5 = 4,
	EArchonGameplayAbilityInputBinds__Ability6 = 5,
	EArchonGameplayAbilityInputBinds__Ability7 = 6,
	EArchonGameplayAbilityInputBinds__Ability8 = 7,
	EArchonGameplayAbilityInputBinds__Ability9 = 8,
	EArchonGameplayAbilityInputBinds__EArchonGameplayAbilityInputBinds_MAX = 9
};


// Enum Archon.EGCNotifySubsetState
enum class EGCNotifySubsetState : uint8_t
{
	EGCNotifySubsetState__Default  = 0,
	EGCNotifySubsetState__Unloaded = 1,
	EGCNotifySubsetState__Loading  = 2,
	EGCNotifySubsetState__Loaded   = 3,
	EGCNotifySubsetState__EGCNotifySubsetState_MAX = 4
};


// Enum Archon.EGameplayOperationState
enum class EGameplayOperationState : uint8_t
{
	EGameplayOperationState__INACTIVE = 0,
	EGameplayOperationState__ACTIVE = 1,
	EGameplayOperationState__EGameplayOperationState_MAX = 2
};


// Enum Archon.EArchonInventorySlot
enum class EArchonInventorySlot : uint8_t
{
	EArchonInventorySlot__None     = 0,
	EArchonInventorySlot__Weapon   = 1,
	EArchonInventorySlot__Chest    = 2,
	EArchonInventorySlot__Helmet   = 3,
	EArchonInventorySlot__Legs     = 4,
	EArchonInventorySlot__Arms     = 5,
	EArchonInventorySlot__EArchonInventorySlot_MAX = 6
};


// Enum Archon.EQuickItemSlot
enum class EQuickItemSlot : uint8_t
{
	EQuickItemSlot__QuickItemSlot_POTION = 0,
	EQuickItemSlot__QuickItemSlot_OFFENSIVE = 1,
	EQuickItemSlot__QuickItemSlot_DEFENSIVE = 2,
	EQuickItemSlot__QuickItemSlot_FLARE = 3,
	EQuickItemSlot__QuickItemSlot_AIRSHIP = 4,
	EQuickItemSlot__QuickItemSlot_GENERIC = 5,
	EQuickItemSlot__QuickItemSlot_UNUSED = 6,
	EQuickItemSlot__QuickItemSlot_MAX = 7
};


// Enum Archon.ELoadoutQuickItemSlot
enum class ELoadoutQuickItemSlot : uint8_t
{
	ELoadoutQuickItemSlot__Slot    = 0,
	ELoadoutQuickItemSlot__Slot01  = 1,
	ELoadoutQuickItemSlot__Slot02  = 2,
	ELoadoutQuickItemSlot__Slot03  = 3,
	ELoadoutQuickItemSlot__Slot04  = 4,
	ELoadoutQuickItemSlot__Slot_Flask_Heal = 5,
	ELoadoutQuickItemSlot__Slot_Flask_Revive = 6,
	ELoadoutQuickItemSlot__Slot_Max = 7
};


// Enum Archon.ELoadScreenStyle
enum class ELoadScreenStyle : uint8_t
{
	LOAD_SCREEN_QUICK              = 0,
	LOAD_SCREEN_CITY               = 1,
	LOAD_SCREEN_ISLAND             = 2,
	LOAD_SCREEN_FTUE_ISLAND        = 3,
	LOAD_SCREEN_FTUE_CITY          = 4,
	LOAD_SCREEN_FTUE               = 5,
	LOAD_SCREEN_MAX                = 6
};


// Enum Archon.EArchonLobbyPaperDollPart
enum class EArchonLobbyPaperDollPart : uint8_t
{
	ALPDP_Head                     = 0,
	ALPDP_Chest                    = 1,
	ALPDP_Arms                     = 2,
	ALPDP_Legs                     = 3,
	ALPDP_Lantern                  = 4,
	ALPDP_Weapon                   = 5,
	ALPDP_Max                      = 6
};


// Enum Archon.EPartyInviteFilter
enum class EPartyInviteFilter : uint8_t
{
	EPartyInviteFilter__AllowAll   = 0,
	EPartyInviteFilter__FriendsOnly = 1,
	EPartyInviteFilter__BlockAll   = 2,
	EPartyInviteFilter__EPartyInviteFilter_MAX = 3
};


// Enum Archon.EArchonPathFollowingState
enum class EArchonPathFollowingState : uint8_t
{
	EArchonPathFollowingState__None = 0,
	EArchonPathFollowingState__FollowingArcingTurn = 1,
	EArchonPathFollowingState__FollowingFinalArcingTurn = 2,
	EArchonPathFollowingState__MovingToStartOfFinalArc = 3,
	EArchonPathFollowingState__MovingToFinalPivotPoint = 4,
	EArchonPathFollowingState__Pivoting = 5,
	EArchonPathFollowingState__FinalPivot = 6,
	EArchonPathFollowingState__FinalPivotComplete = 7,
	EArchonPathFollowingState__ResumingMove = 8,
	EArchonPathFollowingState__EArchonPathFollowingState_MAX = 9
};


// Enum Archon.EArchonParticleAttachType
enum class EArchonParticleAttachType : uint8_t
{
	EArchonParticleAttachType__Character = 0,
	EArchonParticleAttachType__Weapon = 1,
	EArchonParticleAttachType__EArchonParticleAttachType_MAX = 2
};


// Enum Archon.EArchonWarpComponentAutoRotationRateMode
enum class EArchonWarpComponentAutoRotationRateMode : uint8_t
{
	EArchonWarpComponentAutoRotationRateMode__DEFAULT = 0,
	EArchonWarpComponentAutoRotationRateMode__AUTO_ROTATION_RATE = 1,
	EArchonWarpComponentAutoRotationRateMode__AUTO_ROTATION_RATE_FULL_DURATION = 2,
	EArchonWarpComponentAutoRotationRateMode__EArchonWarpComponentAutoRotationRateMode_MAX = 3
};


// Enum Archon.EArchonWarpComponentUpdateType
enum class EArchonWarpComponentUpdateType : uint8_t
{
	EArchonWarpComponentUpdateType__DISABLED = 0,
	EArchonWarpComponentUpdateType__RUN_ON_SERVER_ONLY = 1,
	EArchonWarpComponentUpdateType__RUN_ON_CLIENT_ONLY = 2,
	EArchonWarpComponentUpdateType__RUN_ON_BOTH = 3,
	EArchonWarpComponentUpdateType__EArchonWarpComponentUpdateType_MAX = 4
};


// Enum Archon.EWeaponRole
enum class EWeaponRole : uint8_t
{
	EWeaponRole__WeaponRole_NONE   = 0,
	EWeaponRole__WeaponRole_PRIMARY = 1,
	EWeaponRole__WeaponRole_OFFHAND = 2,
	EWeaponRole__WeaponRole_MAX    = 3
};


// Enum Archon.EWeaponState
enum class EWeaponState : uint8_t
{
	EWeaponState__Equipped         = 0,
	EWeaponState__Unequipped       = 1,
	EWeaponState__Attacking        = 2,
	EWeaponState__EWeaponState_MAX = 3
};


// Enum Archon.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__WeaponType_NONE   = 0,
	EWeaponType__WeaponType_IHAMMER = 1,
	EWeaponType__WeaponType_GAXE   = 2,
	EWeaponType__WeaponType_EBLADE = 3,
	EWeaponType__WeaponType_CBLADES = 4,
	EWeaponType__WeaponType_MSPEAR = 5,
	EWeaponType__WeaponType_MAX    = 6
};


// Enum Archon.ECellEffectType
enum class ECellEffectType : uint8_t
{
	ECellEffectType__Standard      = 0,
	ECellEffectType__Unique        = 1,
	ECellEffectType__ECellEffectType_MAX = 2
};


// Enum Archon.ECellType
enum class ECellType : uint8_t
{
	ECellType__None                = 0,
	ECellType__CellType_Generic    = 1,
	ECellType__CellType_Weapon_Generic = 2,
	ECellType__CellType_Weapon_Axe = 3,
	ECellType__CellType_Weapon_Sword = 4,
	ECellType__CellType_Weapon_Hammer = 5,
	ECellType__CellType_Weapon_CBlades = 6,
	ECellType__CellType_Weapon_Spear = 7,
	ECellType__CellType_Armour_Generic = 8,
	ECellType__CellType_Armour_Head = 9,
	ECellType__CellType_Armour_Chest = 10,
	ECellType__CellType_Armour_Arms = 11,
	ECellType__CellType_Armour_Legs = 12,
	ECellType__CellType_Lantern_Generic = 13,
	ECellType__CellType_Lantern_Ability = 14,
	ECellType__CellType_Defence    = 15,
	ECellType__CellType_Power      = 16,
	ECellType__CellType_Mobility   = 17,
	ECellType__CellType_Technique  = 18,
	ECellType__CellType_Utility    = 19,
	ECellType__Max                 = 20,
	ECellType__ECellType_MAX       = 21
};


// Enum Archon.EChallengeSlotDuration
enum class EChallengeSlotDuration : uint8_t
{
	EChallengeSlotDuration__Daily  = 0,
	EChallengeSlotDuration__Weekly = 1,
	EChallengeSlotDuration__EChallengeSlotDuration_MAX = 2
};


// Enum Archon.EComboBufferPriority
enum class EComboBufferPriority : uint8_t
{
	EComboBufferPriority__Exclusive = 0,
	EComboBufferPriority__FallThrough = 1,
	EComboBufferPriority__EComboBufferPriority_MAX = 2
};


// Enum Archon.EComboBufferMethod
enum class EComboBufferMethod : uint8_t
{
	EComboBufferMethod__Mixed      = 0,
	EComboBufferMethod__Buffered   = 1,
	EComboBufferMethod__Instant    = 2,
	EComboBufferMethod__MixedModifier = 3,
	EComboBufferMethod__EComboBufferMethod_MAX = 4
};


// Enum Archon.EArchonAttackActionContext
enum class EArchonAttackActionContext : uint8_t
{
	EArchonAttackActionContext__All = 0,
	EArchonAttackActionContext__Sprint = 1,
	EArchonAttackActionContext__Roll = 2,
	EArchonAttackActionContext__Block = 3,
	EArchonAttackActionContext__EArchonAttackActionContext_MAX = 4
};


// Enum Archon.EArchonAttackActionKeyModifier
enum class EArchonAttackActionKeyModifier : uint8_t
{
	EArchonAttackActionKeyModifier__None = 0,
	EArchonAttackActionKeyModifier__SpecialAction = 1,
	EArchonAttackActionKeyModifier__Sprint = 2,
	EArchonAttackActionKeyModifier__Roll = 3,
	EArchonAttackActionKeyModifier__Block = 4,
	EArchonAttackActionKeyModifier__Forward = 5,
	EArchonAttackActionKeyModifier__Backward = 6,
	EArchonAttackActionKeyModifier__SideLeft = 7,
	EArchonAttackActionKeyModifier__SideRight = 8,
	EArchonAttackActionKeyModifier__Locomotion = 9,
	EArchonAttackActionKeyModifier__Any = 10,
	EArchonAttackActionKeyModifier__EArchonAttackActionKeyModifier_MAX = 11
};


// Enum Archon.EArchonAttackActionKey
enum class EArchonAttackActionKey : uint8_t
{
	EArchonAttackActionKey__None   = 0,
	EArchonAttackActionKey__PrimaryAttack = 1,
	EArchonAttackActionKey__SecondaryAttack = 2,
	EArchonAttackActionKey__Roll   = 3,
	EArchonAttackActionKey__SpecialAction = 4,
	EArchonAttackActionKey__EArchonAttackActionKey_MAX = 5
};


// Enum Archon.EArchonCombatInputType
enum class EArchonCombatInputType : uint8_t
{
	EArchonCombatInputType__InputType_Pressed = 0,
	EArchonCombatInputType__InputType_Released = 1,
	EArchonCombatInputType__InputType_Held = 2,
	EArchonCombatInputType__InputType_Any = 3,
	EArchonCombatInputType__InputType_MAX = 4
};


// Enum Archon.EArchonCombatEndReason
enum class EArchonCombatEndReason : uint8_t
{
	EArchonCombatEndReason__None   = 0,
	EArchonCombatEndReason__EndReason_CancelWindow = 1,
	EArchonCombatEndReason__EndReason_NoMontage = 2,
	EArchonCombatEndReason__EndReason_MontageBlendOut = 3,
	EArchonCombatEndReason__EndReason_CancelWindowLocomotion = 4,
	EArchonCombatEndReason__EArchonCombatEndReason_MAX = 5
};


// Enum Archon.EHuntTypeRequirement
enum class EHuntTypeRequirement : uint8_t
{
	EHuntTypeRequirement__Player   = 0,
	EHuntTypeRequirement__Matchmaker = 1,
	EHuntTypeRequirement__EHuntTypeRequirement_MAX = 2
};


// Enum Archon.EItemDescriptionFormat
enum class EItemDescriptionFormat : uint8_t
{
	EItemDescriptionFormat__Gather = 0,
	EItemDescriptionFormat__Craft  = 1,
	EItemDescriptionFormat__Upgrade = 2,
	EItemDescriptionFormat__EItemDescriptionFormat_MAX = 3
};


// Enum Archon.EGameplayQuestStatusRequirement
enum class EGameplayQuestStatusRequirement : uint8_t
{
	EGameplayQuestStatusRequirement__Any = 0,
	EGameplayQuestStatusRequirement__All = 1,
	EGameplayQuestStatusRequirement__EGameplayQuestStatusRequirement_MAX = 2
};


// Enum Archon.EItemRequirement
enum class EItemRequirement : uint8_t
{
	EItemRequirement__Any          = 0,
	EItemRequirement__All          = 1,
	EItemRequirement__None         = 2,
	EItemRequirement__EItemRequirement_MAX = 3
};


// Enum Archon.EArchonGuildRank
enum class EArchonGuildRank : uint8_t
{
	EArchonGuildRank__Invalid      = 0,
	EArchonGuildRank__Member       = 1,
	EArchonGuildRank__Officer      = 2,
	EArchonGuildRank__Leader       = 3,
	EArchonGuildRank__EArchonGuildRank_MAX = 4
};


// Enum Archon.EVictimRelativeHitDirection
enum class EVictimRelativeHitDirection : uint8_t
{
	EVictimRelativeHitDirection__ANY = 0,
	EVictimRelativeHitDirection__FRONT = 1,
	EVictimRelativeHitDirection__LEFT = 2,
	EVictimRelativeHitDirection__RIGHT = 3,
	EVictimRelativeHitDirection__BACK = 4,
	EVictimRelativeHitDirection__EVictimRelativeHitDirection_MAX = 5
};


// Enum Archon.EGatherableRarity
enum class EGatherableRarity : uint8_t
{
	EGatherableRarity__Common      = 0,
	EGatherableRarity__Rare        = 1,
	EGatherableRarity__EGatherableRarity_MAX = 2
};


// Enum Archon.EGatherableCategory
enum class EGatherableCategory : uint8_t
{
	EGatherableCategory__SpecialEvent_01 = 0,
	EGatherableCategory__SpecialEvent_02 = 1,
	EGatherableCategory__SpecialEvent_03 = 2,
	EGatherableCategory__SpecialEvent_04 = 3,
	EGatherableCategory__SpecialEvent_05 = 4,
	EGatherableCategory__SpecialEvent_06 = 5,
	EGatherableCategory__BehemothSign_01 = 6,
	EGatherableCategory__CrateCommon_01 = 7,
	EGatherableCategory__CrateEvent_01 = 8,
	EGatherableCategory__Debris_01 = 9,
	EGatherableCategory__Debris_02 = 10,
	EGatherableCategory__Debris_03 = 11,
	EGatherableCategory__Hoofed_Universal_01 = 12,
	EGatherableCategory__Wisp_Universal_01 = 13,
	EGatherableCategory__Wisp_Universal_02 = 14,
	EGatherableCategory__Wisp_Universal_03 = 15,
	EGatherableCategory__Wisp_Universal_04 = 16,
	EGatherableCategory__Wisp_Universal_05 = 17,
	EGatherableCategory__Wisp_Universal_06 = 18,
	EGatherableCategory__Wisp_Universal_07 = 19,
	EGatherableCategory__Wisp_Universal_08 = 20,
	EGatherableCategory__Wisp_Universal_09 = 21,
	EGatherableCategory__Wisp_Universal = 22,
	EGatherableCategory__Fauna     = 23,
	EGatherableCategory__Common_01 = 24,
	EGatherableCategory__Speed_01  = 25,
	EGatherableCategory__Damage_01 = 26,
	EGatherableCategory__Defense_01 = 27,
	EGatherableCategory__Healing_01 = 28,
	EGatherableCategory__Pylon_01  = 29,
	EGatherableCategory__Weapon_01 = 30,
	EGatherableCategory__Special_01 = 31,
	EGatherableCategory__EGatherableCategory_MAX = 32
};


// Enum Archon.ENavAreaFlag
enum class ENavAreaFlag : uint8_t
{
	ENavAreaFlag__Default          = 0,
	ENavAreaFlag__Jump             = 1,
	ENavAreaFlag__Crouch           = 2,
	ENavAreaFlag__ENavAreaFlag_MAX = 3
};


// Enum Archon.EObjectiveParentType
enum class EObjectiveParentType : uint8_t
{
	EObjectiveParentType__Unknown  = 0,
	EObjectiveParentType__ParentIsQuest = 1,
	EObjectiveParentType__ParentIsObjective = 2,
	EObjectiveParentType__ParentIsChallenge = 3,
	EObjectiveParentType__EObjectiveParentType_MAX = 4
};


// Enum Archon.EObjectiveStatus
enum class EObjectiveStatus : uint8_t
{
	EObjectiveStatus__NotStarted   = 0,
	EObjectiveStatus__InProgress   = 1,
	EObjectiveStatus__Completed    = 2,
	EObjectiveStatus__EObjectiveStatus_MAX = 3
};


// Enum Archon.ECollectItemDescriptionFormat
enum class ECollectItemDescriptionFormat : uint8_t
{
	ECollectItemDescriptionFormat__Gather = 0,
	ECollectItemDescriptionFormat__Craft = 1,
	ECollectItemDescriptionFormat__Upgrade = 2,
	ECollectItemDescriptionFormat__ECollectItemDescriptionFormat_MAX = 3
};


// Enum Archon.ECollectItemRequirement
enum class ECollectItemRequirement : uint8_t
{
	ECollectItemRequirement__PossessAndCollect = 0,
	ECollectItemRequirement__CollectOnly = 1,
	ECollectItemRequirement__ECollectItemRequirement_MAX = 2
};


// Enum Archon.EEconomyTransactionType
enum class EEconomyTransactionType : uint8_t
{
	EEconomyTransactionType__Invalid = 0,
	EEconomyTransactionType__Granted = 1,
	EEconomyTransactionType__Consumed = 2,
	EEconomyTransactionType__SetUses = 3,
	EEconomyTransactionType__Delta = 4,
	EEconomyTransactionType__EEconomyTransactionType_MAX = 5
};


// Enum Archon.EOnlineRegion
enum class EOnlineRegion : uint8_t
{
	EOnlineRegion__US              = 0,
	EOnlineRegion__EU              = 1,
	EOnlineRegion__AUS             = 2,
	EOnlineRegion__EOnlineRegion_MAX = 3
};


// Enum Archon.EEmoteType
enum class EEmoteType : uint8_t
{
	EEmoteType__PlayerActivated    = 0,
	EEmoteType__IslandIntro        = 1,
	EEmoteType__MasterOfTheHunt    = 2,
	EEmoteType__EEmoteType_MAX     = 3
};


// Enum Archon.EItemGroupType
enum class EItemGroupType : uint8_t
{
	EItemGroupType__None           = 0,
	EItemGroupType__Armour_Chest   = 1,
	EItemGroupType__Armour_Helm    = 2,
	EItemGroupType__Armour_Legs    = 3,
	EItemGroupType__Armour_Arms    = 4,
	EItemGroupType__Armour_Lantern = 5,
	EItemGroupType__Weapon_Sword   = 6,
	EItemGroupType__Weapon_Axe     = 7,
	EItemGroupType__Weapon_Hammer  = 8,
	EItemGroupType__Weapon_ChainBlades = 9,
	EItemGroupType__Weapon_Spear   = 10,
	EItemGroupType__QuickItem_Healing = 11,
	EItemGroupType__QuickItem_Defense = 12,
	EItemGroupType__QuickItem_Offense = 13,
	EItemGroupType__QuickItem_Flare = 14,
	EItemGroupType__QuickItem_Supplies = 15,
	EItemGroupType__Banner_Mesh    = 16,
	EItemGroupType__Banner_Fabric  = 17,
	EItemGroupType__Banner_Sigil   = 18,
	EItemGroupType__Banner_VFX     = 19,
	EItemGroupType__Banner_Animation = 20,
	EItemGroupType__Recipe         = 21,
	EItemGroupType__Dye            = 22,
	EItemGroupType__Token          = 23,
	EItemGroupType__Core           = 24,
	EItemGroupType__Emote          = 25,
	EItemGroupType__Currency       = 26,
	EItemGroupType__QuestItem      = 27,
	EItemGroupType__Reagent        = 28,
	EItemGroupType__Breakpart      = 29,
	EItemGroupType__Title          = 30,
	EItemGroupType__Cell           = 31,
	EItemGroupType__QuickItem_Generic = 32,
	EItemGroupType__QuickItem_FlaskTransient = 33,
	EItemGroupType__Max            = 34,
	EItemGroupType__EItemGroupType_MAX = 35
};


// Enum Archon.EItemRarityLevelType
enum class EItemRarityLevelType : uint8_t
{
	EItemRarityLevelType__Poor     = 0,
	EItemRarityLevelType__Common   = 1,
	EItemRarityLevelType__Uncommon = 2,
	EItemRarityLevelType__Rare     = 3,
	EItemRarityLevelType__Epic     = 4,
	EItemRarityLevelType__Legendary = 5,
	EItemRarityLevelType__Artifact = 6,
	EItemRarityLevelType__EItemRarityLevelType_MAX = 7
};


// Enum Archon.EPlayFabCatalogCurrency
enum class EPlayFabCatalogCurrency : uint8_t
{
	EPlayFabCatalogCurrency__VC    = 0,
	EPlayFabCatalogCurrency__RM    = 1,
	EPlayFabCatalogCurrency__EPlayFabCatalogCurrency_MAX = 2
};


// Enum Archon.EQuestRedeemRestriction
enum class EQuestRedeemRestriction : uint8_t
{
	EQuestRedeemRestriction__CityOnly = 0,
	EQuestRedeemRestriction__DuringHunt = 1,
	EQuestRedeemRestriction__EQuestRedeemRestriction_MAX = 2
};


// Enum Archon.EQuestEventTrigger
enum class EQuestEventTrigger : uint8_t
{
	EQuestEventTrigger__Intro      = 0,
	EQuestEventTrigger__Accept     = 1,
	EQuestEventTrigger__Redeem     = 2,
	EQuestEventTrigger__Outro      = 3,
	EQuestEventTrigger__GameplayStart = 4,
	EQuestEventTrigger__EQuestEventTrigger_MAX = 5
};


// Enum Archon.EScheduleType
enum class EScheduleType : uint8_t
{
	EScheduleType__NotScheduled    = 0,
	EScheduleType__OneTimeOnly     = 1,
	EScheduleType__Daily           = 2,
	EScheduleType__Weekly          = 3,
	EScheduleType__EScheduleType_MAX = 4
};


// Enum Archon.ESerieStatus
enum class ESerieStatus : uint8_t
{
	ESerieStatus__NotAvailable     = 0,
	ESerieStatus__InProgress       = 1,
	ESerieStatus__Completed        = 2,
	ESerieStatus__ESerieStatus_MAX = 3
};


// Enum Archon.EArchonStaggerTurnBehaviourKey
enum class EArchonStaggerTurnBehaviourKey : uint8_t
{
	EArchonStaggerTurnBehaviourKey__None = 0,
	EArchonStaggerTurnBehaviourKey__TurnToFace = 1,
	EArchonStaggerTurnBehaviourKey__TurnToFaceAway = 2,
	EArchonStaggerTurnBehaviourKey__EArchonStaggerTurnBehaviourKey_MAX = 3
};


// Enum Archon.ECraftItemsRequirement
enum class ECraftItemsRequirement : uint8_t
{
	ECraftItemsRequirement__CraftAny = 0,
	ECraftItemsRequirement__CraftAll = 1,
	ECraftItemsRequirement__CraftNone = 2,
	ECraftItemsRequirement__ECraftItemsRequirement_MAX = 3
};


// Enum Archon.EQuestCompleteRequirement
enum class EQuestCompleteRequirement : uint8_t
{
	EQuestCompleteRequirement__All = 0,
	EQuestCompleteRequirement__Any = 1,
	EQuestCompleteRequirement__EQuestCompleteRequirement_MAX = 2
};


// Enum Archon.ERequiredQuestState
enum class ERequiredQuestState : uint8_t
{
	ERequiredQuestState__Redeemed  = 0,
	ERequiredQuestState__Redeemable = 1,
	ERequiredQuestState__ERequiredQuestState_MAX = 2
};


// Enum Archon.EQuestStatusRequirement
enum class EQuestStatusRequirement : uint8_t
{
	EQuestStatusRequirement__All   = 0,
	EQuestStatusRequirement__Any   = 1,
	EQuestStatusRequirement__EQuestStatusRequirement_MAX = 2
};


// Enum Archon.ERecipeCustomComponent
enum class ERecipeCustomComponent : uint8_t
{
	ERecipeCustomComponent__RecipeComponent_00 = 0,
	ERecipeCustomComponent__RecipeComponent_01 = 1,
	ERecipeCustomComponent__RecipeComponent_02 = 2,
	ERecipeCustomComponent__RecipeComponent_03 = 3,
	ERecipeCustomComponent__RecipeComponent_04 = 4,
	ERecipeCustomComponent__RecipeComponent_05 = 5,
	ERecipeCustomComponent__RecipeComponent_06 = 6,
	ERecipeCustomComponent__RecipeComponent_07 = 7,
	ERecipeCustomComponent__RecipeComponent_08 = 8,
	ERecipeCustomComponent__RecipeComponent_09 = 9,
	ERecipeCustomComponent__RecipeComponent = 10,
	ERecipeCustomComponent__RecipeComponent01 = 11,
	ERecipeCustomComponent__RecipeComponent02 = 12,
	ERecipeCustomComponent__RecipeComponent03 = 13,
	ERecipeCustomComponent__RecipeComponent04 = 14,
	ERecipeCustomComponent__RecipeComponent05 = 15,
	ERecipeCustomComponent__RecipeComponent06 = 16,
	ERecipeCustomComponent__RecipeComponent07 = 17,
	ERecipeCustomComponent__RecipeComponent08 = 18,
	ERecipeCustomComponent__RecipeComponent09 = 19,
	ERecipeCustomComponent__RecipeComponent10 = 20,
	ERecipeCustomComponent__RecipeComponent_MAX = 21
};


// Enum Archon.EUpgradeableItemLevel
enum class EUpgradeableItemLevel : uint8_t
{
	EUpgradeableItemLevel__Level_00 = 0,
	EUpgradeableItemLevel__Level_01 = 1,
	EUpgradeableItemLevel__Level_02 = 2,
	EUpgradeableItemLevel__Level_03 = 3,
	EUpgradeableItemLevel__Level_04 = 4,
	EUpgradeableItemLevel__Level_05 = 5,
	EUpgradeableItemLevel__Level_06 = 6,
	EUpgradeableItemLevel__Level_07 = 7,
	EUpgradeableItemLevel__Level_08 = 8,
	EUpgradeableItemLevel__Level_09 = 9,
	EUpgradeableItemLevel__Level   = 10,
	EUpgradeableItemLevel__Level01 = 11,
	EUpgradeableItemLevel__Level02 = 12,
	EUpgradeableItemLevel__Level03 = 13,
	EUpgradeableItemLevel__Level04 = 14,
	EUpgradeableItemLevel__Level05 = 15,
	EUpgradeableItemLevel__Level06 = 16,
	EUpgradeableItemLevel__Level07 = 17,
	EUpgradeableItemLevel__Level08 = 18,
	EUpgradeableItemLevel__Level09 = 19,
	EUpgradeableItemLevel__Level10 = 20,
	EUpgradeableItemLevel__EUpgradeableItemLevel_MAX = 21
};


// Enum Archon.EArchonBuildType
enum class EArchonBuildType : uint8_t
{
	EArchonBuildType__Unknown      = 0,
	EArchonBuildType__Debug        = 1,
	EArchonBuildType__DebugGame    = 2,
	EArchonBuildType__Development  = 3,
	EArchonBuildType__Shipping     = 4,
	EArchonBuildType__Test         = 5,
	EArchonBuildType__EArchonBuildType_MAX = 6
};


// Enum Archon.EArchonCaseBehaviour
enum class EArchonCaseBehaviour : uint8_t
{
	EArchonCaseBehaviour__NoConversion = 0,
	EArchonCaseBehaviour__LowerCase = 1,
	EArchonCaseBehaviour__UpperCase = 2,
	EArchonCaseBehaviour__EArchonCaseBehaviour_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Archon.ArchonAbilityDamageValues
// 0x001C
struct FArchonAbilityDamageValues
{
	float                                              PhysicalDamage;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonAbilityDamageInfo
// 0x00E0
struct FArchonAbilityDamageInfo
{
	struct FGameplayEventData                          Payload;                                                  // 0x0000(0x00A8) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              BaseDamage;                                               // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EElementType                                       DamageElement;                                            // 0x00AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              RawDamage;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageValues                  MitigatedDamage;                                          // 0x00B4(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              TotalElementalDamage;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalPhysicalDamage;                                      // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageApplied;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonExtendedDamageInfo
// 0x0020
struct FArchonExtendedDamageInfo
{
	struct FGuid                                       AttackID;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FGameplayTag>                        Tags;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.ArchonMeshMorphValue
// 0x0020
struct FArchonMeshMorphValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      MorphName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Value;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonMeshAppearanceData
// 0x0028
struct FArchonMeshAppearanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      SkeletalMeshComponentName;                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FArchonMeshMorphValue>               MorphData;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.AppearanceAssetReference
// 0x0030
struct FAppearanceAssetReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Key;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UObject>                           Asset;                                                    // 0x0010(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.AppearanceStringData
// 0x0020
struct FAppearanceStringData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Key;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Data;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.ArchonAppearanceData
// 0x0040
struct FArchonAppearanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EArchonCharacterCreationState                      CreationState;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FArchonMeshAppearanceData>           MeshData;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAppearanceAssetReference>           AssetReferences;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAppearanceStringData>               StringData;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.ArmourSetKeyword
// 0x0018
struct FArmourSetKeyword
{
	int                                                AddedCount;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         ArmorSet;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Archon.ArmourSetItemResistanceTableData
// 0x0010 (0x0018 - 0x0008)
struct FArmourSetItemResistanceTableData : public FTableRowBase
{
	TArray<class UClass*>                              Abilities;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.DyeVariant
// 0x0010
struct FDyeVariant
{
	struct FName                                       PrimaryDyeRowName;                                        // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SecondaryDyeRowName;                                      // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArmourResistanceTableData
// 0x0060 (0x0078 - 0x0018)
struct FArmourResistanceTableData : public FArmourSetItemResistanceTableData
{
	float                                              GlobalResistance;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalResistancePerLevel;                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistancePerLevel;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistance;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistancePerLevel;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistance;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistancePerLevel;                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistance;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistancePerLevel;                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistance;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistancePerLevel;                                 // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        GrantedTags;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayTag>                        AssetTags;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FArmourSetKeyword>                   ArmorSetKeywords;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ArchonAttributeModifier
// 0x0010
struct FArchonAttributeModifier
{
	struct FName                                       SourceName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonAttributeModifierType                       ModifierType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Modifier;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonAttribute
// 0x0028
struct FArchonAttribute
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FArchonAttributeModifier>            Modifiers;                                                // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.BannerCustomizationItemIDs
// 0x0080
struct FBannerCustomizationItemIDs
{
	class FString                                      BannerMeshItemID;                                         // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      FabricMaterialItemID;                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      SigilTextureItemID;                                       // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      VFXItemID;                                                // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      AnimationItemID;                                          // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      BackgroundColourItemID;                                   // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      BorderColourItemID;                                       // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      SigilColourItemID;                                        // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.DamageEventData
// 0x0058
struct FDamageEventData
{
	TArray<float>                                      PreMitigationDamages;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Multipliers;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      ResistanceDeltas;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      PostResistDamages;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ExplicitPartBreakDamage;                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitStaggerDamage;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitExposeDamage;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalStaggerDamage;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalExposeDamage;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.DamageTableData
// 0x0058 (0x0060 - 0x0008)
struct FDamageTableData : public FTableRowBase
{
	int                                                BaseDamage;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPhysicalType                                      PhysicalTypeOverride;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                ExplicitPartBreak;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExplicitStagger;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExplicitExpose;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DamageTrue;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PhysicalDamage;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlameDamage;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrostDamage;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShockDamage;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RadiantDamage;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UmbralDamage;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RawElementalDamage;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Meter;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Effect;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        AssetTags;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.NameValuePair
// 0x0010
struct FNameValuePair
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.EffectDef
// 0x0018
struct FEffectDef
{
	class UClass*                                      Effect;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNameValuePair>                      Overrides;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.PlayFabCatalogCurrency
// 0x0008
struct FPlayFabCatalogCurrency
{
	EPlayFabCatalogCurrency                            CurrencyType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.CatalogItemGenericCustomData
// 0x0048
struct FCatalogItemGenericCustomData
{
	int                                                TierLevel;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               RarityLevel;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     Kind;                                                     // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class FString                                      DustItemResult;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SetInformation;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0028(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabCatalogItemQuantity
// 0x0018
struct FPlayFabCatalogItemQuantity
{
	class FString                                      Item;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonCatalogItem
// 0x0270
struct FArchonCatalogItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FStringClassReference                       ItemClass;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      CatalogVersion;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDataTable*                                  Catalog;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      DisplayNameInvariant;                                     // 0x0040(0x0010) (ZeroConstructor, Transient)
	class FString                                      DescriptionInvariant;                                     // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FText                                       DisplayName;                                              // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<class FString>                              Tags;                                                     // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CustomData;                                               // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsStackable;                                              // 0x00B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsBundle;                                                 // 0x00B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsContainer;                                              // 0x00B2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x00B3(0x0005) MISSED OFFSET
	TArray<class FString>                              ContainerItemContents;                                    // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              ContainerResultTableContents;                             // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              BundledItems;                                             // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              BundledResultTables;                                      // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             VirtualCurrencyPrices;                                    // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             RealCurrencyPrices;                                       // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FCatalogItemGenericCustomData               ItemData;                                                 // 0x0118(0x0048) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FPlayFabCatalogItemQuantity>         ContainerItemContentsWithQuantity;                        // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         ContainerResultTableContentsWithQuantity;                 // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         BundledItemsWithQuantity;                                 // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         BundledResultTablesWithQuantity;                          // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01A0(0x00A0) MISSED OFFSET
	int                                                MaxQuantity;                                              // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FPlayFabCatalogItemQuantity>         OtherItemQuantities;                                      // 0x0248(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         AlternateItemsToGrant;                                    // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                GuaranteedItemsFromContainer;                             // 0x0268(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x026C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.CatalogItemRewardInfo
// 0x0050
struct FCatalogItemRewardInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0030(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.AppliedCellEffectCounter
// 0x0020
struct FAppliedCellEffectCounter
{
	struct FDataTableRowHandle                         CellEffect;                                               // 0x0000(0x0010) (BlueprintVisible)
	struct FName                                       CellEffectID;                                             // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.HitInfo
// 0x0040
struct FHitInfo
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDamageType*                                 DamageType;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ReplicatedArchonTraversalInfo
// 0x0018
struct FReplicatedArchonTraversalInfo
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootMotionScale;                                          // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Archon.ComboInputKey
// 0x0003
struct FComboInputKey
{
	EArchonAttackActionKey                             PrimaryKey;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     SecondaryKey;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ComboInputBuffer
// 0x0070
struct FComboInputBuffer
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       NextMontageSection;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NextMontage;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FComboInputKey                              ComboInputKey;                                            // 0x0018(0x0003) (Edit, BlueprintVisible)
	EComboBufferMethod                                 BufferMethod;                                             // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EComboBufferPriority                               BufferPriority;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UClass*                                      TransitionCondition;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0030(0x0020) (Edit, BlueprintVisible)
	bool                                               FlyingMove;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              PressAndHoldTime;                                         // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PressAndHoldTimeModifierAttribute;                        // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldFromStartOfBufferWindow;                             // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCombatPlayrateAttributeEnabled;                          // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreviousInputAllowed;                                    // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xD];                                       // 0x0063(0x000D) MISSED OFFSET
};

// ScriptStruct Archon.ComboChargeElement
// 0x0040
struct FComboChargeElement
{
	float                                              MaxChargeTime;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       NextMontageSection;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                NextMontage;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FlyingMove;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0020(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.ComboChargeData
// 0x0018
struct FComboChargeData
{
	struct FComboInputKey                              ComboInputKey;                                            // 0x0000(0x0003) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TArray<struct FComboChargeElement>                 Levels;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.CombatLocalAnimMontage
// 0x0030
struct FCombatLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PlayBit;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFlyingBit;                                              // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0010(0x0020)
};

// ScriptStruct Archon.CombatRepAnimMontage
// 0x0040
struct FCombatRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x0018(0x0020)
	unsigned char                                      NextSectionID;                                            // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0039(0x0001)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0039(0x0001)
	unsigned char                                      ServerInitiatedBit : 1;                                   // 0x0039(0x0001)
	unsigned char                                      IsFlyingBit : 1;                                          // 0x0039(0x0001)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.InputActionData
// 0x0020
struct FInputActionData
{
	class UClass*                                      Action;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ActionConditions;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FComboInputKey                              InputKey;                                                 // 0x0018(0x0003) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x001B(0x0005) MISSED OFFSET
};

// ScriptStruct Archon.ComboCancel
// 0x0002
struct FComboCancel
{
	EArchonAttackActionKeyModifier                     CancelTo;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionContext                         ContextTo;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonGameplayOperationArgs
// 0x0010
struct FArchonGameplayOperationArgs
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLocalizationData
// 0x0010
struct FArchonLocalizationData
{
	class FString                                      Text;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ArchonDialogLine
// 0x0008 (0x0018 - 0x0010)
struct FArchonDialogLine : public FArchonLocalizationData
{
	class UAkAudioEventBase*                           AudioEvent;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonAmbientDialogLine
// 0x0008 (0x0020 - 0x0018)
struct FArchonAmbientDialogLine : public FArchonDialogLine
{
	bool                                               bShowSubtitle;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonWeightedAmbientDialogLine
// 0x0008 (0x0028 - 0x0020)
struct FArchonWeightedAmbientDialogLine : public FArchonAmbientDialogLine
{
	int                                                Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonFullLocalizationData
// 0x0028 (0x0038 - 0x0010)
struct FArchonFullLocalizationData : public FArchonLocalizationData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Archon.ArchonFriend
// 0x0028
struct FArchonFriend
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            FriendId;                                                 // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ArchonRecentPlayer
// 0x0010
struct FArchonRecentPlayer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Archon.ArchonPresence
// 0x0020
struct FArchonPresence
{
	bool                                               IsOnline;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsJoinable;                                               // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class FString                                      StatusStr;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EArchonPresenceStatus                              State;                                                    // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonBlockedPlayer
// 0x0028
struct FArchonBlockedPlayer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            PlayerId;                                                 // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ItemAmountPair
// 0x0010
struct FItemAmountPair
{
	struct FName                                       ItemName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ItemAmountPairList
// 0x0010
struct FItemAmountPairList
{
	TArray<struct FItemAmountPair>                     PairList;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.PlayFabCatalogTableKeyValue
// 0x0020
struct FPlayFabCatalogTableKeyValue
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabCatalogItemConsumableInfo
// 0x0018
struct FPlayFabCatalogItemConsumableInfo
{
	int                                                UsageCount;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UsagePeriod;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      UsagePeriodGroup;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabCatalogItemContainerInfo
// 0x0060
struct FPlayFabCatalogItemContainerInfo
{
	class FString                                      KeyItemId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              ItemContents;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              ResultTableContents;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             VirtualCurrencyContents;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         ItemContentsWithQuantity;                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         ResultTableContentsWithQuantity;                          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabCatalogItemBundleInfo
// 0x0050
struct FPlayFabCatalogItemBundleInfo
{
	TArray<class FString>                              BundledItems;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              BundledResultTables;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             BundledVirtualCurrencies;                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         BundledItemsWithQuantity;                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         BundledResultTablesWithQuantity;                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.RandomRange
// 0x0018
struct FRandomRange
{
	struct FName                                       ItemDataKey;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.PlayFabCatalogItemTableData
// 0x01E8 (0x01F0 - 0x0008)
struct FPlayFabCatalogItemTableData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPlayFabCatalogCurrency>             VirtualCurrencyPrices;                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             RealCurrencyPrices;                                       // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Tags;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogTableKeyValue>        CustomData;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAccountItem;                                           // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FPlayFabCatalogItemConsumableInfo           Consumable;                                               // 0x0080(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsContainer;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FPlayFabCatalogItemContainerInfo            Container;                                                // 0x00A0(0x0060) (Edit, BlueprintVisible)
	bool                                               bIsBundle;                                                // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FPlayFabCatalogItemBundleInfo               Bundle;                                                   // 0x0108(0x0050) (Edit, BlueprintVisible)
	bool                                               CanBecomeCharacter;                                       // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsStackable;                                              // 0x0159(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTradable;                                               // 0x015A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x015B(0x0005) MISSED OFFSET
	class FString                                      ItemImageUrl;                                             // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRandomRange>                        AutoGenerateRandomNumbers;                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxQuantity;                                              // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	TArray<struct FPlayFabCatalogItemQuantity>         OtherItemQuantities;                                      // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogItemQuantity>         AlternateItemsToGrant;                                    // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FCatalogItemGenericCustomData               GenericItemData;                                          // 0x01A8(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.CellMagnitudeModification
// 0x0018
struct FCellMagnitudeModification
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         CellEffect;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
};

// ScriptStruct Archon.CellRankModification
// 0x0018
struct FCellRankModification
{
	int                                                Rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         CellEffect;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
};

// ScriptStruct Archon.CellCatalogTableData
// 0x0028 (0x0218 - 0x01F0)
struct FCellCatalogTableData : public FPlayFabCatalogItemTableData
{
	TArray<struct FCellMagnitudeModification>          Magnitudes;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCellRankModification>               Ranks;                                                    // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ECellType                                          CellType;                                                 // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobbyMissionInfo
// 0x00A0
struct FArchonLobbyMissionInfo
{
	class FString                                      Map;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TAssetPtr<class UClass>                            MonsterClassRef;                                          // 0x0018(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UClass>                            TODClassRef;                                              // 0x0038(0x0020) (Edit, BlueprintVisible)
	struct FName                                       QuestID;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Description;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      HuntId;                                                   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              HuntTokens;                                               // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Hunts;                                                    // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.ArchonGameplayAbilityBindInfo
// 0x0010
struct FArchonGameplayAbilityBindInfo
{
	TEnumAsByte<EArchonGameplayAbilityInputBinds>      Command;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRespondOnHeld;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UClass*                                      GameplayAbilityClass;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.GameplayCueNotifySubset
// 0x0080
struct FGameplayCueNotifySubset
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
	TArray<class UClass*>                              LoadedClasses;                                            // 0x0058(0x0010) (ZeroConstructor)
	class UObjectLibrary*                              GameplayCueNotifyActorObjectLibrary;                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              GameplayCueNotifyStaticObjectLibrary;                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.StubStruct
// 0x0001
struct FStubStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Archon.ArchonRegexMatch
// 0x0038
struct FArchonRegexMatch
{
	int                                                MatchBegin;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MatchEnd;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        CaptureGroupBegin;                                        // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        CaptureGroupEnd;                                          // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              CaptureGroups;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.QuestRequirement
// 0x0010
struct FQuestRequirement
{
	struct FName                                       QuestName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EQuestStatus                                       QuestStatusRequired;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.HTTPEventStats
// 0x0018
struct FHTTPEventStats
{
	int                                                WarningEventCount;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WarningMessageSize;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ErrorEventCount;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ErrorMessageSize;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LogEventCount;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LogMessageSize;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.UpgradeableItemRecipeItem
// 0x0018
struct FUpgradeableItemRecipeItem
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.UpgradeableItemRecipeCustomComponent
// 0x0008
struct FUpgradeableItemRecipeCustomComponent
{
	ERecipeCustomComponent                             RecipeCustomComponent;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Archon.UpgradeableItemRecipe
// 0x0030
struct FUpgradeableItemRecipe
{
	TArray<struct FUpgradeableItemRecipeItem>          ItemIDs;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FUpgradeableItemRecipeCustomComponent> CustomComponents;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FQuestRequirement>                   RequiredQuestStatuses;                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.UpgradeableItemRecipePerLevel
// 0x0038
struct FUpgradeableItemRecipePerLevel
{
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FUpgradeableItemRecipe                      Recipe;                                                   // 0x0008(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Archon.UpgradeableItemRecipeTableData
// 0x0020 (0x0028 - 0x0008)
struct FUpgradeableItemRecipeTableData : public FTableRowBase
{
	TArray<struct FDataTableRowHandle>                 SharedRecipes;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FUpgradeableItemRecipePerLevel>      RecipesPerLevel;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ProgressTrackRank
// 0x0010
struct FProgressTrackRank
{
	struct FName                                       Track;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.RecipeCustomComponent
// 0x0018
struct FRecipeCustomComponent
{
	ERecipeCustomComponent                             CustomComponent;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.RecipeComponentPerLevel
// 0x0018
struct FRecipeComponentPerLevel
{
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FRecipeCustomComponent>              RecipeCustomComponents;                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.UpgradeableItemRecipeItemsPerLevel
// 0x0018
struct FUpgradeableItemRecipeItemsPerLevel
{
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FUpgradeableItemRecipeItem>          RecipeItems;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.PlayFabCraftedCatalogBundledItem
// 0x0018
struct FPlayFabCraftedCatalogBundledItem
{
	class FString                                      BundledItemID;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Quantity;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.PlayFabCraftedCatalogTableData
// 0x00F0 (0x02E0 - 0x01F0)
struct FPlayFabCraftedCatalogTableData : public FPlayFabCatalogItemTableData
{
	struct FName                                       GearSetName;                                              // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       RewardName;                                               // 0x01F8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       RewardDescription;                                        // 0x0210(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        RewardIcon;                                               // 0x0228(0x0020) (Edit, BlueprintVisible)
	TArray<class FString>                              RequiredItemIDs;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FProgressTrackRank>                  RequiredRanks;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FQuestRequirement>                   RequireQuestStatuses;                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              UpgradesToItemIDs;                                        // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EUpgradeableItemLevel                              MaxUpgradeLevel;                                          // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         RecipePattern;                                            // 0x0290(0x0010) (Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 GlobalRecipeComponents;                                   // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRecipeComponentPerLevel>            RecipeComponentsPerLevel;                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FUpgradeableItemRecipeItemsPerLevel> SpecificRecipeItemsPerLevel;                              // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCraftedCatalogBundledItem>   BundledItems;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.CellSlot
// 0x0008
struct FCellSlot
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECellType                                          CellType;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EItemRarityLevelType                               CellRarity;                                               // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Archon.CellSlotsPerLevel
// 0x0018
struct FCellSlotsPerLevel
{
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FCellSlot>                           CellSlots;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PermanentCellEffect
// 0x0018
struct FPermanentCellEffect
{
	struct FDataTableRowHandle                         CellEffectRef;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RanksGranted;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagnitudeValue;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Archon.PermanentCell
// 0x0018
struct FPermanentCell
{
	int                                                PermanentSlotIndex;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         PermanentCell;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Archon.PermanentCellsPerLevel
// 0x0028
struct FPermanentCellsPerLevel
{
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FPermanentCellEffect>                PermanentCellEffects;                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPermanentCell>                      PermanentCells;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabCellContainerCatalogTableData
// 0x0030 (0x0310 - 0x02E0)
struct FPlayFabCellContainerCatalogTableData : public FPlayFabCraftedCatalogTableData
{
	struct FDataTableRowHandle                         CellUnlockPattern;                                        // 0x02E0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FCellSlotsPerLevel>                  CellSlotOverridesPerLevel;                                // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPermanentCellsPerLevel>             PermanentCellsPerLevel;                                   // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.DamageTableBonuses
// 0x0078 (0x0080 - 0x0008)
struct FDamageTableBonuses : public FTableRowBase
{
	EPhysicalType                                      OverridePhysicalType;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EElementType                                       OverrideElementalType;                                    // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                ExplicitPartBreak;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExplicitStagger;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExplicitExpose;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DamageTrue;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PhysicalDamage;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlameDamage;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrostDamage;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShockDamage;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RadiantDamage;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UmbralDamage;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RawElementalDamage;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Meter;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    SelfGameplayEffectsToApplyOnHit;                          // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    SelfBuffsToApplyOnHit;                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    TargetGameplayEffectsToApplyOnHit;                        // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    TargetBuffsToApplyOnHit;                                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.LazyEvalStatistic
// 0x0014
struct FLazyEvalStatistic
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastUpdateTime;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonGuildMember
// 0x0030
struct FArchonGuildMember
{
	class FString                                      PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      CharacterId;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	EArchonGuildRank                                   Rank;                                                     // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
};

// ScriptStruct Archon.ArchonGuildInvite
// 0x0040
struct FArchonGuildInvite
{
	class FString                                      GuildId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      CharacterId;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      GuildName;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      CharacterName;                                            // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct Archon.NumberOfUsesSelectionWeight
// 0x0008
struct FNumberOfUsesSelectionWeight
{
	int                                                NumberOfUses;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Archon.PerUserNumberOfUses
// 0x0010
struct FPerUserNumberOfUses
{
	int                                                NumUses;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UArchonInteractionUserComponent*             InteractionUser;                                          // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Archon.ReplicatedItem
// 0x000C
struct FReplicatedItem
{
	uint32_t                                           CatalogIdCrc;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Quantity;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           InstanceId;                                               // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Archon.VirtualCurrency
// 0x0018
struct FVirtualCurrency
{
	class FString                                      Currency;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Amount;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.CraftingPayload
// 0x0010
struct FCraftingPayload
{
	TArray<class FString>                              ItemInstanceIds;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.CatalogRecipeComponent
// 0x0018
struct FCatalogRecipeComponent
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.RemovedItemNotification
// 0x0018
struct FRemovedItemNotification
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RemovedAmount;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.GrantedItemNotification
// 0x0038
struct FGrantedItemNotification
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                GrantedAmount;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGiveItemSource>                     Sources;                                                  // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ReplacedItemId;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ReplicatedInventoryItemCustomData
// 0x0018
struct FReplicatedInventoryItemCustomData
{
	uint16_t                                           InstanceId;                                               // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class FString                                      CustomData;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.ArchonQuickSlot
// 0x0050
struct FArchonQuickSlot
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       AllowedTagFilter;                                         // 0x0010(0x0020) (Edit, DisableEditOnInstance)
	int                                                CurrentCount;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	class UArchonQuickItem*                            Item;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              RechargeTime;                                             // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RechargeDuration;                                         // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0048(0x0004) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.EquippedCellData
// 0x0018
struct FEquippedCellData
{
	class FString                                      CellID;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArmourSetKeywordChance
// 0x0020
struct FArmourSetKeywordChance
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FArmourSetKeyword                           ArmorSet;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Archon.LanternResistanceTableData
// 0x0090 (0x00A8 - 0x0018)
struct FLanternResistanceTableData : public FArmourSetItemResistanceTableData
{
	float                                              ChargePerDamageDone;                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanChargeWhileDischarging;                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FFloatInterval                              AbilityStrengthRange;                                     // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FFloatInterval                              ChargeRateRange;                                          // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FFloatInterval                              GlobalResistanceRange;                                    // 0x0030(0x0008) (Edit, BlueprintVisible)
	float                                              GlobalResistancePerLevel;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              FlameResistanceRange;                                     // 0x003C(0x0008) (Edit, BlueprintVisible)
	float                                              FlameResistancePerLevel;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              FrostResistanceRange;                                     // 0x0048(0x0008) (Edit, BlueprintVisible)
	float                                              FrostResistancePerLevel;                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ShockResistanceRange;                                     // 0x0054(0x0008) (Edit, BlueprintVisible)
	float                                              ShockResistancePerLevel;                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              RadiantResistanceRange;                                   // 0x0060(0x0008) (Edit, BlueprintVisible)
	float                                              RadiantResistancePerLevel;                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              UmbralResistanceRange;                                    // 0x006C(0x0008) (Edit, BlueprintVisible)
	float                                              UmbralResistancePerLevel;                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FArmourSetKeyword                           PrimaryKeyword;                                           // 0x0078(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              SecondKeywordChance;                                      // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FArmourSetKeywordChance>             PossibleKeywords;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.LoadoutQuickItemSlotMapping
// 0x0002
struct FLoadoutQuickItemSlotMapping
{
	EQuickItemSlot                                     SlotType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	ELoadoutQuickItemSlot                              SlotIndex;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.LoadoutQuickItem
// 0x0048
struct FLoadoutQuickItem
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UArchonInventoryItem_QuickItem*              InventoryItem;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AmountRemaining;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0020(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.InventoryLoadout
// 0x0080
struct FInventoryLoadout
{
	class UArchonInventoryItem_Weapon*                 Weapon;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 HelmetArmour;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 ChestArmour;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 LegsArmour;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 ArmsArmour;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Lantern*                Lantern;                                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Banner*                 Banner;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Flask*                  Flask;                                                    // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FLoadoutQuickItem>                   QuickItems;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UArchonInventoryItem_Emote*                  IntroEmote;                                               // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Emote*                  EndEmote;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UArchonInventoryItem_Emote*>          ManualEmotes;                                             // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UArchonInventoryItem_Title*                  Title;                                                    // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicated;                                           // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDefault;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	int                                                DataVersion;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonLobbyId
// 0x0010
struct FArchonLobbyId
{
	class FString                                      UniqueID;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct Archon.ArchonLobbyPlayer
// 0x0020
struct FArchonLobbyPlayer
{
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	int                                                UniquePlayerId;                                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsReady;                                                  // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobby
// 0x00E0
struct FArchonLobby
{
	struct FArchonLobbyId                              LobbyId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<struct FArchonLobbyPlayer>                  PartyMembers;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // 0x0038(0x00A0) (BlueprintVisible, BlueprintReadOnly, Transient)
	bool                                               bIsMatchmaking;                                           // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobbyStartGameInfo
// 0x0028
struct FArchonLobbyStartGameInfo
{
	class FString                                      PFLobbyID;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FArchonLobbyId                              LobbyId;                                                  // 0x0010(0x0010)
	bool                                               bIsMatching;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobbyItemData
// 0x0050
struct FArchonLobbyItemData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TransmogId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      PrimaryDyeName;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      SecondaryDyeName;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CurrentLevel;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobbyQuickItemData
// 0x0020
struct FArchonLobbyQuickItemData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                SlotIndex;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ArchonLobbyPaperDollData
// 0x0278
struct FArchonLobbyPaperDollData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EArchonBodyType                                    BodyType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EArchonGender                                      GenderId;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              GlobalPower;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GlobalResistance;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FArchonLobbyItemData                        WeaponItem;                                               // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FArchonLobbyItemData                        HelmetItem;                                               // 0x0078(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FArchonLobbyItemData                        ChestItem;                                                // 0x00C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FArchonLobbyItemData                        ArmsItem;                                                 // 0x0118(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FArchonLobbyItemData                        LegsItem;                                                 // 0x0168(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      LanternItemId;                                            // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FArchonLobbyItemData                        LanternItem;                                              // 0x01C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      TitleId;                                                  // 0x0218(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonLobbyQuickItemData>           QuickItems;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FArchonAppearanceData                       AppearanceData;                                           // 0x0238(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ArchonLoginMessageAction
// 0x0020
struct FArchonLoginMessageAction
{
	class FString                                      Label;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Destination;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ArchonLoginMessage
// 0x0058
struct FArchonLoginMessage
{
	class FString                                      Title;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Body;                                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Image;                                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bShowAction;                                              // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FArchonLoginMessageAction                   Action;                                                   // 0x0038(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ArchonLoginNews
// 0x0048
struct FArchonLoginNews
{
	class FString                                      UniqueID;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Title;                                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Background;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonLoginMessage>                 Messages;                                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bHasViewed;                                               // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonPartyId
// 0x0010
struct FArchonPartyId
{
	class FString                                      UniqueID;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct Archon.ArchonPartyMember
// 0x0028
struct FArchonPartyMember
{
	struct FUniqueNetIdRepl                            UniqueID;                                                 // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	class FString                                      PlayerName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

// ScriptStruct Archon.ArchonParty
// 0x0060
struct FArchonParty
{
	struct FArchonPartyId                              PartyId;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<struct FArchonPartyMember>                  PartyMembers;                                             // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	int                                                MaxPlayers;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EArchonPartyState                                  PartyState;                                               // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class FString                                      MatchmakingCandidateId;                                   // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               bHasPartyFinderEntry;                                     // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FDateTime                                   LastPartyFinderUpdate;                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, Transient)
};

// ScriptStruct Archon.ArchonPartyInvite
// 0x0068
struct FArchonPartyInvite
{
	struct FUniqueNetIdRepl                            Receiver;                                                 // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FUniqueNetIdRepl                            Sender;                                                   // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FArchonPartyId                              PartyId;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	class FString                                      ReceiverName;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	class FString                                      SenderName;                                               // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	bool                                               bIsPending;                                               // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonPartyFinderEntry
// 0x0058
struct FArchonPartyFinderEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class FString                                      PartyId;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Description;                                              // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              HuntIds;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              HuntTags;                                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumMembers;                                               // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            LastUpdatedTime;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.StatGroupAndName
// 0x0010
struct FStatGroupAndName
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       StatName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ReplWeaponClass
// 0x0028
struct FReplWeaponClass
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // 0x0008(0x0010)
	struct FName                                       TransmogId;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bReplicated;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceEquip;                                              // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.ReplArmourClass
// 0x0028
struct FReplArmourClass
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // 0x0008(0x0010)
	struct FName                                       TransmogId;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bReplicated;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceEquip;                                              // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.ReplLanternClass
// 0x0028
struct FReplLanternClass
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // 0x0008(0x0010)
	struct FName                                       TransmogId;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bReplicated;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceEquip;                                              // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.ComboTelemetryTracker
// 0x000C
struct FComboTelemetryTracker
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLoot
// 0x0058
struct FArchonLoot
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              Tags;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0030(0x0020) (Edit, BlueprintVisible)
	int                                                Count;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               RarityLevel;                                              // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AwardImmediately;                                         // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Archon.ReplBoosts
// 0x0003
struct FReplBoosts
{
	bool                                               bIsPatron;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsChampion;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStyleHunter;                                           // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.SpeakerDetail
// 0x0028
struct FSpeakerDetail
{
	class FString                                      Token;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       DisplayText;                                              // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.JsonBPValue
// 0x0010
struct FJsonBPValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Archon.ArchonTraversalInfo
// 0x0018
struct FArchonTraversalInfo
{
	float                                              MaxHeight;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinScaleRange;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxScaleRange;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.TrajectoryWarpWindowInfo
// 0x0018
struct FTrajectoryWarpWindowInfo
{
	int                                                ActiveRefCount;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTrajectory*                                 Trajectory;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.WeaponData
// 0x0008
struct FWeaponData
{
	class UAnimMontage*                                EquipAnim;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Archon.WeaponComboData
// 0x0048
struct FWeaponComboData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonAttackActionKey                             PrimaryKey;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonAttackActionContext                         Context;                                                  // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UClass*                                      EntranceCondition;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlyingMove;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCombatPlayrateAttributeEnabled;                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              PressAndHoldTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PressAndHoldTimeModifierAttribute;                        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct Archon.DamageTableModifier
// 0x0010
struct FDamageTableModifier
{
	struct FName                                       DamageTableRow;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.DamageTableRemap
// 0x0010
struct FDamageTableRemap
{
	struct FName                                       DamageTableRow;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RemapDamageTableRow;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.TagAndDamageRowBonus
// 0x00C8
struct FTagAndDamageRowBonus
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0018(0x0020) (Edit, BlueprintVisible)
	struct FDamageTableBonuses                         Bonuses;                                                  // 0x0038(0x0080) (Edit, BlueprintVisible)
	struct FGuid                                       INTERNAL_ModifierID;                                      // 0x00B8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Archon.WeaponPowerTableData
// 0x0160 (0x0168 - 0x0008)
struct FWeaponPowerTableData : public FTableRowBase
{
	float                                              GlobalPower;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalPowerPerLevel;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPhysicalType                                      PhysicalType;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EElementType                                       ElementalType;                                            // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              ElementalPower;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElementalPowerPerLevel;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlamePower;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlamePowerPerLevel;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostPower;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostPowerPerLevel;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockPower;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockPowerPerLevel;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantPower;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantPowerPerLevel;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralPower;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralPowerPerLevel;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalPower;                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalPowerPerLevel;                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCostScale;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaRegenScale;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreezeAmountPerHit;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        Tags;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Abilities;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              SpecialAbilities;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDamageTableModifier>                DamageTableModifiers;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FDamageTableRemap>                   DamageTableRemappings;                                    // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTagAndDamageRowBonus>               DamageTableTaggedRowBonuses;                              // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonAttribute>                    CustomAttributes;                                         // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              EBlade_ChargeGainPerXStrike;                              // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeGainPerYStrike;                              // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeDecayRate;                                   // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeLowDecayDelay;                               // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeHighDecayDelay;                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeMax;                                         // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_SuperDecayRate;                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_ChargeGainPerEmberStrike;                          // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_EmberChargeSpecialAttackCost;                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_SuperModeAttackRate;                               // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_SuperWeaponScaleFactor;                            // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EBlade_BaseWeaponScaleFactor;                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IHammer_MaxNumberOfClips;                                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_ReloadSpeedModifier;                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_ReloadSuccessWindowPercent;                       // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_ReloadSuccessDamageModifier;                      // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_ReloadFailedDamageModifier;                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_PrimedShellDamageFlatBonus;                       // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IHammer_PrimedShellDamageMultiplier;                      // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Axe_MaxDeterminationLevel;                                // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Axe_ChargePerStrikeScale;                                 // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Axe_DeterminationDurationScale;                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CBlade_MaxAmmoCount;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CBlade_MeterGainScale;                                    // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MeterGainScale;                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MSpear_MaxAmmoCount;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_ConeAccuracy;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_ErraticMovement;                                   // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MeterDecay;                                        // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MeterLostOnHit;                                    // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_AmmoQualityThreshold0;                             // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_AmmoQualityThreshold1;                             // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_AmmoQualityThreshold2;                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_AmmoQualityThreshold3;                             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_AmmoQualityThreshold4;                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MinPhysicalDamageMultiplier;                       // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MaxPhysicalDamageMultiplier;                       // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_SidestepDistanceScale;                             // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MeterGainPerXAttack;                               // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MSpear_MeterGainPerYAttack;                               // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.BPChatClientMessage
// 0x0010
struct FBPChatClientMessage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Archon.ArchonBroadcastMessage
// 0x0038
struct FArchonBroadcastMessage
{
	struct FText                                       Subject;                                                  // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Message;                                                  // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.CraftingComponent
// 0x0018
struct FCraftingComponent
{
	class FString                                      ItemID;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.DamagePayload
// 0x00C0
struct FDamagePayload
{
	struct FName                                       DamageTypeName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // 0x0008(0x0090) (IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0098(0x000C) (IsPlainOldData)
	struct FGuid                                       AttackID;                                                 // 0x00A4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UDamageNotifyState*                          Notify;                                                   // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.Hunt_AtmosphereInfo
// 0x0038
struct FHunt_AtmosphereInfo
{
	class FString                                      AtmosphereName;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            AtmosphereAsset;                                          // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Weighting;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.Hunt_BehemothInfo
// 0x0038
struct FHunt_BehemothInfo
{
	class FString                                      BehemothName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UClass>                            BehemothAsset;                                            // 0x0010(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PowerOverride;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weighting;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.Hunt_MapInfo
// 0x0028
struct FHunt_MapInfo
{
	class FString                                      MapName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      MapAssetName;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EHuntBiome                                         Biome;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Weighting;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.Hunt_GatherableDistributionWeight
// 0x0018
struct FHunt_GatherableDistributionWeight
{
	struct FDataTableRowHandle                         GatherableDataRow;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.Hunt_QuestUnlockInfo
// 0x0018
struct FHunt_QuestUnlockInfo
{
	struct FName                                       QuestID;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<EQuestStatus>                               QuestStatusArray;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.Hunt_UnlockInfo
// 0x0040
struct FHunt_UnlockInfo
{
	TArray<struct FHunt_QuestUnlockInfo>               Quests;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       ItemID;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       HideItemID;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FProgressTrackRank>                  RequiredRanks;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MinimumUnlocked;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaximumUnlocked;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.MatchmakerHuntTableData
// 0x0178 (0x0180 - 0x0008)
struct FMatchmakerHuntTableData : public FTableRowBase
{
	struct FDataTableRowHandle                         Region;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagContainer                       HuntTags;                                                 // 0x0018(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FHunt_BehemothInfo                          SpecificBehemoth;                                         // 0x0038(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UHunt_BehemothList*>                  AdditionalBehemoths;                                      // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FHunt_BehemothInfo>                  AdditionalSpecificBehemoths;                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDataTableRowHandle                         MapMetaData;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FHunt_MapInfo                               SpecificMap;                                              // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UHunt_AtmosphereList*                        AtmosphereList;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHunt_AtmosphereInfo                        SpecificAtmosphere;                                       // 0x00D0(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UHunt_Modifier*                              SpecificModifier;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Modifiers;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGatherableTier                                    GatherableTier;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	TArray<struct FHunt_GatherableDistributionWeight>  GatherableDistributions;                                  // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FHunt_UnlockInfo                            Unlock;                                                   // 0x0140(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.ProgressTrackEvent
// 0x0018
struct FProgressTrackEvent
{
	class FString                                      Track;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.PlayerHuntTableData
// 0x0120 (0x0128 - 0x0008)
struct FPlayerHuntTableData : public FTableRowBase
{
	struct FText                                       HuntName;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       HuntDescription;                                          // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         Region;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDataTableRowHandle>                 MatchmakerHuntIDs;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGameplayTagContainer                       HuntTags;                                                 // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       HuntSuccessReward;                                        // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FirstCompletionSuccessReward;                             // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetedHuntSuccessReward;                                // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FProgressTrackEvent>                 HuntSuccessProgress;                                      // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FProgressTrackEvent>                 FirstCompletionSuccessProgress;                           // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       HuntFailureReward;                                        // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetedHuntFailureReward;                                // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FProgressTrackEvent>                 HuntFailureProgress;                                      // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HuntDangerModerate;                                       // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HuntDangerHigh;                                           // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HuntDangerExtreme;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HuntDifficulty;                                           // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HuntComplexity;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisibleWhileLocked;                                     // 0x00E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FHunt_UnlockInfo                            Unlock;                                                   // 0x00E8(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.ComboInputBufferDisable
// 0x0018
struct FComboInputBufferDisable
{
	struct FComboInputKey                              InputKey;                                                 // 0x0000(0x0003) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UClass*                                      TransitionCondition;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MatchTransitionCondition;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.JsonBPObjectField
// 0x0020
struct FJsonBPObjectField
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FJsonBPValue                                Value;                                                    // 0x0010(0x0010)
};

// ScriptStruct Archon.ModifyPartCollisionInfo
// 0x0018
struct FModifyPartCollisionInfo
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.GameplayCustomData
// 0x0078
struct FGameplayCustomData
{
	class FString                                      CustomDataID;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                IntValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      StringValue;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       NameValue;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           GameplayTags;                                             // 0x0030(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.GameplayObjective
// 0x00B8
struct FGameplayObjective
{
	class UClass*                                      ObjectiveDataClass;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FGameplayTagQuery>                   BehemothList;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               AnyBehemoth;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BehemothInterruptsOnly;                                   // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        RequiredWeapon;                                           // 0x0022(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWeaponElementType;                                // 0x0023(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EElementType                                       WeaponElementType;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FStringAssetReference                       NPC;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ItemID;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ItemTags;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldConsumeItems;                                       // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EItemDescriptionFormat                             ItemDescriptionFormat;                                    // 0x0052(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	struct FName                                       ProgressTrack;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProgressRank;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FGameplayTagQuery>                   HuntList;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      HuntId;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               AnyHunt;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHuntTypeRequirement                               HuntType;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	TArray<struct FGameplayCustomData>                 CustomData;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       CustomDescription;                                        // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ObjectiveCustomData
// 0x0020
struct FObjectiveCustomData
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabStore
// 0x0018
struct FPlayFabStore
{
	class FString                                      StoreID;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  StoreContentDataTable;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Archon.PlayFabVirtualCurrency
// 0x0038
struct FPlayFabVirtualCurrency
{
	class FString                                      CurrencyCode;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, DisableEditOnInstance)
	int                                                InitialDeposit;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RechargeRate;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RechargeMax;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ProgressTrackReward
// 0x0020
struct FProgressTrackReward
{
	class FString                                      Track;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Increase;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PreviousAmount;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumRollOvers;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.QuestEvent
// 0x0010
struct FQuestEvent
{
	EQuestEventTrigger                                 Trigger;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EQuestStatus                                       RequiredStatus;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UQuestEventData*                             Event;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Archon.GameplayReward
// 0x0038
struct FGameplayReward
{
	class UClass*                                      RewardClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      ProgressTrack;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Amount;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FGameplayCustomData>                 CustomData;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ScheduledItemReplicatedInfo
// 0x0018
struct FScheduledItemReplicatedInfo
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	int64_t                                            EndTime;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ShooterMenuItemStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FShooterMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 LeftArrowImage;                                           // 0x0098(0x0090) (Edit)
	struct FSlateBrush                                 RightArrowImage;                                          // 0x0128(0x0090) (Edit)
};

// ScriptStruct Archon.ShooterMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FShooterMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                           // 0x0008(0x0018) (Edit)
	struct FSlateSound                                 ExitGameSound;                                            // 0x0020(0x0018) (Edit)
};

// ScriptStruct Archon.ShooterMenuStyle
// 0x0210 (0x0218 - 0x0008)
struct FShooterMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                    // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 LeftBackgroundBrush;                                      // 0x0098(0x0090) (Edit)
	struct FSlateBrush                                 RightBackgroundBrush;                                     // 0x0128(0x0090) (Edit)
	struct FSlateSound                                 MenuEnterSound;                                           // 0x01B8(0x0018) (Edit)
	struct FSlateSound                                 MenuBackSound;                                            // 0x01D0(0x0018) (Edit)
	struct FSlateSound                                 OptionChangeSound;                                        // 0x01E8(0x0018) (Edit)
	struct FSlateSound                                 MenuItemChangeSound;                                      // 0x0200(0x0018) (Edit)
};

// ScriptStruct Archon.StructBox
// 0x0010
struct FStructBox
{
	class UScriptStruct*                               ScriptStruct;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.UnlockItem
// 0x0010
struct FUnlockItem
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.GameplayQuestStatusInfo
// 0x0010
struct FGameplayQuestStatusInfo
{
	struct FName                                       QuestID;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EQuestStatus                                       RequiredStatus;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.GameplayUnlockCondition
// 0x0068
struct FGameplayUnlockCondition
{
	class UClass*                                      UnlockConditionClass;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FUnlockItem>                         Items;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EItemRequirement                                   ItemRequirement;                                          // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       ProgressTrack;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProgressRank;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FGameplayQuestStatusInfo>            Quests;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGameplayQuestStatusRequirement                    QuestRequirement;                                         // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class FString                                      Entitlement;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameplayCustomData>                 CustomData;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.UnlockItems
// 0x0018
struct FUnlockItems
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPlayFabCatalogDataTable*                    Catalog;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.CraftedUnlockItem
// 0x0010
struct FCraftedUnlockItem
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPlayFabCatalogDataTable*                    Catalog;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.UnlockRank
// 0x0010
struct FUnlockRank
{
	struct FName                                       Track;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.QuestStatusInfo
// 0x0010
struct FQuestStatusInfo
{
	struct FName                                       QuestID;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EQuestStatus                                       RequiredStatus;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.FaceMorphTranslation
// 0x0038 (0x0040 - 0x0008)
struct FFaceMorphTranslation : public FTableRowBase
{
	struct FText                                       Translation;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FName                                       NegativeRangeMorphName;                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxNegativeRange;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       PositiveRangeMorphName;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPositiveRange;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.FaceMorphTranslationInformation
// 0x0010 (0x0050 - 0x0040)
struct FFaceMorphTranslationInformation : public FFaceMorphTranslation
{
	struct FName                                       MorphName;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TranslationFound;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.DyeRemainingUses
// 0x0020
struct FDyeRemainingUses
{
	struct FName                                       DyeRow;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RemainingUses;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.TitleNewsResultItem
// 0x0038
struct FTitleNewsResultItem
{
	struct FDateTime                                   Timestamp;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      NewsId;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Title;                                                    // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Body;                                                     // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.TitleNewsResult
// 0x0010
struct FTitleNewsResult
{
	TArray<struct FTitleNewsResultItem>                News;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.AetherBoostTableData
// 0x0020 (0x0028 - 0x0008)
struct FAetherBoostTableData : public FTableRowBase
{
	int                                                NumberOfBoosts;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Poor;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Common;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Uncommon;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rare;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Epic;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Legendary;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Artifact;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.AnimNode_ArchonSaveBoneTransform
// 0x0058 (0x0088 - 0x0030)
struct FAnimNode_ArchonSaveBoneTransform : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PoseName;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      Bones;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct Archon.PerBoneBlendEntry
// 0x0088
struct FPerBoneBlendEntry
{
	TArray<struct FBoneReference>                      Bones;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FRuntimeFloatCurve                          BlendCurve;                                               // 0x0010(0x0078) (Edit)
};

// ScriptStruct Archon.AnimNode_PerBoneBlend
// 0x00C0 (0x00F0 - 0x0030)
struct FAnimNode_PerBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   OutgoingPose;                                             // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   IncomingPose;                                             // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FRuntimeFloatCurve                          DefaultBlendCurve;                                        // 0x0060(0x0078) (Edit)
	TArray<struct FPerBoneBlendEntry>                  BlendDefinitions;                                         // 0x00D8(0x0010) (Edit, ZeroConstructor)
	float                                              T;                                                        // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.AnimNode_Replay
// 0x00C0 (0x00F0 - 0x0030)
struct FAnimNode_Replay : public FAnimNode_Base
{
	struct FPoseLink                                   Input;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x0048(0x0018) (Edit, BlueprintVisible)
	bool                                               bEnableReplay;                                            // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateReplayFrames;                                 // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              ReplayTime;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0068(0x0088) MISSED OFFSET
};

// ScriptStruct Archon.AnimNode_SpaceWarp
// 0x0070 (0x00E0 - 0x0070)
struct FAnimNode_SpaceWarp : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnableDebugDraw;                                         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FBoneReference                              PelvisBone;                                               // 0x0078(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftFootBone;                                             // 0x0090(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightFootBone;                                            // 0x00A8(0x0018) (Edit, BlueprintVisible)
	float                                              AllowedPelvisOffset;                                      // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHipRise;                                            // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              SpaceScaling;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ManualSpaceWarpingDir;                                    // 0x00CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.ArchonAnimInstanceProxy
// 0x0050 (0x0520 - 0x04D0)
struct FArchonAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x04D0(0x0050) MISSED OFFSET
};

// ScriptStruct Archon.ArchonSavedPose
// 0x00E8
struct FArchonSavedPose
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct Archon.ArmourSetTableRow
// 0x0040 (0x0048 - 0x0008)
struct FArmourSetTableRow : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FName>                               ItemsID;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ArmourDyeInfoTableRow
// 0x0040 (0x0048 - 0x0008)
struct FArmourDyeInfoTableRow : public FTableRowBase
{
	int                                                PrimaryRow;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PreviewColor;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        PreviewTexture;                                           // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EArmourDyeSurfaceType                              Surfacing;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisibleToUser;                                            // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.BehemothInfo
// 0x0020 (0x0028 - 0x0008)
struct FBehemothInfo : public FTableRowBase
{
	TAssetPtr<class UClass>                            BehemothAsset;                                            // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ActiveTagListeners
// 0x0058
struct FActiveTagListeners
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Archon.ActiveBuffStack
// 0x0010
struct FActiveBuffStack
{
	TArray<class AArchonBuff*>                         Buffs;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.ArmourSetBonuses
// 0x0018
struct FArmourSetBonuses
{
	int                                                MinimumCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Abilities;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ArmourSetTableData
// 0x0060 (0x0068 - 0x0008)
struct FArmourSetTableData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FArmourSetBonuses>                   SetBonuses;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ArmourSetCounter
// 0x0078
struct FArmourSetCounter
{
	struct FArmourSetTableData                         ArmorSet;                                                 // 0x0000(0x0068)
	struct FName                                       ArmorSetName;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.PressAndHold
// 0x0008
struct FPressAndHold
{
	EArchonAttackActionKeyModifier                     KeyModifier;                                              // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EArchonAttackActionContext                         Context;                                                  // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              StartTime;                                                // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Archon.DisabledInputBufferWindow
// 0x0020
struct FDisabledInputBufferWindow
{
	struct FComboInputBufferDisable                    DisableData;                                              // 0x0000(0x0018) (Transient)
	bool                                               bIsDisabled;                                              // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.CreditsName
// 0x0010 (0x0018 - 0x0008)
struct FCreditsName : public FTableRowBase
{
	class FString                                      CreditName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ArchonDamageEvent
// 0x0028 (0x0038 - 0x0010)
struct FArchonDamageEvent : public FDamageEvent
{
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // 0x0010(0x0020) (Edit, BlueprintVisible)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Archon.ArchonAbilityDamageEvent
// 0x00E0 (0x0118 - 0x0038)
struct FArchonAbilityDamageEvent : public FArchonDamageEvent
{
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // 0x0038(0x00E0) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.ArchonRadialDamageEvent
// 0x0020 (0x0060 - 0x0040)
struct FArchonRadialDamageEvent : public FRadialDamageEvent
{
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // 0x0040(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.ArchonPointDamageEvent
// 0x0020 (0x00D0 - 0x00B0)
struct FArchonPointDamageEvent : public FPointDamageEvent
{
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // 0x00B0(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.FeatureFlagOverride
// 0x0010
struct FFeatureFlagOverride
{
	class UClass*                                      FeatureFlag;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Archon.ArchonLobbyDetailedMissionInfo
// 0x0078 (0x0118 - 0x00A0)
struct FArchonLobbyDetailedMissionInfo : public FArchonLobbyMissionInfo
{
	struct FText                                       MissionName;                                              // 0x00A0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MissionDescription;                                       // 0x00B8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Objectives;                                               // 0x00D0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SubObjectives;                                            // 0x00E8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Conditions;                                               // 0x0100(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.NameLookupResult
// 0x0018
struct FNameLookupResult
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Archon.DamageExecutionTelemetryData
// 0x0070
struct FDamageExecutionTelemetryData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Archon.DeferredArchonTraversalInfo
// 0x0098
struct FDeferredArchonTraversalInfo
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct Archon.TranslateWarpWindowInfo
// 0x0038
struct FTranslateWarpWindowInfo
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ActiveRefCount;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialTranslation;                                       // 0x0008(0x000C) (IsPlainOldData)
	struct FVector                                     EndTranslation;                                           // 0x0014(0x000C) (IsPlainOldData)
	struct FVector                                     CurrentTranslation;                                       // 0x0020(0x000C) (IsPlainOldData)
	bool                                               bSpeedAutoScale;                                          // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              EndTime;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.TurnWarpWindowInfo
// 0x0058
struct FTurnWarpWindowInfo
{
	float                                              MaxHalfAngle;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRate;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ActiveRefCount;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InitialRotation;                                          // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    EndRotation;                                              // 0x0018(0x000C) (IsPlainOldData)
	struct FRotator                                    CurrentRotation;                                          // 0x0024(0x000C) (IsPlainOldData)
	struct FName                                       PivotSocket;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NotifyIndex;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationRate;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRotationRate;                                        // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRotationFromFullDuration;                            // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.CellEffects
// 0x0030
struct FCellEffects
{
	TArray<TAssetPtr<class UClass>>                    GameplayEffects;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    Abilities;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    Buffs;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.CellRankedEffectLevel
// 0x000C
struct FCellRankedEffectLevel
{
	int                                                RankRequired;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrantedMagnitude;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEffectIsRemovedAtThisLevel;                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Archon.CellRankedEffects
// 0x0020
struct FCellRankedEffects
{
	struct FDataTableRowHandle                         GrantedCellEffect;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FCellRankedEffectLevel>              MagnitudesGrantedPerLevel;                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.CellEffectTableData
// 0x0060 (0x0068 - 0x0008)
struct FCellEffectTableData : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	ECellEffectType                                    CellEffectType;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FCellEffects                                MagnitudeEffects;                                         // 0x0028(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FCellRankedEffects>                  UniqueRankedEffects;                                      // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.CellUnlockPatternTableData
// 0x0010 (0x0018 - 0x0008)
struct FCellUnlockPatternTableData : public FTableRowBase
{
	TArray<struct FCellSlotsPerLevel>                  CellSlotsPerLevel;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Archon.ChallengeSlot
// 0x0030
struct FChallengeSlot
{
	struct FName                                       SlotID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsGoalSlot;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UDataTable*                                  ChallengeTable;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DoChallengesExpire;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EChallengeSlotDuration                             Duration;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<struct FGameplayUnlockCondition>            UnlockConditions;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.ChallengeTableData
// 0x0070 (0x0078 - 0x0008)
struct FChallengeTableData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               Repeatable;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FGameplayUnlockCondition>            UnlockConditions;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameplayObjective>                  Objectives;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameplayReward>                     Rewards;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0058(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.DamageHistory
// 0x0020
struct FDamageHistory
{
	struct FName                                       DamageTypeName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDamageNotifyState*                          Notify;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageOriginator;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Damager;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ActiveDamagerCollection
// 0x0038
struct FActiveDamagerCollection
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UDamageNotifyState*                          Notify;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Archon.ActiveDamager
// 0x0050
struct FActiveDamager
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Archon.GameObjectNameTableData
// 0x0018 (0x0020 - 0x0008)
struct FGameObjectNameTableData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.HitReactionDirectionTableEntry
// 0x0010
struct FHitReactionDirectionTableEntry
{
	EVictimRelativeHitDirection                        AttackerDirection;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVictimRelativeHitDirection                        ImpactDirection;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UArchonGameplayOperation*                    Operation;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Archon.HitReactionTableEntry
// 0x0038
struct FHitReactionTableEntry
{
	struct FGameplayTag                                IntensityTag;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTagContainer                       ModifierTags;                                             // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FHitReactionDirectionTableEntry             DirectionEntry;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Archon.GatherableTypeCount
// 0x0018
struct FGatherableTypeCount
{
	struct FDataTableRowHandle                         Gatherable;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                NumNodesToSpawn;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.HuntGatherableTableData
// 0x0010 (0x0018 - 0x0008)
struct FHuntGatherableTableData : public FTableRowBase
{
	TArray<struct FGatherableTypeCount>                Gatherables;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.GatherableData
// 0x0028
struct FGatherableData
{
	bool                                               OnlySpecificBiome;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHuntBiome                                         SpecificBiome;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    Blueprints;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class FString>                              DropTablesPerTier;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.GatherableTypeTableData
// 0x0018 (0x0020 - 0x0008)
struct FGatherableTypeTableData : public FTableRowBase
{
	EGatherableCategory                                Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGatherableRarity                                  Rarity;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FGatherableData>                     Gatherables;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.HuntObjectTableData
// 0x0048 (0x0050 - 0x0008)
struct FHuntObjectTableData : public FTableRowBase
{
	struct FName                                       ObjectName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               MapTags;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AtmosphereTags;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               BehemothTags;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.Hunt_Region
// 0x0078 (0x0080 - 0x0008)
struct FHunt_Region : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UHunt_BehemothList*                          TargetedBehemothList;                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MatchmakingId;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenId;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTokensRequired;                                        // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FText                                       TargetedHuntDescription;                                  // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<TAssetPtr<class UClass>>                    BehemothPresets;                                          // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.CustomHunt
// 0x0028
struct FCustomHunt
{
	struct FName                                       BehemothId;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RegionId;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MatchmakingId;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      TokenId;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.ItemBoostTableData
// 0x0030 (0x0038 - 0x0008)
struct FItemBoostTableData : public FTableRowBase
{
	float                                              IncreaseAmount;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Champion_And_0_Patrons;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Champion_And_1_Patron;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Champion_And_2_Patrons;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Champion_And_3_Patrons;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Patron_And_0_Other_Patrons;                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Patron_And_1_Other_Patron;                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Patron_And_2_Other_Patrons;                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Patron_And_3_Other_Patrons;                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                None_And_1_Other_Patron;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                None_And_2_Other_Patrons;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                None_And_3_Other_Patrons;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.MarkerGroupRule
// 0x0008 (0x0010 - 0x0008)
struct FMarkerGroupRule : public FTableRowBase
{
	int                                                DisplayLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ShapeCollisionData
// 0x0028
struct FShapeCollisionData
{
	struct FCollisionResponseContainer                 CollisionResponses;                                       // 0x0000(0x0020)
	struct FName                                       CollisionProfileName;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ConsumeItemResult
// 0x0018
struct FConsumeItemResult
{
	class FString                                      ItemInstanceId;                                           // 0x0000(0x0010) (ZeroConstructor)
	int                                                RemainingUses;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.InventoryItemInstance
// 0x0068
struct FInventoryItemInstance
{
	class UDataTable*                                  Catalog;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ItemClass;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      InstanceData;                                             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FDateTime                                   PurchaseDate;                                             // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly)
	int                                                UnitPrice;                                                // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RemainingUses;                                            // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EEconomyTransactionType                            Direction;                                                // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrency;                                               // 0x0065(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
};

// ScriptStruct Archon.CraftItemResult
// 0x0020
struct FCraftItemResult
{
	TArray<struct FConsumeItemResult>                  ConsumedItemInstances;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInventoryItemInstance>              GrantedItems;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.CraftItemComponent
// 0x0018
struct FCraftItemComponent
{
	class FString                                      ItemInstanceId;                                           // 0x0000(0x0010) (ZeroConstructor)
	int                                                Amount;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.CraftItemRequest
// 0x0030
struct FCraftItemRequest
{
	class FString                                      RecipeID;                                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCraftItemComponent>                 ConsumeItemInstances;                                     // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      ItemToGrant;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.EconomyTransactionInformation
// 0x0018
struct FEconomyTransactionInformation
{
	struct FDateTime                                   TransactionCompleted;                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FInventoryItemInstance>              Details;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.EconomyTransactionContext
// 0x00A0
struct FEconomyTransactionContext
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	struct FGuid                                       TransactionId;                                            // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class FString                                      Source;                                                   // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      MapName;                                                  // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDateTime                                   TransactionStarted;                                       // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PlayerLocation;                                           // 0x0088(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Archon.CreateSharedGroupResult
// 0x0020
struct FCreateSharedGroupResult
{
	class FString                                      GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              PlayerIds;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.CreateSharedGroupRequest
// 0x0010
struct FCreateSharedGroupRequest
{
	TArray<class FString>                              PlayerIds;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.AddSharedGroupMembersRequest
// 0x0020
struct FAddSharedGroupMembersRequest
{
	class FString                                      GroupId;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<class FString>                              PlayerIds;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Archon.TitleCatalogTableData
// 0x0020 (0x0210 - 0x01F0)
struct FTitleCatalogTableData : public FPlayFabCatalogItemTableData
{
	class FString                                      TitlePrefix;                                              // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      TitleSuffix;                                              // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.ContainerCatalogTableData
// 0x0068 (0x0258 - 0x01F0)
struct FContainerCatalogTableData : public FPlayFabCatalogItemTableData
{
	TAssetPtr<class UMaterialInstance>                 KindDecal;                                                // 0x01F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UMaterialInstance>                 RarityDecal;                                              // 0x0210(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        RewardIcon;                                               // 0x0230(0x0020) (Edit, BlueprintVisible)
	int                                                GuaranteedItemCount;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.BannerCustomizationCatalogTableData
// 0x00C0 (0x02B0 - 0x01F0)
struct FBannerCustomizationCatalogTableData : public FPlayFabCatalogItemTableData
{
	TAssetPtr<class USkeletalMesh>                     BannerMesh;                                               // 0x01F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UMaterialInstance>                 FabricMaterial;                                           // 0x0210(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UTexture>                          SigilTexture;                                             // 0x0230(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UParticleSystem>                   VFX;                                                      // 0x0250(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UAnimMontage>                      Animation;                                                // 0x0270(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class UAnimSequenceBase>                 PropAnimation;                                            // 0x0290(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Archon.BannerCatalogTableData
// 0x0000 (0x01F0 - 0x01F0)
struct FBannerCatalogTableData : public FPlayFabCatalogItemTableData
{

};

// ScriptStruct Archon.EmoteCatalogTableData
// 0x0028 (0x0218 - 0x01F0)
struct FEmoteCatalogTableData : public FPlayFabCatalogItemTableData
{
	TAssetPtr<class UAnimSequenceBase>                 AnimSequenceAsset;                                        // 0x01F0(0x0020) (Edit, BlueprintVisible)
	EEmoteType                                         EmoteType;                                                // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponRestriction;                                        // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0212(0x0006) MISSED OFFSET
};

// ScriptStruct Archon.PlayFabFlaskCatalogTableData
// 0x0010 (0x02F0 - 0x02E0)
struct FPlayFabFlaskCatalogTableData : public FPlayFabCraftedCatalogTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabQuickItemCatalogTableData
// 0x0010 (0x02F0 - 0x02E0)
struct FPlayFabQuickItemCatalogTableData : public FPlayFabCraftedCatalogTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabRecipeCatalogTableData
// 0x0020 (0x0210 - 0x01F0)
struct FPlayFabRecipeCatalogTableData : public FPlayFabCatalogItemTableData
{
	TAssetPtr<class UCraftingRecipeDataAsset>          RecipeAsset;                                              // 0x01F0(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabTransmogCatalogTableData
// 0x0008 (0x0318 - 0x0310)
struct FPlayFabTransmogCatalogTableData : public FPlayFabCellContainerCatalogTableData
{
	bool                                               bCanTransmog;                                             // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeTransmogTarget;                                     // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCosmeticOnly;                                            // 0x0312(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0313(0x0001) MISSED OFFSET
	int                                                TransmogCost;                                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.PlayFabLanternCatalogTableData
// 0x0040 (0x0358 - 0x0318)
struct FPlayFabLanternCatalogTableData : public FPlayFabTransmogCatalogTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x0318(0x0010) (Edit, BlueprintVisible)
	struct FText                                       DescriptionInstant;                                       // 0x0328(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DescriptionHold;                                          // 0x0340(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabArmorCatalogTableData
// 0x0018 (0x0330 - 0x0318)
struct FPlayFabArmorCatalogTableData : public FPlayFabTransmogCatalogTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x0318(0x0010) (Edit, BlueprintVisible)
	struct FName                                       ClassName;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.PlayFabWeaponCatalogTableData
// 0x0010 (0x0328 - 0x0318)
struct FPlayFabWeaponCatalogTableData : public FPlayFabTransmogCatalogTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x0318(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabGenericCatalogTableData
// 0x0010 (0x0200 - 0x01F0)
struct FPlayFabGenericCatalogTableData : public FPlayFabCatalogItemTableData
{
	struct FStringClassReference                       ItemClass;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Archon.PlayFabDropTableItem
// 0x0018
struct FPlayFabDropTableItem
{
	class FString                                      ResultItem;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.PlayFabDropTableTableData
// 0x0028 (0x0030 - 0x0008)
struct FPlayFabDropTableTableData : public FTableRowBase
{
	bool                                               IgnoreOwnedItems;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FPlayFabDropTableItem>               Items;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabDropTableItem>               DropTables;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.PlayFabStoresItemsTableData
// 0x0020 (0x0028 - 0x0008)
struct FPlayFabStoresItemsTableData : public FTableRowBase
{
	TArray<struct FPlayFabCatalogCurrency>             VirtualCurrencyPrices;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayFabCatalogCurrency>             RealCurrencyPrices;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Archon.ProgressionTrackTableData
// 0x0078 (0x0080 - 0x0008)
struct FProgressionTrackTableData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                CurrentVersion;                                           // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Repeats;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPrestigeTrack;                                          // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsCoreTrack;                                              // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               VisibleInUI;                                              // 0x0027(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PrestigeTrack;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  RankTable;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0038(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FGameplayUnlockCondition>            UnlockConditions;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FChallengeSlot>                      ChallengeSlots;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CraftItemRewardAmount;                                    // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UpgradeItemRewardAmount;                                  // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.Schedule_RepeatableInfo
// 0x0002
struct FSchedule_RepeatableInfo
{
	bool                                               EachDay;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EachWeek;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.ScheduledItem
// 0x0010
struct FScheduledItem
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxCompletionPerInterval;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.ScheduleData
// 0x0040 (0x0048 - 0x0008)
struct FScheduleData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDateTime                                   StartTime;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDateTime                                   EndTime;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsRepeatable;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSchedule_RepeatableInfo                    RepeatableDetails;                                        // 0x0031(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<struct FScheduledItem>                      ScheduledItems;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Archon.StaggerInfo
// 0x0018
struct FStaggerInfo
{
	bool                                               IsFlying;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                CurrentStaggerMontage;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LandAnimMontage;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.WeaponStaggerTableRow
// 0x0028 (0x0030 - 0x0008)
struct FWeaponStaggerTableRow : public FTableRowBase
{
	struct FName                                       CategoryName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonStaggerTurnBehaviourKey                     TurnBehaviour;                                            // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LandAnimMontage;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchMagnitude;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Archon.StaggerCategoryTableRow
// 0x0008 (0x0010 - 0x0008)
struct FStaggerCategoryTableRow : public FTableRowBase
{
	int                                                UpperBound;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Archon.SurveyTriggerItemTableData
// 0x0018 (0x0020 - 0x0008)
struct FSurveyTriggerItemTableData : public FTableRowBase
{
	float                                              TriggerPercentageChance;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TriggerDelay;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      SurveyURL;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
