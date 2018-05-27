// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_targeting_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function targeting_function_library.targeting_function_library_C.DebugDrawGroundSphere
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Draw                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class FString                  Print                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utargeting_function_library_C::STATIC_DebugDrawGroundSphere(bool Draw, const struct FVector& Location, const class FString& Print, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function targeting_function_library.targeting_function_library_C.DebugDrawGroundSphere");

	Utargeting_function_library_C_DebugDrawGroundSphere_Params params;
	params.Draw = Draw;
	params.Location = Location;
	params.Print = Print;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function targeting_function_library.targeting_function_library_C.FindPointAtRangeFromCharacterBasedOnCamera
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CameraOwnerActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawDebugLine                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void Utargeting_function_library_C::STATIC_FindPointAtRangeFromCharacterBasedOnCamera(class AActor* CameraOwnerActor, float MaxRange, bool DrawDebugLine, class UObject* __WorldContext, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function targeting_function_library.targeting_function_library_C.FindPointAtRangeFromCharacterBasedOnCamera");

	Utargeting_function_library_C_FindPointAtRangeFromCharacterBasedOnCamera_Params params;
	params.CameraOwnerActor = CameraOwnerActor;
	params.MaxRange = MaxRange;
	params.DrawDebugLine = DrawDebugLine;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function targeting_function_library.targeting_function_library_C.FindSpotInFrontOfLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                StartRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeightOffset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ForwardOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RightOffset                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, IsPlainOldData)

void Utargeting_function_library_C::STATIC_FindSpotInFrontOfLocation(const struct FVector& StartLocation, const struct FRotator& StartRotation, float HeightOffset, float ForwardOffset, float RightOffset, class UObject* __WorldContext, struct FVector* NewLocation, struct FRotator* NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function targeting_function_library.targeting_function_library_C.FindSpotInFrontOfLocation");

	Utargeting_function_library_C_FindSpotInFrontOfLocation_Params params;
	params.StartLocation = StartLocation;
	params.StartRotation = StartRotation;
	params.HeightOffset = HeightOffset;
	params.ForwardOffset = ForwardOffset;
	params.RightOffset = RightOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function targeting_function_library.targeting_function_library_C.FindCameraGroundTarget
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CameraOwnerActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AbilityMaxRange                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DragDebug                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void Utargeting_function_library_C::STATIC_FindCameraGroundTarget(class AActor* CameraOwnerActor, float AbilityMaxRange, bool DragDebug, class UObject* __WorldContext, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function targeting_function_library.targeting_function_library_C.FindCameraGroundTarget");

	Utargeting_function_library_C_FindCameraGroundTarget_Params params;
	params.CameraOwnerActor = CameraOwnerActor;
	params.AbilityMaxRange = AbilityMaxRange;
	params.DragDebug = DragDebug;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
