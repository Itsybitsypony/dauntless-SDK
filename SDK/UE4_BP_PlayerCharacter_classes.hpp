#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x0B9D (0x15AD - 0x0A10)
class ABP_PlayerCharacter_C : public AArchonCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class UArchonSpringArmComponent*                   CameraBoom;                                               // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ucine_blendshape_anim_component_C*           cine_blendshape_anim_component;                           // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uquest_logic_bpc_C*                          quest_logic_bpc;                                          // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uhunt_quest_monitor_bpc_C*                   hunt_quest_monitor_bpc;                                   // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uhit_reaction_bpc_C*                         hit_reaction_bpc;                                         // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uplayer_aiming_bpc_C*                        player_aiming_bpc;                                        // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      FacialHairSlot;                                           // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uplayer_eventdispatcher_bpc_C*               player_eventdispatcher_bpc;                               // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ucell_manager_bpc_C*                         cell_manager_bpc;                                         // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_ambient_user_component_C*              base_ambient_user_component;                              // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_invitation_user_component_C*           base_invitation_user_component;                           // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonAttributeComponent*                   ArchonAttribute;                                          // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uweapon_sheathe_bpc_C*                       weapon_sheathe_bpc;                                       // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubeam_firing_bpc_C*                          beam_firing_bpc;                                          // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uplayer_gameplay_bpc_C*                      player_gameplay_bpc;                                      // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           PlayerCollision;                                          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ufoot_plant_detector_component_C*            foot_plant_detector_component_right;                      // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ufoot_plant_detector_component_C*            foot_plant_detector_component_left;                       // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ulook_at_component_C*                        look_at_component;                                        // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uspawnedactor_manager_bpc_C*                 spawnedactor_manager_bpc;                                 // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ueqs_gameplay_bpc_C*                         eqs_gameplay_bpc;                                         // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonBuffableComponent*                    ArchonBuffable;                                           // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interactioncode_component_player_C*    base_interactioncode_component_player;                    // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interactionusercode_component_C*       base_interactionusercode_component;                       // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uplayer_telemetry_component_C*               player_telemetry_component;                               // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Head_Slot;                                                // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            ReviveInteractionCallout;                                 // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNetworkedMontageComponent*                  NetworkedMontage;                                         // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonWarpComponent*                        ArchonWarp;                                               // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Hair_Slot;                                                // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonFootIKComponent*                      ArchonFootIK;                                             // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            Nameplate;                                                // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonAbilitySystemComponent*               ArchonAbilitySystem;                                      // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LedgeDetector;                                            // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            FollowCamera;                                             // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              tempered_phys_blend_tempered_alpha_4308C7164D914ACC7B239D87F43A231B;// 0x0B38(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              tempered_phys_blend_alpha_blend_value_4308C7164D914ACC7B239D87F43A231B;// 0x0B3C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    tempered_phys_blend__Direction_4308C7164D914ACC7B239D87F43A231B;// 0x0B40(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B41(0x0007) MISSED OFFSET
	class UTimelineComponent*                          tempered_phys_blend;                                      // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              phys_alpha_blend_tempered_alpha_18EAA43742A4C9CA4CBBB7BC0A19A601;// 0x0B50(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              phys_alpha_blend_alpha_blend_value_18EAA43742A4C9CA4CBBB7BC0A19A601;// 0x0B54(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    phys_alpha_blend__Direction_18EAA43742A4C9CA4CBBB7BC0A19A601;// 0x0B58(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
	class UTimelineComponent*                          phys_alpha_blend;                                         // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeRecoveryTransitionOutTimeline_Alpha_C2216D76415F83B08165B99895D03378;// 0x0B68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EdgeRecoveryTransitionOutTimeline__Direction_C2216D76415F83B08165B99895D03378;// 0x0B6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EdgeRecoveryTransitionOutTimeline;                        // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeRecoveryTransitionInTimeline_Alpha_9A094EB8464F818B87F0349727008949;// 0x0B78(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EdgeRecoveryTransitionInTimeline__Direction_9A094EB8464F818B87F0349727008949;// 0x0B7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EdgeRecoveryTransitionInTimeline;                         // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_7_Player_Glow___Level_03_AFAE115049D95759E4C4AD933BCE4DE5;// 0x0B88(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_7_PlayerGlow___Level_02_AFAE115049D95759E4C4AD933BCE4DE5;// 0x0B8C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_7_PlayerGlow___Level_01_AFAE115049D95759E4C4AD933BCE4DE5;// 0x0B90(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_7_AxeTubePulse_AFAE115049D95759E4C4AD933BCE4DE5; // 0x0B94(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_AFAE115049D95759E4C4AD933BCE4DE5;   // 0x0B98(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_AxeGlowPulse_07B925A3492F26371C554BADC93C1343; // 0x0BA8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_AxeTubePulse_07B925A3492F26371C554BADC93C1343; // 0x0BAC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_07B925A3492F26371C554BADC93C1343;   // 0x0BB0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Camera_Interpolation_Alpha_FA36F1AE4B2C4C48785B1A8A9C54F5D2;// 0x0BC0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Camera_Interpolation__Direction_FA36F1AE4B2C4C48785B1A8A9C54F5D2;// 0x0BC4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BC5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Camera_Interpolation;                                     // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Dampening_Value_A2F0C9E347637D94AEF62493B0815C64;// 0x0BD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A2F0C9E347637D94AEF62493B0815C64;   // 0x0BD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BASE_MOUSE_TURN_RATE;                                     // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_MOUSE_LOOKUP_RATE;                                   // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_LOOK_RATE;                                           // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_TURN_RATE;                                           // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_PlayerInventoryEntry>        MyCharPlayerInventory;                                    // 0x0BF0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	int                                                ActiveItemIndex;                                          // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BASE_WALK_SPEED;                                          // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BASE_MOVEMENT_SPEED;                                      // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BASE_SPRINT_SPEED;                                        // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BASE_DODGE_STAMINA_COST;                                  // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SPRINT_STAMINA_DRAIN_PER_SECOND;                          // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SPRINT_STAMINA_THRESHOLD;                                 // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Sprint_Input;                                             // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	float                                              Current_Health;                                           // 0x0C20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Max_Health_Old;                                           // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               In_Stamina_Threshold_Recovery_Period;                     // 0x0C28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               Valid_Sprint_Attempt;                                     // 0x0C29(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0C2A(0x0002) MISSED OFFSET
	float                                              MovementModifier;                                         // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_Regen_Stamina_;                                       // 0x0C30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0C31(0x0003) MISSED OFFSET
	struct FLinearColor                                BASE_PLAYER_COLOR;                                        // 0x0C34(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DAMAGE_PLAYER_COLOR;                                      // 0x0C44(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Attack_Modifier_Pressed;                                  // 0x0C54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State__Attacking;                                         // 0x0C55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0C56(0x0002) MISSED OFFSET
	float                                              Angle_Modifier;                                           // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Input_Strength_Modifier;                                  // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Modifier;                                         // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousMouseTurn;                                        // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPanningEnabled;                                       // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0C69(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CameraAutoPanningInfluence;                               // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mouse_Auto_Panning_Input_Delay;                           // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPanDampener;                                          // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugPlaySpeed;                                           // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Input_Enabled;                                            // 0x0C84(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bleed_Out_State;                                          // 0x0C85(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0C86(0x0002) MISSED OFFSET
	struct FLinearColor                                Original_Cloth_Color;                                     // 0x0C88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                BLEEDOUT_REVIVE_COST;                                     // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BLEEDOUT_REVIVE_TIME;                                     // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Being_Revived_;                                           // 0x0CA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Jumping_;                                              // 0x0CA1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Landing;                                               // 0x0CA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dodge_Enabled;                                            // 0x0CA3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0CA4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Speed_Mod_Curve;                                          // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed_Mod_Read_Value;                                     // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0CB4(0x0004) MISSED OFFSET
	class USphereComponent*                            RezTrigger;                                               // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeleportDestination;                                      // 0x0CC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFallRecovery;                                           // 0x0CCC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0CCD(0x0003) MISSED OFFSET
	struct FVector                                     CameraLocation;                                           // 0x0CD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DestinationVelocity;                                      // 0x0CDC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Slow_Charge_State;                                        // 0x0CE8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0CE9(0x0007) MISSED OFFSET
	class AActor*                                      CurrentlySelectedObject;                                  // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NearbyInteractions;                                       // 0x0CF8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Light_Health_Potion_Heal_Amount;                          // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopInteractionScore;                                      // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TopScoringInteractiveActor;                               // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Flare_Type_ID;                                            // 0x0D18(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Flare_Slot;                                               // 0x0D1C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Ikinema;                                           // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	class APawn*                                       RevivingPawn;                                             // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                StopSpeedModCurveTimerHandle;                             // 0x0D30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Min1Health;                                               // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InfiniteStam;                                             // 0x0D39(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x0D3A(0x0006) MISSED OFFSET
	struct FTimerHandle                                BleedOutTImer;                                            // 0x0D40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDying;                                                  // 0x0D48(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jump_Enabled;                                             // 0x0D49(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0D4A(0x0002) MISSED OFFSET
	float                                              Jump_Height_Start;                                        // 0x0D4C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Jump_Height_End;                                          // 0x0D50(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance_to_Ground;                                       // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReviveHealthThreshold;                                    // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Speed_Curve_Timer;                                 // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ChargeSpeedCurve;                                         // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStruct_PlayerSpeedCurve>            SpeedModCurves;                                           // 0x0D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    BASE_ROTATION_RATE;                                       // 0x0D80(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0D8C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLocalWeaponEquippedDispatcher;                          // 0x0D90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTransform                                  DebugTransform;                                           // 0x0DA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMesh*>                       Skin_Meshes;                                              // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CameraSprintFoVDelta;                                     // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	class FString                                      MovementSpeed;                                            // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CombatTargetArmLength;                                    // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintTargetArmLength;                                    // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartDollyZoomTargetArmLength;                            // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      Desired_Locomotion_State;                                 // 0x0E04(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      Current_Locomotion_State;                                 // 0x0E05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0E06(0x0002) MISSED OFFSET
	TArray<struct FGuid>                               RecentAttacksToPlayer;                                    // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     InterpMoveVector;                                         // 0x0E18(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentInputVector;                                       // 0x0E24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MouseTurn;                                                // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedMouseTurn;                                        // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PreviousRotation;                                         // 0x0E38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnRate;                                                 // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      TurnArray;                                                // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 CameraBoomOffsetCurve;                                    // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraBoomOffsetCurveElapsedTime;                         // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayingCameraBoomOffsetCurve;                             // 0x0E64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	float                                              AverageWorldDeltaTime;                                    // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePlantedTurns;                                       // 0x0E6C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	float                                              CameraDefaultDistance;                                    // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraBoomDefaultOffset;                                  // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBreakOutOfPivot;                                       // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0E79(0x0003) MISSED OFFSET
	float                                              INPUT_DEADZONE;                                           // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadScale;                                                // 0x0E80(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCameraSprintOffset_Old;                            // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlickPersistCountdown;                                    // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastAccelerationDirection;                                // 0x0E94(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FLICK_MOVEMENT_DURATION;                                  // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flicking;                                                 // 0x0EA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	float                                              ROTATION_RATE;                                            // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SPRINT_ROTATION_RATE;                                     // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RUN_ROTATION_RATE;                                        // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WALK_ROTATION_RATE;                                       // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractionSelected;                                      // 0x0EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0EB9(0x0003) MISSED OFFSET
	float                                              PlantedTurnTimer;                                         // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleAttackWarpScale;                                      // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingAttackWarpScale;                                    // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDesiredTravelZoomDistance;                          // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TravelTargetMaxArmLengthOffset;                           // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_AIR_TURN_RATE;                                       // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlendOutCameraBoomOffsetCurve;                            // 0x0ED4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x0ED5(0x0003) MISSED OFFSET
	float                                              LastAttackCameraBoomOffsetValue;                          // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0EDC(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Player_Materials;                                 // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 Normalized_Easing_Curve;                                  // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Conversation_Transition_Length;                           // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Conversation_Transition_Elapsed_Time;                     // 0x0EFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Conversation_Transition_Direction;                        // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Conversation_Transition_Target_Local_Offset;              // 0x0F04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             VFX_Y_Particle_System;                                    // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_Weapon_Charge;                                        // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfBleedouts;                                        // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_In_City_;                                              // 0x0F1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x0F1D(0x0003) MISSED OFFSET
	TArray<TAssetPtr<class UAnimMontage>>              DefaultEmotes;                                            // 0x0F20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DefaultCameraTargetOffset;                                // 0x0F30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0F3C(0x0004) MISSED OFFSET
	TArray<struct Fvfx_state_id_struct>                Debris_State_VFX;                                         // 0x0F40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                MissionValueBleed_Timer;                                  // 0x0F50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BleedOutState;                                            // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedoutStateTime;                                        // 0x0F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchDistanceMin;                                   // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x0F64(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraPitchDistanceCurve;                                 // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchMin;                                           // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchMax;                                           // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCombatOffsetIncrease;                               // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCombatTransitionLength;                             // 0x0F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCameraCombatAlpha;                                 // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0F84(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraCombatTransitionCurve;                              // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SprintCameraOffsetDelta;                                  // 0x0F90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCameraSprintAlpha;                                 // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSprintTransitionLength;                             // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x0FA4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CameraSprintTransitionCurve;                              // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSprintDistanceDelta;                                // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CameraPitchFOVCurve;                                      // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchMaxFoV;                                        // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastValidLocationTimer;                                   // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastValidLocationFrequency;                               // 0x0FC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x0FCC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LastValidLocationArray;                                   // 0x0FD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            LastValidRotations;                                       // 0x0FE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTransform                                  SpawnTransform;                                           // 0x0FF0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         EdgeRecoveryFadeOutSequenceActor;                         // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeRecoveryTeleportDelay;                                // 0x1028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x102C(0x0004) MISSED OFFSET
	class ULevelSequence*                              EdgeRecoveryOutCameraSequence;                            // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CombatCameraTargetOffsetDelta;                            // 0x1038(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraCombatOffset;                                       // 0x1044(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         EdgeRecoveryFadeInSequenceActor;                          // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              EdgeRecoveryInCameraSequence;                             // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling;                                                // 0x1060(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x1061(0x0007) MISSED OFFSET
	class UAnimMontage*                                EdgeRecoveryMontage;                                      // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CameraInputDisabled;                                      // 0x1070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x1071(0x0003) MISSED OFFSET
	float                                              EdgeRecoveryTransitionInAlpha;                            // 0x1074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeRecoveryTransitionInCameraDist;                       // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeRecoveryRegainCameraControlDelay;                     // 0x107C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EdgeRecoveryTransitionInCameraOffset;                     // 0x1080(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InteractionEnding;                                        // 0x108C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x108D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CameraCombatOffsetPitchCurve;                             // 0x1090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugTimeStaminaHasBeenAtZero;                            // 0x1098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyShakeThreshold;                                      // 0x109C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumShakeThreshold;                                     // 0x10A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoPlayerActive;                                         // 0x10A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x10A5(0x0003) MISSED OFFSET
	int                                                Test_Counter;                                             // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsFallingMaxTime;                                         // 0x10AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTrackingFallTime;                                       // 0x10B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x10B1(0x0007) MISSED OFFSET
	class FString                                      EdgeRecoveryNotes;                                        // 0x10B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ClientGamePadCounter;                                     // 0x10C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientMouseCounter;                                       // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EdgeRecoveryFadeOutOccured;                               // 0x10D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x10D1(0x0003) MISSED OFFSET
	struct FVector                                     EdgeRecoverTeleportLoc;                                   // 0x10D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                EdgeRecoverNumRecords;                                    // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeleportToLocationIndex;                                  // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InputDirection;                                           // 0x10E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FlareChargeEnabledTime;                                   // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayPlantedTurn;                                       // 0x10F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanEarlyOutOfMontage;                                     // 0x10F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingPlantedTurn;                                     // 0x10FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x1];                                       // 0x10FB(0x0001) MISSED OFFSET
	float                                              CameraCityDistanceOffset;                                 // 0x10FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraCityHeightOffset;                                   // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraCityFOVDelta;                                       // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Selected_Hair_Row;                                        // 0x1108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugAppearanceData;                                      // 0x1110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x1111(0x0007) MISSED OFFSET
	TArray<struct FAppearanceStringData>               DebugAppearanceDataString;                                // 0x1118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class USkeletalMesh>                     HairAppearanceAsset;                                      // 0x1128(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    WeatherSystem;                                            // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // 0x1150(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLastValidLocation;                                   // 0x1151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      MaxDesiredLocomotionState;                                // 0x1152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x1];                                       // 0x1153(0x0001) MISSED OFFSET
	struct FVector                                     NotifyCameraOffset;                                       // 0x1154(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyCameraTransitionTime;                               // 0x1160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyCameraCurrentAlpha;                                 // 0x1164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraAttackOffset;                                       // 0x1168(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAttackDistance;                                     // 0x1174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyCameraArmLengthOffset;                              // 0x1178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredGamepadTurnRate;                                    // 0x117C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredMouseTurnRate;                                      // 0x1180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredGamepadLookRate;                                    // 0x1184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoredMouseLookRate;                                      // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BannerPlantingEnabled;                                    // 0x118C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x118D(0x0003) MISSED OFFSET
	float                                              CameraClampYaw;                                           // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCameraMinYaw;                                      // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCameraMaxYaw;                                      // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraClampPitch;                                         // 0x119C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCameraMinPitch;                                    // 0x11A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCameraMaxPitch;                                    // 0x11A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClampCamera;                                              // 0x11A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x11A9(0x0003) MISSED OFFSET
	struct FVector                                     CurrentAimDirection;                                      // 0x11AC(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TrackingAimTimer;                                         // 0x11B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ponytail;                                                 // 0x11C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AudioIsLocalPlayer;                                       // 0x11C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x11C9(0x0003) MISSED OFFSET
	float                                              HEIGHT_DIFF_BEFORE_FALL;                                  // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ponytailmats;                                             // 0x11D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CameraLagOffset;                                          // 0x11E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SmoothedDesiredRotation;                                  // 0x11EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RawMovementInput;                                         // 0x11F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x1204(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct Fhitfx_optimality                           Flame_HitVFX;                                             // 0x1210(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Frost_HitVFX;                                             // 0x1258(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Shock_HitVFX;                                             // 0x12A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Radiant_HitVFX;                                           // 0x12E8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Umbral_HitVFX;                                            // 0x1330(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           RawElemental_HitVFX;                                      // 0x1378(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               In_Stamina_Threshold_Recovery_Period_Last_Frame;          // 0x13C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x13C1(0x0007) MISSED OFFSET
	TArray<int>                                        DesiredLocoRefCount;                                      // 0x13C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              IsFallingMinDistance;                                     // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsFallingStartHeight;                                     // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FellALongTime;                                            // 0x13E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingEmote_;                                          // 0x13E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x2];                                       // 0x13E2(0x0002) MISSED OFFSET
	int                                                HasLoadedInstances;                                       // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HasLoadedMax;                                             // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTurnWarpSmoothing;                                 // 0x13EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastJumpTimestamp;                                        // 0x13F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DodgeCooldownOnJump;                                      // 0x13F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Telemetry_Using_Gamepad;                                  // 0x13F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x13F9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<ECollisionResponse>>            BleedoutCollisionResponses;                               // 0x1400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EArchonCombatInputType                             L_InputType;                                              // 0x1410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ehelm_hiding_enum>                     Helm_Hiding;                                              // 0x1411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPrimaryAttackKeyHeld;                                   // 0x1412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSecondaryAttackKeyHeld;                                 // 0x1413(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x1414(0x0004) MISSED OFFSET
	struct FName                                       SelectedMakeupRow;                                        // 0x1418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SkinMaterialInstance;                                     // 0x1420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedSkinToneRow;                                      // 0x1428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              HelmVisNames;                                             // 0x1430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ActiveHelmVisSetting;                                     // 0x1440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LastMovementInputVector;                                  // 0x1450(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x145C(0x0004) MISSED OFFSET
	class AActor*                                      LastDamagedActor;                                         // 0x1460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                EmpoweredWeaponEffectRequestCount;                        // 0x1468(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x146C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    EmpoweredWeaponVFXRef;                                    // 0x1470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMonsterPartComponent*                       LastDamagedMonsterPart;                                   // 0x1478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocoTransitionsEnabled;                                  // 0x1480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x1481(0x0003) MISSED OFFSET
	struct FVector                                     AttackDirectionVector;                                    // 0x1484(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              HeldAttackTime;                                           // 0x1490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayerSupported;                                        // 0x1494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x1495(0x0003) MISSED OFFSET
	float                                              NotifyFOVDelta;                                           // 0x1498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAttackFOV;                                          // 0x149C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponAbilityDamageRowOverride;                           // 0x14A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HackShouldCheatDeath;                                     // 0x14A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x14A9(0x0007) MISSED OFFSET
	struct FName                                       SelectedFacialHairRow;                                    // 0x14B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     FacialHairAppearanceAsset;                                // 0x14B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SelectedFacePaintRow;                                     // 0x14D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EmoteTurnWarpEnabled;                                     // 0x14E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x14E1(0x0007) MISSED OFFSET
	TArray<struct FName>                               FacialMorphTargetArray;                                   // 0x14E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnActorGameplayStart;                                     // 0x14F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FName, float>                          ActiveFacialMorphValues;                                  // 0x1508(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HeldLanternTime;                                          // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAX_COMBAT_MONTAGE_PLAYRATE;                              // 0x155C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MIN_COMBAT_MONTAGE_PLAYRATE;                              // 0x1560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      PreviousDesiredLocotionState;                             // 0x1564(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x1565(0x0003) MISSED OFFSET
	struct FVector                                     SmoothedRawInput;                                         // 0x1568(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanMove;                                                  // 0x1574(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x1575(0x0003) MISSED OFFSET
	struct FVector                                     SmoothedInput;                                            // 0x1578(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ROTATION_RATE_SMOOTHED;                                   // 0x1584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputDirectionChanged;                                    // 0x1588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x1589(0x0003) MISSED OFFSET
	struct FVector                                     RawInput;                                                 // 0x158C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviousCanMove;                                          // 0x1598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x1599(0x0003) MISSED OFFSET
	struct FLinearColor                                cine_hair_colour;                                         // 0x159C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLookAtEnabled;                                           // 0x15AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}


	void GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner);
	void HideSkinUnderArmor(class UTexture2D* CutMask, EArmorType ArmourType, class Aarmour_part_base_bp_C* ArmourPart, class USkeletalMesh* SkinMesh, TArray<class UMaterialInstanceDynamic*>* SkinDynamicMats, bool* Success);
	void GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound);
	void ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition);
	void ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition);
	void ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData);
	void CanHitCBPushPullTarget(bool* Hits_);
	void GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType);
	void GetLookAtVector(struct FVector* LookAtVector);
	void GetLookAtAlpha(float* LookAtAlpha);
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void GetHairColour(struct FLinearColor* hair_colour);
	bool CanPerformEmote();
	void GetIsLocalPlayerAudioEnabled(bool* Out);
	void GetGenderIdentity(EArchonGender* GenderId);
	void GetBodyMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void GetWeaponMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void ResetMaxFallTimer(bool* Out);
	void GetIsSprinting(bool* Return);
	void GetNumPlayersReviving(int* NumPlayers);
	void IsHelmVisible(bool* Visible);
	void GetFacialHairSlotComponent(class USkeletalMeshComponent** Facial_Hair_Slot);
	void GetWeaponAbilityDamageRowOverride(struct FName* WeaponAbilityDamageRowOverride);
	void IsInLobby(bool* IsInLobby);
	void IsInCity(bool* IsInCity);
	void GetLastDamagedMonsterPart(class UMonsterPartComponent** MonsterPart);
	void GetLastDamagedActor(class AActor** LastDamagedActor);
	void GetHelmHidingSetting(class FString* Helm_Hiding);
	void GetSprintInputValue(bool* Value);
	void PlayerStateMeetsRequirements(const struct Fplayer_requirements_str& PlayerRequirements, bool* PassesRequirements);
	void GetPonytailComponent(class USkeletalMeshComponent** ponytail);
	void IsBannerEnabled(bool* IsEnabled);
	void GetCurrentAimDirection(struct FVector* CurrentAimDirection);
	void GetLoadout(class AArchonLoadout** LOADOUT);
	void SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState, TEnumAsByte<ECinematicPlayerState>* CinematicStte);
	void GetCinematicState(TEnumAsByte<ECinematicPlayerState>* State);
	void GetCombatComponent(class UArchonCombatComponent** CombatComponent);
	void IsInteracting(bool* Interacting);
	void GetDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials);
	void GetBleedoutLevel(int* Level);
	void GetAbilitySystemComponent(class UAbilitySystemComponent** AbilitySystem);
	void SetCollisionWithDestructible(bool Enabled, bool* Return);
	void GetHeadSlotComponent_(class USkeletalMeshComponent** Head_Slot_Component);
	void GetLantern(class AArchonLantern** Lantern);
	void GetBodyType(EArchonBodyType* BodyType);
	void GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent);
	void GetWeaponMesh(class USkeletalMeshComponent** Mesh);
	void GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp);
	void GetFollowCamera(class UCameraComponent** FollowCamera);
	void GetIsDying(bool* IsDying);
	void GetBleedOutState(bool* BleedOutState);
	void GetCurrentHealth(float* CurrentHealth);
	void GetReviveHealthThreshold(float* ReviveHealthThreshold);
	void GetBleedOutTimer(struct FTimerHandle* BleedOutTImer);
	void GetNamePlate(class UWidgetComponent** Nameplate);
	void GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData);
	void GetClientUsedGamePad(bool* ClientUsedGamePad);
	void GetClientUsedMouse(bool* ClientUsedMouse);
	void GetPlayerStats(float* Current_Health, float* Current_Stamina);
	void GetIsInCity_Deprecated(bool* Is_In_City);
	void GetIsSheathed(bool* Weapon_Sheathed);
	void GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_);
	void GetIsInSlowChargeState(bool* Is_slow_charging_);
	void GetIsFalling(bool* Is_Falling_);
	void OnGameModeStartEvent(bool* Success);
	void ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success);
	void GetIsJumping(bool* Is_Jumping_);
	void GetOwnedWeapon(class AArchonWeapon** Weapon);
	void CanUseQuickSlotItem(bool CanUseInBleedout, bool* CanUse);
	void GetInputActionKeyHeld(bool* PrimaryAttackHeld, bool* SecondaryAttackHeld, bool* SpecialAttackHeld);
	void GetDefaultWarpSmoothing(float* Smoothing);
	void OnRep_CinematicState();
	void UpdateCombatAudio();
	struct FDamageEventData OnPreMitigateDamageBP(class AActor** DamageGiver, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	void UpdateLanternHold(bool Force_Activation);
	void IsLanternHoldExpired(bool* Expired_);
	bool Can_Show_Player_Marker();
	void TryPerformDodgeAttack(EArchonAttackActionKey PrimaryKey, bool* Return);
	bool CanExecuteCombo();
	bool IsCancelToDodgeNotifyActive_();
	void OnAboutToDieBP(bool* PreventDeath);
	void Is_in_lobby_(bool* IsInLobby);
	void UpdateIsPlayerSupported();
	EArchonAttackActionKeyModifier GetAttackModifier();
	void PreHitHandleLifestealAndWeaponCharge(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor);
	void OnRep_EmpoweredWeaponEffectRequestCount();
	struct FDamageEventData OnPreMitigateOutgoingDamageBP(class AActor** DamageTaker, bool* bHasHitResult, struct FDamageEventData* DamageEventData, struct FGameplayTagContainer* DamageEventTags, struct FHitResult* HitResult, bool* bOverrideDamageData, struct FGameplayTagContainer* OutDamageEventTags);
	struct FGameplayTagContainer BP_GetTagsToApplyPostDamageCalculation(float* DamageApplied, class AActor** TargetActor);
	void ResetMontagePlayRate();
	void SetSprintInput(bool NewValue);
	bool InternalCanPerformEmote();
	void IsCity(bool* IsCity);
	void Send_Input_Scheme_Telemetry(const class FString& Scheme);
	void SetInStaminaThresholdRecoveryMaxDesiredLocoState(bool Enabled, TEnumAsByte<ELocomotionState> MaxDesiredLocoState);
	void GetMaxDesiredLocoState(TEnumAsByte<ELocomotionState>* DesiredLocoState);
	void ApplyHitFVX(const struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTagContainer* Tags);
	void OnRep_LookAtTarget();
	void UpdateLookAt(const struct FVector& LookAtTarget);
	void GetLookAtTarget(struct FVector* LookAtTarget);
	void AdjustRotationRateFromMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, TEnumAsByte<EMovementMode> EqualTo, float Scale);
	void GetIsFallingConst(bool* IsFalling_);
	void OnRep_AudioIsLocalPlayer();
	void SetPonyTailProperties(class USkeletalMesh* hair_mesh);
	void IsPlantingBanner_(bool* PlantingBanner);
	void StartOrBufferCombo(EArchonAttackActionKey PrimaryKey, EArchonCombatInputType InputType);
	void ClampCameraPitchYaw(bool Clamp);
	void CalculateCameraAttackValues(float* CameraDistance, struct FVector* CameraOffset, float* CameraFOVDelta);
	void UpdateStatusEffects();
	float GetAttackTargetScore();
	void DisableAnimationOnDedicatedServer();
	void IsInputEnabled(bool* Enabled);
	void CalculateCameraCityValues(float* CameraDistance, struct FVector* Camera_Offset, float* CameraFoV);
	void PlayPlantedTurnAnimation();
	void IsValidPlantedTurnAttempt(bool* Valid_Planted_Turn);
	void SetupComponentsForHighlight();
	void LogAppearanceCastError(const struct FName& Key, TAssetPtr<class UObject> AssetID, const class FString& Type);
	void LogAppearanceLoadingError(const struct FName& Key, TAssetPtr<class UObject> AssetID);
	TArray<struct FAppearanceStringData> BlueprintGatherStringData();
	TArray<struct FAppearanceAssetReference> BlueprintGatherAssetReferences();
	void RecoverFromEdgeFall();
	void DisableCityPlayerCollision();
	void CalculateEnableTraversal();
	void GetCameraShakeScale(float Damage, float HeavyThreshold, float MediumThreshold, float* Scale);
	void DebugStamina(float DeltaTime, float StaminaDrainPerSecond);
	bool CanPerformLanding_();
	void UpdateLastValidLocation();
	void CalculateCameraSprintValues(float* CameraDistance, struct FVector* CameraOffset, float* FOVDelta);
	void CalculateCameraCombatValues(float* CameraDistance, struct FVector* CameraOffset);
	void AdjustCameraFromPitch(float DesiredFollowDist, float DesiredFoV, float* CameraDistance, float* CameraFoV);
	void IsWeaponSheathed_(bool* WeaponSheathed);
	void IsSprinting(bool* Sprinting);
	void DetermineItemOrEmote(int EmoteIndex, int QuickItemIndex);
	void EmoteModifierPressed_(bool* Return);
	void Can_Cancel_Use_(bool* Can_Cancel_);
	void Can_Use_(class APawn* Using_Pawn, bool* Usable_);
	void Get_Use_Cost(TEnumAsByte<EUsableObjectResourceCostTypes>* Resource_Type, int* Cost);
	void EquipWeapon(class UObject* Previous_Weapon, class UObject* Next_Weapon, class ABP_BaseArchonWeapon_C** AsBP_Base_Archon_Weapon);
	void SetAnimationBlueprint(class UObject* Weapon);
	void IsInCity__Deprecated(bool* InCity);
	void Evaluate_Camera_Conversation_Transition_Offset(float* Desired_Offset);
	void Get_Armour(TArray<TAssetPtr<class USkeletalMesh>>* Armour);
	void SetCollisionWithMonster(bool Enabled);
	void Get_All_Dynamic_Materials(TArray<class UMaterialInstanceDynamic*>* All_Dynamic_Materials);
	void GetFlickAccelerationDirection(struct FVector* Out, bool* Success);
	void Update_Rotation_Rate(TEnumAsByte<ELocomotionState> Locomotion_State);
	void Get_Current_Direction_Vector(struct FVector* Return_Value, bool* Success);
	void Get_Desired_Direction_Vector(float Tolerance, struct FVector* Return_Value, bool* Success);
	void CanPerformAction(bool* PerformingAction);
	void TurnToFaceInput(float DeltaTime);
	void EvaluateCameraModifiers();
	void UpdatePlantedTurns();
	void CalcTurnRate(float DeltaTime);
	void CheckAndRegisterAttackID(const struct FGuid& AttackID, bool* IDExisted);
	void Calculate_Current_Locomotion_State(TEnumAsByte<ELocomotionState>* Current_State);
	void OnRep_DollyZoom();
	void AddUniqueSpeedModCurve(class UCurveFloat* Curve, const struct FName& Name);
	bool CanJumpInternal();
	void Calculate_Movement_Input(float Forward_Axis, float Right_Axis);
	void Can_Use_A_Quickslot_Item_Old(bool* Can_Use_);
	void _Monster_Lock();
	float Get_Angle_of_Player_Input_Along_Right_Vector();
	void Get_Directional_Input_Modifier_Key(EArchonAttackActionKeyModifier* Modifier_Key);
	void OnRep_Slow_Charge_State();
	void OnRep_Current_Health();
	void Audio_UpdateMovementFoley();
	void Handle_Camera_Auto_panning(float Delta_Time);
	void Play_Heavy_Land_Animation();
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	float Get_Angle_of_Player_Input_Along_Forward_Vector();
	void Kill();
	bool CanPerformDodge();
	void Set_Bleedout_State(bool Bleeding_Out_);
	void Reduce_Resource_Amount(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Successful_);
	void Consume_Resource_Cost(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Has_Amount_);
	void Check_For_Resource_Amount(TEnumAsByte<EUsableObjectResourceCostTypes> Resource_Type, int Amount, bool* Has_Amount_);
	void Set_Input_Enable_State(bool Input_Enabled);
	void Set_Player_Body_Type_Mesh_Data(EArchonBodyType BodyType);
	void Evaluate_Stamina_System(float* In_Delta_Seconds);
	void Calculate_Desired_Locomotion_State(TEnumAsByte<ELocomotionState>* Desired_State);
	void Can_Player_Start_A_Sprint_(bool* Sprint_Capable);
	void Calculate_Player_Max_Movement_Speed(float Delta_Seconds);
	void UserConstructionScript();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Camera_Interpolation__FinishedFunc();
	void Camera_Interpolation__UpdateFunc();
	void EdgeRecoveryTransitionOutTimeline__FinishedFunc();
	void EdgeRecoveryTransitionOutTimeline__UpdateFunc();
	void EdgeRecoveryTransitionInTimeline__FinishedFunc();
	void EdgeRecoveryTransitionInTimeline__UpdateFunc();
	void phys_alpha_blend__FinishedFunc();
	void phys_alpha_blend__UpdateFunc();
	void tempered_phys_blend__FinishedFunc();
	void tempered_phys_blend__UpdateFunc();
	void OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D(class UObject* Loaded);
	void OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5(class UObject* Loaded);
	void OnLoaded_49ABAC9F497E108CAB4448A1E0E63608(class UObject* Loaded);
	void OnLoaded_3004D3C1442BBE040C05ADA282F687DF(class UObject* Loaded);
	void OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB(class UObject* Loaded);
	void InpActEvt_Sprint_K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_Sprint_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_Reset_Camera_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_Quickslot_2_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_Quickslot_3_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_Quickslot_1_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_Interact_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_Lantern_Ability_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_Lantern_Ability_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_BannerPlant_K2Node_InputActionEvent_29(const struct FKey& Key);
	void OnLoaded_4808835940AB2CAA2C965E99DF64B565(class UObject* Loaded);
	void InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_Quickslot_4_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Primary_Attack_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Primary_Attack_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_Secondary_Attack_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_Secondary_Attack_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Special_Action_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Special_Action_K2Node_InputActionEvent_21(const struct FKey& Key);
	void OnLoaded_E1115A0B428C1B7C348612A98A0B0169(class UClass* Loaded);
	void EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid);
	void EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid);
	void RegisterInteraction(class AActor* Actor);
	void UnregisterInteraction(class AActor* Actor);
	void SetLanternGlowIntensity(float emissive_value);
	void UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data);
	void AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId);
	void ToggleSprintCamera(bool On);
	void GameplayCue_Combat_SuperArmour(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void BlueprintApplyAssetReferences(TArray<struct FAppearanceAssetReference>* References);
	void BlueprintApplyStringData(TArray<struct FAppearanceStringData>* StringData);
	void ApplyStringDataInterface(TArray<struct FAppearanceStringData>* String_Data);
	void SetBodyType(EArchonBodyType BodyType);
	void RPCSetBodyType();
	void LoadHairAsset();
	void LoadFacialHairAsset();
	void SetGenderIdentity(EArchonGender GenderId);
	void Event__PlayerChargeGlowIntensity();
	void Toggle_Player_Fadeout(bool Fadeout_);
	void Event_ShowHideWeapon(bool hide);
	void Event__PlayerCharge_Level(int Charge_level);
	void Event__PlayerCharge_Reset();
	void InstantFadeIn();
	void InstantFadeOut();
	void TriggerCameraBoomOffset(class UCurveFloat* TargetCurve, const struct FVector& CameraOffset, float CameraArmLengthOffset, float CameraTime, float CameraFOVDelta);
	void EndCameraBoomOffset(class UCurveFloat* Target_Curve, float CameraTime);
	void Player_Camera_Conversation_Transition(float Time_to_Transition, float Local_Offset, bool Transition_To_Local_Offset);
	void RemoveDebugComponent(class UActorComponent* Comp);
	void ServerStuck();
	void CallLegalStuck();
	void Audio___Event_Tick();
	void Audio___Evaluate_Stamina();
	void GameplayCue_Combat_OnDamageReceived(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void Rotate_Camera_To_Target(const struct FRotator& Target_Rotation);
	void Cancel_Rotate_Camera_To_Target();
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39(float AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float AxisValue);
	void DesiredLocomotion_Event(TEnumAsByte<ELocomotionState> Desired_State, bool CanMove);
	void TriggerEmote(int EmoteIndex);
	void Enable_Input_From_Emote();
	void DoEmote(int emoteID);
	void SetMaxDesiredLocoState(bool Enable, TEnumAsByte<ELocomotionState> MaxDesiredLocoState);
	void ScaleInputTurnRate(float Scale);
	void ResetInputTurnRate();
	void PlayEmoteAnim(TAssetPtr<class UObject> Asset);
	void OnSheatheWeaponEnd_Event_1(bool Success);
	void OnSheatheWeaponEnd(bool Success);
	void ServerSetSprintInput(bool NewValue);
	void AutoplayerAutorun();
	void SetEmoteTurnWarpEnabled(bool Enable);
	void TriggerBannerPlant();
	void TriggerBannerPlantInterface();
	void TriggerEmoteInterface(int EmoteIndex);
	void RotateCameratoTargetInterface(const struct FRotator& TargetRotation);
	void SetAutoPlayerActiveInterface(bool AutoPlayerActive);
	void EnableCameraInput();
	void DisableCameraInput();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue);
	void ClientStartFill(class APawn* UsingPawn);
	void ClientCancelFill(class APawn* UsingPawn);
	void ShowPlayerMarker();
	void HidePlayerMarker();
	void Show_Nameplate();
	void Hide_Nameplate();
	void Show_Revive_Callout();
	void Hide_Revive_Callout();
	void Enter_Bleedout_State(float DurationOfState);
	void Cancel_Bleedout();
	void Set_Slow_Charge_State(bool Slow_State_);
	void RegisterRezInteraction(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UnregisterRezInteraction(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BleedOutElasped();
	void ReviveFromBleedOut(class APawn* RevivingPawn);
	void Set_Dodge_And_Jump_Enable_State(bool Enabled_);
	void EnterBleedout(float DurationPerBleedoutLevel);
	void ApplyHitPause(float HitPauseDuration);
	void SetWarpSmoothing(float Smoothing);
	void RecordAttackDirection();
	void ServerSetAttackDirection(const struct FVector& Direction);
	void UpdateForceEndCombo(float MaxTime, bool PlayAnimation_, class UAnimMontage* Next_Montage, const struct FName& Next_Montage_Section);
	void BP_DamageGiven(float* DamageReceived, class AActor** DamageReceiver, struct FArchonAbilityDamageInfo* DamageInfo);
	void ApplyShouldCheatDeathFromAboutToDie();
	void Client_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void ServerTellClient_StartNextMove(const struct FComboInputBuffer& ComboInputBuffer);
	void InternalReviveFromBleedOut(class APawn* RevivingPawn);
	void OnCanAttack_Event_1();
	void OnCanAttack_Event_2();
	void OnCanAttack_Event_3();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReduceMaxSpeed(float SpeedFactor);
	void ResetMaxSpeed();
	void Delay_Stamina_Regen();
	void OnHealedFromEffect(float* Amount);
	void ReceivePossessed(class AController** NewController);
	void PerformDodge();
	void MulticastHealVFX(float Amount);
	void Play_Speed_Mod_Curve(class UCurveFloat* Speed_Mod_Curve, const struct FName& UniqueName);
	void ClientInitNameplate();
	void RecoverFromFall();
	void ReceiveUnpossessed(class AController** OldController);
	void K2_OnRepPlayerState(class APlayerState** NewPlayerState);
	void K2_PawnRestarted();
	void OnReachedJumpApex_BP();
	void Stop_Speed_Mod_Curve(const struct FName& UniqueName);
	void K2_OnBecomeViewTarget(class APlayerController** pc);
	void DebugOnMovementUpdate(float* DeltaTime, struct FVector* OldLocation, struct FVector* OldVelocity);
	void OnComboStarted();
	void OnComboEnded();
	void DestroyDebrisState(class UObject* Data, float LifeTime);
	void StartCameraFadeOut();
	void OnRecoverFromEdgeFall();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void OnJumped();
	void OnLandBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void SingleClientNameplateInit();
	void UpdateHighlightComponents();
	void SetEarlyOutOfMontage(bool EarlyOutOfMontage);
	void PlayNetworkedMontage(class UAnimMontage* Montage, float ScaleFactor, float PlayRate, const struct FName& Section);
	void UpdateTranslateWarpTargetPosition(const struct FVector& Position);
	void SetLocalWeatherType(TEnumAsByte<Eweather_type_enum> NewParam);
	void EnableIKinema(bool EnableIKinema);
	void ReceiveGameplayStart();
	void ClientGameplayStart();
	void LocalClientUpdateAimToServer();
	void ServerReceiveNewAimDirection(const struct FVector& NewAimDirection);
	void StartReplicatingAim();
	void StopReplicatingAim();
	void ClientUpdateLookAtTargetOnServer(const struct FVector& LookAtTarget);
	void FootPlanted(float DelayedFootSpeed, const struct FName& JointName);
	void FootUnplanted(float FootSpeed, const struct FName& JointName);
	void UpdateHasLoadedInt();
	void ToggleHideWeapon(bool Hide_);
	void TogglePlayerFade(bool Fade);
	void SetHelmHidingSetting(const class FString& helm_hide_setting);
	void SetAnimationGraph(class UClass* NewAnimClass);
	void SetMontagePauseWindow(float PlayRate, float Duration);
	void ServerSetLastMovementInputVector(const struct FVector& MovementVector);
	void OnTookDamageWhileInvulnerableBP(class AActor** DamageGiver, struct FGameplayTagContainer* DamageEventTags, float* TotalDamage);
	void AddEmpoweredWeaponEffectsStack();
	void RemoveEmpoweredWeaponEffectsStack();
	void EnableLocoTransitions();
	void DisableLocoTransitions();
	void SetWeaponAbilityDamageRowOverride(const struct FName& WeaponAbilityDamageRowOverride);
	void ClearWeaponAbilityDamageRowOverride();
	void OnRep_BodyType();
	void SuperArmourPlayerMaterialEffect();
	void ClientDrawServerDebugSphere(const struct FVector& Location, float Radius, float Duration, float Thickness, const struct FLinearColor& Color, int Segments);
	void ResetMaxFallTimerEvent();
	void DestroyEmpoweredVFX();
	void FailSafeBleedoutEvent();
	void OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer);
	void ReInitPhysics();
	void DisableDynamics();
	void OnCinematicStart();
	void OnCinematicEnd();
	void OnCinematicStatePlaying();
	void OnCinematicStateComplete();
	void OnCinematicStateNotPlaying();
	void OnRefreshSkeletalMeshOptimizations();
	void DebugToggleSkeletalOptimization(bool Enable);
	void ReInitPhysics_blend();
	void DisableDynamics_blend();
	void ReinitPhysics_tempered_blend();
	void SetLookAtEnabled(bool Enabled);
	void Disable_Bangs();
	void ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint);
	void OnActorGameplayStart__DelegateSignature();
	void OnLocalWeaponEquippedDispatcher__DelegateSignature(class ABP_BaseArchonWeapon_C* Previous_Weapon, class ABP_BaseArchonWeapon_C* New_Weapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
