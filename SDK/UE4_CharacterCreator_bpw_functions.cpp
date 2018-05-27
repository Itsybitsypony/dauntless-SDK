// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CharacterCreator_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CallFaceComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CallFaceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CallFaceComplete");

	UCharacterCreator_bpw_C_CallFaceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetInitialStringValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Value                          (Parm, OutParm, ZeroConstructor)

void UCharacterCreator_bpw_C::GetInitialStringValue(class AActor* TargetActor, const struct FName& Key, class FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetInitialStringValue");

	UCharacterCreator_bpw_C_GetInitialStringValue_Params params;
	params.TargetActor = TargetActor;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialGenderIdentity
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetInitialGenderIdentity()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialGenderIdentity");

	UCharacterCreator_bpw_C_SetInitialGenderIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UCharacterCreator_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.GetDefaultFocusedWidget");

	UCharacterCreator_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyebrowsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SelectedRow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::OnEyebrowsChanged(const struct FName& SelectedRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyebrowsChanged");

	UCharacterCreator_bpw_C_OnEyebrowsChanged_Params params;
	params.SelectedRow = SelectedRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_MakeupOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SubPanel_get_MakeupOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_MakeupOptions");

	UCharacterCreator_bpw_C_SubPanel_get_MakeupOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CaptureStartingRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CaptureStartingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CaptureStartingRotation");

	UCharacterCreator_bpw_C_CaptureStartingRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ShouldAllowRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::ShouldAllowRotation(bool* AllowRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ShouldAllowRotation");

	UCharacterCreator_bpw_C_ShouldAllowRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowRotation != nullptr)
		*AllowRotation = params.AllowRotation;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_EyebrowOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SubPanel_get_EyebrowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_EyebrowOptions");

	UCharacterCreator_bpw_C_SubPanel_get_EyebrowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacePaintOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SubPanel_get_FacePaintOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacePaintOptions");

	UCharacterCreator_bpw_C_SubPanel_get_FacePaintOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ReturntoControlPanel_fromSubPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    gotoMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::ReturntoControlPanel_fromSubPanel(TEnumAsByte<ECC_ScreenMode> gotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ReturntoControlPanel_fromSubPanel");

	UCharacterCreator_bpw_C_ReturntoControlPanel_fromSubPanel_Params params;
	params.gotoMode = gotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacialHairOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SubPanel_get_FacialHairOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_FacialHairOptions");

	UCharacterCreator_bpw_C_SubPanel_get_FacialHairOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_HairOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SubPanel_get_HairOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SubPanel_get_HairOptions");

	UCharacterCreator_bpw_C_SubPanel_get_HairOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetColourPickerVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetColourPickerVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetColourPickerVisible");

	UCharacterCreator_bpw_C_SetColourPickerVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpendAppearanceToken
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SpendAppearanceToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpendAppearanceToken");

	UCharacterCreator_bpw_C_SpendAppearanceToken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_FullWhite_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_FullWhite_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_FullWhite_Visibility_1");

	UCharacterCreator_bpw_C_Get_FullWhite_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_TUT_01_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_TUT_01_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_TUT_01_Visibility_1");

	UCharacterCreator_bpw_C_Get_TUT_01_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SaveWhenFinished_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_SaveWhenFinished_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SaveWhenFinished_Visibility_1");

	UCharacterCreator_bpw_C_Get_SaveWhenFinished_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SelectCategories_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_SelectCategories_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SelectCategories_Visibility_1");

	UCharacterCreator_bpw_C_Get_SelectCategories_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_HairSelection_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_HairSelection_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_HairSelection_Visibility_1");

	UCharacterCreator_bpw_C_Get_HairSelection_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SkinTone_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_SkinTone_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_SkinTone_Visibility_1");

	UCharacterCreator_bpw_C_Get_SkinTone_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_CC_Categories_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_CC_Categories_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_CC_Categories_Visibility_1");

	UCharacterCreator_bpw_C_Get_CC_Categories_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.IntroTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::IntroTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.IntroTutorial");

	UCharacterCreator_bpw_C_IntroTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_tut_txt_Ancestor2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor2_Visibility_1");

	UCharacterCreator_bpw_C_Get_tut_txt_Ancestor2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor1_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_tut_txt_Ancestor1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_tut_txt_Ancestor1_Visibility_1");

	UCharacterCreator_bpw_C_Get_tut_txt_Ancestor1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_ScrollBoxHeader_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCharacterCreator_bpw_C::Get_ScrollBoxHeader_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_ScrollBoxHeader_Text_1");

	UCharacterCreator_bpw_C_Get_ScrollBoxHeader_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetWidgetVisibility_GenericStage
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetWidgetVisibility_GenericStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetWidgetVisibility_GenericStage");

	UCharacterCreator_bpw_C_SetWidgetVisibility_GenericStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetBackNextButtonText
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetBackNextButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetBackNextButtonText");

	UCharacterCreator_bpw_C_SetBackNextButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetTitleHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetTitleHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetTitleHeaderText");

	UCharacterCreator_bpw_C_SetTitleHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MakeupOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_MakeupOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MakeupOptions");

	UCharacterCreator_bpw_C_CC_MakeupOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnEyeColourChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourChanged");

	UCharacterCreator_bpw_C_OnEyeColourChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnHairColourChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourChanged");

	UCharacterCreator_bpw_C_OnHairColourChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAppearanceSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SelectedRow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::OnAppearanceSelectionChanged(const struct FName& SelectedRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAppearanceSelectionChanged");

	UCharacterCreator_bpw_C_OnAppearanceSelectionChanged_Params params;
	params.SelectedRow = SelectedRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHeadBlendSliderChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::OnHeadBlendSliderChanged(float NewMorphValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHeadBlendSliderChanged");

	UCharacterCreator_bpw_C_OnHeadBlendSliderChanged_Params params;
	params.NewMorphValue = NewMorphValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnSkinToneChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneChanged");

	UCharacterCreator_bpw_C_OnSkinToneChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMorphSliderChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceMorphTranslation   MorphInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterCreator_bpw_C::OnMorphSliderChanged(float NewMorphValue, const struct FFaceMorphTranslation& MorphInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMorphSliderChanged");

	UCharacterCreator_bpw_C_OnMorphSliderChanged_Params params;
	params.NewMorphValue = NewMorphValue;
	params.MorphInfo = MorphInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.DestroyPaperdoll
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::DestroyPaperdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.DestroyPaperdoll");

	UCharacterCreator_bpw_C_DestroyPaperdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpawnPaperdoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SpawnPaperdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SpawnPaperdoll");

	UCharacterCreator_bpw_C_SpawnPaperdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialBodyType
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetInitialBodyType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialBodyType");

	UCharacterCreator_bpw_C_SetInitialBodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialSkinTone
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetInitialSkinTone()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialSkinTone");

	UCharacterCreator_bpw_C_SetInitialSkinTone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialHeadSwatches
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SetInitialHeadSwatches()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetInitialHeadSwatches");

	UCharacterCreator_bpw_C_SetInitialHeadSwatches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyUp");

	UCharacterCreator_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_PC_Hint_RightClick4Camera_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_PC_Hint_RightClick4Camera_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_PC_Hint_RightClick4Camera_Visibility_1");

	UCharacterCreator_bpw_C_Get_PC_Hint_RightClick4Camera_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonUp");

	UCharacterCreator_bpw_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnPreviewMouseButtonDown");

	UCharacterCreator_bpw_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseMove");

	UCharacterCreator_bpw_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Rotation_UpdateCurrentMouseX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geo                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           Mouse                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterCreator_bpw_C::Rotation_UpdateCurrentMouseX(const struct FGeometry& Geo, const struct FPointerEvent& Mouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Rotation_UpdateCurrentMouseX");

	UCharacterCreator_bpw_C_Rotation_UpdateCurrentMouseX_Params params;
	params.Geo = Geo;
	params.Mouse = Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HandleRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::HandleRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.HandleRotation");

	UCharacterCreator_bpw_C_HandleRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnAnalogValueChanged");

	UCharacterCreator_bpw_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCharGen_Popup
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::ExitCharGen_Popup()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCharGen_Popup");

	UCharacterCreator_bpw_C_ExitCharGen_Popup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCancelled
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::ExitCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitCancelled");

	UCharacterCreator_bpw_C_ExitCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitConfirmed
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::ExitConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExitConfirmed");

	UCharacterCreator_bpw_C_ExitConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Hair Colour Picker
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Clear_Hair_Colour_Picker()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Hair Colour Picker");

	UCharacterCreator_bpw_C_Clear_Hair_Colour_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCharacterCreator_bpw_C::Get_NextButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_bIsEnabled_1");

	UCharacterCreator_bpw_C_Get_NextButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_NextButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_NextButton_Visibility_1");

	UCharacterCreator_bpw_C_Get_NextButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnMouseButtonDown");

	UCharacterCreator_bpw_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Eye Colour Picker
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Clear_Eye_Colour_Picker()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Eye Colour Picker");

	UCharacterCreator_bpw_C_Clear_Eye_Colour_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Advanced Sliders
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Clear_Advanced_Sliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Clear Advanced Sliders");

	UCharacterCreator_bpw_C_Clear_Advanced_Sliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NotReadyYet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_NotReadyYet()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NotReadyYet");

	UCharacterCreator_bpw_C_CC_NotReadyYet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Commit Appearance to Server
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Commit_Appearance_to_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Commit Appearance to Server");

	UCharacterCreator_bpw_C_Commit_Appearance_to_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Select First Advanced Control
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Select_First_Advanced_Control()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Select First Advanced Control");

	UCharacterCreator_bpw_C_Select_First_Advanced_Control_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterCreator_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnKeyDown");

	UCharacterCreator_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Go To Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Go_To_Mode(TEnumAsByte<ECC_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Go To Mode");

	UCharacterCreator_bpw_C_Go_To_Mode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Camera Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_CameraTarget>  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Set_Camera_Target(TEnumAsByte<ECC_CameraTarget> Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Camera Target");

	UCharacterCreator_bpw_C_Set_Camera_Target_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Head Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Head_Component                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Get_Head_Component(class USkeletalMeshComponent** Head_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Head Component");

	UCharacterCreator_bpw_C_Get_Head_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Head_Component != nullptr)
		*Head_Component = params.Head_Component;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Add Advanced Face Morphs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Add_Advanced_Face_Morphs(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Add Advanced Face Morphs");

	UCharacterCreator_bpw_C_Add_Advanced_Face_Morphs_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Camera
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Toggle_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Camera");

	UCharacterCreator_bpw_C_Toggle_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCharacterCreator_bpw_C::Get_WelcomeText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_Visibility_1");

	UCharacterCreator_bpw_C_Get_WelcomeText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UCharacterCreator_bpw_C::Get_WelcomeText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get_WelcomeText_ColorAndOpacity_1");

	UCharacterCreator_bpw_C_Get_WelcomeText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Right Head Morph Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MorphTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Set_Right_Head_Morph_Target(const struct FName& MorphTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Right Head Morph Target");

	UCharacterCreator_bpw_C_Set_Right_Head_Morph_Target_Params params;
	params.MorphTarget = MorphTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Left Head Morph Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SelectedMorphTarget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Set_Left_Head_Morph_Target(const struct FName& SelectedMorphTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Set Left Head Morph Target");

	UCharacterCreator_bpw_C_Set_Left_Head_Morph_Target_Params params;
	params.SelectedMorphTarget = SelectedMorphTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetHeadMorphTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LeftButtonTarget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RightButtonTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::SetHeadMorphTargets(const struct FName& LeftButtonTarget, const struct FName& RightButtonTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetHeadMorphTargets");

	UCharacterCreator_bpw_C_SetHeadMorphTargets_Params params;
	params.LeftButtonTarget = LeftButtonTarget;
	params.RightButtonTarget = RightButtonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EarOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_EarOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EarOptions");

	UCharacterCreator_bpw_C_CC_EarOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_SkinOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_SkinOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_SkinOptions");

	UCharacterCreator_bpw_C_CC_SkinOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MouthOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_MouthOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_MouthOptions");

	UCharacterCreator_bpw_C_CC_MouthOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_JawOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_JawOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_JawOptions");

	UCharacterCreator_bpw_C_CC_JawOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_AllSliders
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_AllSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_AllSliders");

	UCharacterCreator_bpw_C_CC_AllSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HeadOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_HeadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HeadOptions");

	UCharacterCreator_bpw_C_CC_HeadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NoseOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_NoseOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_NoseOptions");

	UCharacterCreator_bpw_C_CC_NoseOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HairOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_HairOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_HairOptions");

	UCharacterCreator_bpw_C_CC_HairOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EyeOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::CC_EyeOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CC_EyeOptions");

	UCharacterCreator_bpw_C_CC_EyeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetViewTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Camera_Offset                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Socket_Offset                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCharacterCreator_bpw_C::SetViewTarget(const struct FName& Socket, const struct FVector& Camera_Offset, const struct FVector& Socket_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SetViewTarget");

	UCharacterCreator_bpw_C_SetViewTarget_Params params;
	params.Socket = Socket;
	params.Camera_Offset = Camera_Offset;
	params.Socket_Offset = Socket_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Player Character Loadout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLoadout*          LOADOUT                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Get_Player_Character_Loadout(class AArchonLoadout** LOADOUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Get Player Character Loadout");

	UCharacterCreator_bpw_C_Get_Player_Character_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LOADOUT != nullptr)
		*LOADOUT = params.LOADOUT;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cancel                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::CloseWidget(bool Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.CloseWidget");

	UCharacterCreator_bpw_C_CloseWidget_Params params;
	params.Cancel = Cancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCreator_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Construct");

	UCharacterCreator_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Tick");

	UCharacterCreator_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCreator_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Destruct");

	UCharacterCreator_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.EyeColourPickerButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Primary_Colour                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Secondary_Colour               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Primary_2                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Secondary_2                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCharacterCreator_bpw_C::EyeColourPickerButtonPressed(const struct FLinearColor& Primary_Colour, const struct FLinearColor& Secondary_Colour, const struct FLinearColor& Primary_2, const struct FLinearColor& Secondary_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.EyeColourPickerButtonPressed");

	UCharacterCreator_bpw_C_EyeColourPickerButtonPressed_Params params;
	params.Primary_Colour = Primary_Colour;
	params.Secondary_Colour = Secondary_Colour;
	params.Primary_2 = Primary_2;
	params.Secondary_2 = Secondary_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourClosed
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnEyeColourClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnEyeColourClosed");

	UCharacterCreator_bpw_C_OnEyeColourClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SkinColourButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Primary_Colour                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Secondary_Colour               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Primary_2                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Secondary_2                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCharacterCreator_bpw_C::SkinColourButtonPressed(const struct FLinearColor& Primary_Colour, const struct FLinearColor& Secondary_Colour, const struct FLinearColor& Primary_2, const struct FLinearColor& Secondary_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SkinColourButtonPressed");

	UCharacterCreator_bpw_C_SkinColourButtonPressed_Params params;
	params.Primary_Colour = Primary_Colour;
	params.Secondary_Colour = Secondary_Colour;
	params.Primary_2 = Primary_2;
	params.Secondary_2 = Secondary_2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneClosed
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnSkinToneClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnSkinToneClosed");

	UCharacterCreator_bpw_C_OnSkinToneClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Palette Chooser
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Palette_Chooser()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Palette Chooser");

	UCharacterCreator_bpw_C_Palette_Chooser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.New Colour Palette Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SelectedPalette                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::New_Colour_Palette_Selected(const struct FName& SelectedPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.New Colour Palette Selected");

	UCharacterCreator_bpw_C_New_Colour_Palette_Selected_Params params;
	params.SelectedPalette = SelectedPalette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Set Head Morph Target
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::On_Set_Head_Morph_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Set Head Morph Target");

	UCharacterCreator_bpw_C_On_Set_Head_Morph_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected Head Target__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Target_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected_Head_Target__DelegateSignature(const struct FName& Target_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected Head Target__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_0_Selected_Head_Target__DelegateSignature_Params params;
	params.Target_Name = Target_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected Head Target__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Target_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected_Head_Target__DelegateSignature(const struct FName& Target_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected Head Target__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_1_Selected_Head_Target__DelegateSignature_Params params;
	params.Target_Name = Target_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__BodyTypeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Body Type
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Toggle_Body_Type()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Toggle Body Type");

	UCharacterCreator_bpw_C_Toggle_Body_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__CameraButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Category Setup
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::On_Category_Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.On Category Setup");

	UCharacterCreator_bpw_C_On_Category_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Cancel Character Creator
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Cancel_Character_Creator()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Cancel Character Creator");

	UCharacterCreator_bpw_C_Cancel_Character_Creator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HairColourPicker
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::HairColourPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.HairColourPicker");

	UCharacterCreator_bpw_C_HairColourPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourClosed
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::OnHairColourClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.OnHairColourClosed");

	UCharacterCreator_bpw_C_OnHairColourClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.HideSkinForChar
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::HideSkinForChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.HideSkinForChar");

	UCharacterCreator_bpw_C_HideSkinForChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.InputSwap");

	UCharacterCreator_bpw_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On Back__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On Back__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_340_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On Next__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On_Next__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On Next__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_361_On_Next__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature(TEnumAsByte<ECC_ScreenMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__CC_Categories_K2Node_ComponentBoundEvent_1897_CategorySelected__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveAndClose
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SaveAndClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveAndClose");

	UCharacterCreator_bpw_C_SaveAndClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveExit
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::SaveExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.SaveExit");

	UCharacterCreator_bpw_C_SaveExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UCharacterCreator_bpw_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.Exit");

	UCharacterCreator_bpw_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Right_K2Node_ComponentBoundEvent_83_PickerMenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__HeadSwatchPicker_Left_K2Node_ComponentBoundEvent_93_PickerMenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button Clicked__DelegateSignature
// (BlueprintEvent)

void UCharacterCreator_bpw_C::BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button Clicked__DelegateSignature");

	UCharacterCreator_bpw_C_BndEvt__w_Button_PB_266_K2Node_ComponentBoundEvent_266_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.InitializeFromNPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::InitializeFromNPCMenu(class AArchonPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.InitializeFromNPCMenu");

	UCharacterCreator_bpw_C_InitializeFromNPCMenu_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.NPCInteractInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          NPCMenuTuning                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterCreator_bpw_C::NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.NPCInteractInitialize");

	UCharacterCreator_bpw_C_NPCInteractInitialize_Params params;
	params.Vendor = Vendor;
	params.NPCMenuTuning = NPCMenuTuning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExecuteUbergraph_CharacterCreator_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::ExecuteUbergraph_CharacterCreator_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.ExecuteUbergraph_CharacterCreator_bpw");

	UCharacterCreator_bpw_C_ExecuteUbergraph_CharacterCreator_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::FaceCancelled__DelegateSignature(class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceCancelled__DelegateSignature");

	UCharacterCreator_bpw_C_FaceCancelled__DelegateSignature_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCreator_bpw_C::FaceComplete__DelegateSignature(class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCreator_bpw.CharacterCreator_bpw_C.FaceComplete__DelegateSignature");

	UCharacterCreator_bpw_C_FaceComplete__DelegateSignature_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
