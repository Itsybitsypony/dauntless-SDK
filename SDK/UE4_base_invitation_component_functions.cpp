// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_invitation_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_invitation_component.base_invitation_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubase_invitation_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_invitation_component.base_invitation_component_C.ReceiveBeginPlay");

	Ubase_invitation_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_invitation_component.base_invitation_component_C.OnUserRequestedInvitation_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInvitationUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_invitation_component_C::OnUserRequestedInvitation_Event_1(class UArchonInvitationUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_invitation_component.base_invitation_component_C.OnUserRequestedInvitation_Event_1");

	Ubase_invitation_component_C_OnUserRequestedInvitation_Event_1_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_invitation_component.base_invitation_component_C.ExecuteUbergraph_base_invitation_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_invitation_component_C::ExecuteUbergraph_base_invitation_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_invitation_component.base_invitation_component_C.ExecuteUbergraph_base_invitation_component");

	Ubase_invitation_component_C_ExecuteUbergraph_base_invitation_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
