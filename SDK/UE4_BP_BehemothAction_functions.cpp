// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BehemothAction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BehemothAction.BP_BehemothAction_C.ChooseMontageToPlay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ChooseMontageToPlay(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ChooseMontageToPlay");

	ABP_BehemothAction_C_ChooseMontageToPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function BP_BehemothAction.BP_BehemothAction_C.AuthSetNewCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewCooldown                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::AuthSetNewCooldown(float NewCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.AuthSetNewCooldown");

	ABP_BehemothAction_C_AuthSetNewCooldown_Params params;
	params.NewCooldown = NewCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.IsActionAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActionAvailable              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::IsActionAvailable(bool* IsActionAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.IsActionAvailable");

	ABP_BehemothAction_C_IsActionAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActionAvailable != nullptr)
		*IsActionAvailable = params.IsActionAvailable;
}


// Function BP_BehemothAction.BP_BehemothAction_C.GetScalingFactor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ScalingFactor                  (Parm, OutParm, IsPlainOldData)

void ABP_BehemothAction_C::GetScalingFactor(struct FVector* ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.GetScalingFactor");

	ABP_BehemothAction_C_GetScalingFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScalingFactor != nullptr)
		*ScalingFactor = params.ScalingFactor;
}


// Function BP_BehemothAction.BP_BehemothAction_C.GetScaledSimplifiedAttackVectors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         Vectors1                       (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         Vectors2                       (Parm, OutParm, ZeroConstructor)

void ABP_BehemothAction_C::GetScaledSimplifiedAttackVectors(TArray<struct FVector>* Vectors1, TArray<struct FVector>* Vectors2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.GetScaledSimplifiedAttackVectors");

	ABP_BehemothAction_C_GetScaledSimplifiedAttackVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vectors1 != nullptr)
		*Vectors1 = params.Vectors1;
	if (Vectors2 != nullptr)
		*Vectors2 = params.Vectors2;
}


// Function BP_BehemothAction.BP_BehemothAction_C.Evaluate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::Evaluate(float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.Evaluate");

	ABP_BehemothAction_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ClosestPointToLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LineEnd                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ClosestPointToLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ClosestPointToLine");

	ABP_BehemothAction_C_ClosestPointToLine_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_BehemothAction.BP_BehemothAction_C.SimplifyVectors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Vectors                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Epsilon                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SimplifiedVectors              (Parm, OutParm, ZeroConstructor)

void ABP_BehemothAction_C::SimplifyVectors(float Epsilon, TArray<struct FVector>* Vectors, TArray<struct FVector>* SimplifiedVectors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.SimplifyVectors");

	ABP_BehemothAction_C_SimplifyVectors_Params params;
	params.Epsilon = Epsilon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vectors != nullptr)
		*Vectors = params.Vectors;
	if (SimplifiedVectors != nullptr)
		*SimplifiedVectors = params.SimplifiedVectors;
}


// Function BP_BehemothAction.BP_BehemothAction_C.TestAttackVectorCollision
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ActionAllowed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::TestAttackVectorCollision(bool* ActionAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.TestAttackVectorCollision");

	ABP_BehemothAction_C_TestAttackVectorCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionAllowed != nullptr)
		*ActionAllowed = params.ActionAllowed;
}


// Function BP_BehemothAction.BP_BehemothAction_C.SetBehemothNavlinkMovement
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::SetBehemothNavlinkMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.SetBehemothNavlinkMovement");

	ABP_BehemothAction_C_SetBehemothNavlinkMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.GetHitAreaPositionWS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_ActionHitArea   HitArea                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)

void ABP_BehemothAction_C::GetHitAreaPositionWS(const struct FStruct_ActionHitArea& HitArea, struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.GetHitAreaPositionWS");

	ABP_BehemothAction_C_GetHitAreaPositionWS_Params params;
	params.HitArea = HitArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_BehemothAction.BP_BehemothAction_C.PreAttackLogic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::PreAttackLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.PreAttackLogic");

	ABP_BehemothAction_C_PreAttackLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.PostAttackLogic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::PostAttackLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.PostAttackLogic");

	ABP_BehemothAction_C_PostAttackLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecifcTests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TestsPassed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ActionSpecifcTests(bool* TestsPassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecifcTests");

	ABP_BehemothAction_C_ActionSpecifcTests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestsPassed != nullptr)
		*TestsPassed = params.TestsPassed;
}


// Function BP_BehemothAction.BP_BehemothAction_C.StartCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::StartCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.StartCooldown");

	ABP_BehemothAction_C_StartCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecificEvaluate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ActionSpecificEvaluate(class AArchonBehemoth* Behemoth, float* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecificEvaluate");

	ABP_BehemothAction_C_ActionSpecificEvaluate_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BP_BehemothAction.BP_BehemothAction_C.EndCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::EndCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.EndCooldown");

	ABP_BehemothAction_C_EndCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.UserConstructionScript");

	ABP_BehemothAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ReceiveTick");

	ABP_BehemothAction_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BehemothAction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ReceiveBeginPlay");

	ABP_BehemothAction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.SimplifyAttackVectors
// (BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::SimplifyAttackVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.SimplifyAttackVectors");

	ABP_BehemothAction_C_SimplifyAttackVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.DisplayVectors
// (BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::DisplayVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.DisplayVectors");

	ABP_BehemothAction_C_DisplayVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_BehemothAction_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ReceiveDestroyed");

	ABP_BehemothAction_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ClearDebugDraw
// (BlueprintCallable, BlueprintEvent)

void ABP_BehemothAction_C::ClearDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ClearDebugDraw");

	ABP_BehemothAction_C_ClearDebugDraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehemothAction.BP_BehemothAction_C.ExecuteUbergraph_BP_BehemothAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BehemothAction_C::ExecuteUbergraph_BP_BehemothAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehemothAction.BP_BehemothAction_C.ExecuteUbergraph_BP_BehemothAction");

	ABP_BehemothAction_C_ExecuteUbergraph_BP_BehemothAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
