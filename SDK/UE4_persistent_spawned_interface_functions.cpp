// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_persistent_spawned_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function persistent_spawned_interface.persistent_spawned_interface_C.AuthInitializeSpawnedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   DamageGUID                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Upersistent_spawned_interface_C::AuthInitializeSpawnedActor(const struct FGuid& DamageGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function persistent_spawned_interface.persistent_spawned_interface_C.AuthInitializeSpawnedActor");

	Upersistent_spawned_interface_C_AuthInitializeSpawnedActor_Params params;
	params.DamageGUID = DamageGUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
