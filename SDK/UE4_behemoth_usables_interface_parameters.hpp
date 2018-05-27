#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_usables_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_usables_interface.behemoth_usables_interface_C.SetBehemothHasUsed
struct Ubehemoth_usables_interface_C_SetBehemothHasUsed_Params
{
	bool                                               HasBehemothUsed;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_usables_interface.behemoth_usables_interface_C.GetBehemothHasUsed
struct Ubehemoth_usables_interface_C_GetBehemothHasUsed_Params
{
	bool                                               HasBehemothUsed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
