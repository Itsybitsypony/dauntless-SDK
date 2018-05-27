// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_bpi.weapon_bpi_C.CreateGameplayCueFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParticleSystem*         Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::CreateGameplayCueFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters, class UParticleSystem* Particle, const struct FName& SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.CreateGameplayCueFX");

	Uweapon_bpi_C_CreateGameplayCueFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;
	params.Particle = Particle;
	params.SocketLocation = SocketLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_bpi.weapon_bpi_C.ActivateSpecialAbilities_Interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::ActivateSpecialAbilities_Interface(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.ActivateSpecialAbilities_Interface");

	Uweapon_bpi_C_ActivateSpecialAbilities_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function weapon_bpi.weapon_bpi_C.CallWeaponSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Function_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::CallWeaponSpecificFunction(const struct FName& Function_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.CallWeaponSpecificFunction");

	Uweapon_bpi_C_CallWeaponSpecificFunction_Params params;
	params.Function_Name = Function_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_bpi.weapon_bpi_C.GetBackSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BackSocket                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::GetBackSocketName(struct FName* BackSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.GetBackSocketName");

	Uweapon_bpi_C_GetBackSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackSocket != nullptr)
		*BackSocket = params.BackSocket;
}


// Function weapon_bpi.weapon_bpi_C.GetUsesAutoAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsesAutoAttachment             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::GetUsesAutoAttachment(bool* UsesAutoAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.GetUsesAutoAttachment");

	Uweapon_bpi_C_GetUsesAutoAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsesAutoAttachment != nullptr)
		*UsesAutoAttachment = params.UsesAutoAttachment;
}


// Function weapon_bpi.weapon_bpi_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_bpi_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.SpecialAttackReady");

	Uweapon_bpi_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function weapon_bpi.weapon_bpi_C.ActivateTrail
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         InParticle_System              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InLifetime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFirstSocketName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSecondSocketName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         InSecondaryParticle            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSecondarySocketName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InAspectColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uweapon_bpi_C::ActivateTrail(class UParticleSystem* InParticle_System, float InLifetime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* InSecondaryParticle, const struct FName& InSecondarySocketName, const struct FLinearColor& InAspectColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_bpi.weapon_bpi_C.ActivateTrail");

	Uweapon_bpi_C_ActivateTrail_Params params;
	params.InParticle_System = InParticle_System;
	params.InLifetime = InLifetime;
	params.InFirstSocketName = InFirstSocketName;
	params.InSecondSocketName = InSecondSocketName;
	params.InSecondaryParticle = InSecondaryParticle;
	params.InSecondarySocketName = InSecondarySocketName;
	params.InAspectColor = InAspectColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
