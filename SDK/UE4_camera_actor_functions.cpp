// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_camera_actor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function camera_actor.camera_actor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acamera_actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function camera_actor.camera_actor_C.UserConstructionScript");

	Acamera_actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camera_actor.camera_actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acamera_actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function camera_actor.camera_actor_C.ReceiveBeginPlay");

	Acamera_actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function camera_actor.camera_actor_C.ExecuteUbergraph_camera_actor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acamera_actor_C::ExecuteUbergraph_camera_actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function camera_actor.camera_actor_C.ExecuteUbergraph_camera_actor");

	Acamera_actor_C_ExecuteUbergraph_camera_actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
