// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EndOfHunt_GridItem_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EndOfHunt_GridItem_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.GetText_1");

	Uw_EndOfHunt_GridItem_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.OnLoaded_5F62F44841A79E8E95CFDEBC7641C056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_GridItem_bpw_C::OnLoaded_5F62F44841A79E8E95CFDEBC7641C056(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.OnLoaded_5F62F44841A79E8E95CFDEBC7641C056");

	Uw_EndOfHunt_GridItem_bpw_C_OnLoaded_5F62F44841A79E8E95CFDEBC7641C056_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EndOfHunt_GridItem_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.Construct");

	Uw_EndOfHunt_GridItem_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.PlayEntranceAnim
// (BlueprintCallable, BlueprintEvent)

void Uw_EndOfHunt_GridItem_bpw_C::PlayEntranceAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.PlayEntranceAnim");

	Uw_EndOfHunt_GridItem_bpw_C_PlayEntranceAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.Load Reward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_GridItem_bpw_C::Load_Reward(const class FString& ItemID, TAssetPtr<class UTexture2D> Icon, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.Load Reward");

	Uw_EndOfHunt_GridItem_bpw_C_Load_Reward_Params params;
	params.ItemID = ItemID;
	params.Icon = Icon;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.ExecuteUbergraph_w_EndOfHunt_GridItem_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EndOfHunt_GridItem_bpw_C::ExecuteUbergraph_w_EndOfHunt_GridItem_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EndOfHunt_GridItem_bpw.w_EndOfHunt_GridItem_bpw_C.ExecuteUbergraph_w_EndOfHunt_GridItem_bpw");

	Uw_EndOfHunt_GridItem_bpw_C_ExecuteUbergraph_w_EndOfHunt_GridItem_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
