// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_MyGameInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MyGameInstance.MyGameInstance_C.LookupCellCatalogRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCellCatalogTableData   OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMyGameInstance_C::LookupCellCatalogRow(struct FName* RowName, struct FCellCatalogTableData* OutRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.LookupCellCatalogRow");

	UMyGameInstance_C_LookupCellCatalogRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function MyGameInstance.MyGameInstance_C.StartPlayingState
// (Public, BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::StartPlayingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.StartPlayingState");

	UMyGameInstance_C_StartPlayingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.OnFailure_87273E2B480CEE79C9C9859A60AD6AD7
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::OnFailure_87273E2B480CEE79C9C9859A60AD6AD7()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.OnFailure_87273E2B480CEE79C9C9859A60AD6AD7");

	UMyGameInstance_C_OnFailure_87273E2B480CEE79C9C9859A60AD6AD7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7");

	UMyGameInstance_C_OnSuccess_87273E2B480CEE79C9C9859A60AD6AD7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>*  FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsServer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyGameInstance_C::HandleNetworkError(TEnumAsByte<ENetworkFailure>* FailureType, bool* bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.HandleNetworkError");

	UMyGameInstance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>*   FailureType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyGameInstance_C::HandleTravelError(TEnumAsByte<ETravelFailure>* FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.HandleTravelError");

	UMyGameInstance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.GotoMainMenu
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::GotoMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.GotoMainMenu");

	UMyGameInstance_C_GotoMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.DestroyActiveSession
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::DestroyActiveSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.DestroyActiveSession");

	UMyGameInstance_C_DestroyActiveSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.ShowLoadingScreen");

	UMyGameInstance_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.Show MainMenu
// (BlueprintCallable, BlueprintEvent)

void UMyGameInstance_C::Show_MainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.Show MainMenu");

	UMyGameInstance_C_Show_MainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyGameInstance.MyGameInstance_C.ExecuteUbergraph_MyGameInstance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyGameInstance_C::ExecuteUbergraph_MyGameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyGameInstance.MyGameInstance_C.ExecuteUbergraph_MyGameInstance");

	UMyGameInstance_C_ExecuteUbergraph_MyGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
