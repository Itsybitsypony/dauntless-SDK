#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_popup_welcome_message_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnKeyUp
struct Upopup_welcome_message_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Message Item
struct Upopup_welcome_message_bpw_C_Build_Message_Item_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.IsURL
struct Upopup_welcome_message_bpw_C_IsURL_Params
{
	class FString                                      SearchIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Welcome Message
struct Upopup_welcome_message_bpw_C_Build_Welcome_Message_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GetDefaultFocusedWidget
struct Upopup_welcome_message_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnLoaded_E8632B7B4FBD37B63C3966907CD698BB
struct Upopup_welcome_message_bpw_C_OnLoaded_E8632B7B4FBD37B63C3966907CD698BB_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Fullscreen Texture
struct Upopup_welcome_message_bpw_C_Load_Fullscreen_Texture_Params
{
	TAssetPtr<class UTexture>                          FullImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button Clicked__DelegateSignature
struct Upopup_welcome_message_bpw_C_BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button_Clicked__DelegateSignature_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GTFO
struct Upopup_welcome_message_bpw_C_GTFO_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Construct
struct Upopup_welcome_message_bpw_C_Construct_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.PreConstruct
struct Upopup_welcome_message_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Message Texture
struct Upopup_welcome_message_bpw_C_Load_Message_Texture_Params
{
	TAssetPtr<class UTexture2D>                        Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Next Message
struct Upopup_welcome_message_bpw_C_Handle_Next_Message_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Action
struct Upopup_welcome_message_bpw_C_Handle_Action_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Show Welcome Message
struct Upopup_welcome_message_bpw_C_Show_Welcome_Message_Params
{
};

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.ExecuteUbergraph_popup_welcome_message_bpw
struct Upopup_welcome_message_bpw_C_ExecuteUbergraph_popup_welcome_message_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
