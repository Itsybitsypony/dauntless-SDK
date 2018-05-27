// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPHI_Debug_Hud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Static Hud Item Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHI_Debug_Hud_C::Set_Static_Hud_Item_Visibility(bool Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Static Hud Item Visibility");

	UBPHI_Debug_Hud_C_Set_Static_Hud_Item_Visibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Toggle HUD Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBPHI_Debug_Hud_C::Toggle_HUD_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Toggle HUD Visibility");

	UBPHI_Debug_Hud_C_Toggle_HUD_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Display Debug Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHI_Debug_Hud_C::Set_Display_Debug_Image(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Display Debug Image");

	UBPHI_Debug_Hud_C_Set_Display_Debug_Image_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPHI_Debug_Hud_C::Set_HUD_Visibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Visibility");

	UBPHI_Debug_Hud_C_Set_HUD_Visibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Debug Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Debug_String                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPHI_Debug_Hud_C::Set_HUD_Debug_Text(const class FString& Debug_String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Debug Text");

	UBPHI_Debug_Hud_C_Set_HUD_Debug_Text_Params params;
	params.Debug_String = Debug_String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
