// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_ambient_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_ambient_component.base_ambient_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubase_ambient_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_ambient_component.base_ambient_component_C.ReceiveBeginPlay");

	Ubase_ambient_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_ambient_component.base_ambient_component_C.OnUserRequestedAmbient_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonAmbientUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_ambient_component_C::OnUserRequestedAmbient_Event_1(class UArchonAmbientUserComponent* User, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_ambient_component.base_ambient_component_C.OnUserRequestedAmbient_Event_1");

	Ubase_ambient_component_C_OnUserRequestedAmbient_Event_1_Params params;
	params.User = User;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_ambient_component.base_ambient_component_C.ExecuteUbergraph_base_ambient_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_ambient_component_C::ExecuteUbergraph_base_ambient_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_ambient_component.base_ambient_component_C.ExecuteUbergraph_base_ambient_component");

	Ubase_ambient_component_C_ExecuteUbergraph_base_ambient_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
