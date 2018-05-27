// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_persistent_spawn_owner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_persistent_spawn_owner.bpi_persistent_spawn_owner_C.OverridePersistentSpawnPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct Fpersistent_spawn_params PersistentSpawnRequest         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PositionWasOverridden          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewSpawnPos                    (Parm, OutParm, IsPlainOldData)

void Ubpi_persistent_spawn_owner_C::OverridePersistentSpawnPosition(const struct FVector& SpawnPos, const struct Fpersistent_spawn_params& PersistentSpawnRequest, bool* PositionWasOverridden, struct FVector* NewSpawnPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_persistent_spawn_owner.bpi_persistent_spawn_owner_C.OverridePersistentSpawnPosition");

	Ubpi_persistent_spawn_owner_C_OverridePersistentSpawnPosition_Params params;
	params.SpawnPos = SpawnPos;
	params.PersistentSpawnRequest = PersistentSpawnRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PositionWasOverridden != nullptr)
		*PositionWasOverridden = params.PositionWasOverridden;
	if (NewSpawnPos != nullptr)
		*NewSpawnPos = params.NewSpawnPos;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
