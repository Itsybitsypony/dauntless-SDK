// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function damage_function_library.damage_function_library_C.CombineDamageTableRows
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageTableData        DamageRow1                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDamageTableData        DamageRow2                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        CombinedDamageTableData        (Parm, OutParm)

void Udamage_function_library_C::STATIC_CombineDamageTableRows(class UObject* __WorldContext, struct FDamageTableData* DamageRow1, struct FDamageTableData* DamageRow2, struct FDamageTableData* CombinedDamageTableData)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_function_library.damage_function_library_C.CombineDamageTableRows");

	Udamage_function_library_C_CombineDamageTableRows_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRow1 != nullptr)
		*DamageRow1 = params.DamageRow1;
	if (DamageRow2 != nullptr)
		*DamageRow2 = params.DamageRow2;
	if (CombinedDamageTableData != nullptr)
		*CombinedDamageTableData = params.CombinedDamageTableData;
}


// Function damage_function_library.damage_function_library_C.ScaleDamageRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageTableData        DamageTableData                (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ScaleFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        ScaledDamageTableData          (Parm, OutParm)

void Udamage_function_library_C::STATIC_ScaleDamageRow(const struct FDamageTableData& DamageTableData, float ScaleFactor, class UObject* __WorldContext, struct FDamageTableData* ScaledDamageTableData)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_function_library.damage_function_library_C.ScaleDamageRow");

	Udamage_function_library_C_ScaleDamageRow_Params params;
	params.DamageTableData = DamageTableData;
	params.ScaleFactor = ScaleFactor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScaledDamageTableData != nullptr)
		*ScaledDamageTableData = params.ScaledDamageTableData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
