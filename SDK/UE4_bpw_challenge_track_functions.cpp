// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_challenge_track_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_challenge_track.bpw_challenge_track_C.CreateChallenge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   RewardText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ProgressText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTimespan               TimeUntilNextChallenge         (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_challenge_track_C::CreateChallenge(class UScrollBox* Parent, const struct FText& Description, TAssetPtr<class UTexture2D> Icon, const struct FText& RewardText, const struct FText& ProgressText, bool Completed, const struct FTimespan& TimeUntilNextChallenge)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track.bpw_challenge_track_C.CreateChallenge");

	Ubpw_challenge_track_C_CreateChallenge_Params params;
	params.Parent = Parent;
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


// Function bpw_challenge_track.bpw_challenge_track_C.OnLoaded_AE799D59470CE46D53F732B385DAA6F6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_challenge_track_C::OnLoaded_AE799D59470CE46D53F732B385DAA6F6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track.bpw_challenge_track_C.OnLoaded_AE799D59470CE46D53F732B385DAA6F6");

	Ubpw_challenge_track_C_OnLoaded_AE799D59470CE46D53F732B385DAA6F6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_challenge_track.bpw_challenge_track_C.SetupData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_challenge_track_C::SetupData(TAssetPtr<class UObject> Icon, const struct FName& Track)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track.bpw_challenge_track_C.SetupData");

	Ubpw_challenge_track_C_SetupData_Params params;
	params.Icon = Icon;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_challenge_track.bpw_challenge_track_C.ExecuteUbergraph_bpw_challenge_track
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_challenge_track_C::ExecuteUbergraph_bpw_challenge_track(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_challenge_track.bpw_challenge_track_C.ExecuteUbergraph_bpw_challenge_track");

	Ubpw_challenge_track_C_ExecuteUbergraph_bpw_challenge_track_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
