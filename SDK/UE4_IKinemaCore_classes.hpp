#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IKinemaCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IKinemaCore.ArchonFootIKComponent
// 0x00A0 (0x0270 - 0x01D0)
class UArchonFootIKComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET
	TArray<struct FArchonFootIKInfo>                   FootIKInfos;                                              // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          ExitCurve;                                                // 0x01F0(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.ArchonFootIKComponent");
		return ptr;
	}


	bool Unpin(EArchonFootID ID, bool IsBall, float RateScale);
	bool Pin(EArchonFootID FootId, bool IsBall);
};


// Class IKinemaCore.ArchonFootPlant
// 0x0008 (0x0038 - 0x0030)
class UArchonFootPlant : public UAnimNotifyState
{
public:
	EArchonFootID                                      Foot;                                                     // 0x0030(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsBall;                                                   // 0x0031(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.ArchonFootPlant");
		return ptr;
	}

};


// Class IKinemaCore.ArchonImpactComponent
// 0x00A0 (0x0270 - 0x01D0)
class UArchonImpactComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET
	struct FRuntimeFloatCurve                          DefaultImpactCurve;                                       // 0x01E0(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FArchonImpactCurve>                  OverrideImpactCurves;                                     // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.ArchonImpactComponent");
		return ptr;
	}


	bool ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale);
};


// Class IKinemaCore.IKinemaAnimLibrary
// 0x0000 (0x0028 - 0x0028)
class UIKinemaAnimLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.IKinemaAnimLibrary");
		return ptr;
	}


	void STATIC_Slerp(const struct FRotator& A, const struct FRotator& B, float Alpha, struct FRotator* Out);
	struct FIKinemaSolverTask STATIC_SetupTask(const struct FTransform& Target, float Alpha, TEnumAsByte<EIKinemaTargetType> TargetType, bool InComponentSpace, bool EnableTranslation, bool EnableOrientation, bool UseTipOffset, bool DebugDraw, float DebugDrawScale);
	struct FIKinemaSolverLookAtTask STATIC_SetupLookAtTaskFromTask(const struct FIKinemaSolverTask& Task);
	struct FIKinemaSolverLookAtTask STATIC_SetupLookAtTask(const struct FVector& LookAtTarget, const struct FVector& LookAtAxis, const struct FVector& PositionTarget, float Alpha, TEnumAsByte<EIKinemaTargetType> TargetType, bool InComponentSpace, bool ReduceWeight, bool EnableTranslation, bool EnableOrientation, bool DebugDraw, float DebugDrawScale);
	struct FIKinemaCOMTask STATIC_SetupCOMTask(const struct FVector& Target, bool Enable, bool InComponentSpace, bool DebugDraw, float DebugDrawScale);
	void STATIC_MakeTaskProperties(bool PositionDofX, bool PositionDofY, bool PositionDofZ, int PositionDepth, const struct FVector& PositionWeight, const struct FVector& PositionPrecision, bool RotateDofX, bool RotateDofY, bool RotateDofZ, int RotateDepth, const struct FVector& RotateWeight, const struct FVector& RotatePrecision, struct FIKinemaTaskProperties* OutProperties);
	void STATIC_MakeSegmentProperties(bool DofX, bool DofY, bool DofZ, bool EnforceLimits, const struct FVector& Weight, bool EnableLimits, float LimitsGain, bool EnableRetargeting, float RetargetingGain, struct FIKinemaSegmentProperties* OutProperties);
	void STATIC_MakeRotatorFromQuaternion(const struct FQuat& InQuat, struct FRotator* OutRotator);
	bool STATIC_LineTrace(bool bTrace, class UAnimInstance* Owner, class AActor* IgnoreActor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDrawDebug, struct FHitResult* OutHit);
	void STATIC_InverseTransform(const struct FTransform& InTransform, struct FTransform* OutTransform);
	void STATIC_GetRelativeTransformReverse(const struct FTransform& A, const struct FTransform& B, struct FTransform* AInverseTimesB);
	void STATIC_GetRelativeTransform(const struct FTransform& A, const struct FTransform& B, struct FTransform* ATimesBInverse);
	void STATIC_GetComponentToWorldSpaceTransform(class UAnimInstance* Vim, struct FTransform* BoneTransform);
	void STATIC_GetBoneFromPoseLink(class UIKinemaRTAnimInstance* Vim, const struct FPoseLink& CachedPose, const struct FName& BoneName, bool ForceUpdate, float DeltaX, struct FTransform* BoneTransform);
	void STATIC_GetBoneFromPose(class UIKinemaRTAnimInstance* AnimBlueprint, const struct FName& CachedPose, const struct FName& BoneName, bool ForceUpdate, struct FTransform* BoneTransform);
	struct FRotator STATIC_GenerateLookAtTarget(const struct FTransform& Bone, const struct FVector& LookAtAxis, const struct FVector& lookAtDirection);
	void STATIC_FindSkeletonWorldSpaceTransform(class USkeletalMeshComponent* Skeleton, const struct FName& TransName, struct FTransform* OutTransform, bool* Found);
	void STATIC_FindRotatorFromUpAxisAndRefRot(const struct FVector& UpAxis, const struct FRotator& RefRotator, TEnumAsByte<EAxisDirection> RefSpaceRightDir, TEnumAsByte<EAxisDirection> OutSpaceUpDir, TEnumAsByte<EAxisDirection> OutSpaceRightDir, TEnumAsByte<EAxisDirection> OutSpaceFrontDir, bool LeftHanded, struct FRotator* OutRotator);
	struct FRotator STATIC_FindRotationBetweenVectors(const struct FVector& From, const struct FVector& To);
	void STATIC_FindActorWorldSpaceTransform(const struct FName& ActorName, const struct FName& TransName, struct FTransform* OutTransform, bool* Found);
	void STATIC_DumpSolvers(class UAnimInstance* Vim, const class FString& Folder);
};


// Class IKinemaCore.IKinemaRig
// 0x00F8 (0x0120 - 0x0028)
class UIKinemaRig : public UObject
{
public:
	int                                                UpdateVersion;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FIKinemaSolverDef                           SolverDef;                                                // 0x0030(0x00D8) (Edit)
	class USkeleton*                                   Skeleton;                                                 // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVRRig;                                                 // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0111(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.IKinemaRig");
		return ptr;
	}

};


// Class IKinemaCore.IKinemaRTAnimInstance
// 0x0000 (0x0388 - 0x0388)
class UIKinemaRTAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IKinemaCore.IKinemaRTAnimInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
