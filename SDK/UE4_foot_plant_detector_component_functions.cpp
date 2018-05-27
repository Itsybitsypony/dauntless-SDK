// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_foot_plant_detector_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function foot_plant_detector_component.foot_plant_detector_component_C.GetFootPlantState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EFootPlantState>   FootPlantState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::GetFootPlantState(TEnumAsByte<EFootPlantState>* FootPlantState)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.GetFootPlantState");

	Ufoot_plant_detector_component_C_GetFootPlantState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FootPlantState != nullptr)
		*FootPlantState = params.FootPlantState;
}


// Function foot_plant_detector_component.foot_plant_detector_component_C.LGetFootPlantState
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveOverride                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Joint                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HeightThreshold                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Planted                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FootHeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FootSpeed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::LGetFootPlantState(class AActor* Target, const struct FName& CurveOverride, const struct FName& Joint, float HeightThreshold, float SpeedThreshold, bool* Planted, float* FootHeight, float* FootSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.LGetFootPlantState");

	Ufoot_plant_detector_component_C_LGetFootPlantState_Params params;
	params.Target = Target;
	params.CurveOverride = CurveOverride;
	params.Joint = Joint;
	params.HeightThreshold = HeightThreshold;
	params.SpeedThreshold = SpeedThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Planted != nullptr)
		*Planted = params.Planted;
	if (FootHeight != nullptr)
		*FootHeight = params.FootHeight;
	if (FootSpeed != nullptr)
		*FootSpeed = params.FootSpeed;
}


// Function foot_plant_detector_component.foot_plant_detector_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.ReceiveTick");

	Ufoot_plant_detector_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function foot_plant_detector_component.foot_plant_detector_component_C.ExecuteUbergraph_foot_plant_detector_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::ExecuteUbergraph_foot_plant_detector_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.ExecuteUbergraph_foot_plant_detector_component");

	Ufoot_plant_detector_component_C_ExecuteUbergraph_foot_plant_detector_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function foot_plant_detector_component.foot_plant_detector_component_C.FootUnplanted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FootSpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::FootUnplanted__DelegateSignature(float FootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.FootUnplanted__DelegateSignature");

	Ufoot_plant_detector_component_C_FootUnplanted__DelegateSignature_Params params;
	params.FootSpeed = FootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function foot_plant_detector_component.foot_plant_detector_component_C.FootPlanted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayedFootSpeed               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   JointName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufoot_plant_detector_component_C::FootPlanted__DelegateSignature(float DelayedFootSpeed, const struct FName& JointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function foot_plant_detector_component.foot_plant_detector_component_C.FootPlanted__DelegateSignature");

	Ufoot_plant_detector_component_C_FootPlanted__DelegateSignature_Params params;
	params.DelayedFootSpeed = DelayedFootSpeed;
	params.JointName = JointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
