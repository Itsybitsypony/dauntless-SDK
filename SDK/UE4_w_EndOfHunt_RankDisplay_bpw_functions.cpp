// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_RankDisplay_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Erankings_enum>    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    RankingText                    (Parm, OutParm)

void Uw_EndOfHunt_RankDisplay_bpw_C::SetRankImage(TEnumAsByte<Erankings_enum> Selection, TAssetPtr<class UTexture2D>* RankingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImage");

	Uw_EndOfHunt_RankDisplay_bpw_C_SetRankImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RankingText != nullptr)
		*RankingText = params.RankingText;
}


// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_RankDisplay_bpw_C::OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9");

	Uw_EndOfHunt_RankDisplay_bpw_C_OnLoaded_A84B3FED4B34BC4C76EBD2968AD5CFA9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_3148719D451B4A840EA4FBB438FCEE4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_RankDisplay_bpw_C::OnLoaded_3148719D451B4A840EA4FBB438FCEE4C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.OnLoaded_3148719D451B4A840EA4FBB438FCEE4C");

	Uw_EndOfHunt_RankDisplay_bpw_C_OnLoaded_3148719D451B4A840EA4FBB438FCEE4C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImages
// (BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_RankDisplay_bpw_C::SetRankImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.SetRankImages");

	Uw_EndOfHunt_RankDisplay_bpw_C_SetRankImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_RankDisplay_bpw_C::ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_RankDisplay_bpw.w_EndOfHunt_RankDisplay_bpw_C.ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw");

	Uw_EndOfHunt_RankDisplay_bpw_C_ExecuteUbergraph_w_EndOfHunt_RankDisplay_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
