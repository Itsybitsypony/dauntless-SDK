#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_function_library.behemoth_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Ubehemoth_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_function_library.behemoth_function_library_C");
		return ptr;
	}


	void STATIC_GetResistsForResistPowerType(TEnumAsByte<Ebehemoth_resistset_type> ResistAndPowerSetType, class UObject* __WorldContext, EElementType* PrimaryOffenseType, float* PhysicalResistMult, float* FlameResistMult, float* FrostResistMult, float* ShockResistMult, float* RadiantResistMult, float* UmbralResistMult, bool* HasCustomResistsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
