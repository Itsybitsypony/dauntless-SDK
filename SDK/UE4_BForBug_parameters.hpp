#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BForBug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BForBug.BForBugStatics.GetBugSummaryInfo
struct UBForBugStatics_GetBugSummaryInfo_Params
{
	TScriptInterface<class UBugDataInterface>          BugDataInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutPrefix;                                                // (Parm, OutParm, ZeroConstructor)
	class FString                                      OutData;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BForBug.BForBugStatics.GetBugAttachment
struct UBForBugStatics_GetBugAttachment_Params
{
	TScriptInterface<class UBugDataInterface>          BugDataInterface;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutAttachmentName;                                        // (Parm, OutParm, ZeroConstructor)
	class FString                                      OutAttachmentBody;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BForBug.BForBugStatics.GatherAllBugData
struct UBForBugStatics_GatherAllBugData_Params
{
	TArray<struct FBugData>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BForBug.BugDataInterface.GetBugSummaryInfoBlueprint
struct UBugDataInterface_GetBugSummaryInfoBlueprint_Params
{
	class FString                                      OutPrefix;                                                // (Parm, OutParm, ZeroConstructor)
	class FString                                      OutData;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BForBug.BugDataInterface.GetBugAttachmentTextBlueprint
struct UBugDataInterface_GetBugAttachmentTextBlueprint_Params
{
	class FString                                      OutAttachmentName;                                        // (Parm, OutParm, ZeroConstructor)
	class FString                                      OutAttachmentBody;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
