// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawnedactor_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function spawnedactor_interface.spawnedactor_interface_C.SpawnActor_Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void Uspawnedactor_interface_C::SpawnActor_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function spawnedactor_interface.spawnedactor_interface_C.SpawnActor_Destroy");

	Uspawnedactor_interface_C_SpawnActor_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
