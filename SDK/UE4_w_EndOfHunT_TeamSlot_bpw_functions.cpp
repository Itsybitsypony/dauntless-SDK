// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunT_TeamSlot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.DisplayBadges
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbadge_display_info> BadgeDisplayInfo               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EndOfHunT_TeamSlot_bpw_C::DisplayBadges(TArray<struct Fbadge_display_info>* BadgeDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.DisplayBadges");

	Uw_EndOfHunT_TeamSlot_bpw_C_DisplayBadges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BadgeDisplayInfo != nullptr)
		*BadgeDisplayInfo = params.BadgeDisplayInfo;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetupBadgeInfos
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fbadge_infos>    AllBadgeInfos                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Fbadge_display_info> BadgeDisplayInfo               (Parm, OutParm, ZeroConstructor)

void Uw_EndOfHunT_TeamSlot_bpw_C::SetupBadgeInfos(TArray<struct Fbadge_infos>* AllBadgeInfos, TArray<struct Fbadge_display_info>* BadgeDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetupBadgeInfos");

	Uw_EndOfHunT_TeamSlot_bpw_C_SetupBadgeInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllBadgeInfos != nullptr)
		*AllBadgeInfos = params.AllBadgeInfos;
	if (BadgeDisplayInfo != nullptr)
		*BadgeDisplayInfo = params.BadgeDisplayInfo;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunT_TeamSlot_bpw_C::SetTitle(class AArchonCharacter* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.SetTitle");

	Uw_EndOfHunT_TeamSlot_bpw_C_SetTitle_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Get_Title_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EndOfHunT_TeamSlot_bpw_C::Get_Title_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Get_Title_Text_1");

	Uw_EndOfHunT_TeamSlot_bpw_C_Get_Title_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Update Player Identity
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fbadge_infos>    BadgeInfos                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EndOfHunT_TeamSlot_bpw_C::Update_Player_Identity(class AArchonCharacter* Character, TArray<struct Fbadge_infos> BadgeInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.Update Player Identity");

	Uw_EndOfHunT_TeamSlot_bpw_C_Update_Player_Identity_Params params;
	params.Character = Character;
	params.BadgeInfos = BadgeInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunT_TeamSlot_bpw_C::ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw");

	Uw_EndOfHunT_TeamSlot_bpw_C_ExecuteUbergraph_w_EndOfHunT_TeamSlot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddStyleCore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunT_TeamSlot_bpw_C::AddStyleCore__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddStyleCore__DelegateSignature");

	Uw_EndOfHunT_TeamSlot_bpw_C_AddStyleCore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddBehemothCore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  BehCoreItemID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EndOfHunT_TeamSlot_bpw_C::AddBehemothCore__DelegateSignature(const class FString& BehCoreItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunT_TeamSlot_bpw.w_EndOfHunT_TeamSlot_bpw_C.AddBehemothCore__DelegateSignature");

	Uw_EndOfHunT_TeamSlot_bpw_C_AddBehemothCore__DelegateSignature_Params params;
	params.BehCoreItemID = BehCoreItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
