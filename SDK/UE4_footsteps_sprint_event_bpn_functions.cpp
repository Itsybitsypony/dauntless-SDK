// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_footsteps_sprint_event_bpn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C.GetDebrisData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fdebris_vfx_struct      FoundVFX                       (Parm, OutParm)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ufootsteps_sprint_event_bpn_C::GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C.GetDebrisData");

	Ufootsteps_sprint_event_bpn_C_GetDebrisData_Params params;
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


// Function footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ufootsteps_sprint_event_bpn_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function footsteps_sprint_event_bpn.footsteps_sprint_event_bpn_C.Received_Notify");

	Ufootsteps_sprint_event_bpn_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
