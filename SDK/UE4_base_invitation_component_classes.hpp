#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_invitation_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_invitation_component.base_invitation_component_C
// 0x0008 (0x0408 - 0x0400)
class Ubase_invitation_component_C : public UArchonInvitationComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_invitation_component.base_invitation_component_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnUserRequestedInvitation_Event_1(class UArchonInvitationUserComponent* User);
	void ExecuteUbergraph_base_invitation_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
