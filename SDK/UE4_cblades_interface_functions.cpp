// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cblades_interface.cblades_interface_C.GetMeterTunables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcblades_tunables_str   Tunables                       (Parm, OutParm)

void Ucblades_interface_C::GetMeterTunables(struct Fcblades_tunables_str* Tunables)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_interface.cblades_interface_C.GetMeterTunables");

	Ucblades_interface_C_GetMeterTunables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tunables != nullptr)
		*Tunables = params.Tunables;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
