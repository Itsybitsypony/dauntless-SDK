#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Engine_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum IKinemaCore.EShape
enum class EShape : uint8_t
{
	EShape__Line                   = 0,
	EShape__Box                    = 1,
	EShape__Sphere                 = 2,
	EShape__Capsule                = 3,
	EShape__EShape_MAX             = 4
};


// Enum IKinemaCore.EAimingOptions
enum class EAimingOptions : uint8_t
{
	EAimingOptions__SingleHand     = 0,
	EAimingOptions__TwoHand        = 1,
	EAimingOptions__DualWield      = 2,
	EAimingOptions__EAimingOptions_MAX = 3
};


// Enum IKinemaCore.ELimitAxisOption
enum class ELimitAxisOption : uint8_t
{
	ELimitAxisOption__X            = 0,
	ELimitAxisOption__Y            = 1,
	ELimitAxisOption__Z            = 2,
	ELimitAxisOption__ELimitAxisOption_MAX = 3
};


// Enum IKinemaCore.EArchonFootID
enum class EArchonFootID : uint8_t
{
	EArchonFootID__LeftFront       = 0,
	EArchonFootID__RightFront      = 1,
	EArchonFootID__LeftRear        = 2,
	EArchonFootID__RightRear       = 3,
	EArchonFootID__LeftMid         = 4,
	EArchonFootID__RightMid        = 5,
	EArchonFootID__MAX_FEET        = 6,
	EArchonFootID__EArchonFootID_MAX = 7
};


// Enum IKinemaCore.EAxisDirection
enum class EAxisDirection : uint8_t
{
	Positixe_X                     = 0,
	Positixe_Y                     = 1,
	Positixe_Z                     = 2,
	Negative_X                     = 3,
	Negative_Y                     = 4,
	Negative_Z                     = 5,
	EAxisDirection_MAX             = 6
};


// Enum IKinemaCore.EIKinemaTargetType
enum class EIKinemaTargetType : uint8_t
{
	EIKinemaTargetType__BlendToTarget = 0,
	EIKinemaTargetType__BlendWithTarget = 1,
	EIKinemaTargetType__BlendWithOffset = 2,
	EIKinemaTargetType__EIKinemaTargetType_MAX = 3
};


// Enum IKinemaCore.EIKinemaBoneAxisType
enum class EIKinemaBoneAxisType : uint8_t
{
	EIKinemaBoneAxisType__EIKBAT_X = 0,
	EIKinemaBoneAxisType__EIKBAT_Y = 1,
	EIKinemaBoneAxisType__EIKBAT_Z = 2,
	EIKinemaBoneAxisType__EIKBAT_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IKinemaCore.ArchonFootIKInfo
// 0x0018
struct FArchonFootIKInfo
{
	struct FName                                       AnkleBone;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BallBone;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonFootID                                      ID;                                                       // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct IKinemaCore.ArchonImpactCurve
// 0x0080
struct FArchonImpactCurve
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRuntimeFloatCurve                          ImpactCurve;                                              // 0x0008(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct IKinemaCore.IKinemaSolverTask
// 0x0050
struct FIKinemaSolverTask
{
	struct FTransform                                  Target;                                                   // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIKinemaTargetType>                    TargetType;                                               // 0x0034(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // 0x0035(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTranslation;                                        // 0x0036(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableOrientation;                                        // 0x0037(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTipOffset;                                             // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              DebugDrawScale;                                           // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaSolverLookAtTask
// 0x0030 (0x0080 - 0x0050)
struct FIKinemaSolverLookAtTask : public FIKinemaSolverTask
{
	struct FVector                                     LookAtTarget;                                             // 0x0050(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LookAtAxis;                                               // 0x005C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     PositionTarget;                                           // 0x0068(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               ReduceWeight;                                             // 0x0074(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0075(0x000B) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaCOMTask
// 0x0014
struct FIKinemaCOMTask
{
	struct FVector                                     Target;                                                   // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               Enable;                                                   // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // 0x000D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x000E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	float                                              DebugDrawScale;                                           // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaTaskProperties
// 0x0040
struct FIKinemaTaskProperties
{
	bool                                               PositionDofX;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofY;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofZ;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                PositionDepth;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionWeight;                                           // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PositionPrecision;                                        // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               RotateDofX;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofY;                                               // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofZ;                                               // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                RotateDepth;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotateWeight;                                             // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RotatePrecision;                                          // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaSegmentProperties
// 0x0020
struct FIKinemaSegmentProperties
{
	bool                                               DofX;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DofY;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DofZ;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceLimits;                                            // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Weight;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableLimits;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LimitsGain;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRetargeting;                                        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RetargetingGain;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaCOMDef
// 0x001C
struct FIKinemaCOMDef
{
	bool                                               DegreeOfFreedomX;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DegreeOfFreedomY;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DegreeOfFreedomZ;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     Weight;                                                   // 0x0004(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Precision;                                                // 0x0010(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaEulerLimits
// 0x001C
struct FIKinemaEulerLimits
{
	struct FVector                                     MinDegrees;                                               // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     MaxDegrees;                                               // 0x000C(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<EIKinemaBoneAxisType>                  BoneAxis;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaBoneDef
// 0x04C0
struct FIKinemaBoneDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Active;                                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DofX;                                                     // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DofY;                                                     // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DofZ;                                                     // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Weight;                                                   // 0x0014(0x000C) (Edit, IsPlainOldData)
	float                                              Mass;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ResetToRest;                                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRetargeting;                                        // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              RetargetingGain;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RetargetingDoFGain;                                       // 0x002C(0x000C) (Edit, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StretchX;                                                 // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StretchY;                                                 // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StretchZ;                                                 // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	struct FVector                                     StretchWeight;                                            // 0x0040(0x000C) (Edit, IsPlainOldData)
	bool                                               EnableStretchLimits;                                      // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceStretchLimits;                                     // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              StretchErrorGain;                                         // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TaskIndex;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               EnableLimits;                                             // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FIKinemaEulerLimits                         Limits;                                                   // 0x0060(0x001C) (Edit)
	bool                                               EnforceLimits;                                            // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              LimitsGain;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
	struct FTransform                                  RestPose;                                                 // 0x0090(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData06[0x400];                                     // 0x00C0(0x0400) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaLookAtLimits
// 0x0018
struct FIKinemaLookAtLimits
{
	struct FRotator                                    Min;                                                      // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Max;                                                      // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaTaskDef
// 0x0110
struct FIKinemaTaskDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               HasPositionTask;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HasRotationTask;                                          // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVRTask;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	struct FTransform                                  MCOffset;                                                 // 0x0010(0x0030) (Edit, IsPlainOldData)
	class UStaticMeshComponent*                        MotioncController;                                        // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               RootAsScalePivot;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                BoneIndex;                                                // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               PositionAsPoleObject;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FVector                                     PoleVectorLocalSpace;                                     // 0x0058(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     EndEffectorPosition;                                      // 0x0064(0x000C) (Edit, IsPlainOldData)
	bool                                               PositionDofX;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofY;                                             // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PositionDofZ;                                             // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	uint32_t                                           PositionDepth;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionWeight;                                           // 0x0078(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     PositionPrecision;                                        // 0x0084(0x000C) (Edit, IsPlainOldData)
	uint32_t                                           PositionPriority;                                         // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleRetargeting;                                         // 0x0094(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetRetargeting;                                        // 0x00A0(0x000C) (IsPlainOldData)
	bool                                               RotateDofX;                                               // 0x00AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofY;                                               // 0x00AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotateDofZ;                                               // 0x00AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00AF(0x0001) MISSED OFFSET
	uint32_t                                           RotateDepth;                                              // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotateWeight;                                             // 0x00B4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     RotatePrecision;                                          // 0x00C0(0x000C) (Edit, IsPlainOldData)
	uint32_t                                           RotatePriority;                                           // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               LookAt;                                                   // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsChest;                                                  // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               UseLocalSpace;                                            // 0x00D2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	struct FVector                                     TipOffsetLocal;                                           // 0x00D4(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     TipOffset;                                                // 0x00E0(0x000C) (Edit, IsPlainOldData)
	struct FIKinemaLookAtLimits                        LookAtLimits;                                             // 0x00EC(0x0018) (Edit)
	bool                                               IsRightHand;                                              // 0x0104(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLeftHand;                                               // 0x0105(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xA];                                       // 0x0106(0x000A) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaForceDef
// 0x0030
struct FIKinemaForceDef
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	uint32_t                                           BoneIndex;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Support;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              SupportRatio;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // 0x0014(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     WorldForce;                                               // 0x0020(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaSolverDef
// 0x00D8
struct FIKinemaSolverDef
{
	int                                                MaxIterations;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       UpAxis;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LimitsGain;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TasksPrecision;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RetargetingGain;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PCoefficient;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTune;                                                 // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              SolutionTolerance;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               TranslateRoot;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RootTranslationDofX;                                      // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RootTranslationDofY;                                      // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RootTranslationDofZ;                                      // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RootTranslationWeight;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootTargetTranslation;                                    // 0x0030(0x000C) (IsPlainOldData)
	bool                                               ActiveCOM;                                                // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              FigureMass;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIKinemaCOMDef                              COM;                                                      // 0x0044(0x001C) (Edit)
	bool                                               EnableMoments;                                            // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               UseDefaultZMP;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	struct FVector                                     ZeroMomentPoint;                                          // 0x0064(0x000C) (IsPlainOldData)
	float                                              MomentsWeight;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MomentsPriority;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ContinuouslySolving;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              PoseTolerance;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Retargeting;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FVector                                     RetargetingTaskScale;                                     // 0x0084(0x000C) (IsPlainOldData)
	struct FVector                                     RetargetingTaskOffset;                                    // 0x0090(0x000C) (IsPlainOldData)
	bool                                               EnableRootTargetTranslation;                              // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               RescaleTasks;                                             // 0x009D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCombineWithAnimation;                                    // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	float                                              SecondaryTaskWeight;                                      // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryTaskPrecision;                                   // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FIKinemaBoneDef>                     Bones;                                                    // 0x00A8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FIKinemaTaskDef>                     Tasks;                                                    // 0x00B8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FIKinemaForceDef>                    Forces;                                                   // 0x00C8(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct IKinemaCore.IKinemaCOMTaskProperties
// 0x001C
struct FIKinemaCOMTaskProperties
{
	bool                                               DofX;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DofY;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DofZ;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     Weight;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Precision;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct IKinemaCore.IKinemaTaskOverride
// 0x0010
struct FIKinemaTaskOverride
{
	struct FName                                       TaskName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAsPin;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaSegmentOverride
// 0x0010
struct FIKinemaSegmentOverride
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAsPin;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaCOMTaskOverride
// 0x0010
struct FIKinemaCOMTaskOverride
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAsPin;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_IKinemaSolver
// 0x01B0 (0x01E0 - 0x0030)
struct FAnimNode_IKinemaSolver : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	class UIKinemaRig*                                 IKinemaRig;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxIteration;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FIKinemaSolverTask>                  Tasks;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	struct FIKinemaCOMTask                             CoMTask;                                                  // 0x0068(0x0014) (Edit, BlueprintVisible, EditFixedSize)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FIKinemaSolverLookAtTask>            LookAtTasks;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FIKinemaTaskProperties>              TaskProperties;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	struct FIKinemaCOMTaskProperties                   CoMTaskProperties;                                        // 0x00A0(0x001C) (Edit, BlueprintVisible, EditFixedSize)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<struct FIKinemaTaskOverride>                PinTaskProperties;                                        // 0x00C0(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FIKinemaSegmentProperties>           SegmentProperties;                                        // 0x00D0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FIKinemaSegmentOverride>             PinSegmentProperties;                                     // 0x00E0(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FIKinemaCOMTaskOverride                     PinCoMTaskProperties;                                     // 0x00F0(0x0010) (Edit, EditFixedSize)
	int                                                LODHalfThreshold;                                         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LODThreshold;                                             // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseBlendAlpha;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC4];                                      // 0x010C(0x00C4) MISSED OFFSET
	TArray<int16_t>                                    LookAtTasksMap;                                           // 0x01D0(0x0010) (ZeroConstructor)
};

// ScriptStruct IKinemaCore.LimbBone
// 0x0090
struct FLimbBone
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit)
	TEnumAsByte<EShape>                                Shape;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector                                     Extents;                                                  // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  Offset;                                                   // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       ImpactCurveName;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactCurveScale;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebug;                                                // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCustomScale;                                           // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              CustomRayTraceStartScale;                                 // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomRayTraceFinishScale;                                // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_IKinemaFootPlacement
// 0x0160 (0x0340 - 0x01E0)
struct FAnimNode_IKinemaFootPlacement : public FAnimNode_IKinemaSolver
{
	bool                                               LimitLegExtenstion;                                       // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	float                                              MaxLegExtension;                                          // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFK;                                                   // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01EA(0x0006) MISSED OFFSET
	TArray<struct FLimbBone>                           LimbTransforms;                                           // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBoneReference                              HandleBone;                                               // 0x0200(0x0018) (Edit)
	struct FBoneReference                              TriggerBone;                                              // 0x0218(0x0018) (Edit)
	struct FBoneReference                              HipsTransform;                                            // 0x0230(0x0018) (Edit)
	TArray<float>                                      MeshOffset;                                               // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Alpha;                                                    // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MaxHipMultiplier;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHipMultiplier;                                         // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRayTraceStartScale;                                 // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRayTraceFinishScale;                                // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpperBodyOffset;                                          // 0x0278(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     lookAtDirection;                                          // 0x0284(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     HandleOffset;                                             // 0x0290(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AimWithWeapon;                                            // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x029D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAimingOptions>                        AimingType;                                               // 0x029E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LockFreeArm;                                              // 0x029F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseFootSetup;                                        // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              ReverseFootFactor;                                        // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverseFootInterpSpeed;                                   // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollLimit;                                                // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchLimit;                                               // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PTransitionSpeed;                                         // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTransitionSpeed;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PTransitionMaxDistance;                                   // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtSmoothness;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExposeSolverTasks;                                        // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InComponentSpace;                                         // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReduceWeight;                                             // 0x02CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseLookUpAxis;                                            // 0x02CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELimitAxisOption>                      LookUpAxis;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	struct FRotator                                    lookAtLimit;                                              // 0x02D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LookAtClamp;                                              // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitsInParentSpace;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFloorContact;                                            // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebug;                                                // 0x02E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFootStabilization;                                       // 0x02E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabilizationThreshold;                                   // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlobalDebugScale;                                         // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x54];                                      // 0x02EC(0x0054) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_ArchonFootPlacement
// 0x01E0 (0x0520 - 0x0340)
struct FAnimNode_ArchonFootPlacement : public FAnimNode_IKinemaFootPlacement
{
	bool                                               EnableInPreview;                                          // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              SplineLength;                                             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SplineSampleLength;                                       // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRadius;                                               // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayCastDistance;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveAlpha;                                               // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<float>                                      CorrectionInfluence;                                      // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             RayOffset;                                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MaxRayCastPitchAngle;                                     // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FRotator                                    LookAtOffset;                                             // 0x0390(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ImpactScale;                                              // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHeightForImpactToApply;                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      SourceBoneForTask;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBoneReference                              CurveStartJoint;                                          // 0x03B8(0x0018) (Edit, BlueprintVisible)
	float                                              SourceBoneAlpha;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTestMode;                                           // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	TArray<int>                                        TestTaskIndices;                                          // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          TestTaskOffsets;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FIKinemaTaskDef>                     TestTaskOverrides;                                        // 0x03F8(0x0010) (Edit, ZeroConstructor)
	float                                              RayCastAlpha;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x114];                                     // 0x040C(0x0114) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_IKinemaConvertLocalToSolverSpace
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_IKinemaConvertLocalToSolverSpace : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	class UIKinemaRig*                                 IKinemaRig;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LastFrameUpdated;                                         // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastFrameEvaluated;                                       // 0x0054(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0058(0x0038) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_IKinemaConvertSolverToLocalSpace
// 0x0058 (0x0088 - 0x0030)
struct FAnimNode_IKinemaConvertSolverToLocalSpace : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	class UIKinemaRig*                                 IKinemaRig;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0050(0x0038) MISSED OFFSET
};

// ScriptStruct IKinemaCore.AnimNode_IKinemaVR
// 0x0000 (0x0340 - 0x0340)
struct FAnimNode_IKinemaVR : public FAnimNode_IKinemaFootPlacement
{

};

// ScriptStruct IKinemaCore.AnimNode_SaveBoneTransform
// 0x0058 (0x0088 - 0x0030)
struct FAnimNode_SaveBoneTransform : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PoseName;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      Bones;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaRTAnimInstanceProxy
// 0x0050 (0x0520 - 0x04D0)
struct FIKinemaRTAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x04D0(0x0050) MISSED OFFSET
};

// ScriptStruct IKinemaCore.IKinemaSavedPose
// 0x00E8
struct FIKinemaSavedPose
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
