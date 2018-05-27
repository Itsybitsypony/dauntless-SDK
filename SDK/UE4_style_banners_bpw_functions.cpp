// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_banners_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function style_banners_bpw.style_banners_bpw_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ustyle_banners_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.GetText_1");

	Ustyle_banners_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_banners_bpw.style_banners_bpw_C.GetText_DebugStage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ustyle_banners_bpw_C::GetText_DebugStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.GetText_DebugStage");

	Ustyle_banners_bpw_C_GetText_DebugStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_banners_bpw.style_banners_bpw_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ustyle_banners_bpw_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.GetVisibility_2");

	Ustyle_banners_bpw_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_banners_bpw.style_banners_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ustyle_banners_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.GetVisibility_1");

	Ustyle_banners_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Animation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Animation(const class FString& Anim, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Animation");

	Ustyle_banners_bpw_C_Update_New_Animation_Params params;
	params.Anim = Anim;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ustyle_banners_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.OnKeyDown");

	Ustyle_banners_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function style_banners_bpw.style_banners_bpw_C.CheckIfEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Banner* BannerInventoryItem            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::CheckIfEquipped(const class FString& ItemID, EItemGroupType Kind, class UArchonInventoryItem_Banner* BannerInventoryItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.CheckIfEquipped");

	Ustyle_banners_bpw_C_CheckIfEquipped_Params params;
	params.ItemID = ItemID;
	params.Kind = Kind;
	params.BannerInventoryItem = BannerInventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function style_banners_bpw.style_banners_bpw_C.RefreshMenuButtons_FromLocalID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBannerCustomizationCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::RefreshMenuButtons_FromLocalID(TEnumAsByte<EBannerCustomizationCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.RefreshMenuButtons_FromLocalID");

	Ustyle_banners_bpw_C_RefreshMenuButtons_FromLocalID_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Get Owned Dyes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::Get_Owned_Dyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Get Owned Dyes");

	Ustyle_banners_bpw_C_Get_Owned_Dyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.AssignColourFromDyeWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  DyeID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            DyeSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::AssignColourFromDyeWindow(const class FString& DyeID, int DyeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.AssignColourFromDyeWindow");

	Ustyle_banners_bpw_C_AssignColourFromDyeWindow_Params params;
	params.DyeID = DyeID;
	params.DyeSlot = DyeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.GetDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonCatalog*          Catalog_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Display_Name                   (Parm, OutParm)

void Ustyle_banners_bpw_C::GetDisplayName(class UArchonCatalog* Catalog_, const class FString& ItemID, struct FText* Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.GetDisplayName");

	Ustyle_banners_bpw_C_GetDisplayName_Params params;
	params.Catalog_ = Catalog_;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Display_Name != nullptr)
		*Display_Name = params.Display_Name;
}


// Function style_banners_bpw.style_banners_bpw_C.SetupMenuButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::SetupMenuButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.SetupMenuButtons");

	Ustyle_banners_bpw_C_SetupMenuButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.UpdateBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  UpdatedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::UpdateBanner(const class FString& UpdatedItem, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.UpdateBanner");

	Ustyle_banners_bpw_C_UpdateBanner_Params params;
	params.UpdatedItem = UpdatedItem;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Create Tinting Window
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::Create_Tinting_Window()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Create Tinting Window");

	Ustyle_banners_bpw_C_Create_Tinting_Window_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Fabric Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  FabricColour                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Fabric_Colour(const class FString& FabricColour, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Fabric Colour");

	Ustyle_banners_bpw_C_Update_New_Fabric_Colour_Params params;
	params.FabricColour = FabricColour;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Border Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BorderColour                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Border_Colour(const class FString& BorderColour, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Border Colour");

	Ustyle_banners_bpw_C_Update_New_Border_Colour_Params params;
	params.BorderColour = BorderColour;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Sigil Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SigilColour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Sigil_Colour(const class FString& SigilColour, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Sigil Colour");

	Ustyle_banners_bpw_C_Update_New_Sigil_Colour_Params params;
	params.SigilColour = SigilColour;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Standard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  StandardItemID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Standard(const class FString& StandardItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Standard");

	Ustyle_banners_bpw_C_Update_New_Standard_Params params;
	params.StandardItemID = StandardItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Sigil
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SigilItemID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Sigil(const class FString& SigilItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Sigil");

	Ustyle_banners_bpw_C_Update_New_Sigil_Params params;
	params.SigilItemID = SigilItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Update New Border
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BorderItemID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::Update_New_Border(const class FString& BorderItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Update New Border");

	Ustyle_banners_bpw_C_Update_New_Border_Params params;
	params.BorderItemID = BorderItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.UpdateBanner_Dyes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  DyeInfoRowName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            DyeSlotSwitch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::UpdateBanner_Dyes(const class FString& DyeInfoRowName, int DyeSlotSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.UpdateBanner_Dyes");

	Ustyle_banners_bpw_C_UpdateBanner_Dyes_Params params;
	params.DyeInfoRowName = DyeInfoRowName;
	params.DyeSlotSwitch = DyeSlotSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ShowSubList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::ShowSubList(EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ShowSubList");

	Ustyle_banners_bpw_C_ShowSubList_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_banners_bpw_C::BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button Clicked__DelegateSignature");

	Ustyle_banners_bpw_C_BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_banners_bpw_C::BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button Clicked__DelegateSignature");

	Ustyle_banners_bpw_C_BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.CustomizationSelected_UpdateBanner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_banners_bpw_C::CustomizationSelected_UpdateBanner(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.CustomizationSelected_UpdateBanner");

	Ustyle_banners_bpw_C_CustomizationSelected_UpdateBanner_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Customization Selected_UpdateBannerColours
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_banners_bpw_C::Customization_Selected_UpdateBannerColours(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Customization Selected_UpdateBannerColours");

	Ustyle_banners_bpw_C_Customization_Selected_UpdateBannerColours_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.UpdateDyeInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::UpdateDyeInfo(const struct FName& RowID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.UpdateDyeInfo");

	Ustyle_banners_bpw_C_UpdateDyeInfo_Params params;
	params.RowID = RowID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ReturnToCategories
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::ReturnToCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ReturnToCategories");

	Ustyle_banners_bpw_C_ReturnToCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_banners_bpw_C::BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button Clicked__DelegateSignature");

	Ustyle_banners_bpw_C_BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.RefreshButtons_FromLoadout
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::RefreshButtons_FromLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.RefreshButtons_FromLoadout");

	Ustyle_banners_bpw_C_RefreshButtons_FromLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Ustyle_banners_bpw_C::BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button Clicked__DelegateSignature");

	Ustyle_banners_bpw_C_BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustyle_banners_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Construct");

	Ustyle_banners_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Disable Input While Anim Playing
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::Disable_Input_While_Anim_Playing()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Disable Input While Anim Playing");

	Ustyle_banners_bpw_C_Disable_Input_While_Anim_Playing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Enable Input
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::Enable_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Enable Input");

	Ustyle_banners_bpw_C_Enable_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature
// (BlueprintEvent)

void Ustyle_banners_bpw_C::BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature");

	Ustyle_banners_bpw_C_BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.Refresh");

	Ustyle_banners_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ColourButton1
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::ColourButton1()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ColourButton1");

	Ustyle_banners_bpw_C_ColourButton1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ColourButton2
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::ColourButton2()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ColourButton2");

	Ustyle_banners_bpw_C_ColourButton2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.RefreshFabricList
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::RefreshFabricList()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.RefreshFabricList");

	Ustyle_banners_bpw_C_RefreshFabricList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.RefreshSigilList
// (BlueprintCallable, BlueprintEvent)

void Ustyle_banners_bpw_C::RefreshSigilList()
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.RefreshSigilList");

	Ustyle_banners_bpw_C_RefreshSigilList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ExecuteUbergraph_style_banners_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::ExecuteUbergraph_style_banners_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ExecuteUbergraph_style_banners_bpw");

	Ustyle_banners_bpw_C_ExecuteUbergraph_style_banners_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.SetPaperdoll_BannerEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Emote                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_banners_bpw_C::SetPaperdoll_BannerEmote__DelegateSignature(const class FString& Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.SetPaperdoll_BannerEmote__DelegateSignature");

	Ustyle_banners_bpw_C_SetPaperdoll_BannerEmote__DelegateSignature_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.ScreenMode_ChangeScreenMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenMode_VanityMenu> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::ScreenMode_ChangeScreenMode__DelegateSignature(TEnumAsByte<EScreenMode_VanityMenu> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.ScreenMode_ChangeScreenMode__DelegateSignature");

	Ustyle_banners_bpw_C_ScreenMode_ChangeScreenMode__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Item__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ustyle_banners_bpw_C::BannerUpdateEvent_ByPart_Item__DelegateSignature(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Item__DelegateSignature");

	Ustyle_banners_bpw_C_BannerUpdateEvent_ByPart_Item__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Dye__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveDyeSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustyle_banners_bpw_C::BannerUpdateEvent_ByPart_Dye__DelegateSignature(const struct FName& RowName, int ActiveDyeSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Dye__DelegateSignature");

	Ustyle_banners_bpw_C_BannerUpdateEvent_ByPart_Dye__DelegateSignature_Params params;
	params.RowName = RowName;
	params.ActiveDyeSlot = ActiveDyeSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_UpdateAll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBannerCustomizationItemIDs BannerIDs                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Ustyle_banners_bpw_C::BannerUpdateEvent_UpdateAll__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_UpdateAll__DelegateSignature");

	Ustyle_banners_bpw_C_BannerUpdateEvent_UpdateAll__DelegateSignature_Params params;
	params.BannerIDs = BannerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
