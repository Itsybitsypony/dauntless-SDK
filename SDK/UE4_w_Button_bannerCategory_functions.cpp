// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_bannerCategory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Button_bannerCategory_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Set Button Label");

	Uw_Button_bannerCategory_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Button_bannerCategory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnFocusReceived");

	Uw_Button_bannerCategory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF910B63EFB2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_bannerCategory_C::OnLoaded_A058EA6248D678A919D5DF910B63EFB2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF910B63EFB2");

	Uw_Button_bannerCategory_C_OnLoaded_A058EA6248D678A919D5DF910B63EFB2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF91F028E24C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_bannerCategory_C::OnLoaded_A058EA6248D678A919D5DF91F028E24C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF91F028E24C");

	Uw_Button_bannerCategory_C_OnLoaded_A058EA6248D678A919D5DF91F028E24C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_bannerCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Construct");

	Uw_Button_bannerCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_bannerCategory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Tick");

	Uw_Button_bannerCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Button_bannerCategory_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_Button_bannerCategory_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_bannerCategory_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Show Hover");

	Uw_Button_bannerCategory_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_bannerCategory_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Hide Hover");

	Uw_Button_bannerCategory_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_bannerCategory_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnSynchronizeProperties");

	Uw_Button_bannerCategory_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.UpdateColourSwatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_bannerCategory_C::UpdateColourSwatch(const struct FName& RowID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.UpdateColourSwatch");

	Uw_Button_bannerCategory_C_UpdateColourSwatch_Params params;
	params.RowID = RowID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshIcon&Label
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Button_bannerCategory_C::RefreshIcon_Label(TAssetPtr<class UTexture2D> Icon, EItemRarityLevelType Rarity, const struct FText& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshIcon&Label");

	Uw_Button_bannerCategory_C_RefreshIcon_Label_Params params;
	params.Icon = Icon;
	params.Rarity = Rarity;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshWidget
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_bannerCategory_C::RefreshWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshWidget");

	Uw_Button_bannerCategory_C_RefreshWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshSwatches
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Dye1ItemID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Dye2ItemID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Button_bannerCategory_C::RefreshSwatches(const class FString& Dye1ItemID, const class FString& Dye2ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshSwatches");

	Uw_Button_bannerCategory_C_RefreshSwatches_Params params;
	params.Dye1ItemID = Dye1ItemID;
	params.Dye2ItemID = Dye2ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.ExecuteUbergraph_w_Button_bannerCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_bannerCategory_C::ExecuteUbergraph_w_Button_bannerCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.ExecuteUbergraph_w_Button_bannerCategory");

	Uw_Button_bannerCategory_C_ExecuteUbergraph_w_Button_bannerCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Button_bannerCategory_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_bannerCategory.w_Button_bannerCategory_C.Button Clicked__DelegateSignature");

	Uw_Button_bannerCategory_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
