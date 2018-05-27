// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_Keyword_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget With Count
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ability_Class                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MinimumCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentDetail_KeywordDescription_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class Uw_EquipmentDetail_KeywordDescription_C* Uw_EquipmentDetail_Keyword_C::Create_Keyword_Description_Widget_With_Count(class UClass* Ability_Class, int MinimumCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget With Count");

	Uw_EquipmentDetail_Keyword_C_Create_Keyword_Description_Widget_With_Count_Params params;
	params.Ability_Class = Ability_Class;
	params.MinimumCount = MinimumCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.GetAllKeywordAbilities
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FArmourSetTableData     Set_Data                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UClass*>          Abilities                      (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_Keyword_C::GetAllKeywordAbilities(struct FArmourSetTableData* Set_Data, TArray<class UClass*>* Abilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.GetAllKeywordAbilities");

	Uw_EquipmentDetail_Keyword_C_GetAllKeywordAbilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Set_Data != nullptr)
		*Set_Data = params.Set_Data;
	if (Abilities != nullptr)
		*Abilities = params.Abilities;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview_TooltipItemOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::Show_Preview_TooltipItemOnly(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview_TooltipItemOnly");

	Uw_EquipmentDetail_Keyword_C_Show_Preview_TooltipItemOnly_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Clear Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_Keyword_C::Clear_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Clear Preview");

	Uw_EquipmentDetail_Keyword_C_Clear_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Tint Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::Tint_Widget(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Tint Widget");

	Uw_EquipmentDetail_Keyword_C_Tint_Widget_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as Removed Keyword
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_Keyword_C::Set_as_Removed_Keyword()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as Removed Keyword");

	Uw_EquipmentDetail_Keyword_C_Set_as_Removed_Keyword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as New Keyword
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_Keyword_C::Set_as_New_Keyword()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as New Keyword");

	Uw_EquipmentDetail_Keyword_C_Set_as_New_Keyword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ability_Class                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentDetail_KeywordDescription_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class Uw_EquipmentDetail_KeywordDescription_C* Uw_EquipmentDetail_Keyword_C::Create_Keyword_Description_Widget(class UClass* Ability_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget");

	Uw_EquipmentDetail_Keyword_C_Create_Keyword_Description_Widget_Params params;
	params.Ability_Class = Ability_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Get Keyword Abilities for Count
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FArmourSetTableData     Set_Data                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Abilities                      (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_Keyword_C::Get_Keyword_Abilities_for_Count(int Count, struct FArmourSetTableData* Set_Data, TArray<class UClass*>* Abilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Get Keyword Abilities for Count");

	Uw_EquipmentDetail_Keyword_C_Get_Keyword_Abilities_for_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Set_Data != nullptr)
		*Set_Data = params.Set_Data;
	if (Abilities != nullptr)
		*Abilities = params.Abilities;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowAllSetBonuses              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::Setup(const struct FName& Keyword, int Count, int Delta, bool ShowAllSetBonuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Setup");

	Uw_EquipmentDetail_Keyword_C_Setup_Params params;
	params.Keyword = Keyword;
	params.Count = Count;
	params.Delta = Delta;
	params.ShowAllSetBonuses = ShowAllSetBonuses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::Show_Preview(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview");

	Uw_EquipmentDetail_Keyword_C_Show_Preview_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.OnLoaded_70846176465CE6AAB9AC7094AAF6D71E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::OnLoaded_70846176465CE6AAB9AC7094AAF6D71E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.OnLoaded_70846176465CE6AAB9AC7094AAF6D71E");

	Uw_EquipmentDetail_Keyword_C_OnLoaded_70846176465CE6AAB9AC7094AAF6D71E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Load Icon
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_Keyword_C::Load_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Load Icon");

	Uw_EquipmentDetail_Keyword_C_Load_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.ExecuteUbergraph_w_EquipmentDetail_Keyword
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_Keyword_C::ExecuteUbergraph_w_EquipmentDetail_Keyword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.ExecuteUbergraph_w_EquipmentDetail_Keyword");

	Uw_EquipmentDetail_Keyword_C_ExecuteUbergraph_w_EquipmentDetail_Keyword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
