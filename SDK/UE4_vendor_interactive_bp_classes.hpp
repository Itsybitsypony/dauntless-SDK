#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vendor_interactive_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass vendor_interactive_bp.vendor_interactive_bp_C
// 0x01BF (0x0748 - 0x0589)
class Avendor_interactive_bp_C : public Acity_interactive_npc_bp_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	class Ubase_craft_component_C*                     base_craft_component;                                     // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraHair;                                             // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraHead;                                             // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraArms;                                             // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraLegs;                                             // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraChest;                                            // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InCameraSkeletalMesh;                                     // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_quest_redeem_component_C*              base_quest_redeem_component;                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_quest_accept_component_C*              base_quest_accept_component;                              // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_ambient_component_C*                   base_ambient_component;                                   // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_invitation_component_C*                base_invitation_component;                                // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Crafting_Weapons;                                         // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           FadeOutRange;                                             // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            NPCCamera;                                                // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeTag;                                                // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       VendorTitle;                                              // 0x0618(0x0018) (Edit, BlueprintVisible)
	struct FText                                       VendorType;                                               // 0x0630(0x0018) (Edit, BlueprintVisible)
	struct FText                                       VendorGreeting;                                           // 0x0648(0x0018) (Edit, BlueprintVisible)
	class AArchonPlayerController*                     PlayerController;                                         // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Setup_Bindings;                                       // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FMaterialSpriteElement                      Quest_Notification_Billboard;                             // 0x0670(0x0028) (Edit, BlueprintVisible)
	struct FVector                                     Notification_Offset;                                      // 0x0698(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bHasRedeemableQuests;                                     // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAvailableQuests;                                      // 0x06A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x06A6(0x0002) MISSED OFFSET
	struct FVector2D                                   MapDiscoveredTint;                                        // 0x06A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MapQuestsTint;                                            // 0x06B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           Active_Player_Controller;                                 // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PlayerPawnViewTarget;                                     // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanLookatPlayer;                                          // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	class UAnimMontage*                                InCameraEntryMontage;                                     // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InCameraIdleMontage;                                      // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        InCameraRandomTicksMontages;                              // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimerHandle                                TransitionTimer;                                          // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       OverrideQuestButtonLabel;                                 // 0x06F8(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      OverrideQuestButtonUI;                                    // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCViewTarget;                                            // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDataTable*>                          CraftedItemCatalogList;                                   // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct Fnpc_ui_struct>                      NPCInteractionWidgets;                                    // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       ProgressTrackName;                                        // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass vendor_interactive_bp.vendor_interactive_bp_C");
		return ptr;
	}


	void HasItemsToCraft(bool* IsUnlocked);
	void GetProgressTrackName(struct FName* TrackName);
	void Get_Vendor_Type(TEnumAsByte<EquipmentVendor>* Type);
	void Get_Vendor_Type_Label(struct FText* Type);
	void Get_Recipe_Tag(class FString* Tag);
	void Get_NPC_Camera_Component(class UCameraComponent** Camera);
	void Get_Crafting_Preview_Transform(struct FTransform* Transform);
	void Get_Quest_Button_Label(struct FText* Button_Label);
	void Get_Speaker(class UArchonSpeaker** Speaker);
	void Get_Vendor_Title(struct FText* Title);
	void Get_Quest_Button_Class(class UClass** Widget_Class);
	bool Has_Redeemable_Quests();
	bool Has_Available_Quests();
	void AssignVOTransformsTemporary();
	void RaiseInteractionwithSpeaker(class UObject* Object);
	void DisplayStore();
	void SetupVendorMesh();
	class UMarkerComponent* GetMarkerComponent();
	void Vendor_Has_Available_Quests(bool* Available_Quests_Found);
	void Vendor_Has_Redeemable_Quests(bool* Redeemable_Quests_Found);
	void UserConstructionScript();
	void Refresh_Quest_Indicator();
	void OnQuestSystemReady();
	void ExecutePayload(class APawn** SuccessfulInteractor);
	void Marks_Quests_as_Viewed();
	void OnMenuClosed();
	void StateTrigger();
	void ReceiveBeginPlay();
	void ReceiveGameplayStart();
	void K2_OnBecomeViewTarget(class APlayerController** pc);
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void ExecuteUbergraph_vendor_interactive_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
