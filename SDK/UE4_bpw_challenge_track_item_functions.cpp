// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_challenge_track_item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_challenge_track_item.bpw_challenge_track_item_C.OnLoaded_DCB28B4D410E8127D5153C975ACFD77D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_challenge_track_item_C::OnLoaded_DCB28B4D410E8127D5153C975ACFD77D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track_item.bpw_challenge_track_item_C.OnLoaded_DCB28B4D410E8127D5153C975ACFD77D");

	Ubpw_challenge_track_item_C_OnLoaded_DCB28B4D410E8127D5153C975ACFD77D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_challenge_track_item.bpw_challenge_track_item_C.SetupData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RewardText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ProgressText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               TimeUntilNextChallenge         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_challenge_track_item_C::SetupData(const struct FText& Description, TAssetPtr<class UTexture2D> Icon, const struct FText& RewardText, const struct FText& ProgressText, bool Completed, const struct FTimespan& TimeUntilNextChallenge)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track_item.bpw_challenge_track_item_C.SetupData");

	Ubpw_challenge_track_item_C_SetupData_Params params;
	params.Description = Description;
	params.Icon = Icon;
	params.RewardText = RewardText;
	params.ProgressText = ProgressText;
	params.Completed = Completed;
	params.TimeUntilNextChallenge = TimeUntilNextChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_challenge_track_item.bpw_challenge_track_item_C.ExecuteUbergraph_bpw_challenge_track_item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_challenge_track_item_C::ExecuteUbergraph_bpw_challenge_track_item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track_item.bpw_challenge_track_item_C.ExecuteUbergraph_bpw_challenge_track_item");

	Ubpw_challenge_track_item_C_ExecuteUbergraph_bpw_challenge_track_item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
