#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IKinemaCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IKinemaCore.ArchonFootIKComponent.Unpin
struct UArchonFootIKComponent_Unpin_Params
{
	EArchonFootID                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBall;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.ArchonFootIKComponent.Pin
struct UArchonFootIKComponent_Pin_Params
{
	EArchonFootID                                      FootId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBall;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.ArchonImpactComponent.ApplyImpact
struct UArchonImpactComponent_ApplyImpact_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MagnitudeScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.Slerp
struct UIKinemaAnimLibrary_Slerp_Params
{
	struct FRotator                                    A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Alpha;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Out;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.SetupTask
struct UIKinemaAnimLibrary_SetupTask_Params
{
	struct FTransform                                  Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIKinemaTargetType>                    TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTranslation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableOrientation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseTipOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIKinemaSolverTask                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTaskFromTask
struct UIKinemaAnimLibrary_SetupLookAtTaskFromTask_Params
{
	struct FIKinemaSolverTask                          Task;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FIKinemaSolverLookAtTask                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTask
struct UIKinemaAnimLibrary_SetupLookAtTask_Params
{
	struct FVector                                     LookAtTarget;                                             // (Parm, IsPlainOldData)
	struct FVector                                     LookAtAxis;                                               // (Parm, IsPlainOldData)
	struct FVector                                     PositionTarget;                                           // (Parm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIKinemaTargetType>                    TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReduceWeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTranslation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableOrientation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIKinemaSolverLookAtTask                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.SetupCOMTask
struct UIKinemaAnimLibrary_SetupCOMTask_Params
{
	struct FVector                                     Target;                                                   // (Parm, IsPlainOldData)
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugDrawScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIKinemaCOMTask                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.MakeTaskProperties
struct UIKinemaAnimLibrary_MakeTaskProperties_Params
{
	bool                                               PositionDofX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofY;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofZ;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PositionDepth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionWeight;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PositionPrecision;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               RotateDofX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RotateDepth;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotateWeight;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RotatePrecision;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FIKinemaTaskProperties                      OutProperties;                                            // (Parm, OutParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.MakeSegmentProperties
struct UIKinemaAnimLibrary_MakeSegmentProperties_Params
{
	bool                                               DofX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DofY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DofZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceLimits;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Weight;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               EnableLimits;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LimitsGain;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRetargeting;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetargetingGain;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIKinemaSegmentProperties                   OutProperties;                                            // (Parm, OutParm)
};

// Function IKinemaCore.IKinemaAnimLibrary.MakeRotatorFromQuaternion
struct UIKinemaAnimLibrary_MakeRotatorFromQuaternion_Params
{
	struct FQuat                                       InQuat;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    OutRotator;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.LineTrace
struct UIKinemaAnimLibrary_LineTrace_Params
{
	bool                                               bTrace;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               Owner;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.InverseTransform
struct UIKinemaAnimLibrary_InverseTransform_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransformReverse
struct UIKinemaAnimLibrary_GetRelativeTransformReverse_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  AInverseTimesB;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransform
struct UIKinemaAnimLibrary_GetRelativeTransform_Params
{
	struct FTransform                                  A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ATimesBInverse;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GetComponentToWorldSpaceTransform
struct UIKinemaAnimLibrary_GetComponentToWorldSpaceTransform_Params
{
	class UAnimInstance*                               Vim;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BoneTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPoseLink
struct UIKinemaAnimLibrary_GetBoneFromPoseLink_Params
{
	class UIKinemaRTAnimInstance*                      Vim;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   CachedPose;                                               // (Parm)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BoneTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPose
struct UIKinemaAnimLibrary_GetBoneFromPose_Params
{
	class UIKinemaRTAnimInstance*                      AnimBlueprint;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CachedPose;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BoneTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.GenerateLookAtTarget
struct UIKinemaAnimLibrary_GenerateLookAtTarget_Params
{
	struct FTransform                                  Bone;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LookAtAxis;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     lookAtDirection;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.FindSkeletonWorldSpaceTransform
struct UIKinemaAnimLibrary_FindSkeletonWorldSpaceTransform_Params
{
	class USkeletalMeshComponent*                      Skeleton;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       TransName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.FindRotatorFromUpAxisAndRefRot
struct UIKinemaAnimLibrary_FindRotatorFromUpAxisAndRefRot_Params
{
	struct FVector                                     UpAxis;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    RefRotator;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EAxisDirection>                        RefSpaceRightDir;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisDirection>                        OutSpaceUpDir;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisDirection>                        OutSpaceRightDir;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisDirection>                        OutSpaceFrontDir;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LeftHanded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotator;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.FindRotationBetweenVectors
struct UIKinemaAnimLibrary_FindRotationBetweenVectors_Params
{
	struct FVector                                     From;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     To;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.FindActorWorldSpaceTransform
struct UIKinemaAnimLibrary_FindActorWorldSpaceTransform_Params
{
	struct FName                                       ActorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IKinemaCore.IKinemaAnimLibrary.DumpSolvers
struct UIKinemaAnimLibrary_DumpSolvers_Params
{
	class UAnimInstance*                               Vim;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Folder;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
