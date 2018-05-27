// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function damage_interface.damage_interface_C.GetDamageRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DamageKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageTableData        DamageRow                      (Parm, OutParm)
// float                          DamageScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           RowFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udamage_interface_C::GetDamageRow(const struct FName& DamageKey, struct FDamageTableData* DamageRow, float* DamageScale, bool* RowFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_interface.damage_interface_C.GetDamageRow");

	Udamage_interface_C_GetDamageRow_Params params;
	params.DamageKey = DamageKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRow != nullptr)
		*DamageRow = params.DamageRow;
	if (DamageScale != nullptr)
		*DamageScale = params.DamageScale;
	if (RowFound != nullptr)
		*RowFound = params.RowFound;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
