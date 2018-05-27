#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_guid_manager_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass damage_guid_manager_bpc.damage_guid_manager_bpc_C
// 0x0010 (0x01E0 - 0x01D0)
class Udamage_guid_manager_bpc_C : public UActorComponent
{
public:
	TArray<struct Fname_guid_pair>                     ActiveGUIDs;                                              // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass damage_guid_manager_bpc.damage_guid_manager_bpc_C");
		return ptr;
	}


	void AuthRemoveGUIDByName(const struct FName& Name);
	void AuthGetGUIDByName(const struct FName& Name, bool* FoundGUID, struct FGuid* Guid);
	void GetIndexForName(const struct FName& Name, int* Index);
	void AuthCreateNewDamageGUID(const struct FName& Identifier);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
