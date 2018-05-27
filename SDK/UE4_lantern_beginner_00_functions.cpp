// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_beginner_00_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_beginner_00.lantern_beginner_00_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alantern_beginner_00_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_beginner_00.lantern_beginner_00_C.UserConstructionScript");

	Alantern_beginner_00_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_beginner_00.lantern_beginner_00_C.BP_OnLanternEquipped
// (Event, Public, BlueprintEvent)

void Alantern_beginner_00_C::BP_OnLanternEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_beginner_00.lantern_beginner_00_C.BP_OnLanternEquipped");

	Alantern_beginner_00_C_BP_OnLanternEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_beginner_00.lantern_beginner_00_C.ExecuteUbergraph_lantern_beginner_00
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_beginner_00_C::ExecuteUbergraph_lantern_beginner_00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_beginner_00.lantern_beginner_00_C.ExecuteUbergraph_lantern_beginner_00");

	Alantern_beginner_00_C_ExecuteUbergraph_lantern_beginner_00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
