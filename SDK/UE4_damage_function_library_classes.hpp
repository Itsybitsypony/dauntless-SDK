#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass damage_function_library.damage_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Udamage_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass damage_function_library.damage_function_library_C");
		return ptr;
	}


	void STATIC_CombineDamageTableRows(class UObject* __WorldContext, struct FDamageTableData* DamageRow1, struct FDamageTableData* DamageRow2, struct FDamageTableData* CombinedDamageTableData);
	void STATIC_ScaleDamageRow(const struct FDamageTableData& DamageTableData, float ScaleFactor, class UObject* __WorldContext, struct FDamageTableData* ScaledDamageTableData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
