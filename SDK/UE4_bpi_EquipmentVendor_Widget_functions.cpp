// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_EquipmentVendor_Widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_EquipmentVendor_Widget.bpi_EquipmentVendor_Widget_C.Setup Vendor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uinteractable_npc_interface_C> Vendor_NPC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_EquipmentVendor_Widget_C::Setup_Vendor(const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor_NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_EquipmentVendor_Widget.bpi_EquipmentVendor_Widget_C.Setup Vendor");

	Ubpi_EquipmentVendor_Widget_C_Setup_Vendor_Params params;
	params.Vendor_NPC = Vendor_NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
