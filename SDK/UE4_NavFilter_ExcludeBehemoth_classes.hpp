#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NavFilter_ExcludeBehemoth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NavFilter_ExcludeBehemoth.NavFilter_ExcludeBehemoth_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_ExcludeBehemoth_C : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_ExcludeBehemoth.NavFilter_ExcludeBehemoth_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
