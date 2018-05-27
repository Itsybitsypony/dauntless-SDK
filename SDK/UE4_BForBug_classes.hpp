#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BForBug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BForBug.BForBugSettings
// 0x0050 (0x0078 - 0x0028)
class UBForBugSettings : public UObject
{
public:
	TArray<class FString>                              LogFiles;                                                 // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<class FString>                              UserEnvironmentLookup;                                    // 0x0038(0x0010) (ZeroConstructor, Config)
	class FString                                      BForBugUrl;                                               // 0x0048(0x0010) (ZeroConstructor, Config)
	class FString                                      BForBugCredentials;                                       // 0x0058(0x0010) (ZeroConstructor, Config)
	class FString                                      Product;                                                  // 0x0068(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BForBug.BForBugSettings");
		return ptr;
	}

};


// Class BForBug.BForBugStatics
// 0x0000 (0x0028 - 0x0028)
class UBForBugStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BForBug.BForBugStatics");
		return ptr;
	}


	bool STATIC_GetBugSummaryInfo(const TScriptInterface<class UBugDataInterface>& BugDataInterface, class FString* OutPrefix, class FString* OutData);
	bool STATIC_GetBugAttachment(const TScriptInterface<class UBugDataInterface>& BugDataInterface, class FString* OutAttachmentName, class FString* OutAttachmentBody);
	TArray<struct FBugData> STATIC_GatherAllBugData();
};


// Class BForBug.BugDataInterface
// 0x0000 (0x0028 - 0x0028)
class UBugDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BForBug.BugDataInterface");
		return ptr;
	}


	bool GetBugSummaryInfoBlueprint(class FString* OutPrefix, class FString* OutData);
	bool GetBugAttachmentTextBlueprint(class FString* OutAttachmentName, class FString* OutAttachmentBody);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
