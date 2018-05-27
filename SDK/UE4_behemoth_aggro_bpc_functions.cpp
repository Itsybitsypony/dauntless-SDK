// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_aggro_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Etarget_access_requirement> AccessibilityRequirement       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Ftarget_data>    MatchingTargetDatas            (Parm, OutParm, ZeroConstructor)

void Ubehemoth_aggro_bpc_C::GetTargets(TEnumAsByte<Etarget_access_requirement> AccessibilityRequirement, TArray<struct Ftarget_data>* MatchingTargetDatas)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargets");

	Ubehemoth_aggro_bpc_C_GetTargets_Params params;
	params.AccessibilityRequirement = AccessibilityRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchingTargetDatas != nullptr)
		*MatchingTargetDatas = params.MatchingTargetDatas;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetAccessibilityTypeFromBools
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAccessible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Etarget_access_requirement> AccesibilityType               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::GetAccessibilityTypeFromBools(bool IsAccessible, bool IsVisible, TEnumAsByte<Etarget_access_requirement>* AccesibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetAccessibilityTypeFromBools");

	Ubehemoth_aggro_bpc_C_GetAccessibilityTypeFromBools_Params params;
	params.IsAccessible = IsAccessible;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AccesibilityType != nullptr)
		*AccesibilityType = params.AccesibilityType;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargetAccessibilityAndVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TargetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Accessible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::GetTargetAccessibilityAndVisibility(int TargetIndex, bool* Accessible, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargetAccessibilityAndVisibility");

	Ubehemoth_aggro_bpc_C_GetTargetAccessibilityAndVisibility_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accessible != nullptr)
		*Accessible = params.Accessible;
	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampAccessible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Timestamp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAccessible                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::IsTimestampAccessible(float Timestamp, bool* IsAccessible)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampAccessible");

	Ubehemoth_aggro_bpc_C_IsTimestampAccessible_Params params;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAccessible != nullptr)
		*IsAccessible = params.IsAccessible;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LastSeenTimestamp              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::IsTimestampVisible(float LastSeenTimestamp, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampVisible");

	Ubehemoth_aggro_bpc_C_IsTimestampVisible_Params params;
	params.LastSeenTimestamp = LastSeenTimestamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryPickNewTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangedTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TargetIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::TryPickNewTarget(bool* ChangedTarget, int* TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryPickNewTarget");

	Ubehemoth_aggro_bpc_C_TryPickNewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangedTarget != nullptr)
		*ChangedTarget = params.ChangedTarget;
	if (TargetIndex != nullptr)
		*TargetIndex = params.TargetIndex;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.UpdateAfterTargetDataChange
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::UpdateAfterTargetDataChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.UpdateAfterTargetDataChange");

	Ubehemoth_aggro_bpc_C_UpdateAfterTargetDataChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTargetValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Etarget_access_requirement> Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TargetIsValid                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::IsTargetValid(int Index, TEnumAsByte<Etarget_access_requirement> Requirement, bool* TargetIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTargetValid");

	Ubehemoth_aggro_bpc_C_IsTargetValid_Params params;
	params.Index = Index;
	params.Requirement = Requirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetIsValid != nullptr)
		*TargetIsValid = params.TargetIsValid;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetOrAddTargetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RefreshCachedData              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Ftarget_data            TargetData                     (Parm, OutParm)
// int                            DataIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::GetOrAddTargetData(class AActor* Target, bool RefreshCachedData, struct Ftarget_data* TargetData, int* DataIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetOrAddTargetData");

	Ubehemoth_aggro_bpc_C_GetOrAddTargetData_Params params;
	params.Target = Target;
	params.RefreshCachedData = RefreshCachedData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetData != nullptr)
		*TargetData = params.TargetData;
	if (DataIndex != nullptr)
		*DataIndex = params.DataIndex;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::GetIndexOfTarget(class AActor* Target, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTarget");

	Ubehemoth_aggro_bpc_C_GetIndexOfTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.BehemothTookDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::BehemothTookDamage(float DamageAmount, class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.BehemothTookDamage");

	Ubehemoth_aggro_bpc_C_BehemothTookDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculateAccessiblity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Ftarget_data            TargetData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<Etarget_accessibility_type> TargetIsAccessible             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PathExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PathCostIfPathExists           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::CalculateAccessiblity(class AActor* Target, const struct Ftarget_data& TargetData, TEnumAsByte<Etarget_accessibility_type>* TargetIsAccessible, bool* PathExists, float* PathCostIfPathExists)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculateAccessiblity");

	Ubehemoth_aggro_bpc_C_CalculateAccessiblity_Params params;
	params.Target = Target;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetIsAccessible != nullptr)
		*TargetIsAccessible = params.TargetIsAccessible;
	if (PathExists != nullptr)
		*PathExists = params.PathExists;
	if (PathCostIfPathExists != nullptr)
		*PathCostIfPathExists = params.PathCostIfPathExists;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsAbleToBuildFrustration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           AbleToBuildFrustration         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::IsAbleToBuildFrustration(bool* AbleToBuildFrustration)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsAbleToBuildFrustration");

	Ubehemoth_aggro_bpc_C_IsAbleToBuildFrustration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbleToBuildFrustration != nullptr)
		*AbleToBuildFrustration = params.AbleToBuildFrustration;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ResetFrustration
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::ResetFrustration()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ResetFrustration");

	Ubehemoth_aggro_bpc_C_ResetFrustration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.DecreaseFrustration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverridePause                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::DecreaseFrustration(float Amount, bool OverridePause)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.DecreaseFrustration");

	Ubehemoth_aggro_bpc_C_DecreaseFrustration_Params params;
	params.Amount = Amount;
	params.OverridePause = OverridePause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTrackedFrustration
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_frustration_reason> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::GetIndexOfTrackedFrustration(TEnumAsByte<Ebehemoth_frustration_reason> Reason, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTrackedFrustration");

	Ubehemoth_aggro_bpc_C_GetIndexOfTrackedFrustration_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IncreaseFrustration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_frustration_reason> Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::IncreaseFrustration(float Amount, TEnumAsByte<Ebehemoth_frustration_reason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IncreaseFrustration");

	Ubehemoth_aggro_bpc_C_IncreaseFrustration_Params params;
	params.Amount = Amount;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ValidateComponent
// (Public, BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::ValidateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ValidateComponent");

	Ubehemoth_aggro_bpc_C_ValidateComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveBeginPlay");

	Ubehemoth_aggro_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CheckDistanceFrustration
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::CheckDistanceFrustration()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CheckDistanceFrustration");

	Ubehemoth_aggro_bpc_C_CheckDistanceFrustration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDelayDegen
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::TryDelayDegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDelayDegen");

	Ubehemoth_aggro_bpc_C_TryDelayDegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.Stub
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::Stub()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.Stub");

	Ubehemoth_aggro_bpc_C_Stub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDegenFrustration
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::TryDegenFrustration()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDegenFrustration");

	Ubehemoth_aggro_bpc_C_TryDegenFrustration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveTick");

	Ubehemoth_aggro_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculatePathCosts
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::CalculatePathCosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculatePathCosts");

	Ubehemoth_aggro_bpc_C_CalculatePathCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshAndScoreTargets
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::RefreshAndScoreTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshAndScoreTargets");

	Ubehemoth_aggro_bpc_C_RefreshAndScoreTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnQueryFinishedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnQueryFinishedEvent_Event_1");

	Ubehemoth_aggro_bpc_C_OnQueryFinishedEvent_Event_1_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshTargetVisibility
// (BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::RefreshTargetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshTargetVisibility");

	Ubehemoth_aggro_bpc_C_RefreshTargetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnTargetDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::OnTargetDestroyed(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnTargetDestroyed");

	Ubehemoth_aggro_bpc_C_OnTargetDestroyed_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ExecuteUbergraph_behemoth_aggro_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::ExecuteUbergraph_behemoth_aggro_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ExecuteUbergraph_behemoth_aggro_bpc");

	Ubehemoth_aggro_bpc_C_ExecuteUbergraph_behemoth_aggro_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TookDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::TookDamage__DelegateSignature(float DamageAmount, class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TookDamage__DelegateSignature");

	Ubehemoth_aggro_bpc_C_TookDamage__DelegateSignature_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TargetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_aggro_bpc_C::TargetChanged__DelegateSignature(int OldTarget, int NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TargetChanged__DelegateSignature");

	Ubehemoth_aggro_bpc_C_TargetChanged__DelegateSignature_Params params;
	params.OldTarget = OldTarget;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.EndedFrustration__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::EndedFrustration__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.EndedFrustration__DelegateSignature");

	Ubehemoth_aggro_bpc_C_EndedFrustration__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.StartedFrustration__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubehemoth_aggro_bpc_C::StartedFrustration__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.StartedFrustration__DelegateSignature");

	Ubehemoth_aggro_bpc_C_StartedFrustration__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
