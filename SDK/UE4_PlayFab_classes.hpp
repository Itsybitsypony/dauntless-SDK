#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PlayFab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayFab.PlayFabRuntimeSettings
// 0x0038 (0x0060 - 0x0028)
class UPlayFabRuntimeSettings : public UObject
{
public:
	bool                                               bUseDevelopmentEnvironment;                               // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class FString                                      DevelopmentEnvironmentURL;                                // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      ProductionEnvironmentURL;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TitleId;                                                  // 0x0050(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
