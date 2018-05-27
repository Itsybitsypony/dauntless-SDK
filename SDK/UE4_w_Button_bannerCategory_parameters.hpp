#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_bannerCategory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Set Button Label
struct Uw_Button_bannerCategory_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnFocusReceived
struct Uw_Button_bannerCategory_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF910B63EFB2
struct Uw_Button_bannerCategory_C_OnLoaded_A058EA6248D678A919D5DF910B63EFB2_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnLoaded_A058EA6248D678A919D5DF91F028E24C
struct Uw_Button_bannerCategory_C_OnLoaded_A058EA6248D678A919D5DF91F028E24C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Construct
struct Uw_Button_bannerCategory_C_Construct_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Tick
struct Uw_Button_bannerCategory_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_Button_bannerCategory_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Show Hover
struct Uw_Button_bannerCategory_C_Show_Hover_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Hide Hover
struct Uw_Button_bannerCategory_C_Hide_Hover_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.OnSynchronizeProperties
struct Uw_Button_bannerCategory_C_OnSynchronizeProperties_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.UpdateColourSwatch
struct Uw_Button_bannerCategory_C_UpdateColourSwatch_Params
{
	struct FName                                       RowID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshIcon&Label
struct Uw_Button_bannerCategory_C_RefreshIcon_Label_Params
{
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshWidget
struct Uw_Button_bannerCategory_C_RefreshWidget_Params
{
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.RefreshSwatches
struct Uw_Button_bannerCategory_C_RefreshSwatches_Params
{
	class FString                                      Dye1ItemID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Dye2ItemID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.ExecuteUbergraph_w_Button_bannerCategory
struct Uw_Button_bannerCategory_C_ExecuteUbergraph_w_Button_bannerCategory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_bannerCategory.w_Button_bannerCategory_C.Button Clicked__DelegateSignature
struct Uw_Button_bannerCategory_C_Button_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
