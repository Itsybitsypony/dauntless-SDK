#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cblades_interface.cblades_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ucblades_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cblades_interface.cblades_interface_C");
		return ptr;
	}


	void GetMeterTunables(struct Fcblades_tunables_str* Tunables);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
