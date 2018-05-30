// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atk_moonface_barrel_chg_dynamic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atk_moonface_barrel_chg_dynamic.atk_moonface_barrel_chg_dynamic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatk_moonface_barrel_chg_dynamic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atk_moonface_barrel_chg_dynamic.atk_moonface_barrel_chg_dynamic_C.UserConstructionScript");

	Aatk_moonface_barrel_chg_dynamic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
