// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_guid_manager_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthRemoveGUIDByName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udamage_guid_manager_bpc_C::AuthRemoveGUIDByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthRemoveGUIDByName");

	Udamage_guid_manager_bpc_C_AuthRemoveGUIDByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthGetGUIDByName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundGUID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (Parm, OutParm, IsPlainOldData)

void Udamage_guid_manager_bpc_C::AuthGetGUIDByName(const struct FName& Name, bool* FoundGUID, struct FGuid* Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthGetGUIDByName");

	Udamage_guid_manager_bpc_C_AuthGetGUIDByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundGUID != nullptr)
		*FoundGUID = params.FoundGUID;
	if (Guid != nullptr)
		*Guid = params.Guid;
}


// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.GetIndexForName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udamage_guid_manager_bpc_C::GetIndexForName(const struct FName& Name, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.GetIndexForName");

	Udamage_guid_manager_bpc_C_GetIndexForName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthCreateNewDamageGUID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Identifier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udamage_guid_manager_bpc_C::AuthCreateNewDamageGUID(const struct FName& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthCreateNewDamageGUID");

	Udamage_guid_manager_bpc_C_AuthCreateNewDamageGUID_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
