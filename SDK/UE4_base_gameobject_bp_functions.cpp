// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_gameobject_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_gameobject_bp.base_gameobject_bp_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.GetMesh");

	Abase_gameobject_bp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function base_gameobject_bp.base_gameobject_bp_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Abase_gameobject_bp_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.GetFallbackProjectileSpawnOffset");

	Abase_gameobject_bp_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void Abase_gameobject_bp_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtVector");

	Abase_gameobject_bp_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.GetLookAtAlpha");

	Abase_gameobject_bp_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function base_gameobject_bp.base_gameobject_bp_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.GetDefaultElementalAttackType");

	Abase_gameobject_bp_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function base_gameobject_bp.base_gameobject_bp_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.CanHitCBPushPullTarget");

	Abase_gameobject_bp_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function base_gameobject_bp.base_gameobject_bp_C.SpawnWidgetComponentForFCT
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::SpawnWidgetComponentForFCT(class UWidgetComponent** WidgetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.SpawnWidgetComponentForFCT");

	Abase_gameobject_bp_C_SpawnWidgetComponentForFCT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetComponent != nullptr)
		*WidgetComponent = params.WidgetComponent;
}


// Function base_gameobject_bp.base_gameobject_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abase_gameobject_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.UserConstructionScript");

	Abase_gameobject_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.ReceiveTick");

	Abase_gameobject_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.AuthDie
// (BlueprintCallable, BlueprintEvent)

void Abase_gameobject_bp_C::AuthDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.AuthDie");

	Abase_gameobject_bp_C_AuthDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.AuthOnKilled
// (BlueprintCallable, BlueprintEvent)

void Abase_gameobject_bp_C::AuthOnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.AuthOnKilled");

	Abase_gameobject_bp_C_AuthOnKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abase_gameobject_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.ReceiveBeginPlay");

	Abase_gameobject_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.MulticastOnDeath
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Abase_gameobject_bp_C::MulticastOnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.MulticastOnDeath");

	Abase_gameobject_bp_C_MulticastOnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.MulticastDamageText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasImpactLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Abase_gameobject_bp_C::MulticastDamageText(float DamageAmount, class AActor* DamageInstigator, bool HasImpactLocation, const struct FVector& ImpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.MulticastDamageText");

	Abase_gameobject_bp_C_MulticastDamageText_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;
	params.HasImpactLocation = HasImpactLocation;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.ReceivedArchonAbilityDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Abase_gameobject_bp_C::ReceivedArchonAbilityDamage(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.ReceivedArchonAbilityDamage");

	Abase_gameobject_bp_C_ReceivedArchonAbilityDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.TryAndDestroyWidgetComponentForFCT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        WidgetComponentReference       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::TryAndDestroyWidgetComponentForFCT(class UWidgetComponent* WidgetComponentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.TryAndDestroyWidgetComponentForFCT");

	Abase_gameobject_bp_C_TryAndDestroyWidgetComponentForFCT_Params params;
	params.WidgetComponentReference = WidgetComponentReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.ExecuteUbergraph_base_gameobject_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::ExecuteUbergraph_base_gameobject_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.ExecuteUbergraph_base_gameobject_bp");

	Abase_gameobject_bp_C_ExecuteUbergraph_base_gameobject_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_gameobject_bp.base_gameobject_bp_C.ServerOnKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abase_gameobject_bp_C*   KilledObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_gameobject_bp_C::ServerOnKilled__DelegateSignature(class Abase_gameobject_bp_C* KilledObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_gameobject_bp.base_gameobject_bp_C.ServerOnKilled__DelegateSignature");

	Abase_gameobject_bp_C_ServerOnKilled__DelegateSignature_Params params;
	params.KilledObject = KilledObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
