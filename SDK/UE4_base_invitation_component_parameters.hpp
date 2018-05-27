#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_invitation_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_invitation_component.base_invitation_component_C.ReceiveBeginPlay
struct Ubase_invitation_component_C_ReceiveBeginPlay_Params
{
};

// Function base_invitation_component.base_invitation_component_C.OnUserRequestedInvitation_Event_1
struct Ubase_invitation_component_C_OnUserRequestedInvitation_Event_1_Params
{
	class UArchonInvitationUserComponent*              User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_invitation_component.base_invitation_component_C.ExecuteUbergraph_base_invitation_component
struct Ubase_invitation_component_C_ExecuteUbergraph_base_invitation_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
