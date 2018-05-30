// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_IndividualNameDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_RedBar_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBPW_IndividualNameDisplay_C::Get_RedBar_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_RedBar_ColorAndOpacity_1");

	UBPW_IndividualNameDisplay_C_Get_RedBar_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_BleedoutBar_Percent_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_IndividualNameDisplay_C::Get_BleedoutBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get_BleedoutBar_Percent_1");

	UBPW_IndividualNameDisplay_C_Get_BleedoutBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetVisibility_RezIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_IndividualNameDisplay_C::GetVisibility_RezIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetVisibility_RezIcon");

	UBPW_IndividualNameDisplay_C_GetVisibility_RezIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetReadyIconVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_IndividualNameDisplay_C::GetReadyIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.GetReadyIconVisibility");

	UBPW_IndividualNameDisplay_C_GetReadyIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Set Visible for Party Leader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_IndividualNameDisplay_C::Set_Visible_for_Party_Leader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Set Visible for Party Leader");

	UBPW_IndividualNameDisplay_C_Set_Visible_for_Party_Leader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Slot Backer Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_IndividualNameDisplay_C::Get_Slot_Backer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Slot Backer Visibility");

	UBPW_IndividualNameDisplay_C_Get_Slot_Backer_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Weapon Display Icon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              WeaponTeamDisplayIcon          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_IndividualNameDisplay_C::Get_Weapon_Display_Icon(class UTexture2D** WeaponTeamDisplayIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Weapon Display Icon");

	UBPW_IndividualNameDisplay_C_Get_Weapon_Display_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponTeamDisplayIcon != nullptr)
		*WeaponTeamDisplayIcon = params.WeaponTeamDisplayIcon;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Life Bar Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_IndividualNameDisplay_C::Get_Life_Bar_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Get Life Bar Percent");

	UBPW_IndividualNameDisplay_C_Get_Life_Bar_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Update info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aplayer_state_bp_C*      Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Leader                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_IndividualNameDisplay_C::Update_info(class Aplayer_state_bp_C* Player_State, bool Is_Leader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Update info");

	UBPW_IndividualNameDisplay_C_Update_info_Params params;
	params.Player_State = Player_State;
	params.Is_Leader = Is_Leader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_IndividualNameDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.Construct");

	UBPW_IndividualNameDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.ExecuteUbergraph_BPW_IndividualNameDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_IndividualNameDisplay_C::ExecuteUbergraph_BPW_IndividualNameDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_IndividualNameDisplay.BPW_IndividualNameDisplay_C.ExecuteUbergraph_BPW_IndividualNameDisplay");

	UBPW_IndividualNameDisplay_C_ExecuteUbergraph_BPW_IndividualNameDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
