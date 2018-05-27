#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Archon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Archon.AbilityActor
// 0x0080 (0x0408 - 0x0388)
class AAbilityActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTakeAbilityDamage;                                      // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              GlobalResistance;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElementalResistance;                                      // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalResistance;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistance;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistance;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistance;                                          // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistance;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistance;                                         // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalMultiplicativeResistance;                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameMultiplicativeResistance;                            // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostMultiplicativeResistance;                            // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockMultiplicativeResistance;                            // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantMultiplicativeResistance;                          // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralMultiplicativeResistance;                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartHealth;                                              // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x03F4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AbilityActor");
		return ptr;
	}


	void ReceivedArchonAbilityDamage(float DamageReceived, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonAbilityDamageInfo& DamageInfo);
	void ReceiveArchonRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, TArray<struct FHitResult> HitInfos, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonPointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class UPrimitiveComponent* HitComponent, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
};


// Class Archon.ActionHelper
// 0x0008 (0x0390 - 0x0388)
class AActionHelper : public AActor
{
public:
	float                                              Score;                                                    // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ActionHelper");
		return ptr;
	}

};


// Class Archon.AddMemberLobbyCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UAddMemberLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AddMemberLobbyCallbackProxy");
		return ptr;
	}


	class UAddMemberLobbyCallbackProxy* STATIC_AddMember(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FUniqueNetIdRepl& InMemberId);
};


// Class Archon.ArchonFeature
// 0x0010 (0x0038 - 0x0028)
class UArchonFeature : public UObject
{
public:
	struct FName                                       Description;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVisibleInUI;                                             // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonFeature");
		return ptr;
	}

};


// Class Archon.AirShipLobbyFeature
// 0x0000 (0x0038 - 0x0038)
class UAirShipLobbyFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AirShipLobbyFeature");
		return ptr;
	}

};


// Class Archon.ArchonAbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UArchonAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilitySystemBlueprintLibrary");
		return ptr;
	}


	bool STATIC_TryActivateAbilityBySpecHandle(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool bAllowRemoteActivation);
	struct FGameplayEffectSpecHandle STATIC_SetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectContextHandle& ContextHandle);
	bool STATIC_IsGameplayEffectActive(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UGameplayAbility* STATIC_GiveAbility(class UObject* WorldContextObject, class UClass* AbilityClass, float Level, bool bActivateAndRemoveOnEnd, class UAbilitySystemComponent* AbilitySystem, struct FGameplayAbilitySpecHandle* OutAbilitySpecHandle);
	float STATIC_GetTimeRemaining(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float STATIC_GetTimeFromStart(const struct FActiveGameplayEffectHandle& ActiveHandle);
	struct FGameplayTag STATIC_GetTagFromName(const struct FName& Name);
	float STATIC_GetPeriod(const struct FGameplayEffectSpec& GameplayEffectSpec);
	struct FName STATIC_GetNameFromTag(const struct FGameplayTag& Tag);
	struct FGameplayEffectContextHandle STATIC_GetEffectContext(const struct FGameplayEffectSpec& GameplayEffectSpec);
	float STATIC_GetDuration(const struct FGameplayEffectSpec& GameplayEffectSpec);
	float STATIC_GetBaseFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetBaseFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetActiveDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	struct FGameplayEffectContextHandle STATIC_EffectContextSetHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& Hit);
	class UAbilitySystemComponent* STATIC_EffectContextGetOriginalInstigatorAbilitySystemComponent(const struct FGameplayEffectContextHandle& EffectContext);
	class UAbilitySystemComponent* STATIC_EffectContextGetInstigatorAbilitySystemComponent(const struct FGameplayEffectContextHandle& EffectContext);
	void STATIC_CancelAbilityWithHandle(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void STATIC_CancelAbilitiesWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayTagContainer& WithTags, const struct FGameplayTagContainer& WithoutTags);
};


// Class Archon.ArchonAbilitySystemComponent
// 0x0080 (0x1770 - 0x16F0)
class UArchonAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	class UGameplayAbilitySet*                         AbilitySet;                                               // 0x16F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonGameplayAbilitySet*                   ArchonAbilitySet;                                         // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UGameplayCueSet*>                     GameplayCueSets;                                          // 0x1700(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UCurveFloat*                                 DamageCurve;                                              // 0x1710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ElementalDamageCurve;                                     // 0x1718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ElementalWeaknessCurve;                                   // 0x1720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ElementalStrengthCurve;                                   // 0x1728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGameEffectApplied;                                      // 0x1730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameEffectChanged;                                      // 0x1740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameEffectRemoved;                                      // 0x1750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x1760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilitySystemComponent");
		return ptr;
	}


	void SetActiveGameplayEffectTimeRemaining(const struct FActiveGameplayEffectHandle& ActiveHandle, float NewTimeRemaining);
	void OnGameEffectRemoved__DelegateSignature(const class FString& Name);
	void OnGameEffectChanged__DelegateSignature(const class FString& Name, class UObject* Icon, float Duration, float TimeRemaining, int StackCount);
	void OnGameEffectApplied__DelegateSignature(const class FString& Name, class UObject* Icon, float Duration, int StackCount);
	bool HasAbilityWithTag(const struct FGameplayTagContainer& GameplayTagContainer);
	struct FGameplayAbilitySpecHandle GiveAbilityAndActivateOnce(class UClass* AbilityClass, int Level);
	struct FGameplayAbilitySpecHandle GiveAbility(class UClass* AbilityClass, int Level);
	float GetTimePercentionOfActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	class UAnimMontage* GetCurrentAbilityMontage();
	void BP_ClearAbility(const struct FGameplayAbilitySpecHandle& Handle);
};


// Class Archon.ArchonAbilityTargetPlayers
// 0x0000 (0x0550 - 0x0550)
class AArchonAbilityTargetPlayers : public AGameplayAbilityTargetActor_Radius
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilityTargetPlayers");
		return ptr;
	}

};


// Class Archon.ArchonAbilityTask_ApplyRootMotionJumpForce
// 0x0060 (0x00E0 - 0x0080)
class UArchonAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       ForceName;                                                // 0x0090(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (Net, IsPlainOldData)
	float                                              Distance;                                                 // 0x00A4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00A8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00AC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // 0x00B0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}


	void OnLandedCallback(const struct FHitResult& Hit);
	void Finish();
	class UArchonAbilityTask_ApplyRootMotionJumpForce* STATIC_ArchonApplyRootMotionJumpForce(class UGameplayAbility* GameplayAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};


// Class Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName
// 0x00A8 (0x0128 - 0x0080)
class UArchonAbilityTask_PlayMontageAndWaitNotifyName : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00E0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName");
		return ptr;
	}


	class UArchonAbilityTask_PlayMontageAndWaitNotifyName* STATIC_PlayMontageAndWaitNotifyName(class UGameplayAbility* GameplayAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds);
	void OnNotifyReceived(const struct FName& NotifyName, uint32_t MontageID);
	void OnNotifyEndReceived(const struct FName& NotifyName, uint32_t MontageID);
	void OnNotifyBeginReceived(const struct FName& NotifyName, uint32_t MontageID);
	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
};


// Class Archon.ArchonAbilityTask_WaitVelocityBelow
// 0x0020 (0x00A0 - 0x0080)
class UArchonAbilityTask_WaitVelocityBelow : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityBelow;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAbilityTask_WaitVelocityBelow");
		return ptr;
	}


	class UArchonAbilityTask_WaitVelocityBelow* STATIC_CreateWaitVelocityBelow(class UGameplayAbility* GameplayAbility, float Magnitude);
};


// Class Archon.ArchonAIController
// 0x0000 (0x0480 - 0x0480)
class AArchonAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAIController");
		return ptr;
	}

};


// Class Archon.ArchonAIBotController
// 0x0000 (0x0480 - 0x0480)
class AArchonAIBotController : public AArchonAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAIBotController");
		return ptr;
	}

};


// Class Archon.ArchonVOComponent
// 0x0000 (0x03E0 - 0x03E0)
class UArchonVOComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonVOComponent");
		return ptr;
	}


	bool PostAkEventVO(class UAkAudioEventBase* AkEvent, class UArchonVOUserComponent* UserComponent, bool bPrePostEvents);
	class UArchonSpeaker* GetSpeaker();
};


// Class Archon.ArchonAmbientComponent
// 0x0010 (0x03F0 - 0x03E0)
class UArchonAmbientComponent : public UArchonVOComponent
{
public:
	struct FScriptMulticastDelegate                    OnUserRequestedAmbient;                                   // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAmbientComponent");
		return ptr;
	}


	void OnUserRequestedAmbient__DelegateSignature(class UArchonAmbientUserComponent* User, float DeltaTime);
};


// Class Archon.ArchonVOUserComponent
// 0x0010 (0x01E0 - 0x01D0)
class UArchonVOUserComponent : public UActorComponent
{
public:
	bool                                               bIsVOPlaying;                                             // 0x01D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x01D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonVOUserComponent");
		return ptr;
	}


	void SetVOPlaying(bool bIsPlaying);
	bool IsVOPlaying();
	bool IsInUIInputMode();
	bool IsInGameInputMode();
};


// Class Archon.ArchonAmbientUserComponent
// 0x0000 (0x01E0 - 0x01E0)
class UArchonAmbientUserComponent : public UArchonVOUserComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAmbientUserComponent");
		return ptr;
	}

};


// Class Archon.ArchonAnimInstance
// 0x0118 (0x04A0 - 0x0388)
class UArchonAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0388(0x0020) MISSED OFFSET
	TMap<class UAnimNotifyState*, class UObject*>      NotifyData;                                               // 0x03A8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x03F8(0x00A0) MISSED OFFSET
	int                                                AnimNotifyWriteIndex;                                     // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastAnimUpdateTime;                                       // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAnimInstance");
		return ptr;
	}


	bool IsPlayingMontageOnSlot(const struct FName& SlotNodeName);
	bool IsNotifyActive(const struct FName& NotifyName, struct FAnimNotifyEvent* OutNotify);
	class UObject* GetNotifyData(class UAnimNotifyState* notify_event);
	void GetMontagesForSlot(const struct FName& SlotName, TArray<class UAnimMontage*>* Montages);
	void ClearAllNotifyData();
	void AddNotifyData(class UAnimNotifyState* notify_event, class UObject* data_object);
};


// Class Archon.ArchonAnimNotify_AbilityNotify
// 0x0008 (0x0040 - 0x0038)
class UArchonAnimNotify_AbilityNotify : public UAnimNotify
{
public:
	struct FName                                       AbilityNotifyName;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAnimNotify_AbilityNotify");
		return ptr;
	}

};


// Class Archon.ArchonAnimNotify_AbilityNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UArchonAnimNotify_AbilityNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       AbilityNotifyName;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAnimNotify_AbilityNotifyWindow");
		return ptr;
	}

};


// Class Archon.ArchonAnimNotify_GameplayCue
// 0x0010 (0x0048 - 0x0038)
class UArchonAnimNotify_GameplayCue : public UAnimNotify
{
public:
	struct FGameplayTag                                GameplayCue;                                              // 0x0038(0x0008) (BlueprintReadOnly)
	struct FGameplayCueTag                             Cue;                                                      // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAnimNotify_GameplayCue");
		return ptr;
	}

};


// Class Archon.ArchonAnimNotify_GameplayCueState
// 0x0010 (0x0040 - 0x0030)
class UArchonAnimNotify_GameplayCueState : public UAnimNotifyState
{
public:
	struct FGameplayTag                                GameplayCue;                                              // 0x0030(0x0008) (BlueprintReadOnly)
	struct FGameplayCueTag                             Cue;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAnimNotify_GameplayCueState");
		return ptr;
	}

};


// Class Archon.ArchonAppearanceDataStatic
// 0x0000 (0x0028 - 0x0028)
class UArchonAppearanceDataStatic : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAppearanceDataStatic");
		return ptr;
	}


	struct FArchonAppearanceData STATIC_GatherAppearanceData(class AActor* Actor);
};


// Class Archon.ArchonArmorSetItem
// 0x0068 (0x03F0 - 0x0388)
class AArchonArmorSetItem : public AActor
{
public:
	TArray<struct FArmourSetKeyword>                   ArmorSetKeywords;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Abilities;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                AbilityLevel;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x03B0(0x0010) (Net, ZeroConstructor)
	class UDataTable*                                  ResistanceTable;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              CurrentLevel;                                             // 0x03C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FName                                       TransmogId;                                               // 0x03D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonArmorSetItem");
		return ptr;
	}


	bool LookupSetItemTableRow(const struct FName& RowName, struct FArmourSetItemResistanceTableData* OutResistanceTableRow);
	struct FName GetTransmogID();
	class FString GetItemID();
	EUpgradeableItemLevel GetCurrentLevel();
};


// Class Archon.ArchonArmor
// 0x0078 (0x0468 - 0x03F0)
class AArchonArmor : public AArchonArmorSetItem
{
public:
	EArmorType                                         ArmourType;                                               // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArmorTier                                         ArmorTier;                                                // 0x03F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03F2(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         DefaultPrimaryDye;                                        // 0x03F8(0x0010) (Edit, BlueprintVisible)
	struct FDataTableRowHandle                         DefaultSecondaryDye;                                      // 0x0408(0x0010) (Edit, BlueprintVisible)
	TAssetPtr<class USkeletalMesh>                     MaleSkeletalMesh;                                         // 0x0418(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TAssetPtr<class USkeletalMesh>                     FemaleSkeletalMesh;                                       // 0x0438(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0458(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonArmor");
		return ptr;
	}


	void SetDyeVariant(const struct FDyeVariant& DyeVariant);
	void OnDyeChanged();
	bool LookupResistanceTableRow(const struct FName& RowName, struct FArmourResistanceTableData* OutResistanceTableRow);
	EArmourDyeSurfaceType GetSecondaryDyeSurface();
	int GetSecondaryDyeRowIndex();
	EArmourDyeSurfaceType GetPrimaryDyeSurface();
	int GetPrimaryDyeRowIndex();
	void BP_OnArmourUnEquipped();
	void BP_OnArmourEquipped();
};


// Class Archon.ArchonArrayExtensions
// 0x0000 (0x0028 - 0x0028)
class UArchonArrayExtensions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonArrayExtensions");
		return ptr;
	}


	bool STATIC_Map_KeyValueAt(TMap<int, int> TargetMap, int Index, int* Key, int* Value);
	bool STATIC_Array_HaveCommonItems(TArray<int> A, TArray<int> B);
};


// Class Archon.ArchonAttributeComponent
// 0x0060 (0x0230 - 0x01D0)
class UArchonAttributeComponent : public UActorComponent
{
public:
	TArray<struct FArchonAttribute>                    DefaultAttributes;                                        // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FArchonAttribute>        Attributes;                                               // 0x01E0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonAttributeComponent");
		return ptr;
	}


	void RemoveAttributeModifierByName(const struct FName& AttributeName, const struct FName& ModifierName, bool RemoveAllMatching);
	void RemoveAttributeModifier(const struct FName& AttributeName, const struct FArchonAttributeModifier& Modifier);
	void RemoveAttribute(const struct FName& AttributeName);
	bool GetAttributeValue(const struct FName& AttributeName, float* Value);
	void AddAttributeModifier(const struct FName& AttributeName, const struct FArchonAttributeModifier& Modifier);
	void AddAttribute(const struct FArchonAttribute& Attribute);
};


// Class Archon.ArchonBanner
// 0x0180 (0x0508 - 0x0388)
class AArchonBanner : public AActor
{
public:
	struct FBannerCustomizationItemIDs                 CustomizationItemIDs;                                     // 0x0388(0x0080) (BlueprintVisible, BlueprintReadOnly, Net)
	class UDataTable*                                  CustomizationTable;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  DyeItemsTable;                                            // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     BannerMesh;                                               // 0x0418(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UMaterialInstance>                 FabricMaterial;                                           // 0x0438(0x0020) (BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UAnimSequenceBase>                 BannerAnimation;                                          // 0x0458(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      BackgroundColourRowName;                                  // 0x0478(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UTexture>                          BorderPattern;                                            // 0x0488(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      BorderColourRowName;                                      // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UTexture>                          SigilPattern;                                             // 0x04B8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      SigilColourRowName;                                       // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TAssetPtr<class UParticleSystem>                   VFX;                                                      // 0x04E8(0x0020) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBanner");
		return ptr;
	}


	void OnRepCustomizationData();
	void LoadBannerTableData();
	void BP_ApplyCustomizationData();
};


// Class Archon.ArchonBehemoth
// 0x0190 (0x0930 - 0x07A0)
class AArchonBehemoth : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x07A0(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTakeAbilityDamage;                                      // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTakeAbilityDamageOnMonsterPart;                         // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FGameplayTagContainer                       OwnedTagsContainer;                                       // 0x07F8(0x0020) (Edit, BlueprintVisible)
	EElementType                                       PrimaryOffenseElementType;                                // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0819(0x0007) MISSED OFFSET
	class UDataTable*                                  DamageDataTable;                                          // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalPower;                                              // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElementalPower;                                           // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicalPower;                                            // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlamePower;                                               // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrostPower;                                               // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShockPower;                                               // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiantPower;                                             // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UmbralPower;                                              // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawElementalPower;                                        // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalResistance;                                         // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ElementalResistance;                                      // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalResistance;                                       // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistance;                                          // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistance;                                          // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistance;                                          // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistance;                                        // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistance;                                         // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalMultiplicativeResistance;                         // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameMultiplicativeResistance;                            // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostMultiplicativeResistance;                            // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockMultiplicativeResistance;                            // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantMultiplicativeResistance;                          // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralMultiplicativeResistance;                           // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeDeltaForSimulatedFixup;                            // 0x0884(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0888(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UArchonBuffableComponent*                    ArchonBuffableComponent;                                  // 0x0890(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0898(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBehemoth");
		return ptr;
	}


	void UpdateTurnWarpTarget(const struct FVector& InTarget);
	void UpdatePrimaryOffenseElement(EElementType NewPrimaryOffenseElement);
	void UpdateBaseResists(bool bUpdatePartsAsWell);
	void UpdateBasePowers();
	void TraversalEnded(bool bSuccess);
	void ReceivedArchonAbilityDamageOnMonsterPart(class AMonsterPartActor* MonsterPartActor, float DamageReceived, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonAbilityDamageInfo& DamageInfo);
	void ReceivedArchonAbilityDamage(float DamageReceived, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonAbilityDamageInfo& DamageInfo);
	void ReceiveArchonRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, TArray<struct FHitResult> HitInfos, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonPointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class UPrimitiveComponent* HitComponent, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void PostInitializeHealth();
	void OnStartTraversal(const struct FVector& Delta);
	void OnRep_CurrentHealth();
	struct FDamageEventData OnPreMitigateOutgoingDamageBP(class AActor* DamageTaker, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool bHasHitResult, const struct FHitResult& HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	void OnMovementUpdated(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnDeath();
	void InitializeHealth(float InitialHealth);
	void HandleCharacterMovementUpdated(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	TArray<class UAnimMontage*> GetPivotMontages();
	void GetPivotMontageForAngleDelta(float Angle, class UAnimMontage** Montage);
	class UMonsterPartComponent* GetPartForBone(const struct FName& Bone);
	float GetMaxHealth();
	struct FTransform GetExtractedRootMotionForMontage(class UAnimMontage* Montage, float StartTime, float EndTime);
	struct FTransform GetExtractedRootMotion(float DeltaTime, bool Looping);
	bool GetDamageInfo(const struct FName& DamageKey, struct FDamageTableData* DamageInfo);
	float GetCurrentHealth();
	void FixupCapsuleUpVector();
	struct FGameplayTagContainer BP_GetTagsToApplyPostDamageCalculation(float DamageApplied, class AActor* TargetActor);
	void BP_DamageGiven(float DamageReceived, class AActor* DamageReceiver, const struct FArchonAbilityDamageInfo& DamageInfo);
	void ApproximatePivotDelta(float Angle, struct FTransform* Delta);
};


// Class Archon.ArchonBehemothAttributeSet
// 0x0008 (0x0038 - 0x0030)
class UArchonBehemothAttributeSet : public UAttributeSet
{
public:
	float                                              AetherCharge;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Rage;                                                     // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBehemothAttributeSet");
		return ptr;
	}

};


// Class Archon.ArchonBehemothMovementComponent
// 0x0030 (0x0870 - 0x0840)
class UArchonBehemothMovementComponent : public UCharacterMovementComponent
{
public:
	struct FScriptMulticastDelegate                    OnNavLinkTraversalStateChangedDelegate;                   // 0x0840(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0850(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBehemothMovementComponent");
		return ptr;
	}

};


// Class Archon.ArchonBuff
// 0x0330 (0x06B8 - 0x0388)
class AArchonBuff : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	EArchonBuffStackStrategy                           StackStrategy;                                            // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              MaxDuration;                                              // 0x0394(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0398(0x0090) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	bool                                               bRemoveBuffWhenGameplayEffectsRemoved;                    // 0x0428(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	TArray<struct FEffectDef>                          GameplayEffects;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TWeakObjectPtr<class UArchonAbilitySystemComponent> OwnerAbilitySystemComponent;                              // 0x0440(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UArchonAbilitySystemComponent> InstigatorAbilitySystemComponent;                         // 0x0448(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UArchonBuffableComponent>     OwnerBuffableComponent;                                   // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	TArray<struct FActiveGameplayEffectHandle>         ActiveGameplayEffects;                                    // 0x0460(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FInheritedTagContainer                      InheritableArchonBuffTags;                                // 0x0470(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x04D0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x0530(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x0570(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveArchonBuffsWithTags;                                // 0x05B0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      MonitoredGameplayTags;                                    // 0x0610(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        MonitoredGameplayEvents;                                  // 0x0670(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bActive;                                                  // 0x0680(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0690(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBuff");
		return ptr;
	}


	void UpdateExpireTime(float NewDuration, bool EndIfZeroOrBelow);
	void StartBuff();
	void OnTimeOut();
	void OnTagRemoved(const struct FGameplayTag& Tag);
	void OnTagAdded(const struct FGameplayTag& Tag);
	void OnRep_Active();
	void OnRemoved();
	void OnRefreshed();
	void OnGameplayEventTriggered(const struct FGameplayEventData& Payload);
	void OnGameplayEffectRemoved();
	void OnDamageReceived(float DamageReceived, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonAbilityDamageInfo& DamageInfo);
	void OnDamageGiven(float DamageReceived, class AActor* DamageReceiver, const struct FArchonAbilityDamageInfo& DamageInfo);
	void OnAdded();
	void OnActiveGameplayEffectRemoved();
	void MulticastOnRefreshedInternal();
	void MulticastOnRefreshed();
	void MulticastOnAdded();
	class AActor* GetBuffOwner();
	void CustomRefresh();
	float AuthGetCurrentDuration();
};


// Class Archon.ArchonBuffableComponent
// 0x0180 (0x0350 - 0x01D0)
class UArchonBuffableComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class UArchonAbilitySystemComponent> OwnerAbilitySystemComponent;                              // 0x01D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x178];                                     // 0x01D8(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBuffableComponent");
		return ptr;
	}


	class AArchonBuff* TryAddBuff(class UClass* BuffClass, const struct FHitResult& HitResult, class AActor* BuffInstigator, bool StartBuff, bool* BuffAdded);
	class AArchonBuff* SpawnAndAddBuff(class UClass* BuffClass, class UAbilitySystemComponent* IntstigatorAbilitySystemComponent, bool StartBuff, const struct FHitResult& HitResult);
	void RemoveBuffByClass(class UClass* Buff);
	void RemoveBuff(class AArchonBuff* Buff);
	bool HasBuff(class UClass* BuffClass);
	int GetStackCount(class UClass* BuffClass);
	void FindAllBuffsOfClass(class UClass* BuffClass, TArray<class AArchonBuff*>* OutBuffs);
	class AArchonBuff* CustomStackAdd(class UClass* Buff, class AActor* BuffInstigator, bool StartBuff, TArray<class AArchonBuff*>* CurrentBuffs);
	bool CanAddBuff(class UClass* BuffClass);
};


// Class Archon.ArchonBuffableInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonBuffableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonBuffableInterface");
		return ptr;
	}

};


// Class Archon.ArchonCatalog
// 0x00F8 (0x0120 - 0x0028)
class UArchonCatalog : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TMap<class FString, struct FArchonCatalogItem>     Catalog;                                                  // 0x0030(0x0050) (ZeroConstructor)
	TMap<uint32_t, class FString>                      CrCToNameLookup;                                          // 0x0080(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00D0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCatalog");
		return ptr;
	}


	void ParseFromEconomy(class UPlayFabEconomyDataAsset* Economy);
	bool ItemHasTag(const struct FArchonCatalogItem& CatalogItem, const class FString& Tag);
	bool IsAvailable();
	bool GetRandomItemWithTag(const class FString& Tag, struct FArchonCatalogItem* ArchonCatalogItem);
	void GetQuestRewards(const struct FName& QuestName, TArray<struct FCatalogItemRewardInfo>* Rewards);
	void GetItemsByTag(const class FString& Tag, TArray<struct FArchonCatalogItem>* OutResult);
	void GetItemRewardIcon(const struct FArchonCatalogItem& CatalogItem, TAssetPtr<class UTexture2D>* Icon);
	class FString GetItemCustomValue(const struct FArchonCatalogItem& CatalogItem, const struct FName& Key);
	class UObject* GetItemClassDefaultObject(const struct FArchonCatalogItem& CatalogItem);
	class UClass* GetItemArmorClass(const struct FArchonCatalogItem& CatalogItem);
	bool GetCatalogItem(const class FString& ItemID, struct FArchonCatalogItem* OutCatalogItem);
	void GetAllItems(TArray<struct FArchonCatalogItem>* OutResult);
};


// Class Archon.ArchonCellManagerComponent
// 0x0000 (0x01D0 - 0x01D0)
class UArchonCellManagerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCellManagerComponent");
		return ptr;
	}


	void RemoveCellBonuses();
	void ApplyCellBonuses(TArray<struct FAppliedCellEffectCounter> EquippedCellEffects);
};


// Class Archon.ArchonCharacterBase
// 0x0010 (0x07B0 - 0x07A0)
class AArchonCharacterBase : public ACharacter
{
public:
	class UArchonCharacterMovementComponent*           CharMovement;                                             // 0x07A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCharacterBase");
		return ptr;
	}

};


// Class Archon.ArchonCharacter
// 0x0260 (0x0A10 - 0x07B0)
class AArchonCharacter : public AArchonCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x07B0(0x0030) MISSED OFFSET
	struct FVector                                     DesiredDodgeDirection;                                    // 0x07E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class AArchonWeapon*                               Weapon;                                                   // 0x07F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EArchonBodyType                                    BodyType;                                                 // 0x07F8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EArchonGender                                      GenderId;                                                 // 0x07F9(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x07FA(0x0002) MISSED OFFSET
	float                                              AttackTargetScore;                                        // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0800(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UArchonBuffableComponent*                    ArchonBuffableComponent;                                  // 0x0808(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       InvincibilityTags;                                        // 0x0810(0x0020) (Edit)
	float                                              DesiredHeading;                                           // 0x0830(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	class AArchonArmor*                                HelmetArmour;                                             // 0x0838(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AArchonArmor*                                ChestArmour;                                              // 0x0840(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AArchonArmor*                                LegsArmour;                                               // 0x0848(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AArchonArmor*                                ArmsArmour;                                               // 0x0850(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AArchonLantern*                              Lantern;                                                  // 0x0858(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTakeAbilityDamage;                                      // 0x0860(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FGameplayAbilitySpecHandle>          ArmorSetAbilities;                                        // 0x0870(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnMontageStarted;                                         // 0x0880(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMontageEnded;                                           // 0x0890(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMontageBlendingOut;                                     // 0x08A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetActorHiddenInGame;                                   // 0x08B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ReplicatedAnimClass;                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    DefaultWeaponClasses;                                     // 0x08C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  StaggerCatgories;                                         // 0x08D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitInfo                                    LastHitInfo;                                              // 0x08E0(0x0040) (BlueprintVisible, BlueprintReadOnly, Transient)
	float                                              CorpseDuration;                                           // 0x0920(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UArchonCombatComponent*                      CombatComponent;                                          // 0x0928(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FReplicatedArchonTraversalInfo              ReplicatedTraversalInfo;                                  // 0x0930(0x0018) (Net)
	bool                                               bIsDodging;                                               // 0x0948(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAutoTraversalEnabled;                                  // 0x0949(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAutoLedgeGrabEnabled;                                  // 0x094A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bLedgeGrabHasHitWall;                                     // 0x094B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsTraversing;                                            // 0x094C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHideNameplate;                                           // 0x094D(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC2];                                      // 0x094E(0x00C2) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCharacter");
		return ptr;
	}


	void UseQuickItem(int Index);
	void UnregisterComboModifier(EArchonAttackActionKeyModifier ModifierKey);
	void StartOrBufferComboAction(EArchonAttackActionKey PrimaryKey, EArchonAttackActionKeyModifier ModifierKey, EArchonCombatInputType InputType);
	bool ShouldShowHitFX();
	void SetWeapon(class UClass* WeaponClass, const struct FName& TransmogId, bool bForceEquip);
	void SetSkeletalMeshOptimizations(TEnumAsByte<EMeshComponentUpdateFlag> Flag);
	void SetReplicatedAnimClass(class UClass* NewAnimClass);
	void SetLegsDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetLegsArmour(class UClass* LegsArmourClass, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses);
	void SetLantern(class UClass* LanternClass, const class FString& ItemInstanceId, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses);
	void SetHelmetDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetHelmetArmour(class UClass* HelmetArmourClass, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses);
	void SetChestDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetChestArmour(class UClass* ChestArmourClass, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses);
	void SetArmsDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetArmsArmour(class UClass* ArmsArmourClass, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses);
	void SetArmour(class UClass* HelmetArmourClass, const struct FName& TransmogId, bool bForceEquip, bool UpdateSetBonuses, class AArchonArmor** Armour);
	void ServerUpdateDesiredDodgeDirection(class AActor* TargetedActor, const struct FVector& NewValue);
	void ServerEnableAutoTraversal(bool Enable);
	void RegisterComboModifier(EArchonAttackActionKeyModifier ModifierKey);
	void ReceivedArchonAbilityDamage(float DamageReceived, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonAbilityDamageInfo& DamageInfo);
	void ReceiveArchonRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, TArray<struct FHitResult> HitInfos, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonPointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ReceiveArchonDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class UPrimitiveComponent* HitComponent, const struct FArchonExtendedDamageInfo& InExtendedDamageInfo);
	void ProcessComboBufferInputWindow();
	void PerformDodge();
	bool OverrideDodge();
	void OnUpdatePlayerName();
	void OnUnEquipWeapon(class AArchonWeapon* WeaponBeingUnEquipped);
	void OnUnEquipLantern(class AArchonLantern* LanternBeingUnEquipped);
	void OnTraversalMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnTookDamageWhileInvulnerableBP(class AActor* DamageGiver, const struct FGameplayTagContainer& DamageEventTags, float TotalDamage);
	void OnTakeDamageFromEffect(float Amount);
	void OnRep_TraversalInfo();
	void OnRep_ReplicatedAnimClass();
	void OnRep_IsDodging();
	void OnRep_HideNameplate();
	void OnRep_Health();
	void OnRep_GenderId();
	void OnRep_BodyType();
	struct FDamageEventData OnPreMitigateOutgoingDamageBP(class AActor* DamageTaker, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool bHasHitResult, const struct FHitResult& HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	struct FDamageEventData OnPreMitigateDamageBP(class AActor* DamageGiver, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool bHasHitResult, const struct FHitResult& HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	void OnHealedFromEffect(float Amount);
	void OnEquipWeapon(class AArchonWeapon* WeaponBeingEquipped);
	void OnEquipLantern(class AArchonLantern* LanternBeingEquipped);
	void OnDodgeMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnComboStarted();
	void OnComboNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void OnComboEnded();
	void OnComboCancelledTo(EArchonAttackActionKeyModifier ModifierKey);
	void OnAboutToDieBP(bool* PreventDeath);
	void K2_PawnRestarted();
	void K2_OnRepPlayerState(class APlayerState* NewPlayerState);
	bool IsTraversing();
	bool IsAutoTraversalEnabled();
	bool IsAttackWindowActive();
	void HandleDodgeInput();
	void HandleCharacterMovementUpdated(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	class AArchonWeapon* GetWeapon();
	struct FName GetMitigatedStaggerCategory(int Weight);
	float GetMaxHealth();
	bool GetIsStaggering();
	bool GetIsInvincible(struct FGameplayTagContainer* ExistingInvincibilityTags);
	bool GetIsDodging();
	bool GetIsAttacking();
	float GetHealth();
	void GetCellEffectsForItem(class UArchonInventoryItem_CellContainer* InventoryItem, TArray<struct FAppliedCellEffectCounter>* CellEffects);
	float GetAttackTargetScore();
	EArchonAttackActionKeyModifier GetAttackModifier();
	float GetAttackActionHeldTime(EArchonAttackActionKey Key);
	void GetAllEquippedCellEffects(TArray<struct FAppliedCellEffectCounter>* CellEffects);
	void EnableAutoTraversal(bool Enable);
	bool Die();
	void DebugOnMovementUpdate(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	bool CanUseQuickItem(int Index);
	bool CanPerformDodge();
	bool CanExecuteComboTransition(const struct FComboInputBuffer& ComboInputBuffer);
	bool CanExecuteCancelTransition(EArchonAttackActionKeyModifier ModifierKey);
	bool CanDie();
	bool CanChangeChargeLevel(int PreviousChargeLevel, int NewChargeLevel, const struct FComboChargeData& ChargeData, EArchonAttackActionKey CurrentHeldKey);
	void BroadcastOnMontageStarted(class UAnimMontage* Montage);
	void BroadcastOnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void BroadcastOnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	struct FGameplayTagContainer BP_GetTagsToApplyPostDamageCalculation(float DamageApplied, class AActor* TargetActor);
	void BP_DamageGiven(float DamageReceived, class AActor* DamageReceiver, const struct FArchonAbilityDamageInfo& DamageInfo);
	TArray<struct FAppearanceStringData> BlueprintGatherStringData();
	TArray<struct FAppearanceAssetReference> BlueprintGatherAssetReferences();
	void BlueprintApplyStringData(TArray<struct FAppearanceStringData> StringData);
	void BlueprintApplyAssetReferences(TArray<struct FAppearanceAssetReference> References);
};


// Class Archon.ArchonCharacterMovementComponent
// 0x0040 (0x0880 - 0x0840)
class UArchonCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              IdleSpeedThreshold;                                       // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNavWalkingUsesNavlinks;                                  // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	float                                              MaxDeflectionAngle;                                       // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraversingNavLink;                                       // 0x084C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	float                                              SlidingAlongWallTestAngle;                                // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlidingAlongWall;                                      // 0x0854(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	struct FVector                                     PreOrientedAcceleration;                                  // 0x0858(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavLinkTraversalStateChangedDelegate;                   // 0x0868(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bEnablePenetrationResolution;                             // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0879(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCharacterMovementComponent");
		return ptr;
	}


	float CalculateStoppingDistance();
};


// Class Archon.ArchonCheatActor
// 0x0000 (0x0388 - 0x0388)
class AArchonCheatActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCheatActor");
		return ptr;
	}


	void GTDDisplayCategoryNames(class APawn* SelectedPawn, class FString* CategoryName5, class FString* CategoryName6, class FString* CategoryName7, class FString* CategoryName8, class FString* CategoryName9);
	void GTDDisplay9(class APawn* SelectedPawn, class FString* Name, class FString* Value);
	void GTDDisplay8(class APawn* SelectedPawn, class FString* Name, class FString* Value);
	void GTDDisplay7(class APawn* SelectedPawn, class FString* Name, class FString* Value);
	void GTDDisplay6(class APawn* SelectedPawn, class FString* Name, class FString* Value);
	void GTDDisplay5(class APawn* SelectedPawn, class FString* Name, class FString* Value);
};


// Class Archon.ArchonCheatManager
// 0x0010 (0x0088 - 0x0078)
class UArchonCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCheatManager");
		return ptr;
	}


	void UnlockQuest(const class FString& QuestID);
	void ToggleSurvey();
	void ToggleSchedulerLogging();
	void ToggleProgressionLogging();
	void ToggleNavCollisionDebugDraw();
	void ToggleDamageTrace();
	void StartQuest(const class FString& QuestID);
	void SetChallenge(const class FString& ChallengeID, const class FString& SlotID);
	void ServerDisplayAll(const class FString& ClassName, const class FString& PropertyName);
	void ResetQuest(const class FString& QuestID);
	void RedeemQuest(const class FString& QuestID);
	void PowerAndResistanceEnabled(bool Enabled);
	void LogQuestInfo();
	void God();
	void ExpireChallenge(const class FString& ChallengeID);
	void CompleteQuest(const class FString& QuestID);
	void CompleteHunt(const class FString& PlayerHunt, const class FString& MatchmakerHunt);
	void ClearChallenge(const class FString& ChallengeID);
	void ChooseHuntInfo(const class FString& HuntId);
	void Cheat(const class FString& Msg);
	void ByeByeBehemoth();
	void AbandonQuest(const class FString& QuestID);
};


// Class Archon.ArchonCinematicUtility
// 0x0000 (0x0028 - 0x0028)
class UArchonCinematicUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCinematicUtility");
		return ptr;
	}


	TArray<class AArchonCharacter*> STATIC_SortCharactersByPlayerId(TArray<class AArchonCharacter*> Characters);
};


// Class Archon.CloudConfiguration
// 0x0000 (0x0388 - 0x0388)
class ACloudConfiguration : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CloudConfiguration");
		return ptr;
	}

};


// Class Archon.ArchonCombatComponent
// 0x0160 (0x0330 - 0x01D0)
class UArchonCombatComponent : public UActorComponent
{
public:
	bool                                               bEvaluateRootCombosFromEarlyOutToLoco;                    // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCombatPlayrateAttributeEnabled;                          // 0x01D1(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	float                                              PlayRateModifier;                                         // 0x01D4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FinalMontagePlayRate;                                     // 0x01D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasProcessedComboTransition;                              // 0x01DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasProcessedBufferedStart;                                // 0x01DD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttacking;                                             // 0x01DE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionContext                         CombatContext;                                            // 0x01DF(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMontagePlayPositionReplicationEnabled;                   // 0x01E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8F];                                      // 0x01E1(0x008F) MISSED OFFSET
	struct FCombatLocalAnimMontage                     LocalAnimMontageInfo;                                     // 0x0270(0x0030)
	struct FCombatRepAnimMontage                       RepAnimMontageInfo;                                       // 0x02A0(0x0040) (Net)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	EArchonAttackActionKey                             CurrentChargingAttackActionKey;                           // 0x02F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              CurrentChargeTime;                                        // 0x02F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x38];                                      // 0x02F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCombatComponent");
		return ptr;
	}


	void UnregisterComboModifier(EArchonAttackActionKeyModifier ModifierKey);
	void StartOrBufferComboStart(EArchonAttackActionKey PrimaryKey, EArchonAttackActionKeyModifier ModifierKey, EArchonCombatInputType InputType, EArchonAttackActionContext Context);
	void StartOrBufferComboAction(EArchonAttackActionKey PrimaryKey, EArchonAttackActionKeyModifier ModifierKey, EArchonCombatInputType InputType, EArchonAttackActionContext Context);
	bool StartNextMove(const struct FComboInputBuffer& ComboInputBuffer, bool IsRootNode);
	void StartComboCharge(EArchonAttackActionKey PrimaryKey);
	void SetCombatContext(EArchonAttackActionContext InContext);
	void ServerStartNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void ServerStartInputAction(const struct FInputActionData& InputAction);
	void ServerStartCombo(const struct FComboInputKey& InComboInputKey, EArchonAttackActionContext Context);
	void ServerStartCharge(EArchonAttackActionKey PrimaryKey);
	void ServerEndCombo(EArchonCombatEndReason Reason);
	void ServerEndCharge(EArchonAttackActionKey PrimaryKey);
	void RegisterComboModifier(EArchonAttackActionKeyModifier ModifierKey);
	void ProcessComboBufferInputWindow();
	void ProcessBufferedComboStart();
	void OnSimulatedMontageBlendOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_IsAttacking();
	void OnMontageBlendOut(class UAnimMontage* Montage, bool bInterrupted);
	bool IsInputBufferActive(EArchonAttackActionKey PrimaryKey, EArchonAttackActionKeyModifier ModifierKey, EArchonCombatInputType InputType);
	bool IsChargingWindowActive();
	bool IsCancelWindowActive(const struct FComboCancel& ComboCancel);
	bool IsAttackWindowActive();
	bool IsAttacking();
	EArchonAttackActionContext GetCombatContext();
	void EndComboCharge(EArchonAttackActionKey PrimaryKey);
	void EndCombo(EArchonCombatEndReason Reason);
};


// Class Archon.ArchonGameplayOperation
// 0x0028 (0x0050 - 0x0028)
class UArchonGameplayOperation : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnOperationStart;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOperationEnd;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EGameplayOperationState                            Status;                                                   // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugOutputEnabled;                                       // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayOperation");
		return ptr;
	}


	void Tick(const struct FArchonGameplayOperationArgs& Args);
	void Start(const struct FArchonGameplayOperationArgs& Args);
	void OnTick(const struct FArchonGameplayOperationArgs& Args);
	void OnStart(const struct FArchonGameplayOperationArgs& Args);
	void GatherDebugInfo(class FString* DebugText);
	void EndOperation(const struct FArchonGameplayOperationArgs& Args, bool bInterrupted);
};


// Class Archon.ArchonConcurrentGameplayOperations
// 0x0018 (0x0068 - 0x0050)
class UArchonConcurrentGameplayOperations : public UArchonGameplayOperation
{
public:
	class UArchonGameplayOperation*                    Master;                                                   // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UArchonGameplayOperation*>            Slaves;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonConcurrentGameplayOperations");
		return ptr;
	}


	void MasterOperationEnded(class UArchonGameplayOperation* Op, const struct FArchonGameplayOperationArgs& Args, bool bInterrupted);
};


// Class Archon.ArchonCraftComponent
// 0x0000 (0x03E0 - 0x03E0)
class UArchonCraftComponent : public UArchonVOComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCraftComponent");
		return ptr;
	}


	bool CheckTagPresence(TArray<class FString> ItemTags, const class FString& ItemTagToLookFor);
};


// Class Archon.ArchonUserWidget
// 0x0020 (0x02F0 - 0x02D0)
class UArchonUserWidget : public UUserWidget
{
public:
	bool                                               bFocusStackLayer;                                         // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLowerDepthLayers;                                    // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bValidateFocus;                                           // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D];                                      // 0x02D3(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonUserWidget");
		return ptr;
	}


	bool SetDesiredUserFocus(class UWidget* InDesiredFocusedWidget);
	void OnLoseTopOfFocusStack();
	void OnAquireTopOfFocusStack();
	class UWidget* GetDefaultFocusedWidget();
};


// Class Archon.ArchonCreditsWidget
// 0x0008 (0x02F8 - 0x02F0)
class UArchonCreditsWidget : public UArchonUserWidget
{
public:
	class UDataTable*                                  Founders;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonCreditsWidget");
		return ptr;
	}


	struct FText ReadFounderNames();
};


// Class Archon.ArchonSubtractiveDamage
// 0x0000 (0x0038 - 0x0038)
class UArchonSubtractiveDamage : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSubtractiveDamage");
		return ptr;
	}

};


// Class Archon.ArchonDamage
// 0x0008 (0x0048 - 0x0040)
class UArchonDamage : public UGameplayEffectExecutionCalculation
{
public:
	class UCurveFloat*                                 DamageCurve;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDamage");
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class Archon.ArchonKill
// 0x0000 (0x0048 - 0x0048)
class UArchonKill : public UArchonDamage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonKill");
		return ptr;
	}

};


// Class Archon.ArchonDamageAttributeSet
// 0x00D0 (0x0100 - 0x0030)
class UArchonDamageAttributeSet : public UAttributeSet
{
public:
	float                                              BaseDamage;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RawDamage;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              TrueDamage;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitPartBreak;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitStagger;                                          // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitExpose;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FreezeAmountPerHitScale;                                  // 0x0064(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Determination;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DeterminationMax;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DeterminationToAdd;                                       // 0x0070(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DeterminationDurationScale;                               // 0x0074(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GlobalPower;                                              // 0x0078(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ElementalPower;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalPower;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlamePower;                                               // 0x0084(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostPower;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockPower;                                               // 0x008C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantPower;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralPower;                                              // 0x0094(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalPower;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GlobalTargetPostMigationMultiplier;                       // 0x009C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ElementalTargetPostMigationMultiplier;                    // 0x00A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalTargetPostMigationMultiplier;                     // 0x00A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameTargetPostMigationMultiplier;                        // 0x00A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostTargetPostMigationMultiplier;                        // 0x00AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockTargetPostMigationMultiplier;                        // 0x00B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantTargetPostMigationMultiplier;                      // 0x00B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralTargetPostMigationMultiplier;                       // 0x00B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CombatPlayRateRateModifier;                               // 0x00BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerPerHitBonus;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerArmorPenetrationPercent;                           // 0x00C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamageStaggerMultiplier;                              // 0x00C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamageExposeMultiplier;                               // 0x00CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ExposePerHitBonus;                                        // 0x00D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PartDamageMultiplier;                                     // 0x00D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PartDamagePerHitBonus;                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamageMultiplier;                                     // 0x00DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CoreDamagePerHitBonus;                                    // 0x00E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseWeaponDamageMultiplier;                               // 0x00E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BaseWeaponDamagePerHitBonus;                              // 0x00E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeStealMultiplier;                                      // 0x00EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeStealPerHitBonus;                                     // 0x00F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              WeaponChargeMultiplier;                                   // 0x00F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              WeaponChargePerHitBonus;                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PartToExposeDamageConversionPercent;                      // 0x00FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDamageAttributeSet");
		return ptr;
	}

};


// Class Archon.ArchonDamageDisableInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonDamageDisableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDamageDisableInterface");
		return ptr;
	}

};


// Class Archon.ArchonDamageGiverInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonDamageGiverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDamageGiverInterface");
		return ptr;
	}

};


// Class Archon.ArchonDamageTakerInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonDamageTakerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDamageTakerInterface");
		return ptr;
	}

};


// Class Archon.ArchonDemoPawn
// 0x0010 (0x0420 - 0x0410)
class AArchonDemoPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDemoPawn");
		return ptr;
	}


	void ReplayCameraMoveSpeed(float NewSpeed);
	void MoveUp_World(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
};


// Class Archon.ArchonDemoSpectator
// 0x0048 (0x0750 - 0x0708)
class AArchonDemoSpectator : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0708(0x0028) MISSED OFFSET
	float                                              PlayerStartEventTimeout;                                  // 0x0730(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0734(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDemoSpectator");
		return ptr;
	}


	void OnToggleUI();
	void OnTogglePlayerNames();
};


// Class Archon.ArchonDialogStatics
// 0x0000 (0x0028 - 0x0028)
class UArchonDialogStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonDialogStatics");
		return ptr;
	}


	EArchonGender STATIC_SelectAddressee(class UArchonSpeaker* PotentialAddressee, class AArchonPlayerController* PlayerController);
	void STATIC_PickLine(TArray<struct FArchonWeightedAmbientDialogLine> Lines, struct FArchonWeightedAmbientDialogLine* LineOUT);
	struct FText STATIC_GetLocalizedTextForString(class UArchonSpeaker* Speaker, const class FString& Text, EArchonGender AddresseeGender);
	struct FText STATIC_GetLocalizedText(class UArchonSpeaker* Speaker, const struct FArchonDialogLine& Line, EArchonGender AddresseeGender);
	struct FArchonLocalizationData STATIC_CreateLocalizationData(const class FString& Text, const class FString& TranslationNotes);
	struct FArchonFullLocalizationData STATIC_CreateFullLocalizationData(const class FString& Text, const class FString& TranslationNotes, class UArchonSpeaker* Speaker, class UArchonSpeaker* Addressee);
	void STATIC_AddLocalizationDataSet(TArray<struct FArchonDialogLine> Lines, TArray<struct FArchonLocalizationData>* LocLines);
	void STATIC_AddLocalizationData(const struct FArchonDialogLine& Line, TArray<struct FArchonLocalizationData>* LocLines);
};


// Class Archon.ArchonEditorStatics
// 0x0000 (0x0028 - 0x0028)
class UArchonEditorStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonEditorStatics");
		return ptr;
	}


	bool STATIC_SaveStringTextToFile(const class FString& SaveDirectory, const class FString& FileName, const class FString& SaveText, bool AllowOverWriting, bool Append);
	bool STATIC_SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& FileName, TArray<class FString> SaveText, bool AllowOverWriting, bool Append);
	bool STATIC_LoadStringArrayFromFile(const class FString& FullFilePath, bool ExcludeEmptyLines, TArray<class FString>* StringArray, int* ArraySize);
};


// Class Archon.ArchonFeatureFlagBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UArchonFeatureFlagBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonFeatureFlagBlueprintLibrary");
		return ptr;
	}


	bool STATIC_IsLocalFeatureEnabled(class UClass* Feature);
	bool STATIC_IsFeatureEnabledWorldContext(class UObject* WorldContextObject, class UClass* Feature);
	bool STATIC_IsFeatureEnabled(class UObject* WorldContextObject, class UClass* Feature);
};


// Class Archon.ArchonFriends
// 0x02B8 (0x02E0 - 0x0028)
class UArchonFriends : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnFriendsListUpdated;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendsListError;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecentPlayersUpdated;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecentPlayersError;                                     // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlockedPlayersUpdated;                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendAdded;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendRemoved;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerBlocked;                                          // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerUnblocked;                                        // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPresenceUpdated;                                        // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x218];                                     // 0x00C8(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonFriends");
		return ptr;
	}


	bool UnblockPlayerNamed(const class FString& PlayerName);
	bool RemoveFriendNamed(const class FString& PlayerName);
	bool RemoveFriend(const struct FArchonFriend& Friend);
	bool ReadRecentPlayers();
	bool ReadFriendsList();
	bool ReadBlockedPlayersList();
	bool IsRecentPlayersReady();
	bool IsFriendsListReady();
	bool IsFriendFromName(const class FString& PlayerName);
	bool IsFriendConnectable(const struct FArchonFriend& Friend);
	bool IsFriend(const struct FArchonRecentPlayer& Player);
	bool IsConnected();
	bool IsBlockedPlayersReady();
	bool IsBlocked(const class FString& PlayerName);
	TArray<struct FArchonRecentPlayer> GetRecentPlayers();
	bool GetPresence(const struct FUniqueNetIdRepl& PlayerId, struct FArchonPresence* Presence);
	TArray<struct FArchonFriend> GetFriendsList();
	TArray<struct FArchonBlockedPlayer> GetBlockedPlayersList();
	void STATIC_BreakArchonRecentPlayer(const struct FArchonRecentPlayer& InPlayer, class FString* Name, struct FDateTime* LastSeen);
	void STATIC_BreakArchonFriend(const struct FArchonFriend& InFriend, class FString* Name, struct FUniqueNetIdRepl* PlayerId);
	void STATIC_BreakArchonBlockedPlayer(const struct FArchonBlockedPlayer& InPlayer, class FString* Name, struct FUniqueNetIdRepl* PlayerId);
	bool BlockPlayerNamed(const class FString& PlayerName);
	bool AddFriendNamed(const class FString& PlayerName);
	bool AddFriend(const struct FArchonRecentPlayer& Player);
};


// Class Archon.ArchonFunctionalUtility
// 0x0000 (0x0028 - 0x0028)
class UArchonFunctionalUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonFunctionalUtility");
		return ptr;
	}


	void STATIC_WaitForPostLoad(class UObject* WorldContextObject, class UObject* Object, float Timeout, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LogGameplayTagsAbilitiesAndEffects(class AActor* Player);
	bool STATIC_IsValidAssetPackage(const class FString& AssetPath);
};


// Class Archon.ArchonGameEngine
// 0x0060 (0x0D80 - 0x0D20)
class UArchonGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0D20(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameEngine");
		return ptr;
	}

};


// Class Archon.ArchonGameInstance
// 0x02B0 (0x03A0 - 0x00F0)
class UArchonGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00F0(0x00C0) MISSED OFFSET
	class UArchonCatalog*                              Catalog;                                                  // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UHuntCatalog*                                HuntCatalog;                                              // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UObjectLibrary*                              DefaultQuestSerieLibrary;                                 // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  Hunts;                                                    // 0x01C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDataTable*>                          HuntTables;                                               // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDataTable*>                          MatchmakerHuntTables;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDataTable*>                          PlayerHuntTables;                                         // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  BehemothData;                                             // 0x0200(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LoadingScreenWidgetClass;                                 // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UChallengeManager*                           ChallengeManager;                                         // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDisconnectError;                                      // 0x0218(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FText                                       DisconnectErrorText;                                      // 0x0220(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0238(0x0030) MISSED OFFSET
	class UPlayFabEconomyDataAsset*                    DefaultEconomy;                                           // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0270(0x0008) MISSED OFFSET
	class UCloudScriptExtension*                       CloudScriptExtension;                                     // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableVisualLogger;                                      // 0x0280(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	TArray<struct FName>                               VisualLoggerWhitelistCategories;                          // 0x0288(0x0010) (ZeroConstructor, Config)
	class UArchonPerfTelemetry*                        PerfTelemetry;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              PreloadedClasses;                                         // 0x02A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FStringClassReference>               PostMapLoadInstancesToSpawn;                              // 0x02B0(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<class UObject*>                             PostMapLoadInstances;                                     // 0x02C0(0x0010) (ZeroConstructor, Transient)
	TWeakObjectPtr<class UObject>                      CachedGlobalEventDispatcher;                              // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FStringClassReference                       GlobalLoadingDispatcherClass;                             // 0x02D8(0x0010) (Edit, Config, DisableEditOnInstance)
	class UArchonLoadingDispatch*                      GlobalLoadingDispatcher;                                  // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UArchonLoadingDispatch>       CachedGlobalLoadingDispatcher;                            // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    PreLoadMap;                                               // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PostLoadMap;                                              // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SubtitleHandler;                                          // 0x0318(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	class UArchonLoadScreenWidget*                     LoadingScreenWidget;                                      // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDataTable*                                  CellDataTable;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EItemRarityLevelType, struct FItemAmountPairList> CellExtractionCosts;                                      // 0x0338(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TScriptInterface<class UArchonTokenSubstitutionInterface>> TokenSubstitutionInterfaces;                              // 0x0388(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameInstance");
		return ptr;
	}


	void UpdateSubtitle(const struct FText& Text, bool Show);
	void SetShouldShowHitFXForRemoteClients(bool Val);
	void SetDisconnectError(const struct FText& ErrorText);
	bool LookupCellCatalogRow(const struct FName& RowName, struct FCellCatalogTableData* OutRow);
	bool GetShouldShowHitFXForRemoteClients();
	class UArchonLoadingDispatch* GetGlobalLoadingDispatcher();
	class UObject* GetGlobalEventDispatcher(class UClass* Class);
	bool GetCellExtractionCost(EItemRarityLevelType CellRarity, TArray<struct FItemAmountPair>* Costs);
	class FString GetBuildInfo();
	void DisplayLoadingScreen(TEnumAsByte<ELoadScreenStyle> LoadScreenStyle);
	void CloseLoadingScreen();
	void ClearDisconnectError();
	bool AreSubtitlesEnabled();
	void AddLocalizedTextTokenSubstitution(const class FString& Tag, const TScriptInterface<class UArchonTokenSubstitutionInterface>& Interface);
};


// Class Archon.ArchonGameMode
// 0x0138 (0x0598 - 0x0460)
class AArchonGameMode : public AGameMode
{
public:
	struct FScriptMulticastDelegate                    OnBehemothDeath;                                          // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FArchonLobbyMissionInfo                     CurrentMissionInfo;                                       // 0x0470(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0510(0x0038) MISSED OFFSET
	float                                              NoPlayerTimeout;                                          // 0x0548(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class UClass*                                      SelectedMonsterClass;                                     // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AdditionalBehemothClasses;                                // 0x0558(0x0010) (BlueprintVisible, ZeroConstructor)
	class UClass*                                      SelectedTODClass;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedPlayerCount;                                      // 0x0570(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0574(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      DebugBehemothClass;                                       // 0x0578(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugAdditionalBehemothClass;                             // 0x0588(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameMode");
		return ptr;
	}


	void ReturnToCityHost();
	class UClass* GetMonsterClass();
	class UClass* GetAtmosphereClass();
};


// Class Archon.ArchonGameMode_City
// 0x0010 (0x05A8 - 0x0598)
class AArchonGameMode_City : public AArchonGameMode
{
public:
	class AArchonLobbyHost*                            ArchonLobby;                                              // 0x0598(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AArchonPartyHost*                            PartyManager;                                             // 0x05A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameMode_City");
		return ptr;
	}

};


// Class Archon.ArchonGameMode_Island
// 0x0000 (0x0598 - 0x0598)
class AArchonGameMode_Island : public AArchonGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameMode_Island");
		return ptr;
	}

};


// Class Archon.ArchonGameMode_Lobby
// 0x0000 (0x0598 - 0x0598)
class AArchonGameMode_Lobby : public AArchonGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameMode_Lobby");
		return ptr;
	}

};


// Class Archon.ArchonGameMode_Menu
// 0x0000 (0x0460 - 0x0460)
class AArchonGameMode_Menu : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameMode_Menu");
		return ptr;
	}


	void ShutdownGame();
	void ServerTravel(const class FString& URL);
};


// Class Archon.ArchonGameplayAbilitySet
// 0x0010 (0x0040 - 0x0030)
class UArchonGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FArchonGameplayAbilityBindInfo>      Abilities;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayAbilitySet");
		return ptr;
	}

};


// Class Archon.ArchonGameplayAbilityTargetActor_Radius
// 0x0000 (0x0550 - 0x0550)
class AArchonGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor_Radius
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayAbilityTargetActor_Radius");
		return ptr;
	}

};


// Class Archon.ArchonGameplayCueManager
// 0x0010 (0x0430 - 0x0420)
class UArchonGameplayCueManager : public UGameplayCueManager
{
public:
	TArray<struct FGameplayCueNotifySubset>            GameplayCueNotifySubsets;                                 // 0x0420(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayCueManager");
		return ptr;
	}

};


// Class Archon.ArchonGameplayCueSet
// 0x0000 (0x0090 - 0x0090)
class UArchonGameplayCueSet : public UGameplayCueSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayCueSet");
		return ptr;
	}

};


// Class Archon.ArchonGameplayEffectUIData_Icon
// 0x0008 (0x0030 - 0x0028)
class UArchonGameplayEffectUIData_Icon : public UGameplayEffectUIData
{
public:
	class UObject*                                     Icon;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayEffectUIData_Icon");
		return ptr;
	}

};


// Class Archon.ArchonGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UArchonGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameplayStatics");
		return ptr;
	}


	bool STATIC_UseHolidayBuildNewGameFlow();
	struct FHitResult STATIC_UpdateComponentLocationFromWorld(const struct FHitResult& Hit);
	TArray<struct FAppliedCellEffectCounter> STATIC_UnpackRankedCellEffectsBP(class UObject* WorldContextObject, TArray<struct FAppliedCellEffectCounter> CellEffectsList);
	class FString STATIC_ToString(const struct FKey& Key);
	bool STATIC_SLessThan(const class FString& StringA, const class FString& StringB);
	bool STATIC_SGreaterThan(const class FString& StringA, const class FString& StringB);
	void STATIC_SetShapeComponentAreaClass(class UShapeComponent* Target, class UClass* AreaClass);
	struct FDamageEventData STATIC_SetResistanceDeltaByType(EElementType Type, float Value, struct FDamageEventData* DamageData);
	struct FDamageEventData STATIC_SetPreMitigationDamageByType(EElementType Type, float Value, struct FDamageEventData* DamageData);
	struct FDamageEventData STATIC_SetPostResistDamageByType(EElementType Type, float Value, struct FDamageEventData* DamageData);
	struct FDamageEventData STATIC_SetMultiplierByType(EElementType Type, float Value, struct FDamageEventData* DamageData);
	void STATIC_SetLevelSequenceAnimTrackActive(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* SequenceActor, class UAnimSequenceBase* AnimSequence, bool Active);
	void STATIC_SetBoneTranslationRetargetingMode(class USkeleton* Skeleton, int BoneIndex, TEnumAsByte<EBoneTranslationRetargetingMode> NewRetargetingMode, bool bChildrenToo);
	class FString STATIC_SerializeStructForDataTable(const struct FName& RowName, const struct FStubStruct& CustomStruct);
	void STATIC_ResetSequenceActors(class ULevelSequencePlayer* LevelSequencePlayer);
	void STATIC_ResetDynamics(class UAnimInstance* AnimInstance);
	void STATIC_ReplaceSequenceActor(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* ActorToReplace, class UClass* ClassOfActorToReplace, class AActor* NewActor);
	void STATIC_ReplaceLevelSequenceAnim(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* SequenceActor, class UAnimSequenceBase* AnimSequenceToReplace, class UAnimSequenceBase* NewAnimSequence);
	TArray<struct FArchonRegexMatch> STATIC_RegexSearch(const class FString& Input, const class FString& Pattern);
	void STATIC_ProjectPointToNavigationForActor(class AActor* Actor, const struct FVector& Point, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedPoint, bool* Success);
	bool STATIC_PathHitsNavMesh(const class FString& Identifier, class UObject* WorldContext, TArray<struct FVector> Path, bool WorldSpace, class AActor* ParentActor, class AActor* TargetActor, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, bool bUseNavlinkSegments, bool bDrawDebug, float DebugLifetime, struct FVector* OutHitPoint, bool* OutUsesNavLinkTraversal, float* OutPathPercentageBeforeHit, bool* OutFoundNavMesh);
	bool STATIC_PassesQuestRequirements(class AArchonPlayerController* PlayerController, TArray<struct FQuestRequirement> Requirements);
	struct FGameplayEffectSpecHandle STATIC_MakeOutgoingGameplayEffectSpecForActor(class UGameplayAbility* GameplayAbility, class AActor* Actor, class UClass* GameplayEffectClass, float Level);
	bool STATIC_IsVisualLoggerPaused();
	bool STATIC_IsShipping();
	bool STATIC_IsPlayInEditor(class UObject* WorldContextObject);
	bool STATIC_IsLocalPlayerCharacterId(class UObject* WorldContextObject, const class FString& CharacterId);
	bool STATIC_IsInEditor(class UObject* WorldContextObject);
	bool STATIC_IsGuildLeader(class UObject* WorldContextObject);
	bool STATIC_IsGamepadKey(const struct FKey& Key);
	struct FVector STATIC_GetWorldLocationFromComponent(const struct FHitResult& InHit);
	float STATIC_GetWorldDeltaSeconds(class UObject* WorldContextObject);
	float STATIC_GetVisualLoggerScrubTime();
	float STATIC_GetTotalWeaponPower(class AArchonWeapon* Weapon, class UArchonInventoryItem_Upgradeable* InvItem);
	struct FGameplayTag STATIC_GetTagForPhysicalType(EPhysicalType PhysicalType);
	struct FGameplayTag STATIC_GetTagForElement(EElementType ElementType);
	TArray<struct FName> STATIC_GetStructPropertyNames(class UScriptStruct* Struct);
	struct FName STATIC_GetStructFullPropertyName(class UScriptStruct* Struct, const class FString& SimplePropertyName);
	struct FTransform STATIC_GetSavedBoneTransform(class UArchonAnimInstance* AnimInstance, const struct FName& CachedPoseName, const struct FName& BoneName);
	float STATIC_GetResistanceDeltaByType(const struct FDamageEventData& DamageData, EElementType Type);
	struct FTransform STATIC_GetRefPoseBoneTransform(class USkeleton* Skeleton, const struct FName& Bone);
	EPhysicalType STATIC_GetPrimaryPhysicalTypeFromTags(class UAbilitySystemComponent* ASC);
	EPhysicalType STATIC_GetPrimaryPhysicalTypeFromTagContainer(const struct FGameplayTagContainer& TagContainer);
	EElementType STATIC_GetPrimaryElementalTypeFromTags(class UAbilitySystemComponent* ASC);
	EElementType STATIC_GetPrimaryElementalTypeFromTagContainer(const struct FGameplayTagContainer& TagContainer);
	float STATIC_GetPreMitigationDamageByType(const struct FDamageEventData& DamageData, EElementType Type);
	float STATIC_GetPostResistDamageByType(const struct FDamageEventData& DamageData, EElementType Type);
	void STATIC_GetPlayerStatesAndCharacters(class UObject* WorldContextObject, bool bIncludeBots, TArray<class AArchonPlayerState*>* PlayerStates, TArray<class AArchonCharacter*>* PlayerCharacters);
	class APlayerState* STATIC_GetPlayerStateFromPlayerName(class UObject* WorldContextObject, const class FString& PlayerName);
	class APlayerState* STATIC_GetPlayerStateFromNetId(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& PlayerNetId);
	class AArchonPlayerController* STATIC_GetPlayerFromCharacterId(class UObject* WorldContextObject, const class FString& CharacterId);
	TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCostForActor(class AActor* Actor, const struct FVector& PathStart, const struct FVector& PathEnd, class UClass* FilterClass, float* PathCost);
	class UArchonPartyFinder* STATIC_GetPartyFinder(class UObject* WorldContextObject);
	class UObject* STATIC_GetOuter(class UObject* Object);
	class FString STATIC_GetOnlineSessionId(class UObject* WorldContextObject);
	class FString STATIC_GetObjectFullPath(class UObject* TheObject);
	float STATIC_GetNotifyStartTime(const struct FAnimNotifyEvent& Target);
	void STATIC_GetNotifyStartAndEnd(class UAnimMontage* Montage, class UClass* NotifyType, float* OutStartTime, float* OutEndTime);
	float STATIC_GetNotifyEndTime(const struct FAnimNotifyEvent& Target);
	void STATIC_GetNotifiesOfClass(class UAnimMontage* Montage, class UClass* NotifyType, TArray<struct FAnimNotifyEvent>* OutNotifies);
	struct FUniqueNetIdRepl STATIC_GetNetIdFromPlayerState(class UObject* WorldContextObject, class APlayerState* PlayerState);
	struct FUniqueNetIdRepl STATIC_GetNetIdFromPlayerName(class UObject* WorldContextObject, const class FString& PlayerName);
	float STATIC_GetMultiplierByType(const struct FDamageEventData& DamageData, EElementType Type);
	void STATIC_GetMontagesForObject(class UObject* Object, TArray<class UAnimMontage*>* Montages);
	TArray<class AActor*> STATIC_GetLevelSequenceActorsOfClass(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, class UClass* ActorClass);
	TArray<class UAnimSequenceBase*> STATIC_GetLevelSequenceActorAnimations(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* SequenceActor);
	class UHuntCatalog* STATIC_GetHunts(class UObject* WorldContextObject);
	struct FHTTPEventStats STATIC_GetHTTPEventLogStats();
	float STATIC_GetGameTimeInSeconds(class UObject* WorldContextObject);
	class AGameModeBase* STATIC_GetGameMode(class UObject* WorldContextObject);
	class UArchonFriends* STATIC_GetFriendsClient(class UObject* WorldContextObject);
	struct FText STATIC_GetDisplayName(const struct FKey& Key);
	class FString STATIC_GetDataTableRowNamesForStruct(const struct FStubStruct& CustomStruct);
	bool STATIC_GetDataTableRowFromName_Generic(class UDataTable* Table, const struct FName& RowName, const struct FTableRowBase& RowTypeStruct, struct FTableRowBase* OutRow);
	float STATIC_GetCurveValueAtTime(class UAnimSequence* Sequence, float ExplicitTime, const struct FName& CurveName);
	float STATIC_GetCurveTimeAtValue(class UAnimSequenceBase* Sequence, float ExplicitValue, const struct FName& CurveName);
	class FString STATIC_GetContentDate();
	int STATIC_GetContentChangelist();
	TArray<struct FUpgradeableItemRecipePerLevel> STATIC_GetCombinedRecipe(const struct FUpgradeableItemRecipeTableData& RecipePatternTableRow, const struct FName& RowName);
	class UClass* STATIC_GetClassFromStringClassReference(const struct FStringClassReference& ClassName);
	TArray<int> STATIC_GetChildBonesByIndex(int ParentBone, class USkeletalMeshComponent* SkeletalMeshComponent);
	TArray<struct FName> STATIC_GetChildBones(const struct FName& ParentBone, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UChatClient* STATIC_GetChatClient(class UObject* WorldContextObject);
	int STATIC_GetChangelist();
	TArray<struct FCellSlot> STATIC_GetCellSlotsForCellContainerData(EUpgradeableItemLevel ItemLevel, const struct FPlayFabCellContainerCatalogTableData& CellContainerData);
	struct FTransform STATIC_GetBoneTransform(class USkeletalMeshComponent* SkeletalMesh, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	int STATIC_GetBinaryChangelist();
	class UArchonPersistentUser* STATIC_GetArchonPersistentUser(class ULocalPlayer* LocalPlayer);
	class UArchonLocalPlayer* STATIC_GetArchonLocalPlayer(class UObject* WorldContextObject);
	class UArchonGameUserSettings* STATIC_GetArchonGameUserSettings();
	class UArchonCatalog* STATIC_GetArchonCatalog(class UObject* WorldContextObject);
	void STATIC_GetApproximateRotatedTranslationFromMontage(class ACharacter* Character, class UAnimMontage* Montage, float Start, float End, float DesiredRotation, float StepSize, struct FTransform* Out);
	TArray<struct FAppliedCellEffectCounter> STATIC_GetAllPermanentCellEffects(class UObject* WorldContextObject, const struct FPlayFabCellContainerCatalogTableData& CatalogRowData, EUpgradeableItemLevel ItemLevel);
	void STATIC_GetAllowedRegions(TArray<class FString>* OutRegions);
	void STATIC_GetAdjacentBones(class USkeletalMesh* Mesh, const struct FName& StartBone, TArray<struct FName>* AdjacentBones);
	class UAnimMontage* STATIC_FindMontageWithMatchingRootMotion(TArray<class UAnimMontage*> Montages, const struct FVector& TraversalVector);
	struct FTransform STATIC_ExtractRootMotionFromMontage(class UAnimMontage* Montage, float StartTime, float EndTime);
	float STATIC_ComponentGetDistanceToCollision(class UPrimitiveComponent* Component, const struct FVector& Point, TEnumAsByte<ECollisionChannel> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FVector* ClosestPointOnCollision);
	int STATIC_CompareStrings(const class FString& StringA, const class FString& StringB);
	TArray<struct FUpgradeableItemRecipePerLevel> STATIC_CombineRecipes(TArray<struct FUpgradeableItemRecipePerLevel> Recipe1, TArray<struct FUpgradeableItemRecipePerLevel> Recipe2);
	bool STATIC_CallConditionMemberFunction(class UObject* Base, const struct FName& FunctionName, class UObject* Context, bool* Success);
	void STATIC_ArchonLogText(class UObject* Target, const class FString& Text, const struct FName& LogCategory);
	void STATIC_ArchonLogLocation(class UObject* Target, const struct FVector& Location, const class FString& Text, const struct FLinearColor& ObjectColor, float Radius, const struct FName& LogCategory);
	void STATIC_ArchonLogLine(class UObject* Target, const struct FVector& Start, const struct FVector& End, float Radius, const class FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory);
	void STATIC_ArchonLogCircle(class UObject* Target, const struct FVector& Center, float Radius, int Segments, const class FString& Text, const struct FLinearColor& Color, const struct FName& LogCategory);
	void STATIC_ArchonLogBox(class UObject* Target, const struct FBox& BoxShape, const class FString& Text, const struct FLinearColor& ObjectColor, const struct FName& LogCategory);
	void STATIC_ApplyRootMotionConstantForce(class AActor* Actor, ERootMotionAccumulateMode AccumulateMode, const struct FVector& Velocity, float Duration, class UCurveFloat* StrengthOverTime, int* RootMotionSourceID);
	void STATIC_ApplyDamageRowBonusesToSpec(struct FGameplayEffectSpec* GameplayEffectSpec, struct FDamageTableBonuses* DamageTableBonuses, EPhysicalType* AttackPhysicalType, EElementType* AttackElementalType);
	void STATIC_ApplyArchonTruePointDamage(class AActor* DamagedActor, float TrueDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo);
	void STATIC_ApplyArchonTrueDamage(class AActor* DamagedActor, float TrueDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UPrimitiveComponent* HitComponent, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo);
	bool STATIC_ApplyArchonRadialTrueDamage(class UObject* WorldContextObject, float TrueDamage, const struct FVector& Origin, float DamageRadius, class UCurveFloat* DamageFalloffCurve, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<class UClass*> IgnoreClasses, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	bool STATIC_ApplyArchonRadialElementalDamage(class UObject* WorldContextObject, float FlameDamage, float FrostDamage, float ShockDamage, float UmbralDamage, float RadiantDamage, float RawElementalDamage, const struct FVector& Origin, float DamageRadius, class UCurveFloat* DamageFalloffCurve, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<class UClass*> IgnoreClasses, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	bool STATIC_ApplyArchonRadialDamageFromTable(class UObject* WorldContextObject, const struct FDamageTableData& DamageTable, const struct FVector& Origin, float DamageRadius, class UCurveFloat* DamageFalloffCurve, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<class UClass*> IgnoreClasses, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	bool STATIC_ApplyArchonRadialDamage(class UObject* WorldContextObject, float PhysicalDamage, float TrueDamage, float FlameDamage, float FrostDamage, float ShockDamage, float UmbralDamage, float RadiantDamage, float RawElementalDamage, const struct FVector& Origin, float DamageRadius, class UCurveFloat* DamageFalloffCurve, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, TArray<class UClass*> IgnoreClasses, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	void STATIC_ApplyArchonPointDamageFromTable(class AActor* DamagedActor, const struct FDamageTableData& DamageTable, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo, class UPrimitiveComponent* HitComponent, float DamageScale);
	void STATIC_ApplyArchonElementalPointDamage(class AActor* DamagedActor, float BaseDamage, float PhysicalDamage, float FlameDamage, float FrostDamage, float ShockDamage, float UmbralDamage, float RadiantDamage, float RawElementalDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo);
	void STATIC_ApplyArchonElementalDamage(class AActor* DamagedActor, float BaseDamage, float PhysicalDamage, float FlameDamage, float FrostDamage, float ShockDamage, float UmbralDamage, float RadiantDamage, float RawElementalDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, class UPrimitiveComponent* HitComponent, const struct FArchonExtendedDamageInfo& ExtendedDamageInfo);
	TArray<struct FCellSlot> STATIC_AddCellSlotToArrayBP(const struct FCellSlot& CellSlot, TArray<struct FCellSlot> CellSlots);
	TArray<struct FAppliedCellEffectCounter> STATIC_AddCellEffectToArrayBP(const struct FDataTableRowHandle& CellEffect, float MagnitudeIncrease, int RankIncrease, TArray<struct FAppliedCellEffectCounter> EquippedCellEffects);
	TArray<struct FAppliedCellEffectCounter> STATIC_AddCellEffectsToArrayBP(class UObject* WorldContextObject, const struct FName& CellRowName, TArray<struct FAppliedCellEffectCounter> EquippedCellEffects);
	bool STATIC_ActorLineTraceSingle(class AActor* Actor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FHitResult* OutHit);
	class UPrimitiveComponent* STATIC_ActorGetDistanceToCollision(class AActor* Actor, const struct FVector& Point, TEnumAsByte<ECollisionChannel> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, struct FVector* ClosestPointOnCollision, float* OutDistanceToCollision);
};


// Class Archon.ArchonMath
// 0x0000 (0x0028 - 0x0028)
class UArchonMath : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonMath");
		return ptr;
	}


	void STATIC_PointBoxIntersection(const struct FBox& Box, const struct FVector& Point, bool* IsPointInside);
	struct FRotator STATIC_LowPassFilter(const struct FRotator& Sample, const struct FRotator& PreviousValue, float TimeConstant, float DeltaTime);
	void STATIC_LineBoxIntersection(const struct FBox& Box, const struct FVector& Start, const struct FVector& End, bool* DoesLineIntersect, struct FVector* IntersectionPoint);
	void STATIC_LazyEvalStatistic_SetValueAndRate(class UObject* WorldContextObject, float NewValue, float newRate, struct FLazyEvalStatistic* statistic, struct FLazyEvalStatistic* statisticOut);
	void STATIC_LazyEvalStatistic_SetValue(class UObject* WorldContextObject, float NewValue, struct FLazyEvalStatistic* statistic, struct FLazyEvalStatistic* statisticOut);
	void STATIC_LazyEvalStatistic_SetRate(class UObject* WorldContextObject, float newRate, struct FLazyEvalStatistic* statistic, struct FLazyEvalStatistic* statisticOut);
	void STATIC_LazyEvalStatistic_SetMinMax(class UObject* WorldContextObject, float newMin, float newMax, struct FLazyEvalStatistic* statistic, struct FLazyEvalStatistic* statisticOut);
	float STATIC_LazyEvalStatistic_GetValue(class UObject* WorldContextObject, const struct FLazyEvalStatistic& statistic);
	float STATIC_LazyEvalStatistic_GetRate(class UObject* WorldContextObject, const struct FLazyEvalStatistic& statistic);
	void STATIC_GetBoxCenterAndExtents(const struct FBox& Box, struct FVector* Center, struct FVector* Extents);
	struct FBox STATIC_CreateBoxFromPoints(TArray<struct FVector> Points);
	struct FBox STATIC_CreateBox(const struct FVector& Offset, const struct FVector& Extents);
	struct FVector STATIC_ClampNormalizedVector(const struct FVector& V, const struct FVector& Middle, float HalfAngleDeg);
};


// Class Archon.ArchonGameSession
// 0x0018 (0x03B8 - 0x03A0)
class AArchonGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	bool                                               bDisableMatchMakerAuth;                                   // 0x03B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameSession");
		return ptr;
	}

};


// Class Archon.ArchonGameSession_City
// 0x0000 (0x03B8 - 0x03B8)
class AArchonGameSession_City : public AArchonGameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameSession_City");
		return ptr;
	}

};


// Class Archon.ArchonGameSession_Island
// 0x0000 (0x03B8 - 0x03B8)
class AArchonGameSession_Island : public AArchonGameSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameSession_Island");
		return ptr;
	}

};


// Class Archon.ArchonGameState
// 0x0008 (0x03F0 - 0x03E8)
class AArchonGameState : public AGameState
{
public:
	bool                                               bDamagePowerAndResistanceEnabled;                         // 0x03E8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameState");
		return ptr;
	}


	void ToggleNameplateVisibility();
	void SetNameplateVisibility(bool Visible);
	bool K2_IsMatchInProgress();
	bool K2_HasMatchStarted();
	bool K2_HasMatchEnded();
	void K2_HandleMatchIsWaitingToStart();
	void K2_HandleMatchHasStarted();
	void K2_HandleMatchHasEnded();
	void K2_HandleLeavingMap();
	TArray<class APlayerState*> GetActivePlayers();
	class APlayerState* FindPlayerByNetId(const struct FUniqueNetIdRepl& NetId);
	bool AreNameplatesVisible();
};


// Class Archon.ArchonGameUserSettings
// 0x0090 (0x01E0 - 0x0150)
class UArchonGameUserSettings : public UGameUserSettings
{
public:
	int                                                GraphicsQuality;                                          // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x0154(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsLanMatch;                                              // 0x0158(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	class FString                                      LastLoginEmail;                                           // 0x0160(0x0010) (ZeroConstructor, Config)
	class FString                                      LastRegion;                                               // 0x0170(0x0010) (ZeroConstructor, Config)
	float                                              MusicVolume;                                              // 0x0180(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              EffectsVolume;                                            // 0x0184(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x0188(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                VoiceLanguage;                                            // 0x018C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                TextLanguage;                                             // 0x0190(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                CharacterPronoun;                                         // 0x0194(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                Subtitles;                                                // 0x0198(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                DamageText;                                               // 0x019C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	EPartyInviteFilter                                 IncomingPartyInvitesFilter;                               // 0x01A0(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bGamepadInvertXAxis;                                      // 0x01A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bGamepadInvertYAxis;                                      // 0x01A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMouseInvertXAxis;                                        // 0x01A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMouseInvertYAxis;                                        // 0x01A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              CameraSensitivity;                                        // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	class FString                                      AccountName;                                              // 0x01B0(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	int                                                TeamInvites;                                              // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	class FString                                      AccountLink;                                              // 0x01C8(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	bool                                               bIsUsingGamepad;                                          // 0x01D8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bOnlyHandleGamepadWhenActive;                             // 0x01D9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x01DA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGameUserSettings");
		return ptr;
	}

};


// Class Archon.ArchonGuild
// 0x0098 (0x0420 - 0x0388)
class AArchonGuild : public AActor
{
public:
	class FString                                      GuildId;                                                  // 0x0388(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class FString                                      Name;                                                     // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class FString                                      Nameplate;                                                // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class FString                                      LeaderCharacterId;                                        // 0x03B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FArchonGuildMember>                  Members;                                                  // 0x03C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FArchonGuildInvite>                  Invites;                                                  // 0x03D8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnGuildMemberListUpdated;                                 // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGuildInviteListUpdated;                                 // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonGuild");
		return ptr;
	}


	void OnRep_MemberList();
	void OnRep_InviteList();
	TArray<struct FArchonGuildMember> GetSortedMemberList();
	TArray<struct FArchonGuildInvite> GetSortedInviteList();
	bool GetGuildMemberInfo(const class FString& CharacterId, struct FArchonGuildMember* MemberInfo);
};


// Class Archon.ArchonHeal
// 0x0000 (0x0040 - 0x0040)
class UArchonHeal : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonHeal");
		return ptr;
	}


	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class Archon.ArchonHealthAttributeSet
// 0x00F0 (0x0120 - 0x0030)
class UArchonHealthAttributeSet : public UAttributeSet
{
public:
	float                                              CurrentHealth;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentShield;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFlameHealth;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlameHealth;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFrostHealth;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxFrostHealth;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentShockHealth;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxShockHealth;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRadiantHealth;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadiantHealth;                                         // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentUmbralHealth;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxUmbralHealth;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GlobalResistance;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalResistance;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ElementalResistance;                                      // 0x006C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistance;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistance;                                          // 0x0074(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistance;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistance;                                        // 0x007C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistance;                                         // 0x0080(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalMultiplicativeResistance;                         // 0x0084(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameMultiplicativeResistance;                            // 0x0088(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostMultiplicativeResistance;                            // 0x008C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockMultiplicativeResistance;                            // 0x0090(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantMultiplicativeResistance;                          // 0x0094(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralMultiplicativeResistance;                           // 0x0098(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              HealRadius;                                               // 0x00A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Stamina;                                                  // 0x00A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxStamina;                                               // 0x00A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaminaRegen;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaminaConsumption;                                       // 0x00B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LanternChargeMultiplier;                                  // 0x00B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LanternChargePerHitBonus;                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ConsumableHealMultiplier;                                 // 0x00BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ConsumableDurationMultiplier;                             // 0x00C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              AggroMultiplier;                                          // 0x00C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              EvadeInvulnerabilityMultiplier;                           // 0x00C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              EvadeStaminaCostMultiplier;                               // 0x00CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              GlobalSelfPostMigationMultiplier;                         // 0x00D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ElementalSelfPostMigationMultiplier;                      // 0x00D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalSelfPostMigationMultiplier;                       // 0x00D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameSelfPostMigationMultiplier;                          // 0x00DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostSelfPostMigationMultiplier;                          // 0x00E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockSelfPostMigationMultiplier;                          // 0x00E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantSelfPostMigationMultiplier;                        // 0x00E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralSelfPostMigationMultiplier;                         // 0x00EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerArmorMultiplier;                                   // 0x00F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerArmorFlatBonus;                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerRegenMultiplier;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StaggerRegenFlatBonus;                                    // 0x00FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusShockedEffectivenessMultiplier;                     // 0x0100(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusWoundedEffectivenessMultiplier;                     // 0x0104(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusOnFireEffectivenessMultiplier;                      // 0x0108(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusCorruptionEffectivenessMultiplier;                  // 0x010C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusChilledEffectivenessMultiplier;                     // 0x0110(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusSwarmedEffectivenessMultiplier;                     // 0x0114(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StatusShatterEffectivenessMultiplier;                     // 0x0118(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonHealthAttributeSet");
		return ptr;
	}


	void OnRep_CurrentHealth();
};


// Class Archon.ArchonHUD
// 0x0060 (0x04D0 - 0x0470)
class AArchonHUD : public AHUD
{
public:
	struct FScriptMulticastDelegate                    OnPlayerTalkingStateChangedEvent;                         // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0480(0x0040) MISSED OFFSET
	class AActor*                                      CurrentActor;                                             // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonHUD");
		return ptr;
	}


	void ShowDebug(const struct FName& DebugType);
	void PreviousDebugTarget();
	void OnSurveyTriggered(const class FString& SurveyURL);
	void NextDebugTarget();
	void K2_OnPlayerTalkingStateChanged(int TalkingPlayerId, bool bIsTalking);
	void K2_OnHUDVisibityChanged(bool PreviousVisibility, bool NewVisibility);
	void DebugBone(const struct FName& Bone);
	void ArchonCycleShowDebug();
};


// Class Archon.ArchonInteractionComponent
// 0x00E0 (0x02B0 - 0x01D0)
class UArchonInteractionComponent : public UActorComponent
{
public:
	bool                                               IsInteracting;                                            // 0x01D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	TArray<class UArchonInteractionUserComponent*>     CurrentUsers;                                             // 0x01D8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	bool                                               InteractionDisabled;                                      // 0x01E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               LocalInteractionDisabled;                                 // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01EA(0x0002) MISSED OFFSET
	float                                              InteractionDuration;                                      // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteractionRange;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ServerInteractionRangePadding;                            // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TAssetPtr<class UAnimMontage>                      PlayerInteractionMontage;                                 // 0x01F8(0x0020) (Edit, BlueprintVisible)
	struct FName                                       MontageStartSectionName;                                  // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageInterruptSectionName;                              // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageEndSectionName;                                    // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            InteractionCallout;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 ComponentsToHighlight;                                    // 0x0238(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               AllowMeshHighlight;                                       // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowChainedInteractions;                                 // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPerUserInteraction;                                     // 0x024A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x024B(0x0005) MISSED OFFSET
	TArray<struct FNumberOfUsesSelectionWeight>        NumberOfUseWeights;                                       // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                NumberOfUses;                                             // 0x0260(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                GlobalNumberOfUsesRemaining;                              // 0x0264(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FPerUserNumberOfUses>                PerUserNumberOfUses;                                      // 0x0268(0x0010) (Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnUserStartedInteraction;                                 // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserCanceledInteraction;                                // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUserCompletedInteraction;                               // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UAnimMontage*                                LoadedAnimMontage;                                        // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInteractionComponent");
		return ptr;
	}


	void UnhighlightInteraction(class UArchonInteractionUserComponent* User);
	void OnUserStartedInteraction__DelegateSignature(class UArchonInteractionUserComponent* User);
	void OnUserCompletedInteraction__DelegateSignature(class UArchonInteractionUserComponent* User);
	void OnUserCanceledInteraction__DelegateSignature(class UArchonInteractionUserComponent* User);
	void HighlightInteraction(class UArchonInteractionUserComponent* User);
	class UAnimMontage* GetPlayerInteractionMontage(class UArchonInteractionUserComponent* User);
	int GetNumberOfUsesRemaining(class UArchonInteractionUserComponent* User);
	float GetInteractionDuration(class UArchonInteractionUserComponent* User);
	bool BlueprintCanUserStartInteraction(class UArchonInteractionUserComponent* User);
};


// Class Archon.ArchonInteractionUserComponent
// 0x0030 (0x0200 - 0x01D0)
class UArchonInteractionUserComponent : public UActorComponent
{
public:
	float                                              ScanCameraDirectionOffset;                                // 0x01D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               NativeInteractionSystemEnabled;                           // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	float                                              InteractionScanRange;                                     // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInteracting;                                            // 0x01DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	class UArchonInteractionComponent*                 CurrentInteractionComponent;                              // 0x01E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArchonInteractionComponent*                 HighlightedInteractionComponent;                          // 0x01E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x01F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInteractionUserComponent");
		return ptr;
	}


	bool StartInteraction();
	void ServerStartInteraction(class UArchonInteractionComponent* interactionTarget);
	void ServerCancelCurrentInteraction(bool playInterruptMontage);
	void ClientInteractionRestarted();
	void ClientInteractionFailedToStart();
	void ClientInteractionCompleted();
	void CancelCurrentInteraction(bool playInterruptMontage);
	bool BlueprintCanStartInteraction(class UArchonInteractionComponent* interactionTarget);
};


// Class Archon.ArchonInterruptibleTimeout
// 0x0008 (0x0030 - 0x0028)
class UArchonInterruptibleTimeout : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInterruptibleTimeout");
		return ptr;
	}


	void WaitForTriggerOrTimeout(class UObject* WorldContextObject, float Timeout, const struct FLatentActionInfo& LatentInfo);
	void TriggerInterrupt();
	bool IsInterruptTriggered();
	class UArchonInterruptibleTimeout* STATIC_CreateInterruptibleTimeout();
};


// Class Archon.ArchonInventory
// 0x0628 (0x09B0 - 0x0388)
class AArchonInventory : public AActor
{
public:
	unsigned char                                      UnknownData00[0x398];                                     // 0x0388(0x0398) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClientOnInventoryChanged;                                 // 0x0720(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInstanceItemsUpdated;                             // 0x0730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UArchonInventoryItem*>                Items;                                                    // 0x0740(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FReplicatedItem>                     ReplicatedItems;                                          // 0x0750(0x0010) (Net, ZeroConstructor)
	TArray<struct FVirtualCurrency>                    VirtualCurrencies;                                        // 0x0760(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0770(0x0070) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemsRemovedDelegate;                                   // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemsGrantedDelegate;                                   // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnContainerUnlockedDelegate;                              // 0x0800(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemGrantedFromDustDelegate;                            // 0x0810(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0820(0x0004) MISSED OFFSET
	int                                                ExpectedNumItems;                                         // 0x0824(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0828(0x0004) MISSED OFFSET
	int                                                ItemIDCounter;                                            // 0x082C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0830(0x0010) MISSED OFFSET
	class AArchonPlayerController*                     PlayerController;                                         // 0x0840(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0848(0x0008) MISSED OFFSET
	class UArchonCatalog*                              Catalog;                                                  // 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LanternResistanceTable;                                   // 0x0858(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x0860(0x0014) MISSED OFFSET
	int                                                MaxLanterns;                                              // 0x0874(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class FString                                      LanternRecipeTag;                                         // 0x0878(0x0010) (ZeroConstructor, Config)
	int                                                NumItemsToReplicatePerBatch;                              // 0x0888(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ServerMaxWaitTimeForRepBatchResponse;                     // 0x088C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x120];                                     // 0x0890(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventory");
		return ptr;
	}


	bool UpgradeItem(const class FString& ItemInstanceId, const struct FCraftingPayload& Payload, const class FString& Source, const struct FName& ProgressTrackName);
	TArray<struct FGiveItemInfo> UnpackItems(TArray<struct FGiveItemInfo> ItemList);
	void UnlockContainer(const class FString& ContainerItemInstanceId, const class FString& Source, const class FString& BoostTokenId);
	void UnequipItem(class UArchonInventoryItem* InventoryItem);
	void SubtractVirtualCurrency(EPlayFabCatalogCurrency Currency, int Amount, const class FString& Source);
	void SpendDust(const class FString& Source);
	void ServerUpgradeItem(const class FString& ItemInstanceId, const struct FCraftingPayload& Payload, const class FString& Source, const struct FName& ProgressTrackName);
	void ServerUnlockContainer(const class FString& ContainerItemInstanceId, const class FString& Source, const class FString& BoostTokenId);
	void ServerSubtractVirtualCurrency(EPlayFabCatalogCurrency VirtualCurrency, int Amount, const class FString& Source);
	void ServerSpendDust(const class FString& Source);
	void ServerSetTransmogCatalogID(const class FString& ItemInstanceId, const class FString& TransmogId);
	void ServerSetDyeConfiguration(const class FString& ItemInstanceId, const struct FDyeVariant& DyeConfiguration);
	void ServerRevokeItem(uint16_t InstanceId, const class FString& Source);
	void ServerRemoveCell(const class FString& ItemInstanceId, const class FString& CellID, int SlotIndex);
	void ServerRefreshInventory();
	void ServerPurchaseItemFromStore(const class FString& ItemID, const class FString& StoreID, const class FString& Source);
	void ServerPurchaseItemFromCatalog(const class FString& ItemID, const class FString& Source);
	void ServerPatronBoost(int SelfBoost, int OtherBoost);
	void ServerItemCustomDataReplicatedResponse(TArray<uint16_t> UpdatedItems);
	void ServerGrantItems(TArray<struct FGiveItemInfo> ItemsToAdd, const class FString& Source);
	void ServerDustItem(const class FString& ItemInstanceId, const class FString& Source);
	void ServerCraftItemFromCatalogData(const class FString& ItemID, const struct FCraftingPayload& Payload, const class FString& Source, const struct FName& ProgressTrackName);
	void ServerCraftItem(uint16_t InstanceId, const struct FCraftingPayload& Payload, const class FString& Source);
	void ServerConsumeItem(uint16_t InstanceId, int Amount, const class FString& Source);
	void ServerClearTransmogCatalogID(const class FString& ItemInstanceId);
	void ServerChampionBoost();
	void ServerAddVirtualCurrency(EPlayFabCatalogCurrency VirtualCurrency, int Amount, const class FString& Source);
	void ServerAddCell(const class FString& ItemInstanceId, const class FString& CellID, int SlotIndex);
	void RevokeItem(class UArchonInventoryItem* InventoryItem, const class FString& Source);
	void PurchaseItemFromStore(const class FString& ItemID, const class FString& StoreID, const class FString& Source);
	void PurchaseItemFromCatalog(const class FString& ItemID, const class FString& Source);
	void PatronBoost(int SelfBoost, int OtherBoost);
	void OnRep_ReplicatedItems();
	void InventoryUpgradeItem(const class FString& ItemID);
	void InventorySubtractVirtualCurrency(EPlayFabCatalogCurrency VirtualCurrency, int Amount);
	void InventoryRevokeItem(int ItemIndex);
	void InventoryPrint();
	void InventoryGrantItems(const class FString& ItemID, int Amount);
	void InventoryGrantItem(const class FString& ItemID);
	void InventoryCraftItemFromCatalogData(const class FString& ItemID);
	void InventoryCraftItem(const class FString& RecipeItemId);
	void InventoryConsumeItem(int ItemIndex, int Amount);
	void InventoryAddVirtualCurrency(EPlayFabCatalogCurrency VirtualCurrency, int Amount);
	bool HasReachedMaxLanterns();
	bool HasPatronBoost();
	bool HasItemFromItemId(const class FString& ItemID);
	bool HasItemFromInstanceId(const class FString& ItemInstanceId);
	bool HasChampionBoost();
	void GrantItemsWithQuantity(TArray<struct FPlayFabCatalogItemQuantity> ItemsWithQuantity, const class FString& Source);
	void GrantItems(TArray<class FString> ItemIDs, const class FString& Source);
	void GrantItem(const class FString& ItemID, const class FString& Source);
	TArray<struct FCatalogRecipeComponent> GetRecipeComponentsFromCatalog(const class FString& ItemID, EUpgradeableItemLevel ItemLevel);
	TArray<struct FQuestRequirement> GetQuestRequirementsForItem(const class FString& ItemID, EUpgradeableItemLevel ItemLevel);
	TArray<class FString> GetOtherPlayersWithPatronBoost();
	class UArchonInventoryItem* GetItemFromItemId(const class FString& ItemID);
	class UArchonInventoryItem* GetItemFromInstanceId(const class FString& ItemInstanceId);
	class FString GetItemDustResult(const class FString& ItemInstanceId);
	int GetDustThreshold();
	int GetCurrentDust();
	TArray<class FString> GetContainerPatronBoostPlayers(const class FString& ContainerItemInstanceId);
	int GetContainerCount();
	void EquipItems(TArray<class UArchonInventoryItem*> InventoryItems);
	void EquipItem(class UArchonInventoryItem* InventoryItem);
	bool DoesContainerHaveChampionBoost(const class FString& ContainerItemInstanceId);
	bool CraftItemFromCatalogData(const class FString& ItemID, const struct FCraftingPayload& Payload, const class FString& Source, const struct FName& ProgressTrackName);
	bool CraftItem(class UArchonInventoryItem* RecipeItem, const struct FCraftingPayload& Payload, const class FString& Source);
	void ConsumeItem(class UArchonInventoryItem* InventoryItem, int Amount, const class FString& Source);
	void ClientItemRemoved(TArray<struct FRemovedItemNotification> RemovedNotification);
	void ClientItemGrantedFromDust(const class FString& ItemID);
	void ClientItemGranted(TArray<struct FGrantedItemNotification> GrantedNotification);
	void ClientItemCustomDataReplicated(TArray<struct FReplicatedInventoryItemCustomData> ReplicatedCustomData);
	void ClientCraftItemComplete(bool bWasSuccessful);
	void ClientContainerUnlocked(TArray<struct FGrantedItemNotification> Notifications);
	void ChampionBoost();
	bool CanUpgradeToNewItem(const class FString& ItemInstanceId, class FString* ItemToUpgradeTo);
	bool CanTransmogItem(const class FString& ItemInstanceId, const class FString& TransmogId);
	bool CanRemoveCell(const class FString& ItemInstanceId, const class FString& CellID, int SlotIndex);
	bool CanDustItem(const class FString& ItemInstanceId);
	bool CanAddCell(const class FString& ItemInstanceId, const class FString& CellID, int SlotIndex);
	void AddVirtualCurrency(EPlayFabCatalogCurrency Currency, int Amount, const class FString& Source);
};


// Class Archon.ArchonQuickItem
// 0x0060 (0x05F0 - 0x0590)
class UArchonQuickItem : public UGameplayAbility
{
public:
	class UObject*                                     Icon;                                                     // 0x0590(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       AllowedTagFilter;                                         // 0x0598(0x0020) (Edit, DisableEditOnInstance)
	class UClass*                                      GameplayAbilityClass;                                     // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnlimitedUse;                                             // 0x05C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	struct FScalableFloat                              InventoryRechargeTime;                                    // 0x05C8(0x0028) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuickItem");
		return ptr;
	}

};


// Class Archon.ArchonInventoryComponent
// 0x0030 (0x0200 - 0x01D0)
class UArchonInventoryComponent : public UActorComponent
{
public:
	TArray<struct FArchonQuickSlot>                    QuickSlots;                                               // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x01E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryComponent");
		return ptr;
	}


	bool UnequipItem(const struct FName& Slot);
	bool StartUseItem(const struct FName& Slot);
	void OnPawnUnPossesed(class APawn* Pawn);
	void OnPawnPossesed(class APawn* Pawn);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
	bool InUse(const struct FName& Slot);
	int GetSlotCount(const struct FName& Slot);
	float GetPrecentageTimeToRecharge(const struct FName& Slot);
	class UArchonQuickItem* GetItem(const struct FName& Slot);
	class UObject* GetIcon(const struct FName& Slot);
	float GetCoolDownTime(const struct FName& Slot);
	float GetCoolDownPercentage(const struct FName& Slot);
	void EquipItem(class UClass* Item, const struct FName& Slot, int Count, int AbilityLevel, bool bReplaceExisting);
	bool CanUseItem(const struct FName& Slot);
	bool CancelUseItem(const struct FName& Slot);
};


// Class Archon.ArchonInventoryItem
// 0x0090 (0x00B8 - 0x0028)
class UArchonInventoryItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UDataTable*                                  Catalog;                                                  // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	uint32_t                                           ItemIdCrc;                                                // 0x0060(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class FString                                      ItemID;                                                   // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FStringClassReference                       ItemClass;                                                // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0098(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                RemainingUses;                                            // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsContainer;                                              // 0x00B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsBundle;                                                 // 0x00B5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem");
		return ptr;
	}


	bool IsCosmeticOnly();
	bool HasTransmog();
	bool HasDefaultDyeConfiguration();
	struct FName GetTransmogID();
	struct FDyeVariant GetDyeConfiguration();
	bool CanTransmog();
	bool CanChangeDyeConfiguration();
	bool CanBeTransmogTarget();
};


// Class Archon.ArchonInventoryItem_Upgradeable
// 0x0008 (0x00C0 - 0x00B8)
class UArchonInventoryItem_Upgradeable : public UArchonInventoryItem
{
public:
	EUpgradeableItemLevel                              CurrentLevel;                                             // 0x00B8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Upgradeable");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_CellContainer
// 0x0010 (0x00D0 - 0x00C0)
class UArchonInventoryItem_CellContainer : public UArchonInventoryItem_Upgradeable
{
public:
	TArray<struct FEquippedCellData>                   EquippedCells;                                            // 0x00C0(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_CellContainer");
		return ptr;
	}


	TArray<struct FPermanentCell> GetPermanentCells();
	TArray<struct FCellSlot> GetCellSlotsForLevel(EUpgradeableItemLevel Level);
	TArray<struct FCellSlot> GetCellSlots();
	TArray<struct FAppliedCellEffectCounter> GetAllPermanentCellEffects();
};


// Class Archon.ArchonInventoryItem_Armour
// 0x0020 (0x00F0 - 0x00D0)
class UArchonInventoryItem_Armour : public UArchonInventoryItem_CellContainer
{
public:
	struct FDyeVariant                                 DyeConfiguration;                                         // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FName                                       TransmogCatalogID;                                        // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmorType;                                                // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Armour");
		return ptr;
	}


	void ServerSetTransmogCatalogID(const struct FName& NewTransmogID);
	void ServerSetDyeColor(const struct FDyeVariant& NewDyeConfiguration);
};


// Class Archon.ArchonInventoryItem_Banner
// 0x0080 (0x0138 - 0x00B8)
class UArchonInventoryItem_Banner : public UArchonInventoryItem
{
public:
	struct FBannerCustomizationItemIDs                 CustomizationItemIDs;                                     // 0x00B8(0x0080) (BlueprintVisible, BlueprintReadOnly, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Banner");
		return ptr;
	}


	void ServerSetCustomizationData(const struct FBannerCustomizationItemIDs& NewCustomizationItemIDs);
};


// Class Archon.ArchonInventoryItem_BannerCustomization
// 0x0000 (0x00B8 - 0x00B8)
class UArchonInventoryItem_BannerCustomization : public UArchonInventoryItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_BannerCustomization");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Cell
// 0x0000 (0x00B8 - 0x00B8)
class UArchonInventoryItem_Cell : public UArchonInventoryItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Cell");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Container
// 0x0020 (0x00D8 - 0x00B8)
class UArchonInventoryItem_Container : public UArchonInventoryItem
{
public:
	TArray<class FString>                              Boosts;                                                   // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<class FString>                              BoostSources;                                             // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Container");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Emote
// 0x0038 (0x00F0 - 0x00B8)
class UArchonInventoryItem_Emote : public UArchonInventoryItem
{
public:
	struct FStringAssetReference                       AnimSequenceAssetReference;                               // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	TAssetPtr<class UAnimSequenceBase>                 AnimSequenceAsset;                                        // 0x00C8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	EEmoteType                                         EmoteType;                                                // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponRestriction;                                        // 0x00E9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00EA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Emote");
		return ptr;
	}


	void ResolveReference();
};


// Class Archon.ArchonInventoryItem_Flask
// 0x0020 (0x00F0 - 0x00D0)
class UArchonInventoryItem_Flask : public UArchonInventoryItem_CellContainer
{
public:
	class FString                                      HealCatalogItem;                                          // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ReviveCatalogItem;                                        // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Flask");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Lantern
// 0x0048 (0x0118 - 0x00D0)
class UArchonInventoryItem_Lantern : public UArchonInventoryItem_CellContainer
{
public:
	float                                              AbilityStrength;                                          // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              ChargeRate;                                               // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              GlobalResistance;                                         // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistance;                                          // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistance;                                          // 0x00E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistance;                                          // 0x00E4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistance;                                        // 0x00E8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistance;                                         // 0x00EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FArmourSetKeyword>                   Keywords;                                                 // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FName                                       TransmogCatalogID;                                        // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              CachedLanternData;                                        // 0x0108(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Lantern");
		return ptr;
	}


	void ServerSetTransmogCatalogID(const struct FName& NewTransmogID);
};


// Class Archon.ArchonInventoryItem_QuickItem
// 0x0018 (0x00D0 - 0x00B8)
class UArchonInventoryItem_QuickItem : public UArchonInventoryItem
{
public:
	class UClass*                                      AbilityClass;                                             // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxStackSize;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDurable;                                                // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              RefillRate;                                               // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPassive;                                                // 0x00CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EQuickItemSlot                                     SlotType;                                                 // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_QuickItem");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Recipe
// 0x0008 (0x00C0 - 0x00B8)
class UArchonInventoryItem_Recipe : public UArchonInventoryItem
{
public:
	class UCraftingRecipeDataAsset*                    RecipeData;                                               // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Recipe");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Title
// 0x0000 (0x00B8 - 0x00B8)
class UArchonInventoryItem_Title : public UArchonInventoryItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Title");
		return ptr;
	}

};


// Class Archon.ArchonInventoryItem_Weapon
// 0x0010 (0x00E0 - 0x00D0)
class UArchonInventoryItem_Weapon : public UArchonInventoryItem_CellContainer
{
public:
	struct FName                                       TransmogCatalogID;                                        // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponType;                                               // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInventoryItem_Weapon");
		return ptr;
	}


	void ServerSetTransmogCatalogID(const struct FName& NewTransmogID);
};


// Class Archon.ArchonInvitationComponent
// 0x0020 (0x0400 - 0x03E0)
class UArchonInvitationComponent : public UArchonVOComponent
{
public:
	struct FScriptMulticastDelegate                    OnUserRequestedInvitation;                                // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              InvitationRange;                                          // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03F4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInvitationComponent");
		return ptr;
	}


	void OnUserRequestedInvitation__DelegateSignature(class UArchonInvitationUserComponent* User);
};


// Class Archon.ArchonInvitationUserComponent
// 0x0000 (0x01E0 - 0x01E0)
class UArchonInvitationUserComponent : public UArchonVOUserComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonInvitationUserComponent");
		return ptr;
	}

};


// Class Archon.ArchonIslandScriptActor
// 0x0000 (0x0390 - 0x0390)
class AArchonIslandScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonIslandScriptActor");
		return ptr;
	}

};


// Class Archon.ArchonLandscapeAccumulation
// 0x0000 (0x0028 - 0x0028)
class UArchonLandscapeAccumulation : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLandscapeAccumulation");
		return ptr;
	}


	bool STATIC_WriteLevelAccumulationToTexture(class AAccumulation* Accumulation, class UTexture2D* AccumulationTexture);
	bool STATIC_WriteLevelAccumulationToRenderTarget(class AAccumulation* Accumulation, class UTextureRenderTarget2D* AccumulationRenderTarget);
	class AAccumulation* STATIC_GetLevelAccumulationActor(class UObject* WorldContextObject);
};


// Class Archon.ArchonLantern
// 0x0040 (0x0430 - 0x03F0)
class AArchonLantern : public AArchonArmorSetItem
{
public:
	TArray<struct FArmourSetKeyword>                   Keywords;                                                 // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	float                                              MaximumCharge;                                            // 0x0400(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ChargePerDamageDone;                                      // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               CanChargeWhileDischarging;                                // 0x0408(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              AbilityStrength;                                          // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              ChargeRate;                                               // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class FString                                      ItemInstanceId;                                           // 0x0418(0x0010) (Net, ZeroConstructor)
	bool                                               IsEquipped;                                               // 0x0428(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0429(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLantern");
		return ptr;
	}


	bool LookupLanternResistanceTableRow(const struct FName& RowName, struct FLanternResistanceTableData* OutResistanceTableRow);
	TAssetPtr<class USkeletalMesh> GetLanternSkelMeshPtr();
	class FString GetItemInstanceID();
	void BP_OnLanternUnEquipped();
	void BP_OnLanternEquipped();
};


// Class Archon.ArchonListenerComponent
// 0x0020 (0x0450 - 0x0430)
class UArchonListenerComponent : public UAkListenerComponent
{
public:
	struct FName                                       SocketName;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraToPawnBlendPercent;                                 // 0x0438(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x043C(0x0008) MISSED OFFSET
	bool                                               ShowActorAndCameraAsGameObjects;                          // 0x0444(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableBlending;                                           // 0x0445(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0446(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonListenerComponent");
		return ptr;
	}

};


// Class Archon.ArchonLoadingDispatch
// 0x0080 (0x00A8 - 0x0028)
class UArchonLoadingDispatch : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPlayerControllerReady;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerStateReady;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerCharacterReady;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyClientReady;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLoadoutReady;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerAppearanceReady;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuestSystemReady;                                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLoadingDispatch");
		return ptr;
	}


	void QuestSystemReady();
	void PlayerStateReady();
	void PlayerControllerReady();
	void PlayerCharacterReady();
	void PlayerAppearanceReady();
	void OnReset();
	void LobbyClientReady();
	void LoadoutAssetReady(class ACharacter* Character);
	bool IsQuestSystemReady();
	bool IsPlayerStateReady();
	bool IsPlayerLoadoutReady();
	bool IsPlayerControllerReady();
	bool IsPlayerCharacterReady();
	bool IsPlayerAppearanceReady();
	bool IsLobbyClientReady();
};


// Class Archon.ArchonLoadingInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonLoadingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLoadingInterface");
		return ptr;
	}


	void OutputDebugInformation();
	bool HasFinishedLoading();
};


// Class Archon.ArchonLoadout
// 0x0218 (0x05A0 - 0x0388)
class AArchonLoadout : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0388(0x00E8) MISSED OFFSET
	TArray<struct FLoadoutQuickItemSlotMapping>        QuickItemSlotMappings;                                    // 0x0470(0x0010) (ZeroConstructor, Config)
	struct FScriptMulticastDelegate                    ServerOnLoadoutChanged;                                   // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnLoadoutChanged;                                   // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x04A0(0x0018) MISSED OFFSET
	class AArchonPlayerController*                     PlayerController;                                         // 0x04B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AArchonInventory*                            Inventory;                                                // 0x04C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FInventoryLoadout                           CurrentLoadout;                                           // 0x04C8(0x0080) (Net)
	TArray<class UArchonInventoryItem_QuickItem*>      FlaskQuickItemRefs;                                       // 0x0548(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0558(0x0038) MISSED OFFSET
	TArray<class UArchonInventoryItem*>                DontGarbageCollectThese;                                  // 0x0590(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLoadout");
		return ptr;
	}


	void UseQuickItem(int Index);
	void ServerSetAppearanceData(const struct FArchonAppearanceData& AppearanceData);
	void ServerOnUpgradeItemLevel(class UArchonInventoryItem_Upgradeable* InventoryItem);
	void ServerInternalAssignWeapon(int16_t InstanceId);
	void ServerInternalAssignTitle(int16_t InstanceId);
	void ServerInternalAssignQuickItem(int16_t InstanceId, ELoadoutQuickItemSlot Slot);
	void ServerInternalAssignManualEmote(int16_t InstanceId, int Index);
	void ServerInternalAssignLegsArmour(int16_t InstanceId);
	void ServerInternalAssignLantern(int16_t InstanceId);
	void ServerInternalAssignIntroEmote(int16_t InstanceId);
	void ServerInternalAssignHelmetArmour(int16_t InstanceId);
	void ServerInternalAssignFlask(int16_t InstanceId);
	void ServerInternalAssignEndEmote(int16_t InstanceId);
	void ServerInternalAssignChestArmour(int16_t InstanceId);
	void ServerInternalAssignBanner(int16_t InstanceId);
	void ServerInternalAssignArmsArmour(int16_t InstanceId);
	void ServerCommitLoadout();
	void ServerAssignWeapon(class UArchonInventoryItem* WeaponItem);
	void ServerAssignTitle(class UArchonInventoryItem_Title* Title);
	void ServerAssignQuickItem(class UArchonInventoryItem* QuickItem, ELoadoutQuickItemSlot Slot);
	void ServerAssignManualEmote(class UArchonInventoryItem_Emote* Emote, int Index);
	void ServerAssignLegsArmour(class UArchonInventoryItem* ArmourItem);
	void ServerAssignLantern(class UArchonInventoryItem* LanternItem);
	void ServerAssignIntroEmote(class UArchonInventoryItem_Emote* Emote);
	void ServerAssignHelmetArmour(class UArchonInventoryItem* ArmourItem);
	void ServerAssignFlask(class UArchonInventoryItem_Flask* FlaskItem);
	void ServerAssignEndEmote(class UArchonInventoryItem_Emote* Emote);
	void ServerAssignChestArmour(class UArchonInventoryItem* ArmourItem);
	void ServerAssignBanner(class UArchonInventoryItem* BannerItem);
	void ServerAssignArmsArmour(class UArchonInventoryItem* ArmourItem);
	void OnRep_CurrentLoadout();
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
	bool IsItemEquipped(class UArchonInventoryItem* Item);
	class UArchonInventoryItem_Weapon* GetWeapon();
	class UArchonInventoryItem_Title* GetTitle();
	TArray<struct FLoadoutQuickItem> GetQuickItems();
	TAssetPtr<class UTexture2D> GetQuickItemIcon(int Index);
	float GetQuickItemCoolDownTime(int Index);
	float GetQuickItemCoolDownPercentage(int Index);
	int GetQuickItemAvailableUses(int Index);
	class UArchonInventoryItem_QuickItem* GetQuickItem(int Index);
	class UArchonInventoryItem_Emote* GetManualEmote(int Index);
	class UArchonInventoryItem_Armour* GetLegsArmour();
	class UArchonInventoryItem_Lantern* GetLantern();
	class UArchonInventoryItem_Emote* GetIntroEmote();
	class UArchonInventoryItem_Armour* GetHelmetArmour();
	class UArchonInventoryItem_Flask* GetFlask();
	class UArchonInventoryItem_Emote* GetEndEmote();
	class UArchonInventoryItem_Armour* GetChestArmour();
	class UArchonInventoryItem_Banner* GetBanner();
	class UArchonInventoryItem_Armour* GetArmsArmour();
	class UArchonInventoryItem_Armour* GetArmourFromType(EArmorType ArmourType);
	bool CanUseQuickItem(int Index);
};


// Class Archon.ArchonLoadScreenWidget
// 0x0000 (0x02F0 - 0x02F0)
class UArchonLoadScreenWidget : public UArchonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLoadScreenWidget");
		return ptr;
	}


	void ScreenFadeOut(TEnumAsByte<ELoadScreenStyle> LoadScreenStyle);
	void ScreenFadeIn(TEnumAsByte<ELoadScreenStyle> LoadScreenStyle);
};


// Class Archon.ArchonLobbyHost
// 0x02A8 (0x0630 - 0x0388)
class AArchonLobbyHost : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x238];                                     // 0x0388(0x0238) MISSED OFFSET
	TArray<struct FArchonLobby>                        Lobbies;                                                  // 0x05C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x60];                                      // 0x05D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLobbyHost");
		return ptr;
	}

};


// Class Archon.ArchonLobbyClient
// 0x06D8 (0x0A60 - 0x0388)
class AArchonLobbyClient : public AInfo
{
public:
	struct FScriptMulticastDelegate                    OnLobbyJoinedNotification;                                // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUpdatedNotification;                               // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMemberChangedNotification;                         // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMemberExitedNotification;                          // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMemberJoinedNotification;                          // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyChangedNotification;                               // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMatchmakingStartedNotification;                    // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMatchmakingSuccessNotification;                    // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMatchmakingFailedNotification;                     // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMatchmakingCanceledNotification;                   // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMissionTravelStartedNotification;                  // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyRallyMemberNotification;                           // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x468];                                     // 0x0448(0x0468) MISSED OFFSET
	struct FArchonLobby                                RepCurrentLobby;                                          // 0x08B0(0x00E0) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0990(0x0098) MISSED OFFSET
	class AArchonLobbyHost*                            AuthLobby;                                                // 0x0A28(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUniqueNetIdRepl                            OwnerNetId;                                               // 0x0A30(0x0018) (Transient)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0A48(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLobbyClient");
		return ptr;
	}


	void StartGame();
	void SetReady(bool IsReady);
	void ServerUpdateLobby(const struct FArchonLobbyMissionInfo& MissionInfo);
	void ServerStartMatchmaking(const struct FArchonLobbyStartGameInfo& GameInfo);
	void ServerStartGameInstance(const struct FArchonLobbyStartGameInfo& GameInfo);
	void ServerSetReady(bool IsReady);
	void ServerRallyUpUnreadyMembers();
	void ServerPromoteMember(const struct FUniqueNetIdRepl& InMemberId);
	void ServerLeaveLobby();
	void ServerKickMember(const struct FUniqueNetIdRepl& InMemberId);
	void ServerJoinLobby(const struct FArchonLobbyId& InLobbyId);
	void ServerGetLobbies();
	void ServerGetAvailableMemberList();
	void ServerDestroyLobby();
	void ServerCreateLobby(const struct FArchonLobbyMissionInfo& MissionInfo);
	void ServerCancelMatchmaking(const struct FArchonLobbyId& LobbyId);
	void ServerAddMember(const struct FUniqueNetIdRepl& InMemberId);
	void RallyUpUnreadyMembers();
	void OnRep_CurrentLobby();
	bool IsReady();
	bool IsPlayerInLobby(const struct FUniqueNetIdRepl& PlayerId);
	bool IsLobbyLeader();
	bool IsAlreadyInLobby();
	struct FArchonLobby GetCurrentLobbyInfo();
	class FString GetChatChannelName();
	bool FindPublicHunt(TArray<struct FName> Hunts);
	void FindGame();
	void ClientUpdateLobby(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientTravelToIsland(const struct FArchonLobbyStartGameInfo& GameInfo);
	void ClientStartMatchmaking(const struct FArchonLobbyStartGameInfo& GameInfo);
	void ClientSetReady(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientRallyUpUnreadyMembers();
	void ClientPromoteMember(const struct FUniqueNetIdRepl& MemberId, bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientOnLobbyUpdated(const struct FUniqueNetIdRepl& MemberId, const struct FArchonLobbyId& LobbyId, const struct FArchonLobbyMissionInfo& MissionInfo);
	void ClientOnLobbyMemberJoined(const struct FUniqueNetIdRepl& InstigatorMemberId, const struct FArchonLobbyId& LobbyId, const struct FUniqueNetIdRepl& MemberId);
	void ClientOnLobbyMemberExited(const struct FUniqueNetIdRepl& InstigatorMemberId, const struct FArchonLobbyId& LobbyId, const struct FUniqueNetIdRepl& MemberId, ELobbyMemberChangedReason Reason);
	void ClientOnLobbyMemberChanged(const struct FUniqueNetIdRepl& InstigatorMemberId, const struct FArchonLobbyId& LobbyId, const struct FUniqueNetIdRepl& MemberId, ELobbyMemberChangedReason Reason);
	void ClientOnLobbyJoined(const struct FUniqueNetIdRepl& MemberId, const struct FArchonLobbyId& LobbyId);
	void ClientLeaveLobby(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientLeaveChat(const struct FArchonLobbyId& LobbyId);
	void ClientKickMember(const struct FUniqueNetIdRepl& MemberId, bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientJoinLobby(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientJoinChat(const struct FArchonLobbyId& LobbyId);
	void ClientGetLobbies(bool bWasSuccessful, TArray<struct FArchonLobby> Lobbies, const class FString& Error);
	void ClientGetAvailableMemberList(bool bWasSuccessful, TArray<class APlayerState*> MembersArray, const class FString& Error);
	void ClientDestroyLobby(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientCreateLobby(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void ClientCancelMatchmaking(const struct FArchonLobbyId& LobbyId);
	void ClientAddMember(bool bWasSuccessful, const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void CancelMatchmaking();
	bool AreAllMembersReady();
	void STATIC_AddHuntToLobbyMission(const struct FName& HuntId, struct FArchonLobbyMissionInfo* MissionInfo);
};


// Class Archon.ArchonLobbyComponent
// 0x0290 (0x0460 - 0x01D0)
class UArchonLobbyComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLobbyMainUserLoggedIn;                                  // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyMainUserLoggedOut;                                 // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUserJoined;                                        // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUserLeft;                                          // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUserReadyStatusChange;                             // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyUserLoadoutChange;                                 // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyHuntIdChange;                                      // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyOverrideBehemothChange;                            // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyIslandCountdownStarted;                            // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyIslandTransitionStart;                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbyCandidateFailed;                                   // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RemainingIdealTime;                                       // 0x0280(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RemainingForcedTime;                                      // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimerDuration;                                            // 0x0288(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseEditorGhost;                                           // 0x028C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	class FString                                      ChatChannel;                                              // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C0];                                     // 0x02A0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLobbyComponent");
		return ptr;
	}


	bool SetLobbyMainUserReadyState(bool Ready);
	bool SetLobbyMainUserLoadout();
	void OnLobbyUserReadyStatusChange__DelegateSignature(const class FString& UserId, int SlotIndex, bool bStatus);
	void OnLobbyUserLoadoutChange__DelegateSignature(const class FString& UserId, int SlotIndex, const struct FArchonLobbyPaperDollData& LoadoutData);
	void OnLobbyUserLeft__DelegateSignature(const class FString& UserId, int SlotIndex);
	void OnLobbyUserJoined__DelegateSignature(const class FString& UserId, int SlotIndex);
	void OnLobbyOverrideBehemothChange__DelegateSignature(const class FString& OverrideBehemoth);
	void OnLobbyMainUserLoggedOut__DelegateSignature(class AArchonPlayerController* PlayerController);
	void OnLobbyMainUserLoggedIn__DelegateSignature(class AArchonPlayerController* PlayerController);
	void OnLobbyIslandTransitionStart__DelegateSignature(const class FString& Params);
	void OnLobbyIslandCountdownStarted__DelegateSignature(float CountDownTime);
	void OnLobbyHuntIdChange__DelegateSignature(const class FString& HuntId);
	void OnLobbyCandidateFailed__DelegateSignature(const class FString& Params);
	void MarkCallbacksBound();
	bool LeaveParty();
	bool HasJoinedChat();
	int GetSlotForPlayer(const class FString& PlayerId);
};


// Class Archon.ArchonLobbyPaperDoll
// 0x0398 (0x07A8 - 0x0410)
class AArchonLobbyPaperDoll : public ASkeletalMeshActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshHead;                                         // 0x0410(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshChest;                                        // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshHelm;                                         // 0x0420(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshHair;                                         // 0x0428(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshBeard;                                        // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshArms;                                         // 0x0438(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshLegs;                                         // 0x0440(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshLantern;                                      // 0x0448(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshWeapon;                                       // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	EArchonBodyType                                    BodyType;                                                 // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonGender                                      GenderId;                                                 // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x045A(0x0002) MISSED OFFSET
	int                                                SlotIndex;                                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               MeshAnimSequence;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopMeshAnimSequence;                                    // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class USkeletalMesh*                               MeshMaleBasicSkin;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshMaleBasicHead;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshFemaleBasicSkin;                                      // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshFemaleBasicHead;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshHelmet;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshChest;                                                // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshArms;                                                 // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshLegs;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshLantern;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshWeapon;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyPaperDollData                   PaperDollData;                                            // 0x04C0(0x0278) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMaterials;                                     // 0x0738(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            HelmDynamicMaterials;                                     // 0x0748(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            ChestDynamicMaterials;                                    // 0x0758(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            ArmsDynamicMaterials;                                     // 0x0768(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            LegsDynamicMaterials;                                     // 0x0778(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            LanternDynamicMaterials;                                  // 0x0788(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            WeaponDynamicMaterials;                                   // 0x0798(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLobbyPaperDoll");
		return ptr;
	}


	bool SetWeapon(class UArchonInventoryItem_Weapon* WeaponItem);
	bool SetupPaperDoll();
	bool SetRandomLoadoutAndAppearance();
	bool SetLoadoutAndAppearanceFromData(const struct FArchonLobbyPaperDollData& InPaperDollData);
	bool SetLantern(class UArchonInventoryItem_Lantern* LanternItem);
	bool SetArmorLegs(class UArchonInventoryItem_Armour* LegsItem);
	bool SetArmorHelmet(class UArchonInventoryItem_Armour* HelmetItem);
	bool SetArmorChest(class UArchonInventoryItem_Armour* ChestItem);
	bool SetArmorArms(class UArchonInventoryItem_Armour* ArmsItem);
	bool SetAppearance(const struct FArchonAppearanceData& ArchonAppearanceData);
	void BlueprintSetupSkinAndAppearance(TArray<struct FAppearanceStringData> StringData);
	void BlueprintSetDye(const struct FName& DyeName, TArray<class UMaterialInstanceDynamic*> DynamicMaterials, bool bPrimary);
};


// Class Archon.ArchonLocalizationAsset
// 0x0000 (0x0028 - 0x0028)
class UArchonLocalizationAsset : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocalizationAsset");
		return ptr;
	}


	void CollectLinesToTranslateBlueprint(TArray<struct FArchonFullLocalizationData>* ToTranslate);
};


// Class Archon.ArchonLocalizationAssetLibrary
// 0x0000 (0x0028 - 0x0028)
class UArchonLocalizationAssetLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocalizationAssetLibrary");
		return ptr;
	}


	void STATIC_RegisterClassForLocalization(class UObject* LocAsset);
};


// Class Archon.ArchonLocalizationContextCollector
// 0x0000 (0x0028 - 0x0028)
class UArchonLocalizationContextCollector : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocalizationContextCollector");
		return ptr;
	}


	void CollectContextBlueprint(class UObject* TargetObject, TMap<class FString, class FString>* LocalizationContext);
};


// Class Archon.ArchonLocalizationContextCollectorStatic
// 0x0000 (0x0028 - 0x0028)
class UArchonLocalizationContextCollectorStatic : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocalizationContextCollectorStatic");
		return ptr;
	}


	void STATIC_CollectContextFrom(class UObject* Object, TMap<class FString, class FString>* LocalizationContext);
};


// Class Archon.ArchonLocalPlayer
// 0x0070 (0x0238 - 0x01C8)
class UArchonLocalPlayer : public ULocalPlayer
{
public:
	class UArchonPersistentUser*                       PersistentUser;                                           // 0x01C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UChatClient*                                 ChatClient;                                               // 0x01D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UArchonFriends*                              FriendsClient;                                            // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UArchonPartyFinder*                          PartyFinder;                                              // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x01E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocalPlayer");
		return ptr;
	}


	void SetViewedNews();
	bool HasViewedNews();
	class UArchonPartyFinder* GetPartyFinder();
	struct FArchonLoginNews GetLatestNews();
	class UArchonFriends* GetFriendsClient();
	class UChatClient* GetChatClient();
};


// Class Archon.ArchonLocomotionSet
// 0x0018 (0x0048 - 0x0030)
class UArchonLocomotionSet : public UDataAsset
{
public:
	class UAnimMontage*                                DodgeMontage;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SheathedDodgeMontage;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TumbleMontage;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonLocomotionSet");
		return ptr;
	}

};


// Class Archon.ArchonMainMenuWidget
// 0x0060 (0x0350 - 0x02F0)
class UArchonMainMenuWidget : public UArchonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonMainMenuWidget");
		return ptr;
	}


	void StartMatchMarking();
	bool StartLoginWithEmail(const class FString& Email, const class FString& Password);
	bool StartLoginWithDummy();
	bool StartLoginWithAuthToken();
	bool StartLogin();
	void SetSavedRegion(const class FString& SavedRegion);
	void SetSavedEmail(const class FString& SavedEmail);
	void RecordLoginTime();
	void OnMatchMakingStarted();
	void OnMatchMakingFailed(const struct FText& Error);
	void OnMatchMakingComplete();
	void OnLoginStarted();
	void OnLoginFailed(const struct FText& ErrorString, const class FString& ErrorResponse);
	void OnLoginCompleted(const class FString& AccountId);
	bool IsLoggedIn();
	bool HasFinishedTutorial();
	bool HasAuthTokenInCommandLine();
	class FString GetSavedRegion();
	class FString GetSavedEmail();
};


// Class Archon.ArchonModifierVolumeIce
// 0x0000 (0x03C0 - 0x03C0)
class AArchonModifierVolumeIce : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonModifierVolumeIce");
		return ptr;
	}

};


// Class Archon.ArchonModifierVolumeWater
// 0x0000 (0x03C0 - 0x03C0)
class AArchonModifierVolumeWater : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonModifierVolumeWater");
		return ptr;
	}

};


// Class Archon.ArchonMovementAttributeSet
// 0x0008 (0x0038 - 0x0030)
class UArchonMovementAttributeSet : public UAttributeSet
{
public:
	float                                              BaseMovementSpeed;                                        // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              SprintMovementSpeed;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonMovementAttributeSet");
		return ptr;
	}

};


// Class Archon.ArchonOnlineSessionClient
// 0x0050 (0x0310 - 0x02C0)
class UArchonOnlineSessionClient : public UOnlineSessionClient
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonOnlineSessionClient");
		return ptr;
	}


	class FString STATIC_GetSavedRegion();
};


// Class Archon.ArchonOpenBetaProgression
// 0x0000 (0x0038 - 0x0038)
class UArchonOpenBetaProgression : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonOpenBetaProgression");
		return ptr;
	}

};


// Class Archon.ArchonOptionUserWidget
// 0x0058 (0x0348 - 0x02F0)
class UArchonOptionUserWidget : public UArchonUserWidget
{
public:
	class UArchonGameUserSettings*                     UserSettings;                                             // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UserSettingGraphicsQuality;                               // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UserSettingResolutionScale;                               // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinSensitivity;                                           // 0x0300(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UserSettingSensitivity;                                   // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0308(0x0004) MISSED OFFSET
	unsigned char                                      bInvertYAxisOpt : 1;                                      // 0x030C(0x0001) (BlueprintVisible)
	unsigned char                                      bFemale : 1;                                              // 0x030C(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	struct FIntPoint                                   UserSettingResolution;                                    // 0x0310(0x0008) (BlueprintVisible, IsPlainOldData)
	TArray<struct FIntPoint>                           AvailableResolutions;                                     // 0x0318(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               ResolutionsNameList;                                      // 0x0328(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              EffectsVolume;                                            // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MusicVolume;                                              // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceVolume;                                              // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonOptionUserWidget");
		return ptr;
	}


	void SetWindowedMode(bool windowed, bool fullscreen);
	void SetQualityLevelAutomatically();
	void SetQualityLevel(int QualityLevel);
	void RevertChanges();
	void OnConstruct();
	void LoadUserSettings();
	bool IsWindowedFullScreen();
	bool IsWindowed();
	bool IsFullScreen();
	int GetQualityLevel();
	void ApplySettings();
};


// Class Archon.ArchonParticleModuleAudioBase
// 0x0000 (0x0030 - 0x0030)
class UArchonParticleModuleAudioBase : public UParticleModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonParticleModuleAudioBase");
		return ptr;
	}

};


// Class Archon.ArchonParticleModuleAudioEmitter
// 0x0068 (0x0098 - 0x0030)
class UArchonParticleModuleAudioEmitter : public UArchonParticleModuleAudioBase
{
public:
	class UAkAudioEventBase*                           AkAudioEvent;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAkAudioSettings                            Settings;                                                 // 0x0038(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      StopAudioOnParticleEnd : 1;                               // 0x0044(0x0001) (Edit)
	unsigned char                                      AutoPlay : 1;                                             // 0x0044(0x0001) (Edit)
	unsigned char                                      StopWhenOwnerDestroyed : 1;                               // 0x0044(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x53];                                      // 0x0045(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonParticleModuleAudioEmitter");
		return ptr;
	}

};


// Class Archon.ArchonParticleModuleAudioOneShotOnSpawn
// 0x0008 (0x0038 - 0x0030)
class UArchonParticleModuleAudioOneShotOnSpawn : public UArchonParticleModuleAudioBase
{
public:
	class UAkAudioEventBase*                           ParticleOneShot;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonParticleModuleAudioOneShotOnSpawn");
		return ptr;
	}

};


// Class Archon.ArchonPartyClient
// 0x0368 (0x06F0 - 0x0388)
class AArchonPartyClient : public AInfo
{
public:
	struct FScriptMulticastDelegate                    OnAvailablePlayers;                                       // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInvitesUpdated;                                         // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSentInvitesUpdated;                                     // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyUpdated;                                           // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMatchmakingStarted;                                // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMatchmakingSuccess;                                // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMatchmakingFailed;                                 // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyIslandTravel;                                      // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberJoined;                                      // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberLeft;                                        // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberPromoted;                                    // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveMemberComplete;                                   // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPromoteMemberComplete;                                  // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteSent;                                             // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteAccept;                                           // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteDecline;                                          // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInviteCancel;                                           // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FArchonParty                                CurrentParty;                                             // 0x0498(0x0060) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	TArray<struct FArchonPartyInvite>                  PartyInvites;                                             // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FArchonPartyInvite>                  SentInvites;                                              // 0x0508(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0518(0x0078) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwnerUniqueNetId;                                         // 0x0590(0x0018) (Transient)
	class AArchonPartyHost*                            PartyHost;                                                // 0x05A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      PartyChatChannel;                                         // 0x05B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x130];                                     // 0x05C0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPartyClient");
		return ptr;
	}


	void StartIslandMatchmaking();
	void ServerPromoteMemberToLeader(const struct FUniqueNetIdRepl& MemberId);
	void ServerLeaveParty();
	void ServerKickMember(const struct FUniqueNetIdRepl& MemberId);
	void ServerInvitePlayer(const struct FUniqueNetIdRepl& PlayerId, const class FString& PlayerName, const struct FArchonPartyId& PartyId);
	void ServerGetAvailablePlayers();
	void ServerDeclineInvite(const struct FArchonPartyInvite& Invite);
	void ServerCancelInvite(const struct FArchonPartyInvite& Invite);
	void ServerAcceptInvite(const struct FArchonPartyInvite& Invite);
	void RefreshPartyInvites();
	void QueryAvailablePlayers();
	void PromoteMemberToLeader(const struct FUniqueNetIdRepl& MemberId);
	void PrepareToLeaveLobby();
	void OnRep_SentInvites();
	void OnRep_Invites();
	void OnRep_CurrentParty(const struct FArchonParty& PreviousParty);
	void OnRemovePartyMemberComplete(const struct FUniqueNetIdRepl& RemovedPlayerID);
	void OnRemoveMemberCompleteDelegate__DelegateSignature(bool bSuccess, const struct FUniqueNetIdRepl& RemovedPlayerID);
	void OnPromotionCompleteDelegate__DelegateSignature();
	void OnPromotePartyMemberComplete();
	void OnInvitationSentCompleteDelegate__DelegateSignature(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationSendComplete(bool bDidSend, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationDeclineCompleteDelegate__DelegateSignature(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationDeclineComplete(bool bDidDecline, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationCancelCompleteDelegate__DelegateSignature(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationCancelComplete(bool bDidCancel, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationAcceptCompleteDelegate__DelegateSignature(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void OnInvitationAcceptComplete(bool bDidAccept, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	struct FUniqueNetIdRepl LocalPlayerId();
	void LeaveParty();
	void KickMember(const struct FUniqueNetIdRepl& PlayerId);
	bool IsSoloParty();
	bool IsSendingInvite(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPartyLeader(const struct FUniqueNetIdRepl& PlayerId);
	bool IsLocalPlayer(const struct FArchonPartyMember& PartyMember);
	bool IsInParty(const struct FUniqueNetIdRepl& PlayerId);
	bool InvitePlayerByName(const class FString& PlayerName);
	bool InvitePlayer(const struct FUniqueNetIdRepl& PlayerId, const class FString& PlayerName);
	class FString GetStartMatchmakingCommand();
	TArray<struct FArchonPartyInvite> GetPartyInvites();
	class FString GetChatChannelName();
	class FString GetCancelMatchmakingCommand();
	bool FindHunt(const struct FName& PlayerHuntID, bool bSkipMatchmaking);
	void DeclineInvite(const struct FArchonPartyInvite& Invite);
	bool DebugStartMission(const struct FArchonLobbyMissionInfo& MissionInfo);
	void ClientAvailablePlayers(bool bWasSuccessful, TArray<class APlayerState*> MembersArray, const class FString& Error);
	void CancelMatchmaking();
	void CancelIslandMatchmaking();
	void CancelInvite(const struct FArchonPartyInvite& Invite);
	void AcceptInvite(const struct FArchonPartyInvite& Invite);
};


// Class Archon.ArchonPartyFinder
// 0x0020 (0x0048 - 0x0028)
class UArchonPartyFinder : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPartyListUpdated;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPartyFinder");
		return ptr;
	}


	bool RefreshPartyList();
	void JoinPartyResponseSuccess__DelegateSignature(const struct FArchonPartyFinderEntry& UpdatedEntry);
	void JoinPartyResponseFail__DelegateSignature(const class FString& ErrorString);
	bool JoinParty(const class FString& PartyId, const struct FScriptDelegate& OnSuccess, const struct FScriptDelegate& OnFail);
	TArray<struct FArchonPartyFinderEntry> GetPartyList();
	void GetPartyEntryResponseSuccess__DelegateSignature(const struct FArchonPartyFinderEntry& PartyFinderEntry);
	void GetPartyEntryResponseFail__DelegateSignature(const class FString& ErrorString);
	bool GetPartyEntry(const class FString& PartyId, const struct FScriptDelegate& OnSuccess, const struct FScriptDelegate& OnFail);
	void DeletePartyEntryResponseSuccess__DelegateSignature();
	void DeletePartyEntryResponseFail__DelegateSignature(const class FString& ErrorString);
	bool DeletePartyEntry(const class FString& PartyId, const struct FScriptDelegate& OnSuccess, const struct FScriptDelegate& OnFail);
	void AddPartyResponseSuccess__DelegateSignature(const struct FArchonPartyFinderEntry& NewEntry);
	void AddPartyResponseFail__DelegateSignature(const class FString& ErrorString);
	bool AddParty(const class FString& Description, TArray<class FString> HuntTags, TArray<class FString> HuntIds, const struct FScriptDelegate& OnSuccess, const struct FScriptDelegate& OnFail);
};


// Class Archon.ArchonPartyHost
// 0x0118 (0x04A0 - 0x0388)
class AArchonPartyHost : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0388(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPartyHost");
		return ptr;
	}

};


// Class Archon.ArchonPathFollowingComponent
// 0x0100 (0x0590 - 0x0490)
class UArchonPathFollowingComponent : public UPathFollowingComponent
{
public:
	float                                              LookAheadDistance;                                        // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRadius;                                               // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnSpeed;                                             // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovingToPivotRotationInterpSpeed;                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngleThreshold;                                       // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngleThresholdWhileMoving;                            // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrecentageMaxSpeedThreshold;                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepAngleSize;                                            // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalFacingTolerance;                                     // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxArcingAngle;                                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalArcDistanceThresholdMultiplier;                      // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationDisabledRadius;                                   // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PivotDuringMidPathRadius;                                 // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalPivotRadius;                                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenTests;                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	float                                              DebugLifetime;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAheadPosition;                                        // 0x04D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	EArchonPathFollowingState                          TurnStatus;                                               // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bArcingEnabled;                                           // 0x04E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04E2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDoPivotDelegate;                                        // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDoPivotWithGoalDelegate;                                // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPivotAborted;                                           // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0518(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPathFollowingComponent");
		return ptr;
	}


	void PivotCompleted();
};


// Class Archon.ArchonPerfTelemetry
// 0x0058 (0x0080 - 0x0028)
class UArchonPerfTelemetry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FStatGroupAndName>                   StatsToResolve;                                           // 0x0030(0x0010) (ZeroConstructor, Config)
	float                                              SendTelemetryEventFrequency;                              // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0044(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class FString                                      PerfStatEventName;                                        // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FStatGroupAndName>                   MutableStatsToResolve;                                    // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               StatsToReport;                                            // 0x0068(0x0010) (ZeroConstructor, Transient)
	double                                             LastSendTime;                                             // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPerfTelemetry");
		return ptr;
	}

};


// Class Archon.ArchonPersistentUser
// 0x0030 (0x0058 - 0x0028)
class UArchonPersistentUser : public USaveGame
{
public:
	float                                              Gamma;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInvertedYAxis;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVGI;                                                     // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	EArchonBodyType                                    BodyType;                                                 // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	EArchonGender                                      GenderId;                                                 // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                SelectedWeaponIndex;                                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) MISSED OFFSET
	bool                                               bIsFemale;                                                // 0x0039(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x003A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPersistentUser");
		return ptr;
	}


	void SetWeaponIndex(int WeaponIndex);
	void SetGenderId(EArchonGender InGenderId);
	void SetBodyType(EArchonBodyType InBodyType);
	void SaveIfDirty();
	int GetWeaponIndex();
	EArchonGender GetGenderId();
	EArchonBodyType GetBodyType();
};


// Class Archon.ArchonPlayerControllerBase
// 0x0020 (0x0728 - 0x0708)
class AArchonPlayerControllerBase : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0708(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInputSwap;                                              // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPlayerControllerBase");
		return ptr;
	}


	void ReturnToMainMenu(const struct FText& ReturnMessage);
	bool IsUsingGamepad();
	bool ConvertKeyEventToActionMapping(const struct FKeyEvent& InKeyEvent, struct FName* OutActionName);
};


// Class Archon.ArchonPlayerController
// 0x02B8 (0x09E0 - 0x0728)
class AArchonPlayerController : public AArchonPlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0728(0x0008) MISSED OFFSET
	class FString                                      CheatActorPath;                                           // 0x0730(0x0010) (ZeroConstructor, Config)
	class FString                                      CheatActorLocalInputPath;                                 // 0x0740(0x0010) (ZeroConstructor, Config)
	class UDataTable*                                  SurveyTriggerTable;                                       // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInteractWith;                                           // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UQuestSystemComponent*                       QuestSystem;                                              // 0x0768(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMarkerSystemComponent*                      MarkerSystem;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHuntSystemComponent*                        HuntSystem;                                               // 0x0778(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USchedulerComponent*                         SchedulerComponent;                                       // 0x0780(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGuildComponent*                             GuildComponent;                                           // 0x0788(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEquippedWeapon;                                         // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetDyeColour;                                           // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07B0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClientEntitlementsRefreshed;                            // 0x07C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDataTable*                                  AetherCoreBoostTable;                                     // 0x07D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ItemBoostTable;                                           // 0x07D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LanternResistanceTable;                                   // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  KeywordTable;                                             // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      DustItemID;                                               // 0x07F0(0x0010) (Edit, ZeroConstructor)
	int                                                RequiredDustThreshold;                                    // 0x0800(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	class FString                                      ItemToGetFromDust;                                        // 0x0808(0x0010) (Edit, ZeroConstructor)
	struct FDataTableRowHandle                         TransmogToken;                                            // 0x0818(0x0010) (Edit)
	class FString                                      ServerHostName;                                           // 0x0828(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0838(0x0008) MISSED OFFSET
	class FString                                      CharacterId;                                              // 0x0840(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0850(0x0040) MISSED OFFSET
	class AArchonLobbyClient*                          LobbyClient;                                              // 0x0890(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AArchonPartyClient*                          Party;                                                    // 0x0898(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x98];                                      // 0x08A0(0x0098) MISSED OFFSET
	class AArchonInventory*                            Inventory;                                                // 0x0938(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AArchonLoadout*                              LOADOUT;                                                  // 0x0940(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0948(0x0040) MISSED OFFSET
	class UInputComponent*                             GamePadQuickSlotStateInputComponent;                      // 0x0988(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x18];                                      // 0x0990(0x0018) MISSED OFFSET
	TArray<class FString>                              DebugPropertyNames;                                       // 0x09A8(0x0010) (Net, ZeroConstructor)
	TArray<class FString>                              DebugPropertyValues;                                      // 0x09B8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x10];                                      // 0x09C8(0x0010) MISSED OFFSET
	float                                              PlayerStartEventTimeout;                                  // 0x09D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPlayerController");
		return ptr;
	}


	void WaitForSurveysToBeComplete(class UObject* WorldContextObject, float WaitDuration, const struct FLatentActionInfo& LatentInfo);
	void WaitForCurrentSurveyToBeComplete(class UObject* WorldContextObject, float WaitDuration, const struct FLatentActionInfo& LatentInfo);
	void UpdateChallenges(bool CreateNewChallenges);
	void ToggleNameplates();
	void ToggleHUD();
	void SuspendSurveys();
	void SurveyCompleted();
	void ServerSetEndOfMissionComplete();
	void ServerRefreshEntitlements();
	void ServerRaiseInteractWith(const class FString& Target);
	void ServerCheat(const class FString& Params);
	void ServerArchonCheat(TArray<class FString> Params);
	void ServerAddDebugProperty(const class FString& ClassName, const class FString& PropertyName);
	void ReturnToMainMenu(const struct FText& ReturnMessage);
	void ResumeSurveys();
	void RaiseInteractWithObject(class UObject* Target);
	void RaiseInteractWith(const class FString& Target);
	void ProgressionSet(const struct FName& TrackId, int Amount);
	void ProgressionReset(const struct FName& TrackId);
	void ProgressionAdd(const struct FName& TrackId, int Amount);
	void PlayerHasFinishedTutorial();
	void OnStartNewCharacterFlow();
	void OnSetPawn(class APawn* InPawn);
	void OnSetLobbyClient();
	void OnSetInventory(class AArchonInventory* InInventory);
	void OnServerPlayerStarted();
	void OnRep_Party();
	void OnRep_LobbyClient();
	void OnRep_Inventory();
	void OnQuickSlotCycleForward();
	void OnQuickSlotCycleBackward();
	void OnQuickSlotConfirm();
	void OnLoadoutReady();
	void OnEntitlementsRefreshed();
	bool IsNewCharacterFlow();
	bool IsForegroundWindow();
	bool IsEndOfMissionComplete();
	void InventoryGrantAll();
	bool HasFinishedTutorial();
	bool HasEntitlement(const class FString& Entitlement);
	struct FName GetTransmogTokenId();
	class FString GetStoreURL(const class FString& Path);
	class AArchonPartyClient* GetParty();
	class AArchonLobbyClient* GetLobbyClient();
	class AArchonLoadout* GetLoadout();
	class FString GetLastLoginTime();
	class AArchonInventory* GetInventory();
	EArchonGender GetGenderId();
	class FString GetCurrentLoginTime();
	class FString GetCharacterId();
	void EnableControllerInput();
	void EnableCheats();
	void DisableControllerInput();
	void DebugRebasedPlayerId();
	void DebugLoadInteractionComp();
	void ConditionalGrantItem(const class FString& ItemID, const class FString& Source, bool GrantImmediately);
	void ClientTriggerSurvey(const struct FName& EventName);
	void ClientTravelToCity();
	void ClientOnPostLogin();
	void ClientEntitlementsRefreshed();
	void Client_StartNewCharacterFlow();
	void ClearAllChallenges();
	bool AreSurveysInProgress();
};


// Class Archon.ArchonPlayerController_Menu
// 0x00A8 (0x07D0 - 0x0728)
class AArchonPlayerController_Menu : public AArchonPlayerControllerBase
{
public:
	struct FScriptMulticastDelegate                    OnMatchMakingComplete;                                    // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTravelDirectlyFailed;                                   // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0748(0x0060) MISSED OFFSET
	class FString                                      CharacterId;                                              // 0x07A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x07B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPlayerController_Menu");
		return ptr;
	}


	void TravelDirectlyToMission(const class FString& IslandMap, TAssetPtr<class UClass> MonsterClass, TAssetPtr<class UClass> TODClass);
	void ServerSetAppearanceData(const struct FArchonAppearanceData& InAppearanceData);
	class FString GetCharacterId();
};


// Class Archon.ArchonPlayerState
// 0x01D8 (0x05F0 - 0x0418)
class AArchonPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	int                                                DebugColorIndex;                                          // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FReplWeaponClass                            WeaponClass;                                              // 0x0428(0x0028) (Net)
	struct FReplArmourClass                            HelmetArmourClass;                                        // 0x0450(0x0028) (Net)
	struct FReplArmourClass                            ChestArmourClass;                                         // 0x0478(0x0028) (Net)
	struct FReplArmourClass                            LegsArmourClass;                                          // 0x04A0(0x0028) (Net)
	struct FReplArmourClass                            ArmsArmourClass;                                          // 0x04C8(0x0028) (Net)
	struct FReplLanternClass                           LanternClass;                                             // 0x04F0(0x0028) (Net)
	class FString                                      LanternItemInstanceID;                                    // 0x0518(0x0010) (Net, ZeroConstructor)
	struct FArchonAppearanceData                       AppearanceData;                                           // 0x0528(0x0040) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FComboTelemetryTracker                      ComboTelemetryTracker;                                    // 0x0568(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<struct FArchonLoot>                         Loot;                                                     // 0x0578(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class AArchonGuild*                                Guild;                                                    // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGuildUpdated;                                           // 0x0590(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FArchonGuildInvite>                  GuildInvites;                                             // 0x05A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnGuildInvitesUpdated;                                    // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBehemothPartBroken;                                     // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBehemothStaggered;                                      // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FReplBoosts                                 Boosts;                                                   // 0x05E0(0x0003) (BlueprintVisible, BlueprintReadOnly, Net)
	bool                                               IsChatBanned;                                             // 0x05E3(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class AArchonCharacter*                            CachedCharacter;                                          // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPlayerState");
		return ptr;
	}


	void SetWeaponClass(class UClass* Class);
	void SetWeapon(class UClass* Class, const struct FName& TransmogId);
	void SetLegsDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetLegsArmourClass(class UClass* ArmourClass);
	void SetLegsArmour(class UClass* ArmourClass, const struct FDyeVariant& DyeConfiguration, const struct FName& TransmogId);
	void SetLantern(class UClass* Class, const class FString& ItemInstanceId, const struct FName& TransmogId);
	void SetHelmetDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetHelmetArmourClass(class UClass* ArmourClass);
	void SetHelmetArmour(class UClass* ArmourClass, const struct FDyeVariant& DyeConfiguration, const struct FName& TransmogId);
	void SetChestDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetChestArmourClass(class UClass* ArmourClass);
	void SetChestArmour(class UClass* ArmourClass, const struct FDyeVariant& DyeConfiguration, const struct FName& TransmogId);
	void SetArmsDyeVariant(const struct FDyeVariant& DyeVariant);
	void SetArmsArmourClass(class UClass* ArmourClass);
	void SetArmsArmour(class UClass* ArmourClass, const struct FDyeVariant& DyeConfiguration, const struct FName& TransmogId);
	void SetAppearanceData(const struct FArchonAppearanceData& InAppearanceData);
	void OnRepWeaponClass();
	void OnRepLegsArmourClass();
	void OnRepLanternClass();
	void OnRepIsChatBanned();
	void OnRepHelmetArmourClass();
	void OnRepGuildInvites();
	void OnRepGuild(class AArchonGuild* PreviousGuild);
	void OnRepChestArmourClass();
	void OnRepBoosts();
	void OnRepArmsArmourClass();
	void OnRepAppearanceData();
	class FString GetUniqueIdAsString();
	class AArchonCharacter* GetArchonCharacter();
	void AddLoot(const class FString& ItemID, int Count);
	void AddConditionalLoot(const class FString& ItemID, int Count, const class FString& Source, bool AwardImmediately);
};


// Class Archon.ArchonPlayParticleEffect
// 0x0000 (0x0080 - 0x0080)
class UArchonPlayParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonPlayParticleEffect");
		return ptr;
	}


	bool ShouldSpawnParticle(class USkeletalMeshComponent* MeshComp);
};


// Class Archon.ArchonQuestAcceptComponent
// 0x0000 (0x03E0 - 0x03E0)
class UArchonQuestAcceptComponent : public UArchonVOComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestAcceptComponent");
		return ptr;
	}

};


// Class Archon.ArchonQuestRedeemComponent
// 0x0000 (0x03E0 - 0x03E0)
class UArchonQuestRedeemComponent : public UArchonVOComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestRedeemComponent");
		return ptr;
	}

};


// Class Archon.ArchonQuestsAlpha
// 0x0000 (0x0038 - 0x0038)
class UArchonQuestsAlpha : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestsAlpha");
		return ptr;
	}

};


// Class Archon.ArchonQuestsPreAlpha
// 0x0000 (0x0038 - 0x0038)
class UArchonQuestsPreAlpha : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestsPreAlpha");
		return ptr;
	}

};


// Class Archon.ArchonQuestsRelease
// 0x0000 (0x0038 - 0x0038)
class UArchonQuestsRelease : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestsRelease");
		return ptr;
	}

};


// Class Archon.ArchonQuestsTest
// 0x0000 (0x0038 - 0x0038)
class UArchonQuestsTest : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonQuestsTest");
		return ptr;
	}

};


// Class Archon.ArchonScalabilityUserWidget
// 0x0008 (0x02D8 - 0x02D0)
class UArchonScalabilityUserWidget : public UUserWidget
{
public:
	class UGameUserSettings*                           LocalUserSettings;                                        // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonScalabilityUserWidget");
		return ptr;
	}


	void SetViewDistanceQuality(int Quality);
	void SetTextureQuality(int Quality);
	void SetShadowQuality(int Quality);
	void SetResolutionScale(float NormalizedQuality);
	void SetQualityLevel(int QualityLevel);
	void SetPostProcessQuality(int Quality);
	void SetEffectsQuality(int Quality);
	void SetAutoQualityLevel();
	void SetAntiAliasingQuality(int Quality);
	int GetViewDistanceQuality();
	int GetTextureQuality();
	int GetShadowQuality();
	float GetResolutionScale();
	int GetQualityLevel();
	int GetPostProcessQuality();
	int GetEffectsQuality();
	int GetAntiAliasingQuality();
};


// Class Archon.ArchonSequenceGameplayOperations
// 0x0018 (0x0068 - 0x0050)
class UArchonSequenceGameplayOperations : public UArchonGameplayOperation
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TArray<class UArchonGameplayOperation*>            Operations;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSequenceGameplayOperations");
		return ptr;
	}


	void ActiveOperationEnded(class UArchonGameplayOperation* Op, const struct FArchonGameplayOperationArgs& Args, bool bInterrupted);
};


// Class Archon.ArchonSpeaker
// 0x0190 (0x01B8 - 0x0028)
class UArchonSpeaker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TAssetPtr<class UTexture>                          Icon;                                                     // 0x0030(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayName;                                              // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortDisplayName;                                         // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGrammaticalGender>                    Gender;                                                   // 0x0080(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	EArchonGender                                      SpeakerGender;                                            // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	TArray<struct FSpeakerDetail>                      AdditionalDetails;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Intros;                                                   // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    SimpleIntros;                                             // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Outros;                                                   // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Accepts;                                                  // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Redeems;                                                  // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Invitations;                                              // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    Specials;                                                 // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    NormalCrafts;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    SpecialCrafts;                                            // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledIntros;                                           // 0x0128(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledSimpleIntros;                                     // 0x0138(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledOutros;                                           // 0x0148(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledAccepts;                                          // 0x0158(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledRedeems;                                          // 0x0168(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledInvitations;                                      // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledSpecials;                                         // 0x0188(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledNormalCrafts;                                     // 0x0198(0x0010) (ZeroConstructor, Transient)
	TArray<struct FArchonWeightedAmbientDialogLine>    ShuffledSpecialCrafts;                                    // 0x01A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSpeaker");
		return ptr;
	}


	void PickSpecialCraft(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickSpecial(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickSimpleIntro(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickQuestRedeem(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickQuestAccept(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickOutro(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickNormalCraft(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickInvitation(struct FArchonWeightedAmbientDialogLine* LineOUT);
	void PickIntro(struct FArchonWeightedAmbientDialogLine* LineOUT);
	class UArchonVOMouthComponent* GetAssociatedMouthComponent(class UObject* WorldContextObject);
	class AActor* GetAssociatedActor(class UObject* WorldContextObject);
};


// Class Archon.ArchonSpeakerComponent
// 0x0010 (0x01E0 - 0x01D0)
class UArchonSpeakerComponent : public UActorComponent
{
public:
	class UArchonSpeaker*                              AssociatedSpeaker;                                        // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSpeakerComponent");
		return ptr;
	}

};


// Class Archon.ArchonSpringArmComponent
// 0x00E0 (0x04C0 - 0x03E0)
class UArchonSpringArmComponent : public USceneComponent
{
public:
	float                                              TargetArmLength;                                          // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x03E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x03F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetOffsetNoLag;                                        // 0x03FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraAimOffset;                                          // 0x0408(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MinDistanceFromSelf;                                      // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbeSize;                                                // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                             // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	unsigned char                                      bDoCollisionTest : 1;                                     // 0x0420(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	bool                                               DisplayCollisionDebugInfo;                                // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	unsigned char                                      bUsePawnControlRotation : 1;                              // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInheritPitch : 1;                                        // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInheritYaw : 1;                                          // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInheritRoll : 1;                                         // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableCameraLag : 1;                                     // 0x0428(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	bool                                               ReduceLagTowardsCamera;                                   // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	float                                              MaxLagDistance;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraCatchUpSpeedCurve;                                  // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayLagDebugInfo;                                      // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	unsigned char                                      bEnableCameraRotationLag : 1;                             // 0x0444(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	float                                              CameraRotationLagSpeed;                                   // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothInterpolationProbeSize;                             // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionInterpolationInSpeed;                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionInterpolationOutSpeed;                           // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoMonsterCollisionTest : 1;                              // 0x0458(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              MonsterProbeSize;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     MonsterProbeChannel;                                      // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5F];                                      // 0x0461(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSpringArmComponent");
		return ptr;
	}

};


// Class Archon.ArchonTelemetryBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UArchonTelemetryBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTelemetryBPLibrary");
		return ptr;
	}


	void STATIC_TriggerTitleEvent(class UObject* WorldContextObject, const class FString& EventName, const struct FJsonBPValue& BodyJsonObject);
	void STATIC_TriggerPlayerEvent(class APlayerController* PlayerController, const class FString& EventName, const struct FJsonBPValue& BodyJsonObject);
	void STATIC_TriggerMessage(class UObject* WorldContextObject, const class FString& Message);
	void STATIC_RecordSurveyPresented(class APlayerController* PlayerController, const class FString& EventName);
	void STATIC_RecordPlayerWonMatchEx(class APlayerController* PlayerController, float Duration, const class FString& MonsterName, TArray<class FString> AdditionalBehemoths);
	void STATIC_RecordPlayerWonMatch(class APlayerController* PlayerController, float Duration, const class FString& MonsterName);
	void STATIC_RecordPlayerReviveSucceeded(class APlayerController* Reviver, class APlayerController* Revivee);
	void STATIC_RecordPlayerReviveFailed(class APlayerController* Reviver, class APlayerController* Revivee);
	void STATIC_RecordPlayerMontageStarted(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Facing, const class FString& PlayerId, const class FString& CharacterId, int MontageCounter, const class FString& MontageName, float GameTime);
	void STATIC_RecordPlayerMontageBlendingOut(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Facing, const class FString& PlayerId, const class FString& CharacterId, int MontageCounter, const class FString& MontageName, bool Interrupted, float GameTime);
	void STATIC_RecordPlayerLostMatchEx(class APlayerController* PlayerController, float Duration, const class FString& MonsterName, TArray<class FString> AdditionalBehemoths);
	void STATIC_RecordPlayerLostMatch(class APlayerController* PlayerController, float Duration, const class FString& MonsterName);
	void STATIC_RecordPlayerHealed(class AActor* SourceActor, class AActor* TargetActor, class UObject* SourceObject, float HealAmount, float CurrentHealth, float MaxHealth, float GameTime);
	void STATIC_RecordPlayerGameModeLogout(class APlayerController* PlayerController, const class FString& MapName, const class FString& GameModeName);
	void STATIC_RecordPlayerGameModeLogin(class APlayerController* PlayerController, const class FString& MapName, const class FString& GameModeName);
	void STATIC_RecordPlayerDeath(class APlayerController* PlayerController, const class FString& KillerName, const struct FVector& Position);
	void STATIC_RecordMonsterFound(const class FString& MonsterName, const class FString& Stage);
	void STATIC_RecordMissionJoined(class APlayerController* PlayerController, const class FString& MonsterName, const class FString& AtmosphereName, const class FString& MapName);
	void STATIC_RecordJumpPadUsed(class APlayerController* PlayerController, class AActor* JumpPad, const struct FVector& JumpVelocity);
	void STATIC_RecordInventoryUsed(class APlayerController* PlayerController, const class FString& ItemName);
	void STATIC_RecordInteractableUse(class APlayerController* PlayerController, const class FString& InteractableName, const struct FVector& Position);
	void STATIC_RecordFallOffWorld(class APlayerController* PlayerController, const class FString& MapName, const struct FVector& Position);
	void STATIC_RecordEquipWeapon(class APlayerController* PlayerController, const class FString& WeaponName);
	void STATIC_RecordEnterBleedOut(class APlayerController* PlayerController, const class FString& KillerName, const struct FVector& Position);
	void STATIC_RecordCurrentScalabilitySettings(class APlayerController* PlayerController);
	void STATIC_RecordBehemothMontageStarted(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Facing, const class FString& BehemothName, int MontageCounter, const class FString& MontageName, const class FString& ActionName, const class FString& CurrentCharacterTarget, const class FString& AttackedCharacterTarget, int TotalAttackedCharacters, float GameTime);
	void STATIC_RecordBehemothMontageBlendingOut(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Facing, const class FString& BehemothName, int MontageCounter, const class FString& MontageName, const class FString& ActionName, bool Interrupted, float GameTime);
};


// Class Archon.ArchonTimedParticleEffect
// 0x0010 (0x0078 - 0x0068)
class UArchonTimedParticleEffect : public UAnimNotifyState_TimedParticleEffect
{
public:
	struct FName                                       BeamEndSocketName;                                        // 0x0068(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EArchonParticleAttachType                          BeamEndAttachType;                                        // 0x0070(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EArchonParticleAttachType                          SocketAttachType;                                         // 0x0071(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0072(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTimedParticleEffect");
		return ptr;
	}


	bool ShouldSpawnParticle(class USkeletalMeshComponent* MeshComp);
};


// Class Archon.ArchonTokenSubstitutionInterface
// 0x0000 (0x0028 - 0x0028)
class UArchonTokenSubstitutionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTokenSubstitutionInterface");
		return ptr;
	}


	bool GetTokenSubstitution(class UObject* WorldContextObject, const struct FName& Token, bool IsWithinSubstitution, class FString* SubstitutionText, bool* RetainBrackets);
};


// Class Archon.ArchonTokenSubstitionMethods
// 0x0000 (0x0028 - 0x0028)
class UArchonTokenSubstitionMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTokenSubstitionMethods");
		return ptr;
	}


	struct FText STATIC_ReplaceTokens(class UObject* WorldContextObject, class UObject* CurrentContext, const struct FText& Source, TArray<TScriptInterface<class UArchonTokenSubstitutionInterface>> VariableSubstitutions);
};


// Class Archon.ArchonTrackedObject
// 0x0010 (0x0038 - 0x0028)
class UArchonTrackedObject : public UObject
{
public:
	struct FGuid                                       TrackingID;                                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTrackedObject");
		return ptr;
	}

};


// Class Archon.ArchonTraversalSet
// 0x0048 (0x0078 - 0x0030)
class UArchonTraversalSet : public UDataAsset
{
public:
	float                                              MaxClimbHeight;                                           // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxClimbDistance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLedgeHeight;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLedgeClimbDistance;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLedgeWallDistance;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FArchonTraversalInfo>                HoistInfo;                                                // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArchonTraversalInfo>                LedgeInfo;                                                // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<TEnumAsByte<ECollisionChannel>>             ValidTraversalType;                                       // 0x0068(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonTraversalSet");
		return ptr;
	}

};


// Class Archon.ArchonUIBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UArchonUIBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonUIBlueprintLibrary");
		return ptr;
	}


	void STATIC_PushInputModeUIOnly(class APlayerController* PlayerController);
	void STATIC_PopInputModeUIOnly(class APlayerController* PlayerController);
};


// Class Archon.ArchonUsePartyFeature
// 0x0000 (0x0038 - 0x0038)
class UArchonUsePartyFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonUsePartyFeature");
		return ptr;
	}

};


// Class Archon.ArchonUsePhoenixServicesFeature
// 0x0000 (0x0038 - 0x0038)
class UArchonUsePhoenixServicesFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonUsePhoenixServicesFeature");
		return ptr;
	}

};


// Class Archon.ArchonUserButton
// 0x0080 (0x0350 - 0x02D0)
class UArchonUserButton : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocused;                                                // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLostFocus;                                              // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FText                                       ButtonLabel;                                              // 0x0320(0x0018) (Edit, BlueprintVisible)
	class UWidget*                                     FocusIndicator;                                           // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  ButtonTextBlock;                                          // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFocusButton*                                FocusButton;                                              // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonUserButton");
		return ptr;
	}


	void SetButtonLabel(const struct FText& Label);
	void OnInputSwap(bool bUsingGamepad);
	void OnArchonUserButtonAction__DelegateSignature(class UArchonUserButton* Button);
	void HandleButtonUnhovered();
	void HandleButtonHovered();
	void HandleButtonClicked();
};


// Class Archon.EquipmentItem
// 0x02C0 (0x02E8 - 0x0028)
class UEquipmentItem : public UObject
{
public:
	class FString                                      ItemID;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      InstanceId;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FArchonCatalogItem                          CatalogData;                                              // 0x0050(0x0270) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FCatalogRecipeComponent>             Components;                                               // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D0(0x0003) MISSED OFFSET
	bool                                               bHasRequiredQuests;                                       // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class FString                                      UpgradeItemID;                                            // 0x02D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.EquipmentItem");
		return ptr;
	}


	bool IsWeapon();
	bool IsUpgrade();
	bool IsLantern();
	bool IsAtMaxLevel();
	bool IsArmour();
	EWeaponType GetWeaponType();
	EArmorType GetArmourType();
	bool CanUpgradeToNewItem();
	bool CanCraft();
};


// Class Archon.ArchonVendorWidget
// 0x0060 (0x0350 - 0x02F0)
class UArchonVendorWidget : public UArchonUserWidget
{
public:
	bool                                               ShowItemIfPlayerOwnsUpgrade;                              // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x02F1(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonVendorWidget");
		return ptr;
	}


	TArray<class FString> GetUpgradableItems(TArray<struct FName> Items);
	TArray<class FString> GetItemSources();
	TArray<class UEquipmentItem*> GetItemsForSource(const class FString& Source);
	void ClearVendorItems();
	void AddEquipmentToVendor(const class FString& ItemID);
};


// Class Archon.ArchonVOMouthComponent
// 0x0000 (0x03E0 - 0x03E0)
class UArchonVOMouthComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonVOMouthComponent");
		return ptr;
	}


	class UArchonSpeaker* GetSpeaker();
	class UAkComponent* GetAttachedAkComponent();
};


// Class Archon.ArchonWarpComponent
// 0x0100 (0x02D0 - 0x01D0)
class UArchonWarpComponent : public UActorComponent
{
public:
	float                                              TurnWarpSmoothing;                                        // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EArchonWarpComponentUpdateType                     UpdateType;                                               // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetDirectionFromInputAcceleration;                       // 0x01D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D6(0x0002) MISSED OFFSET
	struct FVector                                     SpaceWarpScaleVector;                                     // 0x01D8(0x000C) (Edit, BlueprintVisible, Net, IsPlainOldData)
	float                                              SpaceWarpGlobalScale;                                     // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TurnTarget;                                               // 0x01E8(0x000C) (Net, IsPlainOldData)
	struct FVector                                     TranslateTarget;                                          // 0x01F4(0x000C) (Net, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x0200(0x00B0) MISSED OFFSET
	struct FTrajectoryWarpWindowInfo                   TrajectoryWarpWindow;                                     // 0x02B0(0x0018)
	unsigned char                                      UnknownData02[0x1];                                       // 0x02C8(0x0001) MISSED OFFSET
	bool                                               bUseNewProcessTurnWarp;                                   // 0x02C9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonWarpComponent");
		return ptr;
	}


	void UpdateTurnWarpTarget(const struct FVector& InTarget);
	void UpdateTranslateWarpTarget(const struct FVector& InTarget);
	void StopTrajectoryWarp();
	void StartTrajectoryWarp(class UTrajectory* Trajectory);
	void OpenTurnWarpWindow(class UAnimNotifyState* Notify, class UAnimSequenceBase* Animation, float InMaxHalfAngle, float InRotationRate, EArchonWarpComponentAutoRotationRateMode RotationRateMode, float MaxRotationRate, const struct FName& PivotSocket, float TotalDuration);
	void OpenTranslateWarpWindow(class UAnimNotifyState* Notify, class UAnimSequenceBase* Animation, float MaxSpeed, bool SpeedAutoScale, float DistanceThreshold, float TotalDuration);
	void OnRep_TurnWarpTarget();
	void HandleCharacterMovementUpdated(float DeltaTime, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void CloseTurnWarpWindow(class UAnimNotifyState* Notify);
	void CloseTranslateWarpWindow(class UAnimNotifyState* Notify);
};


// Class Archon.ArchonWeapon
// 0x0148 (0x04D0 - 0x0388)
class AArchonWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET
	struct FWeaponData                                 WeaponConfig;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UArchonTraversalSet*                         TraversalSet;                                             // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UArchonLocomotionSet*                        LocomotionSet;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWeaponType                                        WeaponType;                                               // 0x03BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       WeaponTags;                                               // 0x03C0(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              Abilities;                                                // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x03F0(0x0020) MISSED OFFSET
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0418(0x0050) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0470(0x0008) MISSED OFFSET
	TArray<struct FWeaponComboData>                    ComboTrees;                                               // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class UDataTable*                                  StaggerDataTable;                                         // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ItemID;                                                   // 0x0498(0x0010) (Net, ZeroConstructor)
	EUpgradeableItemLevel                              CurrentLevel;                                             // 0x04A8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FName                                       TransmogId;                                               // 0x04B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET
	class UDataTable*                                  PowerTable;                                               // 0x04C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonWeapon");
		return ptr;
	}


	void ServerProcessEmberCharge();
	void ProcessEmberChargeInput();
	void OnEmberChargeWindowStart();
	void OnEmberChargeWindowEnd();
	void OnEmberChargeSuccessful();
	void OnEmberChargeFail();
	void OnComboStarted();
	void OnComboNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void OnComboEnded();
	void OnComboBuffered(EArchonAttackActionKey PrimaryKey, EArchonAttackActionKeyModifier ModifierKey);
	void OnChargeStarted();
	void OnChargeLevelChanged(int PreviousChargeLevel, int NewChargeLevel);
	void OnChargeEnded();
	void ModifyDamageKeys(TArray<struct FName> InDamageKeys, TArray<struct FName>* OutDamageKeys);
	bool LookupPowerTableRow(const struct FName& RowName, struct FWeaponPowerTableData* OutPowerTableData);
	void K2_OnUnEquip();
	void K2_OnEquip();
	bool HasReceivedEmberCharge();
	struct FName GetTransmogID();
	class USkeletalMeshComponent* GetSubMesh(EWeaponRole WeaponRole);
	class AArchonCharacter* GetPawnOwner();
	class FString GetItemID();
	EUpgradeableItemLevel GetCurrentLevel();
	void DeactivateSpecialAbilities();
	bool CanExecuteComboTransition(const struct FComboInputBuffer& ComboInputBuffer);
	bool CanChangeChargeLevel(int PreviousChargeLevel, int NewChargeLevel, const struct FComboChargeData& ChargeData, EArchonAttackActionKey CurrentHeldKey);
	void CancelEmberCharge();
	void AddSubMeshMapping(EWeaponRole WeaponRole, class USkeletalMeshComponent* Mesh);
	bool ActivateSpecialAbilities();
};


// Class Archon.AtmosphereBase
// 0x0008 (0x0390 - 0x0388)
class AAtmosphereBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AtmosphereBase");
		return ptr;
	}

};


// Class Archon.AtmosphereSpawner
// 0x0040 (0x03C8 - 0x0388)
class AAtmosphereSpawner : public AActor
{
public:
	class UChildActorComponent*                        ChildActorComponent;                                      // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildCloudConfiguration;                                  // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TAssetPtr<class UClass>                            CurrentAtmosphere;                                        // 0x0398(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<TAssetPtr<class UClass>>                    ValidAtmosphere;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AtmosphereSpawner");
		return ptr;
	}


	void InitEditorAtmosphere();
};


// Class Archon.AutoPlayerUtilityLibrary
// 0x0000 (0x0028 - 0x0028)
class UAutoPlayerUtilityLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.AutoPlayerUtilityLibrary");
		return ptr;
	}


	class UClass* STATIC_LoadAssetClassSynchronously(TAssetPtr<class UClass> AssetClass);
};


// Class Archon.BatchedInventoryReplicationFeature
// 0x0000 (0x0038 - 0x0038)
class UBatchedInventoryReplicationFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.BatchedInventoryReplicationFeature");
		return ptr;
	}

};


// Class Archon.BehemothAction
// 0x0018 (0x03A0 - 0x0388)
class ABehemothAction : public AActor
{
public:
	class UDataTable*                                  CapsuleAttackData;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  BoxAttackData;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SphereAttackData;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.BehemothAction");
		return ptr;
	}

};


// Class Archon.BTTask_MoveToAndFace
// 0x0030 (0x00E0 - 0x00B0)
class UBTTask_MoveToAndFace : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                      FacingAngleBlackboardKey;                                 // 0x00B0(0x0028) (Edit)
	bool                                               bAlignWithFacingObject;                                   // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.BTTask_MoveToAndFace");
		return ptr;
	}

};


// Class Archon.CancelWindowNotify
// 0x0008 (0x0038 - 0x0030)
class UCancelWindowNotify : public UAnimNotifyState
{
public:
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionContext                         Context;                                                  // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CancelWindowNotify");
		return ptr;
	}

};


// Class Archon.Challenge
// 0x00B8 (0x00E0 - 0x0028)
class UChallenge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UDataTable*                                  ChallengeTable;                                           // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrackName;                                                // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	bool                                               IsGoal;                                                   // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0049(0x000F) MISSED OFFSET
	class FString                                      ChallengeID;                                              // 0x0058(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class FString                                      EndTimeAsString;                                          // 0x0070(0x0010) (Net, ZeroConstructor)
	bool                                               IsCompleted;                                              // 0x0080(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsExpired;                                                // 0x0081(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xE];                                       // 0x0082(0x000E) MISSED OFFSET
	TArray<class UObjectiveData*>                      ObjectiveDataObjects;                                     // 0x0090(0x0010) (ZeroConstructor)
	TArray<class UObjective*>                          Objectives;                                               // 0x00A0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	TArray<class UReward*>                             PendingRewards;                                           // 0x00B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FName                                       SlotID;                                                   // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Challenge");
		return ptr;
	}


	void OnEndTimeReplicated();
	void OnDataReplicated();
	bool IsGoalChallenge();
	bool IsComplete();
	bool HasExpired();
	struct FName GetTrackName();
	TArray<class UObjective*> GetObjectives();
	struct FDateTime GetExpiryTime();
	class UDataTable* GetChallengeTable();
	class FString GetChallengeID();
	struct FTimespan ClientGetTimeUntilNextChallenge();
	EChallengeSlotDuration ClientGetSlotDuration();
};


// Class Archon.ChallengeManager
// 0x0058 (0x0080 - 0x0028)
class UChallengeManager : public UObject
{
public:
	class UChallengeRules*                             ChallengeRules;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, class UUnlockCondition*>       UnlockConditions;                                         // 0x0030(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ChallengeManager");
		return ptr;
	}


	class UUnlockCondition* GetUnlockCondition(class UClass* UnlockConditionClass);
};


// Class Archon.ChallengeRules
// 0x0000 (0x0028 - 0x0028)
class UChallengeRules : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ChallengeRules");
		return ptr;
	}

};


// Class Archon.ChargeWindowNotify
// 0x0018 (0x0048 - 0x0030)
class UChargeWindowNotify : public UAnimNotifyState
{
public:
	struct FComboChargeData                            ChargeData;                                               // 0x0030(0x0018) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ChargeWindowNotify");
		return ptr;
	}

};


// Class Archon.ChatClient
// 0x0488 (0x04B0 - 0x0028)
class UChatClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChatClientPublicRoomJoined;                             // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChatClientPublicRoomExited;                             // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChatClientMessageAdded;                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBroadcastMessagesUpdated;                               // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x440];                                     // 0x0070(0x0440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ChatClient");
		return ptr;
	}


	bool SendRoomMessage(const class FString& RoomName, const class FString& MsgBody);
	bool SendPrivateMessage(const class FString& FriendName, const class FString& MsgBody);
	void OnChatClientPublicRoomJoined__DelegateSignature(const class FString& RoomName);
	void OnChatClientPublicRoomExited__DelegateSignature(const class FString& RoomName);
	void OnChatClientMessageAdded__DelegateSignature(const struct FBPChatClientMessage& Message);
	void OnBroadcastMessage__DelegateSignature(TArray<struct FArchonBroadcastMessage> Messages);
	void JoinPublicRoom(const class FString& RoomName);
	bool IsChatConnected();
	void InsertStatusMessage(const struct FText& MsgBody);
	void InsertChatBreak();
	bool HasJoinedRoom(const class FString& RoomName);
	TArray<struct FBPChatClientMessage> GetRoomMessages(const class FString& RoomName);
	class FString GetPartyChatChannel(bool bIsCity);
	class FString GetMainChatChannel(bool bIsCity);
	TArray<struct FBPChatClientMessage> GetLastMessages();
	class FString GetGeneralChatChannel();
	TArray<struct FArchonBroadcastMessage> GetBroadcastMessages();
	void ExitRoom(const class FString& RoomName);
	void STATIC_BreakBPChatClientMessage(const struct FBPChatClientMessage& InMessage, struct FText* OutFromName, struct FText* OutToName, struct FText* OutMessage, struct FText* OutRoom, bool* bIsFromSelf);
};


// Class Archon.CloudScriptExtension
// 0x0000 (0x0028 - 0x0028)
class UCloudScriptExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CloudScriptExtension");
		return ptr;
	}

};


// Class Archon.CombatDemoFeature
// 0x0000 (0x0038 - 0x0038)
class UCombatDemoFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CombatDemoFeature");
		return ptr;
	}

};


// Class Archon.CommitAbilityAnimNotify
// 0x0000 (0x0038 - 0x0038)
class UCommitAbilityAnimNotify : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CommitAbilityAnimNotify");
		return ptr;
	}

};


// Class Archon.CraftingRecipeDataAsset
// 0x0028 (0x0058 - 0x0030)
class UCraftingRecipeDataAsset : public UDataAsset
{
public:
	TArray<struct FCraftingComponent>                  Components;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CraftedItemID;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CraftedItemQuantity;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CraftingRecipeDataAsset");
		return ptr;
	}

};


// Class Archon.CraftItemCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class UCraftItemCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	class UArchonInventoryItem*                        RecipeItem;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FCraftingPayload                            Payload;                                                  // 0x0060(0x0010)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CraftItemCallbackProxy");
		return ptr;
	}


	class UCraftItemCallbackProxy* STATIC_CraftItem(class UObject* WorldContextObject, class APlayerController* PlayerController, class UArchonInventoryItem* RecipeItem, const struct FCraftingPayload& Payload, const class FString& Source);
};


// Class Archon.CreateLobbyCallbackProxy
// 0x00D8 (0x0100 - 0x0028)
class UCreateLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0048(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.CreateLobbyCallbackProxy");
		return ptr;
	}


	class UCreateLobbyCallbackProxy* STATIC_CreateLobby(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FArchonLobbyMissionInfo& MissionInfo);
};


// Class Archon.DamageComponent
// 0x0120 (0x02F0 - 0x01D0)
class UDamageComponent : public UActorComponent
{
public:
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  DamageTable;                                              // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawSweep;                                           // 0x01E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitDelegate;                                            // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitFromAbilitySystemDelegate;                           // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bRecordAllBoneTransforms;                                 // 0x0210(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	float                                              MaxStepAngle;                                             // 0x0214(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyDamageToComponentAndActor;                          // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	class UClass*                                      DefaultEffect;                                            // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTagAndDamageRowBonus>               DamageRowBonuses;                                         // 0x0228(0x0010) (BlueprintVisible, ZeroConstructor)
	EPhysicalType                                      DefaultPhysicalType;                                      // 0x0238(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EElementType                                       DefaultElementalType;                                     // 0x0239(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x37];                                      // 0x023A(0x0037) MISSED OFFSET
	bool                                               bLocalDamagePrediction;                                   // 0x0271(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7E];                                      // 0x0272(0x007E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.DamageComponent");
		return ptr;
	}


	void StopRecordingHitLocations(const class FString& SaveDirectory, const class FString& FileName);
	void StartRecordingHitLocations();
	void ServerTryDoDamage(const struct FDamagePayload& Payload, const struct FPredictionKey& PredictionKey);
	void RestorePhysicsBodies(TArray<struct FName> PhysicsBodyNames);
	void ResetPhysicsBodies();
	void RemovePhysicsBodies(TArray<struct FName> PhysicsBodyNames);
	void RefreshBoneTransforms(class USkeletalMeshComponent* MeshComponent);
	void OnMontageStarted(class UAnimMontage* Montage);
	bool IsDamageWindowActive();
	struct FName GetDamageTypeForCurrentWeapon(const struct FName& DamageType);
	float GetDamageScaleForCurrentWeapon(const struct FName& DamageType);
	void ClientTryDoDamage(const struct FDamagePayload& Payload);
	void ClientDoDamageSucceed(const struct FPredictionKey& PredictionKey);
	void ClientDoDamageFailed(int16_t PredictionKey);
};


// Class Archon.DamageNotifyState
// 0x0038 (0x0068 - 0x0030)
class UDamageNotifyState : public UAnimNotifyState
{
public:
	TArray<struct FName>                               PhysicsBodyNames;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       LastChancePhysicsBody;                                    // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               DamageKeys;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               UseCurrentWeapon;                                         // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExcludedHitActorsForDurationOfMontage;                   // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePreAttackRaycastTest;                                 // 0x005A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FName                                       PreAttackRayCastTestBoneStart;                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.DamageNotifyState");
		return ptr;
	}


	bool ShouldApplyDamage(class USkeletalMeshComponent* MeshComp);
	void ModifyWeaponDamageKeys(class AArchonWeapon* Weapon, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, TArray<struct FName> InDamageKeys, TArray<struct FName>* OutDamageKeys);
	void ModifyDamageKeys(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, TArray<struct FName> InDamageKeys, TArray<struct FName>* OutDamageKeys);
};


// Class Archon.DestroyLobbyCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UDestroyLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.DestroyLobbyCallbackProxy");
		return ptr;
	}


	class UDestroyLobbyCallbackProxy* STATIC_DestroyLobby(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class Archon.EmberChargeWindowNotify
// 0x0000 (0x0030 - 0x0030)
class UEmberChargeWindowNotify : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.EmberChargeWindowNotify");
		return ptr;
	}

};


// Class Archon.EnvQueryTest_ActionHelperScore
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_ActionHelperScore : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.EnvQueryTest_ActionHelperScore");
		return ptr;
	}

};


// Class Archon.EnvQueryTest_ArchonNavTrace
// 0x0010 (0x01D0 - 0x01C0)
class UEnvQueryTest_ArchonNavTrace : public UEnvQueryTest
{
public:
	class UClass*                                      Context;                                                  // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NavigationFilter;                                         // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.EnvQueryTest_ArchonNavTrace");
		return ptr;
	}

};


// Class Archon.EnvQueryTest_AttackTargetScore
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_AttackTargetScore : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.EnvQueryTest_AttackTargetScore");
		return ptr;
	}

};


// Class Archon.FocusState
// 0x0018 (0x0040 - 0x0028)
class UFocusState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	bool                                               GameHasInput;                                             // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.FocusState");
		return ptr;
	}


	bool RestoreFocus(class ULocalPlayer* Player);
	class UFocusState* STATIC_GetFocusState(class ULocalPlayer* Player);
};


// Class Archon.GetAvailableMemberListCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UGetAvailableMemberListCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.GetAvailableMemberListCallbackProxy");
		return ptr;
	}


	class UGetAvailableMemberListCallbackProxy* STATIC_GetAvailableMemberList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class Archon.GetLobbiesLobbyCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UGetLobbiesLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.GetLobbiesLobbyCallbackProxy");
		return ptr;
	}


	class UGetLobbiesLobbyCallbackProxy* STATIC_GetLobbies(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class Archon.GetTitleNewsCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UGetTitleNewsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.GetTitleNewsCallbackProxy");
		return ptr;
	}


	class UGetTitleNewsCallbackProxy* STATIC_GetArchonTitleNews(class UObject* WorldContextObject, class APlayerController* PlayerController, int InCount);
};


// Class Archon.GuildComponent
// 0x0020 (0x01F0 - 0x01D0)
class UGuildComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnCreateGuild;                                            // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.GuildComponent");
		return ptr;
	}


	void ViewMyGuildInvites();
	void ViewAllGuildInvites();
	void ServerInviteCharacterToGuild(const class FString& UserIdStr);
	void OnCreateGuildComplete(bool bSuccess, const struct FText& ErrorMessage);
	void LeaveGuild();
	void KickCharacterFromGuild(const class FString& KickCharacterId);
	void InviteCharacterToGuild(const class FString& CharacterName);
	bool STATIC_HasOfficerPermissions(class UObject* WorldContextObject);
	class FString GetChatChannel();
	void DisbandGuild();
	void DeclineGuildInvitation(const class FString& RequestGuildId);
	void CreateGuild(const class FString& Name, const class FString& Nameplate);
	void ChangeLeaderOfGuild(const class FString& NewLeaderCharacterId);
	void ChangeCharacterRank(const class FString& ChangeCharacterId, EArchonGuildRank Rank);
	void CancelGuildInvitation(const class FString& RequestCharacterId);
	void AcceptGuildInvite(const class FString& AcceptGuildId);
};


// Class Archon.GuildSystemComponent
// 0x0010 (0x01E0 - 0x01D0)
class UGuildSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.GuildSystemComponent");
		return ptr;
	}

};


// Class Archon.Hunt_AtmosphereList
// 0x0010 (0x0040 - 0x0030)
class UHunt_AtmosphereList : public UDataAsset
{
public:
	TArray<struct FHunt_AtmosphereInfo>                Atmospheres;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Hunt_AtmosphereList");
		return ptr;
	}

};


// Class Archon.Hunt_BehemothList
// 0x0010 (0x0040 - 0x0030)
class UHunt_BehemothList : public UDataAsset
{
public:
	TArray<struct FHunt_BehemothInfo>                  Behemoths;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Hunt_BehemothList");
		return ptr;
	}

};


// Class Archon.Hunt_MapList
// 0x0010 (0x0040 - 0x0030)
class UHunt_MapList : public UDataAsset
{
public:
	TArray<struct FHunt_MapInfo>                       Maps;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Hunt_MapList");
		return ptr;
	}

};


// Class Archon.Hunt_Modifier
// 0x0020 (0x0050 - 0x0030)
class UHunt_Modifier : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    BehemothBuffList;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    PlayerBuffList;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Hunt_Modifier");
		return ptr;
	}

};


// Class Archon.HuntSystemComponent
// 0x0080 (0x0250 - 0x01D0)
class UHuntSystemComponent : public UActorComponent
{
public:
	class UDataTable*                                  HuntTable;                                                // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x01D8(0x0060) MISSED OFFSET
	class FString                                      PlayerHuntID;                                             // 0x0238(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.HuntSystemComponent");
		return ptr;
	}


	void ServerOnHuntCompleted(const class FString& MatchmakerHuntID, bool bSuccess);
	struct FTimespan GetScheduledHuntTimeRemaining(const class FString& HuntId);
	class FString GetPlayerHuntID();
	TArray<struct FName> GetHuntsForRegion(const struct FName& RegionId);
	class UHuntCatalog* GetHuntCatalog();
	TArray<struct FName> GetAvailableHuntRegions();
	void DebugServerCompleteHunt(const class FString& PlayerHunt, const class FString& MatchmakerHunt);
};


// Class Archon.HuntCatalog
// 0x0058 (0x0080 - 0x0028)
class UHuntCatalog : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMatchmakerHuntTableData>            MatchmakerHunts;                                          // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPlayerHuntTableData>                PlayerHunts;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               MatchmakerHuntIDs;                                        // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               PlayerHuntIDs;                                            // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.HuntCatalog");
		return ptr;
	}


	bool IsHuntUnlocked(const struct FHunt_UnlockInfo& UnlockInfo, class AArchonPlayerController* PlayerController);
	bool IsAvailable();
	bool GetPlayerHunt(const class FString& PlayerHuntID, struct FPlayerHuntTableData* HuntData);
	bool GetMatchmakerHunt(const class FString& MatchmakerHuntID, struct FMatchmakerHuntTableData* HuntData);
	TArray<struct FName> GetHuntMatchmakingOptions(const class FString& PlayerHuntID, class AArchonPlayerController* PlayerController);
};


// Class Archon.InputAction
// 0x0000 (0x0028 - 0x0028)
class UInputAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputAction");
		return ptr;
	}


	void ExecuteAction(class AArchonCharacter* Character);
};


// Class Archon.InputActionCondition
// 0x0000 (0x0028 - 0x0028)
class UInputActionCondition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputActionCondition");
		return ptr;
	}


	bool CanExecuteAction(class AArchonCharacter* Character);
};


// Class Archon.InputActionNotify
// 0x0010 (0x0040 - 0x0030)
class UInputActionNotify : public UAnimNotifyState
{
public:
	TArray<struct FInputActionData>                    Actions;                                                  // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputActionNotify");
		return ptr;
	}

};


// Class Archon.InputBufferDisable
// 0x0010 (0x0040 - 0x0030)
class UInputBufferDisable : public UAnimNotifyState
{
public:
	TArray<struct FComboInputBufferDisable>            DisabledInputBuffers;                                     // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputBufferDisable");
		return ptr;
	}

};


// Class Archon.InputBufferNotify
// 0x0010 (0x0040 - 0x0030)
class UInputBufferNotify : public UAnimNotifyState
{
public:
	TArray<struct FComboInputBuffer>                   Transitions;                                              // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputBufferNotify");
		return ptr;
	}

};


// Class Archon.InputBufferTransitionCondition
// 0x0000 (0x0028 - 0x0028)
class UInputBufferTransitionCondition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.InputBufferTransitionCondition");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter* Character, class AArchonWeapon* Weapon, const struct FComboInputBuffer& ComboInputBuffer);
	bool STATIC_CallCanTransition(class UClass* TransitionCondition, class AArchonCharacter* Character, class AArchonWeapon* Weapon, const struct FComboInputBuffer& ComboInputBuffer);
};


// Class Archon.JoinLobbyCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UJoinLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.JoinLobbyCallbackProxy");
		return ptr;
	}


	class UJoinLobbyCallbackProxy* STATIC_JoinLobby(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FArchonLobbyId& InLobbyId);
};


// Class Archon.JsonBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UJsonBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.JsonBPLibrary");
		return ptr;
	}


	class FString STATIC_JsonToString(const struct FJsonBPValue& Value);
	struct FJsonBPValue STATIC_CreateJsonValueString(const class FString& Value);
	struct FJsonBPValue STATIC_CreateJsonValueNull();
	struct FJsonBPValue STATIC_CreateJsonValueInt(int Value);
	struct FJsonBPValue STATIC_CreateJsonValueFloat(float Value);
	struct FJsonBPValue STATIC_CreateJsonValueBool(bool Value);
	struct FJsonBPObjectField STATIC_CreateJsonObjectField(const class FString& Name, const struct FJsonBPValue& Value);
	struct FJsonBPValue STATIC_CreateJsonObject(TArray<struct FJsonBPObjectField> Fields);
	struct FJsonBPValue STATIC_CreateJsonArray(TArray<struct FJsonBPValue> Elements);
};


// Class Archon.KickMemberLobbyCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UKickMemberLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.KickMemberLobbyCallbackProxy");
		return ptr;
	}


	class UKickMemberLobbyCallbackProxy* STATIC_KickMember(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FUniqueNetIdRepl& InMemberId);
};


// Class Archon.LeaveLobbyCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class ULeaveLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.LeaveLobbyCallbackProxy");
		return ptr;
	}


	class ULeaveLobbyCallbackProxy* STATIC_LeaveLobby(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class Archon.MarkableActorInterface
// 0x0000 (0x0028 - 0x0028)
class UMarkableActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.MarkableActorInterface");
		return ptr;
	}


	class UMarkerComponent* GetMarkerComponent();
};


// Class Archon.Marker
// 0x00E8 (0x0110 - 0x0028)
class UMarker : public UObject
{
public:
	bool                                               bDisplayInWorld;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayOnHUD;                                            // 0x0029(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayOnCompass;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisplayOnMap;                                            // 0x002B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          WorldMaterial;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WorldSize;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HUDTexture;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   HUDSize;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowOffscreen;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UTexture2D*                                  OffscreenIndicator;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   IndicatorSize;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysVisibleOnHUD;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              FarVisibility;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearVisibility;                                           // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpacityRange;                                             // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateBrush                                 MarkerBrush;                                              // 0x0078(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       Group;                                                    // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Marker");
		return ptr;
	}

};


// Class Archon.MarkerComponent
// 0x0020 (0x0840 - 0x0820)
class UMarkerComponent : public UMaterialBillboardComponent
{
public:
	TWeakObjectPtr<class UUserWidget>                  CompassWidget;                                            // 0x0820(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRefreshCompass;                                          // 0x0828(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class UMarker*                                     Marker;                                                   // 0x0830(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0838(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.MarkerComponent");
		return ptr;
	}


	bool ShouldShowOnHUD();
	bool ShouldShowOnCompass();
	void SetMarker(class UClass* NewMarker);
	void STATIC_GetScreenLocation(class APlayerController* Player, const struct FVector& WorldLocation, struct FVector2D* ScreenLocation, bool* bIsOffscreen, float* OffscreenRotation);
	struct FSlateBrush GetBrush();
};


// Class Archon.MarkerSystemComponent
// 0x0070 (0x0240 - 0x01D0)
class UMarkerSystemComponent : public UActorComponent
{
public:
	class UDataTable*                                  MarkerRules;                                              // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x01D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.MarkerSystemComponent");
		return ptr;
	}


	TArray<class UMarkerComponent*> GetCompassMarkers();
	void DrawMarkers();
};


// Class Archon.ModifyPartShapeCollisionMap
// 0x0050 (0x0078 - 0x0028)
class UModifyPartShapeCollisionMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ModifyPartShapeCollisionMap");
		return ptr;
	}

};


// Class Archon.ModifyPartCollisionChannelNotify
// 0x0010 (0x0040 - 0x0030)
class UModifyPartCollisionChannelNotify : public UAnimNotifyState
{
public:
	TArray<struct FModifyPartCollisionInfo>            Infos;                                                    // 0x0030(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ModifyPartCollisionChannelNotify");
		return ptr;
	}

};


// Class Archon.MonsterPartActor
// 0x0040 (0x03C8 - 0x0388)
class AMonsterPartActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0388(0x0028) MISSED OFFSET
	class UMonsterPartComponent*                       MonsterPartComponent;                                     // 0x03B0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.MonsterPartActor");
		return ptr;
	}


	void OnRep_Health();
	class UMonsterPartComponent* GetMonsterPartComponent();
	float GetMaxHealth();
	float GetHealth();
};


// Class Archon.MonsterPartComponent
// 0x0570 (0x0950 - 0x03E0)
class UMonsterPartComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET
	TArray<struct FName>                               PhATBones;                                                // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0410(0x0230) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UPhysicsAsset*                               MovementPhATAsset;                                        // 0x0640(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0648(0x0008) MISSED OFFSET
	struct FBodyInstance                               MovementBodyInstance;                                     // 0x0650(0x0230) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               MovementPhATBones;                                        // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               DebugDrawPlayerShapes;                                    // 0x0890(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	float                                              RatioOfBehemothHealth;                                    // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameRatioOfBehemothHealth;                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrostRatioOfBehemothHealth;                               // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShockRatioOfBehemothHealth;                               // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiantRatioOfBehemothHealth;                             // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UmbralRatioOfBehemothHealth;                              // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawShapes;                                          // 0x08AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UMonsterPartComponent*                       ParentPart;                                               // 0x08B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMonsterPartComponent*>               ChildParts;                                               // 0x08B8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      MonsterPartActorClass;                                    // 0x08C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMonsterPartActor*                           MonsterPartActor;                                         // 0x08D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x78];                                      // 0x08D8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.MonsterPartComponent");
		return ptr;
	}


	void UpdateResistsFromBehemoth();
	bool SetCollisionResponseToChannelForBone(const struct FName& BoneName, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionEnabledForBones(TEnumAsByte<ECollisionEnabled> NewType, TArray<struct FName> BoneNames);
	void SetCollisionEnabledForBone(TEnumAsByte<ECollisionEnabled> NewType, const struct FName& BoneName);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	struct FDamageEventData OnPreMitigateDamageBP(class AActor* DamageGiver, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool bHasHitResult, const struct FHitResult& HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	void InitializeHealth();
	void InitializeAttributes();
	float GetMaxHealth();
	float GetCurrentHealth();
	class UAbilitySystemComponent* GetAbilitySystemComponent();
	bool ContainsComponent(class UShapeComponent* ShapeComponent);
};


// Class Archon.NavArea_Jump
// 0x0000 (0x0040 - 0x0040)
class UNavArea_Jump : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.NavArea_Jump");
		return ptr;
	}

};


// Class Archon.NavMeshCollisionComponent
// 0x02E0 (0x04B0 - 0x01D0)
class UNavMeshCollisionComponent : public UActorComponent
{
public:
	class UClass*                                      FilterClass;                                              // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x01E0(0x0230) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              SearchRadius;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SearchHeight;                                             // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAgentSearchDimensions;                                // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              GatherRadius;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceMovedBeforeRegather;                              // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForcedRegatherTime;                                       // 0x0424(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionBoxes;                                        // 0x0428(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x042C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UClass*                                      NeighbourhoodArea;                                        // 0x0430(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ObstacleArea;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x70];                                      // 0x0440(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.NavMeshCollisionComponent");
		return ptr;
	}


	void SetCollisionEnabled(bool Enable);
};


// Class Archon.NetworkedMontageComponent
// 0x0090 (0x0260 - 0x01D0)
class UNetworkedMontageComponent : public UActorComponent
{
public:
	struct FCombatLocalAnimMontage                     LocalAnimMontageInfo;                                     // 0x01D0(0x0030)
	struct FCombatRepAnimMontage                       RepAnimMontageInfo;                                       // 0x0200(0x0040) (Net)
	TWeakObjectPtr<class UAnimInstance>                OwnerAnimInstance;                                        // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ACharacter>                   OwnerCharacter;                                           // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               MontageReplicationUpdatesEnabled;                         // 0x0250(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0251(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.NetworkedMontageComponent");
		return ptr;
	}


	void ServerPlayMontage(class UAnimMontage* NewAnimMontage, float WorldTimeOnPlay, float InPlayRate, const struct FName& StartSectionName, float RootMotionScale);
	void ServerMontageStop(float OverrideBlendOutTime);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	float PlayMontage(class UAnimMontage* NewAnimMontage, float InPlayRate, const struct FName& StartSectionName, float RootMotionScale);
	void OnRep_ReplicatedAnimMontage();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void CurrentMontageStop(float OverrideBlendOutTime);
	void CurrentMontageSetPlayRate(float InPlayRate);
	void CurrentMontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void CurrentMontageJumpToSection(const struct FName& SectionName);
};


// Class Archon.NewLoadScreenFeature
// 0x0000 (0x0038 - 0x0038)
class UNewLoadScreenFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.NewLoadScreenFeature");
		return ptr;
	}

};


// Class Archon.ObjectiveData
// 0x0028 (0x0060 - 0x0038)
class UObjectiveData : public UArchonTrackedObject
{
public:
	bool                                               UseCustomDescription;                                     // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsOptional;                                               // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData");
		return ptr;
	}


	void OnSetObjectiveData(const struct FGameplayObjective& TheData);
};


// Class Archon.Objective
// 0x0050 (0x0078 - 0x0028)
class UObjective : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EObjectiveStatus                                   Status;                                                   // 0x0030(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UObjectiveData>               ObjectiveData;                                            // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ObjectiveDataIdx;                                         // 0x003C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UQuest>                       OwningQuest;                                              // 0x0040(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObjective>                   OwningObjective;                                          // 0x0048(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UChallenge>                   OwningChallenge;                                          // 0x0050(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	EObjectiveParentType                               ParentType;                                               // 0x0058(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1F];                                      // 0x0059(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective");
		return ptr;
	}


	void OnRep_ParentType();
	void OnRep_OwningQuest();
	void OnRep_OwningObjective();
	void OnRep_OwningChallenge();
	void OnRep_ObjectiveDataIdx();
	void MarkDirty();
	bool IsOptional();
	EObjectiveStatus GetStatus();
	struct FText GetProgressText();
	class UObjectiveData* GetObjectiveData();
	struct FText GetDescription();
	TArray<class UObjective*> GetChildrenObjectives();
	void ChangeStatus(EObjectiveStatus NewStatus);
};


// Class Archon.ObjectiveData_BehemothBase
// 0x0020 (0x0080 - 0x0060)
class UObjectiveData_BehemothBase : public UObjectiveData
{
public:
	int                                                Amount;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnyBehemoth;                                              // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<struct FGameplayTagQuery>                   BehemothList;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EWeaponType                                        RequiredWeapon;                                           // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWeaponElementType;                                // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EElementType                                       WeaponElementType;                                        // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_BehemothBase");
		return ptr;
	}

};


// Class Archon.Objective_BehemothBase
// 0x0008 (0x0080 - 0x0078)
class UObjective_BehemothBase : public UObjective
{
public:
	int                                                CurrentAmount;                                            // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_BehemothBase");
		return ptr;
	}


	int GetCurrentAmount();
};


// Class Archon.ObjectiveData_BehemothParts
// 0x0000 (0x0080 - 0x0080)
class UObjectiveData_BehemothParts : public UObjectiveData_BehemothBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_BehemothParts");
		return ptr;
	}

};


// Class Archon.Objective_BehemothParts
// 0x0010 (0x0090 - 0x0080)
class UObjective_BehemothParts : public UObjective_BehemothBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_BehemothParts");
		return ptr;
	}


	void OnPartBroken(class AActor* Behemoth);
};


// Class Archon.ObjectiveData_BehemothStaggers
// 0x0008 (0x0088 - 0x0080)
class UObjectiveData_BehemothStaggers : public UObjectiveData_BehemothBase
{
public:
	bool                                               InterruptsOnly;                                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_BehemothStaggers");
		return ptr;
	}

};


// Class Archon.Objective_BehemothStaggers
// 0x0010 (0x0090 - 0x0080)
class UObjective_BehemothStaggers : public UObjective_BehemothBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_BehemothStaggers");
		return ptr;
	}


	void OnBehemothStaggered(class AActor* Behemoth, bool WasInterrupt);
};


// Class Archon.ObjectiveData_Blueprint
// 0x0008 (0x0068 - 0x0060)
class UObjectiveData_Blueprint : public UObjectiveData
{
public:
	class UClass*                                      ObjectiveClass;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_Blueprint");
		return ptr;
	}

};


// Class Archon.Objective_Blueprint
// 0x0010 (0x0088 - 0x0078)
class UObjective_Blueprint : public UObjective
{
public:
	TArray<struct FObjectiveCustomData>                CustomData;                                               // 0x0078(0x0010) (BlueprintVisible, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_Blueprint");
		return ptr;
	}


	bool OnReset();
	class FString OnGetDescriptionStringFormat();
	void OnDeactivate();
	void OnActivate();
};


// Class Archon.ObjectiveData_CollectItems
// 0x0028 (0x0088 - 0x0060)
class UObjectiveData_CollectItems : public UObjectiveData
{
public:
	struct FName                                       ItemID;                                                   // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ItemTags;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECollectItemRequirement                            CollectionRequirement;                                    // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECollectItemDescriptionFormat                      DescriptionFormat;                                        // 0x0081(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_CollectItems");
		return ptr;
	}

};


// Class Archon.Objective_CollectItems
// 0x0020 (0x0098 - 0x0078)
class UObjective_CollectItems : public UObjective
{
public:
	int                                                CurrentAmount;                                            // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x007C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_CollectItems");
		return ptr;
	}


	int GetCurrentAmount();
};


// Class Archon.ObjectiveData_EquipmentPower
// 0x0008 (0x0068 - 0x0060)
class UObjectiveData_EquipmentPower : public UObjectiveData
{
public:
	int                                                Power;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_EquipmentPower");
		return ptr;
	}

};


// Class Archon.Objective_EquipmentPower
// 0x0010 (0x0088 - 0x0078)
class UObjective_EquipmentPower : public UObjective
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_EquipmentPower");
		return ptr;
	}


	void OnLoadoutChanged();
};


// Class Archon.ObjectiveData_HandInItems
// 0x0018 (0x0078 - 0x0060)
class UObjectiveData_HandInItems : public UObjectiveData
{
public:
	struct FName                                       ItemID;                                                   // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EUpgradeableItemLevel                              ItemLevel;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldConsumeItems;                                       // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_HandInItems");
		return ptr;
	}

};


// Class Archon.Objective_HandInItems
// 0x0020 (0x0098 - 0x0078)
class UObjective_HandInItems : public UObjective
{
public:
	int                                                CurrentAmount;                                            // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x007C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_HandInItems");
		return ptr;
	}


	int GetCurrentAmount();
};


// Class Archon.ObjectiveData_Hunt
// 0x0030 (0x0090 - 0x0060)
class UObjectiveData_Hunt : public UObjectiveData
{
public:
	int                                                Amount;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AnyHunt;                                                  // 0x0064(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<struct FGameplayTagQuery>                   HuntList;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      HuntId;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EHuntTypeRequirement                               HuntType;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        RequiredWeapon;                                           // 0x0089(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresWeaponElementType;                                // 0x008A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EElementType                                       WeaponElementType;                                        // 0x008B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_Hunt");
		return ptr;
	}

};


// Class Archon.Objective_Hunt
// 0x0018 (0x0090 - 0x0078)
class UObjective_Hunt : public UObjective
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	int                                                CurrentAmount;                                            // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_Hunt");
		return ptr;
	}


	void OnHuntCompleted(class FString* PlayerHuntID, struct FPlayerHuntTableData* PlayerHunt, class FString* MatchmakerHuntID, struct FMatchmakerHuntTableData* MatchmakerHunt);
	int GetCurrentAmount();
};


// Class Archon.ObjectiveData_InteractWith
// 0x0018 (0x0078 - 0x0060)
class UObjectiveData_InteractWith : public UObjectiveData
{
public:
	int                                                Amount;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FStringAssetReference                       InteractTarget;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_InteractWith");
		return ptr;
	}

};


// Class Archon.Objective_InteractWith
// 0x0018 (0x0090 - 0x0078)
class UObjective_InteractWith : public UObjective
{
public:
	int                                                CurrentAmount;                                            // 0x0078(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x007C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_InteractWith");
		return ptr;
	}


	void OnInteractWith(const class FString& Target);
	int GetCurrentAmount();
};


// Class Archon.ObjectiveData_KillBehemoth
// 0x0000 (0x0080 - 0x0080)
class UObjectiveData_KillBehemoth : public UObjectiveData_BehemothBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_KillBehemoth");
		return ptr;
	}

};


// Class Archon.Objective_KillBehemoth
// 0x0010 (0x0090 - 0x0080)
class UObjective_KillBehemoth : public UObjective_BehemothBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_KillBehemoth");
		return ptr;
	}


	void OnBehemothKilled(class AArchonBehemoth* Behemoth);
};


// Class Archon.ObjectiveData_OrConditional
// 0x0010 (0x0070 - 0x0060)
class UObjectiveData_OrConditional : public UObjectiveData
{
public:
	TArray<class UObjectiveData*>                      Objectives;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_OrConditional");
		return ptr;
	}

};


// Class Archon.Objective_OrConditional
// 0x0010 (0x0088 - 0x0078)
class UObjective_OrConditional : public UObjective
{
public:
	TArray<class UObjective*>                          Objectives;                                               // 0x0078(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_OrConditional");
		return ptr;
	}


	struct FText GetProgressText();
};


// Class Archon.ObjectiveData_ProgressTo
// 0x0010 (0x0070 - 0x0060)
class UObjectiveData_ProgressTo : public UObjectiveData
{
public:
	int                                                Rank;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FName                                       Track;                                                    // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectiveData_ProgressTo");
		return ptr;
	}

};


// Class Archon.Objective_ProgressTo
// 0x0010 (0x0088 - 0x0078)
class UObjective_ProgressTo : public UObjective
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Objective_ProgressTo");
		return ptr;
	}


	void OnProgressRankSet(const struct FName& Track, int Rank);
};


// Class Archon.ObjectWithBlueprintFunctionsAccess
// 0x0000 (0x0028 - 0x0028)
class UObjectWithBlueprintFunctionsAccess : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ObjectWithBlueprintFunctionsAccess");
		return ptr;
	}

};


// Class Archon.PlayFabCatalogDataTable
// 0x0000 (0x0080 - 0x0080)
class UPlayFabCatalogDataTable : public UDataTable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.PlayFabCatalogDataTable");
		return ptr;
	}

};


// Class Archon.PlayFabCatalogDataTableLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayFabCatalogDataTableLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.PlayFabCatalogDataTableLibrary");
		return ptr;
	}


	bool STATIC_GetPlayFabCatalogDataTableItemClassReference(class UPlayFabCatalogDataTable* Table, const struct FName& RowName, struct FStringClassReference* StringClassReference);
	class UClass* STATIC_GetPlayFabCatalogDataTableItemClass(class UPlayFabCatalogDataTable* Table, const struct FName& RowName);
};


// Class Archon.PlayFabEconomyDataAsset
// 0x0048 (0x0078 - 0x0030)
class UPlayFabEconomyDataAsset : public UDataAsset
{
public:
	TArray<struct FPlayFabStore>                       Stores;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPlayFabVirtualCurrency>             VirtualCurrencies;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  DropTables;                                               // 0x0050(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UDataTable*>                          DropTableSet;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPlayFabCatalogDataTable*>            Catalogs;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.PlayFabEconomyDataAsset");
		return ptr;
	}

};


// Class Archon.PresenceFeature
// 0x0000 (0x0038 - 0x0038)
class UPresenceFeature : public UArchonFeature
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.PresenceFeature");
		return ptr;
	}

};


// Class Archon.ProgressionComponent
// 0x00D0 (0x02A0 - 0x01D0)
class UProgressionComponent : public UActorComponent
{
public:
	class UDataTable*                                  ProgressionTracks;                                        // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRankSet;                                                // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeCompleted;                                     // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrackListUpdated;                                       // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChallengeListUpdated;                                   // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UChallenge*>                          Challenges;                                               // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	TArray<struct FName>                               UnlockedTracks;                                           // 0x0228(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	class UDataTable*                                  ObjectNameTable;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET
	TArray<struct FProgressTrackRank>                  ProgressRanks;                                            // 0x0250(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0260(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ProgressionComponent");
		return ptr;
	}


	void UpdateTracks();
	void UpdateAllChallenges(bool CreateNewChallenges);
	bool ShouldGrantPrestigeProgress(const struct FName& ProgressionTrack);
	void SetProgressRank(const struct FName& ProgressionTrack, int Rank);
	void ServerUpdateTracks();
	void ServerUpdateAllChallenges(bool CanCreateNewChallenges);
	void ServerToggleDebugLogging();
	void ServerSetProgressInTrack(const struct FName& ProgressionTrack, int TotalAmount);
	void ServerDebugSetChallenge(const class FString& ChallengeID, const class FString& SlotID);
	void ServerDebugExpireChallenge(const class FString& ChallengeID);
	void ServerDebugClearChallenge(const class FString& ChallengeID);
	void ServerDebugClearAllChallenges();
	void ServerAddProgressToTrack(const struct FName& ProgressionTrack, int IncreaseAmount);
	void ProgressionReady();
	void ProgressAwarded(const struct FProgressTrackReward& Reward);
	void OnUnlockedTracksReplicated();
	void OnChallengesReplicated();
	int HandlePlayerAwardedProgress(const struct FName& ProgressionTrack, int RawIncreaseAmount, int* IncreaseAmount, int* NumRollOvers);
	void GrantProgressRank(const struct FName& ProgressionTrack, int Rank);
	void GrantProgress(TArray<struct FProgressTrackEvent> ProgressEvents);
	int GetProgressTotal(const struct FName& ProgressionTrack);
	int GetProgressRank(const struct FName& ProgressionTrack);
	struct FText GetProgressionTrackDisplayName(const struct FName& ProgressionTrack);
	void ClientOnChallengeCompleted(const class FString& TrackId, const class FString& SlotID, const class FString& ChallengeID);
	void ClientLogMessage(const class FString& Message, bool IsWarning, bool IsError);
	bool ClientIsTrackUnlocked(const struct FName& ProgressionTrack);
	bool CanAcceptProgress(const struct FName& ProgressionTrack);
};


// Class Archon.PromoteMemberLobbyCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UPromoteMemberLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.PromoteMemberLobbyCallbackProxy");
		return ptr;
	}


	class UPromoteMemberLobbyCallbackProxy* STATIC_PromoteMember(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FUniqueNetIdRepl& InMemberId);
};


// Class Archon.QuestData
// 0x0128 (0x0160 - 0x0038)
class UQuestData : public UArchonTrackedObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FName                                       QuestID;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      Description;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ShortDescription;                                         // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      Note;                                                     // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UArchonSpeaker*                              OriginatorAsset;                                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              RedeemerAsset;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UUnlockCondition*>                    UnlockConditions;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UObjectiveData*>                      Objectives;                                               // 0x00B0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FQuestEvent>                         Events;                                                   // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UReward*>                             Rewards;                                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	EQuestRedeemRestriction                            RedeemRestriction;                                        // 0x00E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // 0x00E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Repeatable;                                               // 0x00E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HideFromMissionBoardOnComplete;                           // 0x00E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FName                                       AutoStartQuestID;                                         // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x70];                                      // 0x00F0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.QuestData");
		return ptr;
	}


	struct FText GetShortDescriptionText(EArchonGender PlayerGender);
	struct FText GetDescriptionText(EArchonGender PlayerGender);
};


// Class Archon.Quest
// 0x0128 (0x0150 - 0x0028)
class UQuest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET
	EQuestStatus                                       Status;                                                   // 0x00B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<class UObjective*>                          Objectives;                                               // 0x00B8(0x0010) (Net, ZeroConstructor)
	class UQuestData*                                  QuestData;                                                // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      QuestDataIdx;                                             // 0x00D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class USerie*                                      OwningSerie;                                              // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHasTriggeredUnlockPendingView;                           // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPendingView;                                           // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4E];                                      // 0x00E2(0x004E) MISSED OFFSET
	bool                                               DebugUnlocked;                                            // 0x0130(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRedeemInProgress;                                        // 0x0131(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRewardCompleted;                                         // 0x0132(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0133(0x0005) MISSED OFFSET
	TArray<class UReward*>                             PendingRewards;                                           // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Quest");
		return ptr;
	}


	bool ShouldAutoStartNextQuest();
	bool Redeem(const struct FStringAssetReference& Redeemer, bool IsDebugging);
	void OnRep_QuestDataIdx();
	void OnRep_OwningSerie();
	void OnRep_IsPendingView();
	void MarkViewed();
	bool IsVisible();
	bool IsUnlockable();
	bool IsRedeemed();
	bool IsComplete();
	struct FText GetTitle();
	EQuestStatus GetStatus();
	struct FText GetShortDescription(EArchonGender PlayerGender);
	struct FText GetSerieTitle();
	class UArchonSpeaker* GetRedeemerAsset();
	struct FStringAssetReference GetRedeemer();
	struct FName GetQuestIDToAutoStart();
	class UQuestData* GetQuestData();
	class AArchonPlayerController* GetOwningPlayerController();
	class UArchonSpeaker* GetOriginatorAsset();
	struct FStringAssetReference GetOriginator();
	TArray<class UObjective*> GetObjectives();
	struct FName GetID();
	TArray<class UQuestEventData*> GetEventsFor(class UObject* Who, EQuestEventTrigger Trigger, bool bCommit);
	TArray<class UQuestEventData*> GetEvents(const struct FStringAssetReference& Who, EQuestEventTrigger Trigger, bool bCommit);
	struct FText GetDescription(EArchonGender PlayerGender);
};


// Class Archon.QuestBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UQuestBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.QuestBlueprintLibrary");
		return ptr;
	}


	TArray<class USerie*> STATIC_QuerySeries(class APlayerState* PlayerState, const struct FStringAssetReference& Who, bool bIncludeInvisible, bool bIncludeUnavailable, bool bIncludeUnavailableButUnlockable, bool bIncludeUnlocked, bool bIncludeCompleted, bool bIncludeRedeemed);
	TArray<class UQuest*> STATIC_QuerySerieQuests(class APlayerState* PlayerState, class USerie* Serie, const struct FStringAssetReference& Who, bool bIncludeInvisible, bool bIncludeUnavailable, bool bIncludeUnavailableButUnlockable, bool bIncludeUnlocked, bool bIncludeCompleted, bool bIncludeRedeemed);
	void STATIC_MarkQuestViewed(class APlayerState* PlayerState, class UQuest* Quest);
	bool STATIC_IsQuestPendingView(class APlayerState* PlayerState, class UQuest* Quest);
	EQuestStatus STATIC_GetQuestStatus(class APlayerState* PlayerState, class UQuest* Quest);
};


// Class Archon.QuestEventData
// 0x0008 (0x0030 - 0x0028)
class UQuestEventData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.QuestEventData");
		return ptr;
	}


	void Triggered();
	void OnProcessLocalizationDetailed(TArray<struct FArchonLocalizationData>* StringsToLoc);
	bool HasTriggered();
};


// Class Archon.QuestSystemComponent
// 0x0070 (0x0240 - 0x01D0)
class UQuestSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQuestChange;                                            // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPendingViewChanged;                                     // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                QuestsPendingViews;                                       // 0x01F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01FC(0x000C) MISSED OFFSET
	TArray<class USerie*>                              QuestSeries;                                              // 0x0208(0x0010) (Net, ZeroConstructor, Transient)
	int                                                QuestChangeTrigger;                                       // 0x0218(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x021C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.QuestSystemComponent");
		return ptr;
	}


	bool StartQuestFor(class UQuest* Quest, class UObject* Who);
	bool StartQuest(class UQuest* Quest, const struct FStringAssetReference& Who);
	void ServerStartQuest(class UQuest* Quest, const struct FStringAssetReference& Who);
	void ServerRedeemQuest(class UQuest* Quest, const struct FStringAssetReference& Who);
	struct FText ReplaceEventTokens(const struct FText& OriginalText, class UQuestEventData* QuestEventaData);
	bool RedeemQuestFor(class UQuest* Quest, class UObject* Who);
	bool RedeemQuest(class UQuest* Quest, const struct FStringAssetReference& Who);
	TArray<class UQuest*> QueryRedeemableQuests(const struct FStringAssetReference& Who, bool bIncludeInvisible);
	TArray<class UQuest*> QueryQuestsFor(class UObject* Who, bool bIncludeInvisible, bool bIncludeUnavailable, bool bIncludeUnavailableButUnlockable, bool bIncludeUnlocked, bool bIncludeCompleted, bool bIncludeRedeemed, EQuestRedeemRestriction RedeemRestriction);
	TArray<class UQuest*> QueryQuests(const struct FStringAssetReference& Who, bool bIncludeInvisible, bool bIncludeUnavailable, bool bIncludeUnavailableButUnlockable, bool bIncludeUnlocked, bool bIncludeCompleted, bool bIncludeRedeemed, EQuestRedeemRestriction RedeemRestriction);
	class UQuest* GetQuest(const struct FName& QuestID);
	TArray<class UQuestEventData*> GetEventsFor(class UObject* Who, EQuestEventTrigger Trigger);
	TArray<class UQuestEventData*> GetEvents(const struct FStringAssetReference& Who, EQuestEventTrigger Trigger);
	TArray<class UQuest*> GetAllQuests();
	void DebugServerUnlockQuest(class UQuest* Quest);
	void DebugServerStartQuest(class UQuest* Quest);
	void DebugServerResetQuestSeries(class USerie* Series);
	void DebugServerResetQuest(class UQuest* Quest);
	void DebugServerRedeemQuest(class UQuest* Quest);
	void DebugServerCompleteQuest(class UQuest* Quest);
	void DebugServerAbandonQuest(class UQuest* Quest);
	void DebugResetQuestSeries(const struct FName& SeriesID);
	void ClientQuestsReady();
};


// Class Archon.Reward
// 0x0000 (0x0028 - 0x0028)
class UReward : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Reward");
		return ptr;
	}


	void OnSetRewardData(const struct FGameplayReward& RewardData);
	struct FText GetDescription();
};


// Class Archon.Reward_GrantItem
// 0x0018 (0x0040 - 0x0028)
class UReward_GrantItem : public UReward
{
public:
	int                                                Amount;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ItemID;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPlayFabCatalogDataTable*                    Catalog;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Reward_GrantItem");
		return ptr;
	}

};


// Class Archon.Reward_GrantProgress
// 0x0018 (0x0040 - 0x0028)
class UReward_GrantProgress : public UReward
{
public:
	int                                                Amount;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      ProgressTrack;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Reward_GrantProgress");
		return ptr;
	}

};


// Class Archon.Reward_GrantVirtualCurrency
// 0x0008 (0x0030 - 0x0028)
class UReward_GrantVirtualCurrency : public UReward
{
public:
	int                                                Amount;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPlayFabCatalogCurrency                            Currency;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Reward_GrantVirtualCurrency");
		return ptr;
	}

};


// Class Archon.SchedulerComponent
// 0x0060 (0x0230 - 0x01D0)
class USchedulerComponent : public UActorComponent
{
public:
	class UDataTable*                                  ScheduleTable;                                            // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET
	TArray<struct FScheduledItemReplicatedInfo>        AvailableScheduledItems;                                  // 0x01E8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x01F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.SchedulerComponent");
		return ptr;
	}


	void ServerToggleDebugLogging();
	int ServerGetScheduledItemCompletionCount(const struct FName& ID);
	bool IsItemAvailable(const struct FName& ID, bool MustHaveSchedule);
	EScheduleType GetScheduleTypeForItem(const struct FName& ID);
	int GetItemMaxCompletion(const struct FName& ID);
	bool GetEndTimeForItem(const class FString& ID, struct FDateTime* EndTime);
};


// Class Archon.ArchonSerieDataAsset
// 0x00F0 (0x0120 - 0x0030)
class UArchonSerieDataAsset : public UDataAsset
{
public:
	struct FName                                       ID;                                                       // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UDataTable*                                  ObjectNameTable;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      Note;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UUnlockCondition*>                    UnlockConditions;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UReward*>                             Rewards;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<class UQuestData*>                          QuestsObject;                                             // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visible;                                                  // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FName                                       Classification;                                           // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00A8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ArchonSerieDataAsset");
		return ptr;
	}

};


// Class Archon.Serie
// 0x0070 (0x0098 - 0x0028)
class USerie : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	ESerieStatus                                       Status;                                                   // 0x0030(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UArchonSerieDataAsset*                       SerieAsset;                                               // 0x0038(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              Quests;                                                   // 0x0040(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
	class AArchonPlayerController*                     PlayerController;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Serie");
		return ptr;
	}


	void OnRep_SerieAsset();
	struct FText GetTitle();
};


// Class Archon.ShooterMenuItemWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UShooterMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FShooterMenuItemStyle                       MenuItemStyle;                                            // 0x0030(0x01B8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ShooterMenuItemWidgetStyle");
		return ptr;
	}

};


// Class Archon.ShooterMenuSoundsWidgetStyle
// 0x0038 (0x0068 - 0x0030)
class UShooterMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FShooterMenuSoundsStyle                     SoundsStyle;                                              // 0x0030(0x0038) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ShooterMenuSoundsWidgetStyle");
		return ptr;
	}

};


// Class Archon.ShooterMenuWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UShooterMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FShooterMenuStyle                           MenuStyle;                                                // 0x0030(0x0218) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.ShooterMenuWidgetStyle");
		return ptr;
	}

};


// Class Archon.SpaceWarpWindowNotify
// 0x0010 (0x0040 - 0x0030)
class USpaceWarpWindowNotify : public UAnimNotifyState
{
public:
	struct FVector                                     ScaleFactor;                                              // 0x0030(0x000C) (Edit, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.SpaceWarpWindowNotify");
		return ptr;
	}

};


// Class Archon.StructBoxLibrary
// 0x0000 (0x0028 - 0x0028)
class UStructBoxLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.StructBoxLibrary");
		return ptr;
	}


	void STATIC_SetStructInBox(const struct FStubStruct& CustomStruct, struct FStructBox* StructBox);
	bool STATIC_GetStructFromBox(const struct FStructBox& StructBox, struct FStubStruct* CustomStruct);
};


// Class Archon.Trajectory
// 0x0058 (0x0080 - 0x0028)
class UTrajectory : public UObject
{
public:
	TArray<struct FTransform>                          ComponentSpaceTransforms;                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TimeStep;                                                 // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  ToWorld;                                                  // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.Trajectory");
		return ptr;
	}


	class UTrajectory* WarpTrajectoryRotation(float WarpStartTime, float WarpEndTime, const struct FRotator& FinalRotation);
	struct FTransform GetWorldTransformAtTime(float Time);
	class UTrajectory* STATIC_ExtractTrajectoryFromSpline(class USplineComponent* SplineComponent, float StartTime, float EndTime, float aTimeStep);
	class UTrajectory* STATIC_ExtractTrajectoryFromMontage(class UAnimMontage* Montage, float StartTime, float EndTime, float Scale);
	class UTrajectory* STATIC_ExtractBoneTrajectoryFromMontage(class UAnimMontage* Montage, const struct FName& BoneName, float Scale, float StartTime, float EndTime, float aTimeStep);
	float EndTime();
	void DebugDraw(class AActor* Actor);
	class UTrajectory* STATIC_CreateTrajectory();
	void AlignTrajectoryEnd(const struct FTransform& EndToWorld);
};


// Class Archon.TranslateWarpWindowNotify
// 0x0010 (0x0040 - 0x0030)
class UTranslateWarpWindowNotify : public UAnimNotifyState
{
public:
	float                                              MaxSpeed;                                                 // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpeedAutoScale;                                          // 0x0034(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              DistanceThreshold;                                        // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.TranslateWarpWindowNotify");
		return ptr;
	}

};


// Class Archon.TurnWarpWindowNotify
// 0x0018 (0x0048 - 0x0030)
class UTurnWarpWindowNotify : public UAnimNotifyState
{
public:
	float                                              RotationRate;                                             // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxHalfAngle;                                             // 0x0034(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRotationRate;                                        // 0x0038(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRotationFromFullDuration;                            // 0x0039(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              MaxRotationRate;                                          // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocket;                                              // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.TurnWarpWindowNotify");
		return ptr;
	}

};


// Class Archon.UnlockCondition
// 0x0000 (0x0028 - 0x0028)
class UUnlockCondition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition");
		return ptr;
	}


	void OnSetUnlockData(const struct FGameplayUnlockCondition& UnlockConditionData);
	struct FText GetDescription();
	bool Evaluate(class AArchonPlayerController* PlayerController, class UQuest* OwningQuest);
};


// Class Archon.UnlockCondition_Blueprint
// 0x0010 (0x0038 - 0x0028)
class UUnlockCondition_Blueprint : public UUnlockCondition
{
public:
	bool                                               bNegate;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class AArchonPlayerController*                     WorldContextObject;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_Blueprint");
		return ptr;
	}


	struct FText OnGetDescription();
	bool OnEvaluate(class AArchonPlayerController* PlayerController, class UQuest* OwningQuest);
	bool OnCommit(class AArchonPlayerController* PlayerController, class UQuest* OwningQuest);
};


// Class Archon.UnlockCondition_ChildConditionBase
// 0x0010 (0x0048 - 0x0038)
class UUnlockCondition_ChildConditionBase : public UUnlockCondition_Blueprint
{
public:
	TArray<class UUnlockCondition*>                    ChildConditions;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_ChildConditionBase");
		return ptr;
	}

};


// Class Archon.UnlockCondition_ConsumeItems
// 0x0010 (0x0038 - 0x0028)
class UUnlockCondition_ConsumeItems : public UUnlockCondition
{
public:
	TArray<struct FUnlockItems>                        UnlockItems;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_ConsumeItems");
		return ptr;
	}

};


// Class Archon.UnlockCondition_CraftItems
// 0x0018 (0x0040 - 0x0028)
class UUnlockCondition_CraftItems : public UUnlockCondition
{
public:
	TArray<struct FCraftedUnlockItem>                  UnlockItems;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ECraftItemsRequirement                             CraftingRequirement;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_CraftItems");
		return ptr;
	}

};


// Class Archon.UnlockCondition_Entitlement
// 0x0010 (0x0038 - 0x0028)
class UUnlockCondition_Entitlement : public UUnlockCondition
{
public:
	class FString                                      Entitlement;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_Entitlement");
		return ptr;
	}

};


// Class Archon.UnlockCondition_ProgressionRank
// 0x0010 (0x0038 - 0x0028)
class UUnlockCondition_ProgressionRank : public UUnlockCondition
{
public:
	TArray<struct FUnlockRank>                         RequiredRanks;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_ProgressionRank");
		return ptr;
	}

};


// Class Archon.UnlockCondition_QuestsComplete
// 0x0020 (0x0048 - 0x0028)
class UUnlockCondition_QuestsComplete : public UUnlockCondition
{
public:
	ERequiredQuestState                                RequiredState;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FName>                               QuestIDs;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EQuestCompleteRequirement                          Requirement;                                              // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_QuestsComplete");
		return ptr;
	}

};


// Class Archon.UnlockCondition_QuestStatus
// 0x0018 (0x0040 - 0x0028)
class UUnlockCondition_QuestStatus : public UUnlockCondition
{
public:
	TArray<struct FQuestStatusInfo>                    Quests;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EQuestStatusRequirement                            Requirement;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UnlockCondition_QuestStatus");
		return ptr;
	}

};


// Class Archon.UpdateLobbyCallbackProxy
// 0x00D8 (0x0100 - 0x0028)
class UUpdateLobbyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0048(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UpdateLobbyCallbackProxy");
		return ptr;
	}


	class UUpdateLobbyCallbackProxy* STATIC_UpdateLobby(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FArchonLobbyMissionInfo& MissionInfo);
};


// Class Archon.UtilityMethods
// 0x0000 (0x0028 - 0x0028)
class UUtilityMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Archon.UtilityMethods");
		return ptr;
	}


	void STATIC_WaitForWidgetOrTimeout(class UObject* WorldContextObject, class UUserWidget* Widget, float Timeout, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForAllClientsToComplete_EndOfMission(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	class FString STATIC_ToString(TAssetPtr<class UObject> AssetID);
	class UActorComponent* STATIC_SpawnChildComponentOnActor(class UClass* ComponentClass, class AActor* TargetActor);
	class UActorComponent* STATIC_SpawnChildComponent(class UClass* ComponentClass, class USceneComponent* ParentComponent);
	void STATIC_SetUserDisplayName(class AArchonPlayerController* Player, const class FString& NewDisplayName);
	class FString STATIC_ReconstructPlayerID(TArray<int> Values);
	bool STATIC_RebasePlayerID2(class AArchonPlayerController* Player, TArray<int>* OutData);
	TArray<int> STATIC_RebasePlayerID(class AArchonPlayerController* Player);
	struct FName STATIC_JoinNames(const struct FName& First, const class FString& Separator, const struct FName& Second, EArchonCaseBehaviour CaseBehaviour, bool bIgnoreNones);
	bool STATIC_IsDefaultObject(class UObject* Obj);
	void STATIC_HostTravel(class UObject* WorldContextObject, const struct FName& LevelName, bool bAbsolute, const class FString& Options, bool RecordReplay);
	bool STATIC_HasReference(TAssetPtr<class UObject> Reference);
	TArray<struct FFaceMorphTranslation> STATIC_GetUseableFaceMorphs(class USkeletalMesh* SkeletalMesh, class UDataTable* DataTable);
	class UObject* STATIC_GetTempPackage();
	int STATIC_GetScreenLayer();
	int STATIC_GetPopupLayer();
	class FString STATIC_GetObjectName(class UObject* Object);
	float STATIC_GetMorphSliderValue(const struct FFaceMorphTranslation& FaceMorph, class USkeletalMeshComponent* SkeletalMeshComponent);
	class FString STATIC_GetMatchmakingBuildId();
	int STATIC_GetHUDLayer();
	class UGameInstance* STATIC_GetGameInstanceFrom(class UObject* Obj);
	TArray<struct FFaceMorphTranslationInformation> STATIC_GetFaceMorphTranslations(class USkeletalMesh* SkeletalMesh, class UDataTable* DataTable, bool IncludeMissing);
	TArray<struct FDyeRemainingUses> STATIC_GetDyeRemainingUses(class AArchonPlayerController* Player);
	struct FColor STATIC_GetColorInTextureAtLocation(class UTexture2D* Texture, float X, float Y);
	struct FName STATIC_GetCollisionProfileName(const struct FBodyInstance& Instance);
	EArchonBuildType STATIC_GetBuildType();
	float STATIC_GetBlendingSliderValue(const struct FFaceMorphTranslation& FaceMorph, class USkeletalMeshComponent* SkeletalMeshComponent);
	bool STATIC_Equal_UniqueNetIdRepl(const struct FUniqueNetIdRepl& A, const struct FUniqueNetIdRepl& B);
	TAssetPtr<class UObject> STATIC_CreateBasicAssetID(class UObject* Obj);
	TAssetPtr<class USkeletalMesh> STATIC_CreateAssetID(class USkeletalMesh* Mesh);
	void STATIC_Crash();
	bool STATIC_CallActorEvent(class AActor* Actor, const class FString& EventName, TArray<class FString> Parameters);
	void STATIC_ArchonLogError(const class FString& Message);
	void STATIC_ApplyMorphSliderValue(const struct FFaceMorphTranslation& FaceMorph, class USkeletalMeshComponent* SkeletalMeshComponent, float SliderValue);
	void STATIC_ApplyBlendingSliderValue(const struct FFaceMorphTranslation& FaceMorph, class USkeletalMeshComponent* SkeletalMeshComponent, float SliderValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
