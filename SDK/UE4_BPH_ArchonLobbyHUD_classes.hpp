#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonLobbyHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C
// 0x001C (0x0638 - 0x061C)
class ABPH_ArchonLobbyHUD_C : public ABPH_ArchonHUD_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (Transient, DuplicateTransient)
	class Ulobby_bpw_C*                                lobby_widget;                                             // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umainmenu_screen_bpw_C*                      EscapeMenu;                                               // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPH_ArchonLobbyHUD.BPH_ArchonLobbyHUD_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveGameplayStart();
	void Escape_Menu();
	void ShowLobby();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BPH_ArchonLobbyHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
