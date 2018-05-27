// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_slayer_bot_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function slayer_bot_bp.slayer_bot_bp_C.OnRep_WeaponEquipped?
// (BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::OnRep_WeaponEquipped_()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.OnRep_WeaponEquipped?");

	Aslayer_bot_bp_C_OnRep_WeaponEquipped__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.SetupWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::SetupWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.SetupWeapon");

	Aslayer_bot_bp_C_SetupWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.MatchBehemothPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::MatchBehemothPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.MatchBehemothPower");

	Aslayer_bot_bp_C_MatchBehemothPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.AddRandomPOIs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aslayer_bot_bp_C::AddRandomPOIs(int Min, int Max, TArray<class AActor*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.AddRandomPOIs");

	Aslayer_bot_bp_C_AddRandomPOIs_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function slayer_bot_bp.slayer_bot_bp_C.BuildCityPath
// (Public, BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::BuildCityPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.BuildCityPath");

	Aslayer_bot_bp_C_BuildCityPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.SetupArmor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::SetupArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.SetupArmor");

	Aslayer_bot_bp_C_SetupArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.MakeRandomDye
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDyeVariant             Dye                            (Parm, OutParm)

void Aslayer_bot_bp_C::MakeRandomDye(struct FDyeVariant* Dye)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.MakeRandomDye");

	Aslayer_bot_bp_C_MakeRandomDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dye != nullptr)
		*Dye = params.Dye;
}


// Function slayer_bot_bp.slayer_bot_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.UserConstructionScript");

	Aslayer_bot_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aslayer_bot_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.ReceiveBeginPlay");

	Aslayer_bot_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aslayer_bot_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.ReceiveTick");

	Aslayer_bot_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.OnDoPivotDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OverridePivotMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aslayer_bot_bp_C::OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.OnDoPivotDelegate");

	Aslayer_bot_bp_C_OnDoPivotDelegate_Params params;
	params.TurnAngle = TurnAngle;
	params.OverridePivotMontage = OverridePivotMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.OnPivotAborted
// (BlueprintCallable, BlueprintEvent)

void Aslayer_bot_bp_C::OnPivotAborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.OnPivotAborted");

	Aslayer_bot_bp_C_OnPivotAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.AuthEquipWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWeapon*           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aslayer_bot_bp_C::AuthEquipWeapon(class AArchonWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.AuthEquipWeapon");

	Aslayer_bot_bp_C_AuthEquipWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function slayer_bot_bp.slayer_bot_bp_C.ExecuteUbergraph_slayer_bot_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aslayer_bot_bp_C::ExecuteUbergraph_slayer_bot_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function slayer_bot_bp.slayer_bot_bp_C.ExecuteUbergraph_slayer_bot_bp");

	Aslayer_bot_bp_C_ExecuteUbergraph_slayer_bot_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
