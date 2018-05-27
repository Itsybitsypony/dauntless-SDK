// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ua_hit_reaction_table_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ua_hit_reaction_table.ua_hit_reaction_table_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aua_hit_reaction_table_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ua_hit_reaction_table.ua_hit_reaction_table_C.UserConstructionScript");

	Aua_hit_reaction_table_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
