#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_guid_wrapper_obj_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass guid_wrapper_obj.guid_wrapper_obj_C
// 0x0010 (0x0038 - 0x0028)
class Uguid_wrapper_obj_C : public UObject
{
public:
	struct FGuid                                       Guid;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass guid_wrapper_obj.guid_wrapper_obj_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
