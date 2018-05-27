// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_CategoriesHorizontal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_CategoriesHorizontal_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnKeyDown");

	Uw_CC_CategoriesHorizontal_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.VisibilityUsingGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_CC_CategoriesHorizontal_C::VisibilityUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.VisibilityUsingGamepad");

	Uw_CC_CategoriesHorizontal_C_VisibilityUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Has Active Category
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::Has_Active_Category(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Has Active Category");

	Uw_CC_CategoriesHorizontal_C_Has_Active_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnLoaded_661F86FF4D2F45FF81F15F89F4ACCF13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::OnLoaded_661F86FF4D2F45FF81F15F89F4ACCF13(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnLoaded_661F86FF4D2F45FF81F15F89F4ACCF13");

	Uw_CC_CategoriesHorizontal_C_OnLoaded_661F86FF4D2F45FF81F15F89F4ACCF13_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnLoaded_2010195340D115D4DD88B8AFEFF7116F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::OnLoaded_2010195340D115D4DD88B8AFEFF7116F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnLoaded_2010195340D115D4DD88B8AFEFF7116F");

	Uw_CC_CategoriesHorizontal_C_OnLoaded_2010195340D115D4DD88B8AFEFF7116F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Construct");

	Uw_CC_CategoriesHorizontal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__EyesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__EyesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__EyesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__EyesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Handle New Category
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_CC_CategoryButton_C*  Category_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::Handle_New_Category(class Uw_CC_CategoryButton_C* Category_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Handle New Category");

	Uw_CC_CategoriesHorizontal_C_Handle_New_Category_Params params;
	params.Category_Button = Category_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Focus Default Category
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::Focus_Default_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Focus Default Category");

	Uw_CC_CategoriesHorizontal_C_Focus_Default_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__EarsButton_K2Node_ComponentBoundEvent_165_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__EarsButton_K2Node_ComponentBoundEvent_165_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__EarsButton_K2Node_ComponentBoundEvent_165_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__EarsButton_K2Node_ComponentBoundEvent_165_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__NoseButton_K2Node_ComponentBoundEvent_175_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__NoseButton_K2Node_ComponentBoundEvent_175_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__NoseButton_K2Node_ComponentBoundEvent_175_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__NoseButton_K2Node_ComponentBoundEvent_175_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__MouthButton_K2Node_ComponentBoundEvent_180_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__MouthButton_K2Node_ComponentBoundEvent_180_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__MouthButton_K2Node_ComponentBoundEvent_180_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__MouthButton_K2Node_ComponentBoundEvent_180_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__CheeksButton_K2Node_ComponentBoundEvent_186_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__CheeksButton_K2Node_ComponentBoundEvent_186_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__CheeksButton_K2Node_ComponentBoundEvent_186_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__CheeksButton_K2Node_ComponentBoundEvent_186_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_193_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_193_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_193_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_193_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__JawButton_K2Node_ComponentBoundEvent_201_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__JawButton_K2Node_ComponentBoundEvent_201_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__JawButton_K2Node_ComponentBoundEvent_201_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__JawButton_K2Node_ComponentBoundEvent_201_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_238_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Refresh");

	Uw_CC_CategoriesHorizontal_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.OnSynchronizeProperties");

	Uw_CC_CategoriesHorizontal_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__w_CC_CategoryButton_C_0_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    ModeToNavTo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::BndEvt__w_CC_CategoryButton_C_0_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature(TEnumAsByte<ECC_ScreenMode> ModeToNavTo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.BndEvt__w_CC_CategoryButton_C_0_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_BndEvt__w_CC_CategoryButton_C_0_K2Node_ComponentBoundEvent_1078_OnClicked__DelegateSignature_Params params;
	params.ModeToNavTo = ModeToNavTo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.CategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::CategoryClicked(TEnumAsByte<ECC_ScreenMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.CategoryClicked");

	Uw_CC_CategoriesHorizontal_C_CategoryClicked_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.Input Swap");

	Uw_CC_CategoriesHorizontal_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.ShowButtons
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::ShowButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.ShowButtons");

	Uw_CC_CategoriesHorizontal_C_ShowButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.NextCategory
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::NextCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.NextCategory");

	Uw_CC_CategoriesHorizontal_C_NextCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.PreviousCategory
// (BlueprintCallable, BlueprintEvent)

void Uw_CC_CategoriesHorizontal_C::PreviousCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.PreviousCategory");

	Uw_CC_CategoriesHorizontal_C_PreviousCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.ExecuteUbergraph_w_CC_CategoriesHorizontal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::ExecuteUbergraph_w_CC_CategoriesHorizontal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.ExecuteUbergraph_w_CC_CategoriesHorizontal");

	Uw_CC_CategoriesHorizontal_C_ExecuteUbergraph_w_CC_CategoriesHorizontal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.CategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECC_ScreenMode>    NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_CategoriesHorizontal_C::CategorySelected__DelegateSignature(TEnumAsByte<ECC_ScreenMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_CategoriesHorizontal.w_CC_CategoriesHorizontal_C.CategorySelected__DelegateSignature");

	Uw_CC_CategoriesHorizontal_C_CategorySelected__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
