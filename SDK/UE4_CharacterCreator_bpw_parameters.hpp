#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CharacterCreator_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CallFaceComplete
struct UCharacterCreator_bpw_C_CallFaceComplete_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetInitialStringValue
struct UCharacterCreator_bpw_C_GetInitialStringValue_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialGenderIdentity
struct UCharacterCreator_bpw_C_SetInitialGenderIdentity_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetDefaultFocusedWidget
struct UCharacterCreator_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyebrowsChanged
struct UCharacterCreator_bpw_C_OnEyebrowsChanged_Params
{
	struct FName                                       SelectedRow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_MakeupOptions
struct UCharacterCreator_bpw_C_SubPanel_get_MakeupOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CaptureStartingRotation
struct UCharacterCreator_bpw_C_CaptureStartingRotation_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ShouldAllowRotation
struct UCharacterCreator_bpw_C_ShouldAllowRotation_Params
{
	bool                                               AllowRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_EyebrowOptions
struct UCharacterCreator_bpw_C_SubPanel_get_EyebrowOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacePaintOptions
struct UCharacterCreator_bpw_C_SubPanel_get_FacePaintOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ReturntoControlPanel_fromSubPanel
struct UCharacterCreator_bpw_C_ReturntoControlPanel_fromSubPanel_Params
{
	TEnumAsByte<ECC_ScreenMode>                        gotoMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacialHairOptions
struct UCharacterCreator_bpw_C_SubPanel_get_FacialHairOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_HairOptions
struct UCharacterCreator_bpw_C_SubPanel_get_HairOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetColourPickerVisible
struct UCharacterCreator_bpw_C_SetColourPickerVisible_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpendAppearanceToken
struct UCharacterCreator_bpw_C_SpendAppearanceToken_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_FullWhite_Visibility_1
struct UCharacterCreator_bpw_C_Get_FullWhite_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_TUT_01_Visibility_1
struct UCharacterCreator_bpw_C_Get_TUT_01_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SaveWhenFinished_Visibility_1
struct UCharacterCreator_bpw_C_Get_SaveWhenFinished_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SelectCategories_Visibility_1
struct UCharacterCreator_bpw_C_Get_SelectCategories_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_HairSelection_Visibility_1
struct UCharacterCreator_bpw_C_Get_HairSelection_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SkinTone_Visibility_1
struct UCharacterCreator_bpw_C_Get_SkinTone_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_CC_Categories_Visibility_1
struct UCharacterCreator_bpw_C_Get_CC_Categories_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.IntroTutorial
struct UCharacterCreator_bpw_C_IntroTutorial_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor2_Visibility_1
struct UCharacterCreator_bpw_C_Get_tut_txt_Ancestor2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor1_Visibility_1
struct UCharacterCreator_bpw_C_Get_tut_txt_Ancestor1_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_ScrollBoxHeader_Text_1
struct UCharacterCreator_bpw_C_Get_ScrollBoxHeader_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetWidgetVisibility_GenericStage
struct UCharacterCreator_bpw_C_SetWidgetVisibility_GenericStage_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetBackNextButtonText
struct UCharacterCreator_bpw_C_SetBackNextButtonText_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetTitleHeaderText
struct UCharacterCreator_bpw_C_SetTitleHeaderText_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MakeupOptions
struct UCharacterCreator_bpw_C_CC_MakeupOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourChanged
struct UCharacterCreator_bpw_C_OnEyeColourChanged_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourChanged
struct UCharacterCreator_bpw_C_OnHairColourChanged_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAppearanceSelectionChanged
struct UCharacterCreator_bpw_C_OnAppearanceSelectionChanged_Params
{
	struct FName                                       SelectedRow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHeadBlendSliderChanged
struct UCharacterCreator_bpw_C_OnHeadBlendSliderChanged_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneChanged
struct UCharacterCreator_bpw_C_OnSkinToneChanged_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMorphSliderChanged
struct UCharacterCreator_bpw_C_OnMorphSliderChanged_Params
{
	float                                              NewMorphValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFaceMorphTranslation                       MorphInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.DestroyPaperdoll
struct UCharacterCreator_bpw_C_DestroyPaperdoll_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpawnPaperdoll
struct UCharacterCreator_bpw_C_SpawnPaperdoll_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialBodyType
struct UCharacterCreator_bpw_C_SetInitialBodyType_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialSkinTone
struct UCharacterCreator_bpw_C_SetInitialSkinTone_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialHeadSwatches
struct UCharacterCreator_bpw_C_SetInitialHeadSwatches_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyUp
struct UCharacterCreator_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_PC_Hint_RightClick4Camera_Visibility_1
struct UCharacterCreator_bpw_C_Get_PC_Hint_RightClick4Camera_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonUp
struct UCharacterCreator_bpw_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnPreviewMouseButtonDown
struct UCharacterCreator_bpw_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseMove
struct UCharacterCreator_bpw_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Rotation_UpdateCurrentMouseX
struct UCharacterCreator_bpw_C_Rotation_UpdateCurrentMouseX_Params
{
	struct FGeometry                                   Geo;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               Mouse;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HandleRotation
struct UCharacterCreator_bpw_C_HandleRotation_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAnalogValueChanged
struct UCharacterCreator_bpw_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCharGen_Popup
struct UCharacterCreator_bpw_C_ExitCharGen_Popup_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCancelled
struct UCharacterCreator_bpw_C_ExitCancelled_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitConfirmed
struct UCharacterCreator_bpw_C_ExitConfirmed_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Hair Colour Picker
struct UCharacterCreator_bpw_C_Clear_Hair_Colour_Picker_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_bIsEnabled_1
struct UCharacterCreator_bpw_C_Get_NextButton_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_Visibility_1
struct UCharacterCreator_bpw_C_Get_NextButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonDown
struct UCharacterCreator_bpw_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Eye Colour Picker
struct UCharacterCreator_bpw_C_Clear_Eye_Colour_Picker_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Advanced Sliders
struct UCharacterCreator_bpw_C_Clear_Advanced_Sliders_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NotReadyYet
struct UCharacterCreator_bpw_C_CC_NotReadyYet_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Commit Appearance to Server
struct UCharacterCreator_bpw_C_Commit_Appearance_to_Server_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Select First Advanced Control
struct UCharacterCreator_bpw_C_Select_First_Advanced_Control_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyDown
struct UCharacterCreator_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Go To Mode
struct UCharacterCreator_bpw_C_Go_To_Mode_Params
{
	TEnumAsByte<ECC_ScreenMode>                        Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Camera Target
struct UCharacterCreator_bpw_C_Set_Camera_Target_Params
{
	TEnumAsByte<ECC_CameraTarget>                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Head Component
struct UCharacterCreator_bpw_C_Get_Head_Component_Params
{
	class USkeletalMeshComponent*                      Head_Component;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Add Advanced Face Morphs
struct UCharacterCreator_bpw_C_Add_Advanced_Face_Morphs_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Camera
struct UCharacterCreator_bpw_C_Toggle_Camera_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_Visibility_1
struct UCharacterCreator_bpw_C_Get_WelcomeText_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_ColorAndOpacity_1
struct UCharacterCreator_bpw_C_Get_WelcomeText_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Right Head Morph Target
struct UCharacterCreator_bpw_C_Set_Right_Head_Morph_Target_Params
{
	struct FName                                       MorphTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Left Head Morph Target
struct UCharacterCreator_bpw_C_Set_Left_Head_Morph_Target_Params
{
	struct FName                                       SelectedMorphTarget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetHeadMorphTargets
struct UCharacterCreator_bpw_C_SetHeadMorphTargets_Params
{
	struct FName                                       LeftButtonTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightButtonTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EarOptions
struct UCharacterCreator_bpw_C_CC_EarOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_SkinOptions
struct UCharacterCreator_bpw_C_CC_SkinOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MouthOptions
struct UCharacterCreator_bpw_C_CC_MouthOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_JawOptions
struct UCharacterCreator_bpw_C_CC_JawOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_AllSliders
struct UCharacterCreator_bpw_C_CC_AllSliders_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HeadOptions
struct UCharacterCreator_bpw_C_CC_HeadOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NoseOptions
struct UCharacterCreator_bpw_C_CC_NoseOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HairOptions
struct UCharacterCreator_bpw_C_CC_HairOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EyeOptions
struct UCharacterCreator_bpw_C_CC_EyeOptions_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetViewTarget
struct UCharacterCreator_bpw_C_SetViewTarget_Params
{
	struct FName                                       Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Camera_Offset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Socket_Offset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Player Character Loadout
struct UCharacterCreator_bpw_C_Get_Player_Character_Loadout_Params
{
	class AArchonLoadout*                              LOADOUT;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CloseWidget
struct UCharacterCreator_bpw_C_CloseWidget_Params
{
	bool                                               Cancel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Construct
struct UCharacterCreator_bpw_C_Construct_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Tick
struct UCharacterCreator_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Destruct
struct UCharacterCreator_bpw_C_Destruct_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.EyeColourPickerButtonPressed
struct UCharacterCreator_bpw_C_EyeColourPickerButtonPressed_Params
{
	struct FLinearColor                                Primary_Colour;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Secondary_Colour;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Primary_2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Secondary_2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourClosed
struct UCharacterCreator_bpw_C_OnEyeColourClosed_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SkinColourButtonPressed
struct UCharacterCreator_bpw_C_SkinColourButtonPressed_Params
{
	struct FLinearColor                                Primary_Colour;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Secondary_Colour;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Primary_2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Secondary_2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneClosed
struct UCharacterCreator_bpw_C_OnSkinToneClosed_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Palette Chooser
struct UCharacterCreator_bpw_C_Palette_Chooser_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.New Colour Palette Selected
struct UCharacterCreator_bpw_C_New_Colour_Palette_Selected_Params
{
	struct FName                                       SelectedPalette;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Set Head Morph Target
struct UCharacterCreator_bpw_C_On_Set_Head_Morph_Target_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected Head Target__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected_Head_Target__DelegateSignature_Params
{
	struct FName                                       Target_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected Head Target__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected_Head_Target__DelegateSignature_Params
{
	struct FName                                       Target_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Body Type
struct UCharacterCreator_bpw_C_Toggle_Body_Type_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Category Setup
struct UCharacterCreator_bpw_C_On_Category_Setup_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Cancel Character Creator
struct UCharacterCreator_bpw_C_Cancel_Character_Creator_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HairColourPicker
struct UCharacterCreator_bpw_C_HairColourPicker_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourClosed
struct UCharacterCreator_bpw_C_OnHairColourClosed_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HideSkinForChar
struct UCharacterCreator_bpw_C_HideSkinForChar_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.InputSwap
struct UCharacterCreator_bpw_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On Back__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On_Back__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On Next__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On_Next__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature_Params
{
	TEnumAsByte<ECC_ScreenMode>                        NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveAndClose
struct UCharacterCreator_bpw_C_SaveAndClose_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveExit
struct UCharacterCreator_bpw_C_SaveExit_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Exit
struct UCharacterCreator_bpw_C_Exit_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button Clicked__DelegateSignature
struct UCharacterCreator_bpw_C_BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button_Clicked__DelegateSignature_Params
{
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.InitializeFromNPCMenu
struct UCharacterCreator_bpw_C_InitializeFromNPCMenu_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.NPCInteractInitialize
struct UCharacterCreator_bpw_C_NPCInteractInitialize_Params
{
	class Avendor_interactive_bp_C*                    Vendor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              NPCMenuTuning;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExecuteUbergraph_CharacterCreator_bpw
struct UCharacterCreator_bpw_C_ExecuteUbergraph_CharacterCreator_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceCancelled__DelegateSignature
struct UCharacterCreator_bpw_C_FaceCancelled__DelegateSignature_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceComplete__DelegateSignature
struct UCharacterCreator_bpw_C_FaceComplete__DelegateSignature_Params
{
	class APlayerController*                           Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
