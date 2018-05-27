// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_Gatherable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Gatherable.BPI_Gatherable_C.SpawnShinyLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LootID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Feqs_lobbed_projectile_data ShinyInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UEnvQuery*               ShinyEQS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Gatherable_C::SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gatherable.BPI_Gatherable_C.SpawnShinyLoot");

	UBPI_Gatherable_C_SpawnShinyLoot_Params params;
	params.LootID = LootID;
	params.ShinyInfo = ShinyInfo;
	params.ShinyEQS = ShinyEQS;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Gatherable.BPI_Gatherable_C.SetGrantItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  GatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Gatherable_C::SetGrantItemID(const class FString& GatherID, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gatherable.BPI_Gatherable_C.SetGrantItemID");

	UBPI_Gatherable_C_SetGrantItemID_Params params;
	params.GatherID = GatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BPI_Gatherable.BPI_Gatherable_C.EnableHighlightForDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Gatherable_C::EnableHighlightForDuration(float Duration, bool* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Gatherable.BPI_Gatherable_C.EnableHighlightForDuration");

	UBPI_Gatherable_C_EnableHighlightForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
