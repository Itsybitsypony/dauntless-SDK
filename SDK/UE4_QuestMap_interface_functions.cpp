// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuestMap_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function QuestMap_interface.QuestMap_interface_C.GetQuestWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UQuestMap_interface_C::GetQuestWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMap_interface.QuestMap_interface_C.GetQuestWorldLocation");

	UQuestMap_interface_C_GetQuestWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function QuestMap_interface.QuestMap_interface_C.HasAvailableQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestMap_interface_C::HasAvailableQuests(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMap_interface.QuestMap_interface_C.HasAvailableQuests");

	UQuestMap_interface_C_HasAvailableQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function QuestMap_interface.QuestMap_interface_C.HasRedeemableQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestMap_interface_C::HasRedeemableQuests(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMap_interface.QuestMap_interface_C.HasRedeemableQuests");

	UQuestMap_interface_C_HasRedeemableQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function QuestMap_interface.QuestMap_interface_C.DragLocationVector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UQuestMap_interface_C::DragLocationVector(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMap_interface.QuestMap_interface_C.DragLocationVector");

	UQuestMap_interface_C_DragLocationVector_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMap_interface.QuestMap_interface_C.FastTravel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWorldLocation_C*  Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMap_interface_C::FastTravel(class AArchonWorldLocation_C* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMap_interface.QuestMap_interface_C.FastTravel");

	UQuestMap_interface_C_FastTravel_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
