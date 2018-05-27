// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_received_hit_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function received_hit_ab.received_hit_ab_C.FlipYawForRootMotion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                FlippedRotation                (Parm, OutParm, IsPlainOldData)

void Ureceived_hit_ab_C::FlipYawForRootMotion(const struct FRotator& Rotation, struct FRotator* FlippedRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.FlipYawForRootMotion");

	Ureceived_hit_ab_C_FlipYawForRootMotion_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlippedRotation != nullptr)
		*FlippedRotation = params.FlippedRotation;
}


// Function received_hit_ab.received_hit_ab_C.GetHitDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 HitDirection                   (Parm, OutParm, IsPlainOldData)

void Ureceived_hit_ab_C::GetHitDirection(const struct FGameplayEffectContextHandle& EffectContext, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetHitDirection");

	Ureceived_hit_ab_C_GetHitDirection_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitDirection != nullptr)
		*HitDirection = params.HitDirection;
}


// Function received_hit_ab.received_hit_ab_C.GetModifiedSpaceWarpScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector Ureceived_hit_ab_C::GetModifiedSpaceWarpScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetModifiedSpaceWarpScale");

	Ureceived_hit_ab_C_GetModifiedSpaceWarpScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function received_hit_ab.received_hit_ab_C.GetOptimalityScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          OptimalityScale                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::GetOptimalityScale(const struct FGameplayTagContainer& TagContainer, float* OptimalityScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetOptimalityScale");

	Ureceived_hit_ab_C_GetOptimalityScale_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptimalityScale != nullptr)
		*OptimalityScale = params.OptimalityScale;
}


// Function received_hit_ab.received_hit_ab_C.GetDirectionalAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fstagger_montage_data_str StaggerStruct                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::GetDirectionalAnimation(const struct Fstagger_montage_data_str& StaggerStruct, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetDirectionalAnimation");

	Ureceived_hit_ab_C_GetDirectionalAnimation_Params params;
	params.StaggerStruct = StaggerStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function received_hit_ab.received_hit_ab_C.GetJumpForceData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::GetJumpForceData(const struct FGameplayTagContainer& TagContainer, float* Distance, float* Height, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetJumpForceData");

	Ureceived_hit_ab_C_GetJumpForceData_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
	if (Height != nullptr)
		*Height = params.Height;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function received_hit_ab.received_hit_ab_C.GetAnimSet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fstagger_animset_str    StaggerAnimset                 (Parm, OutParm)

void Ureceived_hit_ab_C::GetAnimSet(class ABP_PlayerCharacter_C* Player, struct Fstagger_animset_str* StaggerAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetAnimSet");

	Ureceived_hit_ab_C_GetAnimSet_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerAnimset != nullptr)
		*StaggerAnimset = params.StaggerAnimset;
}


// Function received_hit_ab.received_hit_ab_C.GetFacingDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FaceAttacker                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::GetFacingDirection(const struct FGameplayEffectContextHandle& EffectContext, bool* FaceAttacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetFacingDirection");

	Ureceived_hit_ab_C_GetFacingDirection_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FaceAttacker != nullptr)
		*FaceAttacker = params.FaceAttacker;
}


// Function received_hit_ab.received_hit_ab_C.SetDirectionFromInputAcceleration?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Direction_from_Input_Acceleration (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::SetDirectionFromInputAcceleration_(bool Direction_from_Input_Acceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.SetDirectionFromInputAcceleration?");

	Ureceived_hit_ab_C_SetDirectionFromInputAcceleration__Params params;
	params.Direction_from_Input_Acceleration = Direction_from_Input_Acceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.ApplyTurnWarp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectContextHandle Effect_Context                 (BlueprintVisible, BlueprintReadOnly, Parm)

void Ureceived_hit_ab_C::ApplyTurnWarp(const struct FGameplayEffectContextHandle& Effect_Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.ApplyTurnWarp");

	Ureceived_hit_ab_C_ApplyTurnWarp_Params params;
	params.Effect_Context = Effect_Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.GetHitRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRotator                HitRotation                    (Parm, OutParm, IsPlainOldData)

void Ureceived_hit_ab_C::GetHitRotation(const struct FGameplayEffectContextHandle& EffectContext, struct FRotator* HitRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.GetHitRotation");

	Ureceived_hit_ab_C_GetHitRotation_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitRotation != nullptr)
		*HitRotation = params.HitRotation;
}


// Function received_hit_ab.received_hit_ab_C.TelemetryPlayerDowned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::TelemetryPlayerDowned(class ABP_PlayerCharacter_C* Player, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.TelemetryPlayerDowned");

	Ureceived_hit_ab_C_TelemetryPlayerDowned_Params params;
	params.Player = Player;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.HandleDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tag_Container                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABP_PlayerCharacter_C*   BP_PlayerCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::HandleDeath(const struct FGameplayTagContainer& Tag_Container, class ABP_PlayerCharacter_C* BP_PlayerCharacter, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.HandleDeath");

	Ureceived_hit_ab_C_HandleDeath_Params params;
	params.Tag_Container = Tag_Container;
	params.BP_PlayerCharacter = BP_PlayerCharacter;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_12D922E24C5DB599201BD2A8857E2975
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_12D922E24C5DB599201BD2A8857E2975()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_12D922E24C5DB599201BD2A8857E2975");

	Ureceived_hit_ab_C_OnCancelled_12D922E24C5DB599201BD2A8857E2975_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_12D922E24C5DB599201BD2A8857E2975
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_12D922E24C5DB599201BD2A8857E2975()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_12D922E24C5DB599201BD2A8857E2975");

	Ureceived_hit_ab_C_OnInterrupted_12D922E24C5DB599201BD2A8857E2975_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_12D922E24C5DB599201BD2A8857E2975
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_12D922E24C5DB599201BD2A8857E2975()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_12D922E24C5DB599201BD2A8857E2975");

	Ureceived_hit_ab_C_OnBlendOut_12D922E24C5DB599201BD2A8857E2975_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_12D922E24C5DB599201BD2A8857E2975
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_12D922E24C5DB599201BD2A8857E2975()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_12D922E24C5DB599201BD2A8857E2975");

	Ureceived_hit_ab_C_OnCompleted_12D922E24C5DB599201BD2A8857E2975_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_57424C6941C506B6B611A19406EFFE91
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_57424C6941C506B6B611A19406EFFE91()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_57424C6941C506B6B611A19406EFFE91");

	Ureceived_hit_ab_C_OnCancelled_57424C6941C506B6B611A19406EFFE91_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_57424C6941C506B6B611A19406EFFE91
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_57424C6941C506B6B611A19406EFFE91()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_57424C6941C506B6B611A19406EFFE91");

	Ureceived_hit_ab_C_OnInterrupted_57424C6941C506B6B611A19406EFFE91_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_57424C6941C506B6B611A19406EFFE91
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_57424C6941C506B6B611A19406EFFE91()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_57424C6941C506B6B611A19406EFFE91");

	Ureceived_hit_ab_C_OnBlendOut_57424C6941C506B6B611A19406EFFE91_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_57424C6941C506B6B611A19406EFFE91
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_57424C6941C506B6B611A19406EFFE91()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_57424C6941C506B6B611A19406EFFE91");

	Ureceived_hit_ab_C_OnCompleted_57424C6941C506B6B611A19406EFFE91_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_ACD8760E43E78C95D15D14A1F7011A13
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_ACD8760E43E78C95D15D14A1F7011A13()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_ACD8760E43E78C95D15D14A1F7011A13");

	Ureceived_hit_ab_C_OnCancelled_ACD8760E43E78C95D15D14A1F7011A13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13");

	Ureceived_hit_ab_C_OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13");

	Ureceived_hit_ab_C_OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_ACD8760E43E78C95D15D14A1F7011A13
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_ACD8760E43E78C95D15D14A1F7011A13()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_ACD8760E43E78C95D15D14A1F7011A13");

	Ureceived_hit_ab_C_OnCompleted_ACD8760E43E78C95D15D14A1F7011A13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnFinish_AD5F50BF46D768C0817B86A10B6997C9
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnFinish_AD5F50BF46D768C0817B86A10B6997C9()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnFinish_AD5F50BF46D768C0817B86A10B6997C9");

	Ureceived_hit_ab_C_OnFinish_AD5F50BF46D768C0817B86A10B6997C9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_5F7CE90948F82B771F678FBD624230E5
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_5F7CE90948F82B771F678FBD624230E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_5F7CE90948F82B771F678FBD624230E5");

	Ureceived_hit_ab_C_OnCancelled_5F7CE90948F82B771F678FBD624230E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_5F7CE90948F82B771F678FBD624230E5
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_5F7CE90948F82B771F678FBD624230E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_5F7CE90948F82B771F678FBD624230E5");

	Ureceived_hit_ab_C_OnInterrupted_5F7CE90948F82B771F678FBD624230E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_5F7CE90948F82B771F678FBD624230E5
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_5F7CE90948F82B771F678FBD624230E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_5F7CE90948F82B771F678FBD624230E5");

	Ureceived_hit_ab_C_OnBlendOut_5F7CE90948F82B771F678FBD624230E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_5F7CE90948F82B771F678FBD624230E5
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_5F7CE90948F82B771F678FBD624230E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_5F7CE90948F82B771F678FBD624230E5");

	Ureceived_hit_ab_C_OnCompleted_5F7CE90948F82B771F678FBD624230E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1");

	Ureceived_hit_ab_C_OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1");

	Ureceived_hit_ab_C_OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1");

	Ureceived_hit_ab_C_OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1");

	Ureceived_hit_ab_C_OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_B2D861ED403B854C973AEE9D44329AC0
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_B2D861ED403B854C973AEE9D44329AC0()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_B2D861ED403B854C973AEE9D44329AC0");

	Ureceived_hit_ab_C_OnCancelled_B2D861ED403B854C973AEE9D44329AC0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_B2D861ED403B854C973AEE9D44329AC0
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_B2D861ED403B854C973AEE9D44329AC0()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_B2D861ED403B854C973AEE9D44329AC0");

	Ureceived_hit_ab_C_OnInterrupted_B2D861ED403B854C973AEE9D44329AC0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_B2D861ED403B854C973AEE9D44329AC0
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_B2D861ED403B854C973AEE9D44329AC0()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_B2D861ED403B854C973AEE9D44329AC0");

	Ureceived_hit_ab_C_OnBlendOut_B2D861ED403B854C973AEE9D44329AC0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_B2D861ED403B854C973AEE9D44329AC0
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_B2D861ED403B854C973AEE9D44329AC0()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_B2D861ED403B854C973AEE9D44329AC0");

	Ureceived_hit_ab_C_OnCompleted_B2D861ED403B854C973AEE9D44329AC0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCancelled_E7B9F52841F57CB77BB22C83EA22344B
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCancelled_E7B9F52841F57CB77BB22C83EA22344B()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCancelled_E7B9F52841F57CB77BB22C83EA22344B");

	Ureceived_hit_ab_C_OnCancelled_E7B9F52841F57CB77BB22C83EA22344B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B");

	Ureceived_hit_ab_C_OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B");

	Ureceived_hit_ab_C_OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnCompleted_E7B9F52841F57CB77BB22C83EA22344B
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnCompleted_E7B9F52841F57CB77BB22C83EA22344B()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnCompleted_E7B9F52841F57CB77BB22C83EA22344B");

	Ureceived_hit_ab_C_OnCompleted_E7B9F52841F57CB77BB22C83EA22344B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnChange_1D47339647CBBA83521CB28A0634E11F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::OnChange_1D47339647CBBA83521CB28A0634E11F(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnChange_1D47339647CBBA83521CB28A0634E11F");

	Ureceived_hit_ab_C_OnChange_1D47339647CBBA83521CB28A0634E11F_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnChange_21C583704649DB7E31C853A07150F629
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::OnChange_21C583704649DB7E31C853A07150F629(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnChange_21C583704649DB7E31C853A07150F629");

	Ureceived_hit_ab_C_OnChange_21C583704649DB7E31C853A07150F629_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA");

	Ureceived_hit_ab_C_OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0");

	Ureceived_hit_ab_C_OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ureceived_hit_ab_C::EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C");

	Ureceived_hit_ab_C_EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.OnFinish_3AECE750475E4A3DF74836BFB5825EBA
// (BlueprintCallable, BlueprintEvent)

void Ureceived_hit_ab_C::OnFinish_3AECE750475E4A3DF74836BFB5825EBA()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.OnFinish_3AECE750475E4A3DF74836BFB5825EBA");

	Ureceived_hit_ab_C_OnFinish_3AECE750475E4A3DF74836BFB5825EBA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ureceived_hit_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.K2_ActivateAbilityFromEvent");

	Ureceived_hit_ab_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ureceived_hit_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.K2_OnEndAbility");

	Ureceived_hit_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function received_hit_ab.received_hit_ab_C.ExecuteUbergraph_received_hit_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ureceived_hit_ab_C::ExecuteUbergraph_received_hit_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function received_hit_ab.received_hit_ab_C.ExecuteUbergraph_received_hit_ab");

	Ureceived_hit_ab_C_ExecuteUbergraph_received_hit_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
