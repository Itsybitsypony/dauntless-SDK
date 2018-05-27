// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_beaver_groundstomp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aaoe_beaver_groundstomp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.UserConstructionScript");

	Aaoe_beaver_groundstomp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.CustomAOELogic
// (BlueprintCallable, BlueprintEvent)

void Aaoe_beaver_groundstomp_C::CustomAOELogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.CustomAOELogic");

	Aaoe_beaver_groundstomp_C_CustomAOELogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.ExecuteUbergraph_aoe_beaver_groundstomp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_beaver_groundstomp_C::ExecuteUbergraph_aoe_beaver_groundstomp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_beaver_groundstomp.aoe_beaver_groundstomp_C.ExecuteUbergraph_aoe_beaver_groundstomp");

	Aaoe_beaver_groundstomp_C_ExecuteUbergraph_aoe_beaver_groundstomp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
