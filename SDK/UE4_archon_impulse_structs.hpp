#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_vfx_with_socket_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct archon_impulse.archon_impulse
// 0x0041
struct Farchon_impulse
{
	struct Fvfx_with_socket_struct                     VFX_2_3D08CB5E49002C11E6D369AA58538984;                   // 0x0000(0x0038) (Edit, BlueprintVisible)
	class UAkAudioEvent*                               AKEvent_5_7751CA4443D394F6817EDAB4F54AF1ED;               // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachSoundToComponent_7_EA9FD6F44AF1881251BBF3B86177CF8E;// 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
