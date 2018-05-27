#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_PartyHUD_Invites_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C
// 0x0020 (0x02F0 - 0x02D0)
class Ubpw_PartyHUD_Invites_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                PromptCanvas;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AArchonPartyClient*                          Party_Client;                                             // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Ubpw_PartyHUD_InvitePrompt_C*                Active_Invite_Prompt;                                     // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass bpw_PartyHUD_Invites.bpw_PartyHUD_Invites_C");
		return ptr;
	}


	bool Has_Active_Prompt();
	void Construct();
	void Invites_Updated(TArray<struct FArchonPartyInvite> Invites);
	void Accepted_Invite(const struct FArchonPartyInvite& Invite);
	void On_Invite_Accept(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void Declined_Invite(const struct FArchonPartyInvite& Invite);
	void On_Invite_Decline(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName);
	void Dismiss_Active_Prompt();
	void Status_Message(const struct FText& Message);
	void ExecuteUbergraph_bpw_PartyHUD_Invites(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
