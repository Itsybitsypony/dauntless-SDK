#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_sortable_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sortable_interface.sortable_interface_C
// 0x0000 (0x0028 - 0x0028)
class Usortable_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sortable_interface.sortable_interface_C");
		return ptr;
	}


	void CompareTo(const TScriptInterface<class Usortable_interface_C>& OtherItem, TEnumAsByte<Esort_type> SortType, int* CompareResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
