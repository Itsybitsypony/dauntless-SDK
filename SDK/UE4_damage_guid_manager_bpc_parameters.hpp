#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_guid_manager_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthRemoveGUIDByName
struct Udamage_guid_manager_bpc_C_AuthRemoveGUIDByName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthGetGUIDByName
struct Udamage_guid_manager_bpc_C_AuthGetGUIDByName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundGUID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.GetIndexForName
struct Udamage_guid_manager_bpc_C_GetIndexForName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function damage_guid_manager_bpc.damage_guid_manager_bpc_C.AuthCreateNewDamageGUID
struct Udamage_guid_manager_bpc_C_AuthCreateNewDamageGUID_Params
{
	struct FName                                       Identifier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
