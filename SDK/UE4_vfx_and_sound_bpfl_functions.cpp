// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vfx_and_sound_bpfl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.SpawnGroundDebris
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StaticLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            DebrisIntensity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uvfx_and_sound_bpfl_C::STATIC_SpawnGroundDebris(const struct FVector& StaticLocation, int DebrisIntensity, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.SpawnGroundDebris");

	Uvfx_and_sound_bpfl_C_SpawnGroundDebris_Params params;
	params.StaticLocation = StaticLocation;
	params.DebrisIntensity = DebrisIntensity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetDebrisData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fdebris_vfx_struct      FoundVFX                       (Parm, OutParm)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uvfx_and_sound_bpfl_C::STATIC_GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, class UObject* __WorldContext, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetDebrisData");

	Uvfx_and_sound_bpfl_C_GetDebrisData_Params params;
	params.SurfaceType = SurfaceType;
	params.__WorldContext = __WorldContext;

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


// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.ExtractSwitchFromTags
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer   Tag_Container                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName Uvfx_and_sound_bpfl_C::STATIC_ExtractSwitchFromTags(const struct FGameplayTagContainer& Tag_Container, class UObject* __WorldContext, TArray<struct FGameplayTag>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.ExtractSwitchFromTags");

	Uvfx_and_sound_bpfl_C_ExtractSwitchFromTags_Params params;
	params.Tag_Container = Tag_Container;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetWeaponHitLocationAndDirection
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class AArchonCharacter*        Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void Uvfx_and_sound_bpfl_C::STATIC_GetWeaponHitLocationAndDirection(const struct FGameplayTagContainer& Tags, class AArchonCharacter* Attacker, const struct FHitResult& HitInfo, class UObject* __WorldContext, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetWeaponHitLocationAndDirection");

	Uvfx_and_sound_bpfl_C_GetWeaponHitLocationAndDirection_Params params;
	params.Tags = Tags;
	params.Attacker = Attacker;
	params.HitInfo = HitInfo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.Debris VFX and Sound Trigger
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity_Vector                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Is_High                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uvfx_and_sound_bpfl_C::STATIC_Debris_VFX_and_Sound_Trigger(class USkeletalMeshComponent* Skeletal_Mesh, const struct FName& Socket_Name, const struct FVector& Velocity_Vector, bool Is_High, class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.Debris VFX and Sound Trigger");

	Uvfx_and_sound_bpfl_C_Debris_VFX_and_Sound_Trigger_Params params;
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.Socket_Name = Socket_Name;
	params.Velocity_Vector = Velocity_Vector;
	params.Is_High = Is_High;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
