#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_HUD.BPI_HUD_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_HUD_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HUD.BPI_HUD_C");
		return ptr;
	}


	void UpdatePlayerHUDDetails();
	void GetWeaponPowerTable(const struct FName& RowName, struct FWeaponPowerTableData* WeaponPowerTable, bool* RowFound);
	void GetPaperdollScene(class Upaperdoll_scene_component_C** PaperdollScene);
	void Get_Chat_Widget(class UChat_MenuRoot_bpw_C** ChatWidget);
	void Try_Chat_Input(bool FromGameplay, bool* Success);
	void Progression_Awarded(class UCanvasPanel* ContainerWidget, TArray<struct Fprogression_award>* Grants);
	void Progression_Award_Finished();
	void UpdateBoosts();
	void HideStore();
	void Hide_Mission_Timer();
	void Show_Mission_Timer();
	void Player_HUD_Ready();
	void Show_Store(const class FString& Path, const class FString& InstanceId, class UWidget* UI_to_returnTo, bool ReturntoGameplay_OnClose);
	void Restore_Game_Input();
	void Hide_HUD(bool HideChat);
	void Show_HUD(bool Game_Input, bool ShowChat);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
