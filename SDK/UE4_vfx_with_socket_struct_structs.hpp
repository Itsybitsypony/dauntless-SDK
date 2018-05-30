#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_attach_or_not_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct vfx_with_socket_struct.vfx_with_socket_struct
// 0x0036
struct Fvfx_with_socket_struct
{
	class UParticleSystem*                             Vfx_2_22D5FA5948FD305039CB17803DBBFDD2;                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_Name_5_16931AF64427ECBED52868BA256BFF52;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset_8_3EE735C14D16BADB1A85CFA4481572A4;                // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation_11_65DA4C184052E2B5AEEB079557B007C6;             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Scale_14_F6CDC64842E3B6C5EAA75082134FE0C3;                // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<Eattach_or_not_type>                   AttachToComponent_22_8AEB952C41FD09392643E88F0B9BAC46;    // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseComponentRotation_24_62C131D447D72AA5744D38A76694F029; // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
