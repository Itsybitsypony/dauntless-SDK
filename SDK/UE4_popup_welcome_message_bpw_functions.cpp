// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_popup_welcome_message_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Upopup_welcome_message_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnKeyUp");

	Upopup_welcome_message_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Message Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_welcome_message_bpw_C::Build_Message_Item(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Message Item");

	Upopup_welcome_message_bpw_C_Build_Message_Item_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.IsURL
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  SearchIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Upopup_welcome_message_bpw_C::IsURL(const class FString& SearchIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.IsURL");

	Upopup_welcome_message_bpw_C_IsURL_Params params;
	params.SearchIn = SearchIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Welcome Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Upopup_welcome_message_bpw_C::Build_Welcome_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Build Welcome Message");

	Upopup_welcome_message_bpw_C_Build_Welcome_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Upopup_welcome_message_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GetDefaultFocusedWidget");

	Upopup_welcome_message_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnLoaded_E8632B7B4FBD37B63C3966907CD698BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_welcome_message_bpw_C::OnLoaded_E8632B7B4FBD37B63C3966907CD698BB(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.OnLoaded_E8632B7B4FBD37B63C3966907CD698BB");

	Upopup_welcome_message_bpw_C_OnLoaded_E8632B7B4FBD37B63C3966907CD698BB_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Fullscreen Texture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture>      FullImage                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Upopup_welcome_message_bpw_C::Load_Fullscreen_Texture(TAssetPtr<class UTexture> FullImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Fullscreen Texture");

	Upopup_welcome_message_bpw_C_Load_Fullscreen_Texture_Params params;
	params.FullImage = FullImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Upopup_welcome_message_bpw_C::BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button Clicked__DelegateSignature");

	Upopup_welcome_message_bpw_C_BndEvt__w_RedButton_2_K2Node_ComponentBoundEvent_350_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Upopup_welcome_message_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.GTFO");

	Upopup_welcome_message_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upopup_welcome_message_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Construct");

	Upopup_welcome_message_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_welcome_message_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.PreConstruct");

	Upopup_welcome_message_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Message Texture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Upopup_welcome_message_bpw_C::Load_Message_Texture(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Load Message Texture");

	Upopup_welcome_message_bpw_C_Load_Message_Texture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Next Message
// (BlueprintCallable, BlueprintEvent)

void Upopup_welcome_message_bpw_C::Handle_Next_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Next Message");

	Upopup_welcome_message_bpw_C_Handle_Next_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Action
// (BlueprintCallable, BlueprintEvent)

void Upopup_welcome_message_bpw_C::Handle_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Handle Action");

	Upopup_welcome_message_bpw_C_Handle_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Show Welcome Message
// (BlueprintCallable, BlueprintEvent)

void Upopup_welcome_message_bpw_C::Show_Welcome_Message()
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.Show Welcome Message");

	Upopup_welcome_message_bpw_C_Show_Welcome_Message_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.ExecuteUbergraph_popup_welcome_message_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upopup_welcome_message_bpw_C::ExecuteUbergraph_popup_welcome_message_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function popup_welcome_message_bpw.popup_welcome_message_bpw_C.ExecuteUbergraph_popup_welcome_message_bpw");

	Upopup_welcome_message_bpw_C_ExecuteUbergraph_popup_welcome_message_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
