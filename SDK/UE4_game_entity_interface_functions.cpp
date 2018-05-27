// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_game_entity_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function game_entity_interface.game_entity_interface_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugame_entity_interface_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.CanHitCBPushPullTarget");

	Ugame_entity_interface_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function game_entity_interface.game_entity_interface_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugame_entity_interface_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.GetDefaultElementalAttackType");

	Ugame_entity_interface_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function game_entity_interface.game_entity_interface_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugame_entity_interface_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.GetLookAtAlpha");

	Ugame_entity_interface_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function game_entity_interface.game_entity_interface_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void Ugame_entity_interface_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.GetLookAtVector");

	Ugame_entity_interface_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function game_entity_interface.game_entity_interface_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Ugame_entity_interface_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.GetFallbackProjectileSpawnOffset");

	Ugame_entity_interface_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function game_entity_interface.game_entity_interface_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugame_entity_interface_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function game_entity_interface.game_entity_interface_C.GetMesh");

	Ugame_entity_interface_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
