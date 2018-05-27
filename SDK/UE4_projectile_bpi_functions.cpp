// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function projectile_bpi.projectile_bpi_C.UpdateParticlePosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aprojectile_base_bp_C*   ProjectileActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void Uprojectile_bpi_C::UpdateParticlePosition(float DeltaSeconds, class Aprojectile_base_bp_C* ProjectileActor, struct FVector* Position, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_bpi.projectile_bpi_C.UpdateParticlePosition");

	Uprojectile_bpi_C_UpdateParticlePosition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.ProjectileActor = ProjectileActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function projectile_bpi.projectile_bpi_C.SetProjectileMovementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eprojectile_movement_type> NewMovementType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprojectile_bpi_C::SetProjectileMovementType(TEnumAsByte<Eprojectile_movement_type> NewMovementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_bpi.projectile_bpi_C.SetProjectileMovementType");

	Uprojectile_bpi_C_SetProjectileMovementType_Params params;
	params.NewMovementType = NewMovementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
