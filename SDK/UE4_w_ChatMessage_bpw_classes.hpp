#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_ChatMessage_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_ChatMessage_bpw.w_ChatMessage_bpw_C
// 0x00B8 (0x0388 - 0x02D0)
class Uw_ChatMessage_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Content;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateColor                                 Me;                                                       // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Whisper;                                                  // 0x0310(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Global;                                                   // 0x0338(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 Party;                                                    // 0x0360(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_ChatMessage_bpw.w_ChatMessage_bpw_C");
		return ptr;
	}


	void Debug_Message(const class FString& Message);
	void Build_Status_Message(const struct FText& Content, const struct FText& Room, struct FText* Message);
	void Get_Party_Message_Color(bool Is_From_Self, struct FSlateColor* Color);
	void Get_Global_Message_Color(bool Is_From_Self, struct FSlateColor* Color);
	void Setup_Message(struct FBPChatClientMessage* InMessage);
	void Set_Text(const struct FArchonChatMessageStruct& Chat, bool Me, bool Whisper);
	void Show_Message();
	void ExecuteUbergraph_w_ChatMessage_bpw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
