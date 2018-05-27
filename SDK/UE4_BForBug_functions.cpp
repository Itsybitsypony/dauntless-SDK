// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BForBug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BForBug.BForBugStatics.GetBugSummaryInfo
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UBugDataInterface> BugDataInterface               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutPrefix                      (Parm, OutParm, ZeroConstructor)
// class FString                  OutData                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBForBugStatics::STATIC_GetBugSummaryInfo(const TScriptInterface<class UBugDataInterface>& BugDataInterface, class FString* OutPrefix, class FString* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BForBug.BForBugStatics.GetBugSummaryInfo");

	UBForBugStatics_GetBugSummaryInfo_Params params;
	params.BugDataInterface = BugDataInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPrefix != nullptr)
		*OutPrefix = params.OutPrefix;
	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BForBug.BForBugStatics.GetBugAttachment
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UBugDataInterface> BugDataInterface               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutAttachmentName              (Parm, OutParm, ZeroConstructor)
// class FString                  OutAttachmentBody              (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBForBugStatics::STATIC_GetBugAttachment(const TScriptInterface<class UBugDataInterface>& BugDataInterface, class FString* OutAttachmentName, class FString* OutAttachmentBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function BForBug.BForBugStatics.GetBugAttachment");

	UBForBugStatics_GetBugAttachment_Params params;
	params.BugDataInterface = BugDataInterface;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAttachmentName != nullptr)
		*OutAttachmentName = params.OutAttachmentName;
	if (OutAttachmentBody != nullptr)
		*OutAttachmentBody = params.OutAttachmentBody;

	return params.ReturnValue;
}


// Function BForBug.BForBugStatics.GatherAllBugData
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// TArray<struct FBugData>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBugData> UBForBugStatics::STATIC_GatherAllBugData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BForBug.BForBugStatics.GatherAllBugData");

	UBForBugStatics_GatherAllBugData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BForBug.BugDataInterface.GetBugSummaryInfoBlueprint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  OutPrefix                      (Parm, OutParm, ZeroConstructor)
// class FString                  OutData                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBugDataInterface::GetBugSummaryInfoBlueprint(class FString* OutPrefix, class FString* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BForBug.BugDataInterface.GetBugSummaryInfoBlueprint");

	UBugDataInterface_GetBugSummaryInfoBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPrefix != nullptr)
		*OutPrefix = params.OutPrefix;
	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BForBug.BugDataInterface.GetBugAttachmentTextBlueprint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  OutAttachmentName              (Parm, OutParm, ZeroConstructor)
// class FString                  OutAttachmentBody              (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBugDataInterface::GetBugAttachmentTextBlueprint(class FString* OutAttachmentName, class FString* OutAttachmentBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function BForBug.BugDataInterface.GetBugAttachmentTextBlueprint");

	UBugDataInterface_GetBugAttachmentTextBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAttachmentName != nullptr)
		*OutAttachmentName = params.OutAttachmentName;
	if (OutAttachmentBody != nullptr)
		*OutAttachmentBody = params.OutAttachmentBody;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
