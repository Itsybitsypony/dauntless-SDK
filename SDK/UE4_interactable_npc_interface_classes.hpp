#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interactable_npc_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interactable_npc_interface.interactable_npc_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uinteractable_npc_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interactable_npc_interface.interactable_npc_interface_C");
		return ptr;
	}


	void HasItemsToCraft(bool* IsUnlocked);
	void GetProgressTrackName(struct FName* TrackName);
	void Get_Vendor_Type(TEnumAsByte<EquipmentVendor>* Type);
	void Get_Recipe_Tag(class FString* Tag);
	void Get_NPC_Camera_Component(class UCameraComponent** Camera);
	void Get_Crafting_Preview_Transform(struct FTransform* Transform);
	void Get_Quest_Button_Label(struct FText* Button_Label);
	void Get_Vendor_Type_Label(struct FText* Type);
	void Get_Vendor_Title(struct FText* Title);
	void Get_Speaker(class UArchonSpeaker** Speaker);
	void Get_Quest_Button_Class(class UClass** Widget_Class);
	bool Has_Available_Quests();
	bool Has_Redeemable_Quests();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
