// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_function_library.behemoth_function_library_C.GetResistsForResistPowerType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Ebehemoth_resistset_type> ResistAndPowerSetType          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   PrimaryOffenseType             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PhysicalResistMult             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FlameResistMult                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FrostResistMult                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ShockResistMult                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RadiantResistMult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          UmbralResistMult               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasCustomResistsSet            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_function_library_C::STATIC_GetResistsForResistPowerType(TEnumAsByte<Ebehemoth_resistset_type> ResistAndPowerSetType, class UObject* __WorldContext, EElementType* PrimaryOffenseType, float* PhysicalResistMult, float* FlameResistMult, float* FrostResistMult, float* ShockResistMult, float* RadiantResistMult, float* UmbralResistMult, bool* HasCustomResistsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_function_library.behemoth_function_library_C.GetResistsForResistPowerType");

	Ubehemoth_function_library_C_GetResistsForResistPowerType_Params params;
	params.ResistAndPowerSetType = ResistAndPowerSetType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryOffenseType != nullptr)
		*PrimaryOffenseType = params.PrimaryOffenseType;
	if (PhysicalResistMult != nullptr)
		*PhysicalResistMult = params.PhysicalResistMult;
	if (FlameResistMult != nullptr)
		*FlameResistMult = params.FlameResistMult;
	if (FrostResistMult != nullptr)
		*FrostResistMult = params.FrostResistMult;
	if (ShockResistMult != nullptr)
		*ShockResistMult = params.ShockResistMult;
	if (RadiantResistMult != nullptr)
		*RadiantResistMult = params.RadiantResistMult;
	if (UmbralResistMult != nullptr)
		*UmbralResistMult = params.UmbralResistMult;
	if (HasCustomResistsSet != nullptr)
		*HasCustomResistsSet = params.HasCustomResistsSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
