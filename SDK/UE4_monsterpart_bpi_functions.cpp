// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function monsterpart_bpi.monsterpart_bpi_C.GetPhatBones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           PhATBones                      (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpi_C::GetPhatBones(TArray<struct FName>* PhATBones)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpi.monsterpart_bpi_C.GetPhatBones");

	Umonsterpart_bpi_C_GetPhatBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhATBones != nullptr)
		*PhATBones = params.PhATBones;
}


// Function monsterpart_bpi.monsterpart_bpi_C.GetSeverPhatBones
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SeverPhatBones                 (Parm, OutParm, ZeroConstructor)

void Umonsterpart_bpi_C::GetSeverPhatBones(TArray<struct FName>* SeverPhatBones)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpi.monsterpart_bpi_C.GetSeverPhatBones");

	Umonsterpart_bpi_C_GetSeverPhatBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeverPhatBones != nullptr)
		*SeverPhatBones = params.SeverPhatBones;
}


// Function monsterpart_bpi.monsterpart_bpi_C.GetCurrentPartType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_part_type> PartType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpi_C::GetCurrentPartType(TEnumAsByte<Ebehemoth_part_type>* PartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpi.monsterpart_bpi_C.GetCurrentPartType");

	Umonsterpart_bpi_C_GetCurrentPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartType != nullptr)
		*PartType = params.PartType;
}


// Function monsterpart_bpi.monsterpart_bpi_C.GetBodyPartType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_bodypart_type> BodyPartType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umonsterpart_bpi_C::GetBodyPartType(TEnumAsByte<Ebehemoth_bodypart_type>* BodyPartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function monsterpart_bpi.monsterpart_bpi_C.GetBodyPartType");

	Umonsterpart_bpi_C_GetBodyPartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyPartType != nullptr)
		*BodyPartType = params.BodyPartType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
