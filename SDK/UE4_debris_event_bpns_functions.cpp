// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debris_event_bpns_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function debris_event_bpns.debris_event_bpns_C.SetPositionAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct Fvfx_state_id_struct> Debris_VFX                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Udebris_event_bpns_C::SetPositionAndRotation(const struct FVector& Location, const struct FRotator& Rotation, TArray<struct Fvfx_state_id_struct>* Debris_VFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.SetPositionAndRotation");

	Udebris_event_bpns_C_SetPositionAndRotation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Debris_VFX != nullptr)
		*Debris_VFX = params.Debris_VFX;
}


// Function debris_event_bpns.debris_event_bpns_C.GetPositionAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  Mesh_Comp                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool Udebris_event_bpns_C::GetPositionAndRotation(class USkeletalMeshComponent** Mesh_Comp, struct FVector* Location, struct FRotator* Rotation, class UPhysicalMaterial** PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.GetPositionAndRotation");

	Udebris_event_bpns_C_GetPositionAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh_Comp != nullptr)
		*Mesh_Comp = params.Mesh_Comp;
	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (PhysMat != nullptr)
		*PhysMat = params.PhysMat;

	return params.ReturnValue;
}


// Function debris_event_bpns.debris_event_bpns_C.Received_NotifyTick
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Udebris_event_bpns_C::Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.Received_NotifyTick");

	Udebris_event_bpns_C_Received_NotifyTick_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debris_event_bpns.debris_event_bpns_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Udebris_event_bpns_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.Received_NotifyEnd");

	Udebris_event_bpns_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debris_event_bpns.debris_event_bpns_C.Received_NotifyBegin
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Udebris_event_bpns_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.Received_NotifyBegin");

	Udebris_event_bpns_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function debris_event_bpns.debris_event_bpns_C.GetDebrisData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fdebris_vfx_struct      FoundVFX                       (Parm, OutParm)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udebris_event_bpns_C::GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function debris_event_bpns.debris_event_bpns_C.GetDebrisData");

	Udebris_event_bpns_C_GetDebrisData_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundVFX != nullptr)
		*FoundVFX = params.FoundVFX;
	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (SurfaceName != nullptr)
		*SurfaceName = params.SurfaceName;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
