// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_interface.progression_interface_C.RequestPendingRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            DisplayPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_interface_C::RequestPendingRewards(class UCanvasPanel* DisplayPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_interface.progression_interface_C.RequestPendingRewards");

	Uprogression_interface_C_RequestPendingRewards_Params params;
	params.DisplayPanel = DisplayPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_interface.progression_interface_C.SetRankInTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_interface_C::SetRankInTrack(const struct FName& Track, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_interface.progression_interface_C.SetRankInTrack");

	Uprogression_interface_C_SetRankInTrack_Params params;
	params.Track = Track;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_interface.progression_interface_C.GetRankInTrack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_interface_C::GetRankInTrack(const struct FName& Track, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_interface.progression_interface_C.GetRankInTrack");

	Uprogression_interface_C_GetRankInTrack_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
