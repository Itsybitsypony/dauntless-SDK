#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_EquipmentVendor_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_EquipmentVendor_Widget.bpi_EquipmentVendor_Widget_C.Setup Vendor
struct Ubpi_EquipmentVendor_Widget_C_Setup_Vendor_Params
{
	TScriptInterface<class Uinteractable_npc_interface_C> Vendor_NPC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
