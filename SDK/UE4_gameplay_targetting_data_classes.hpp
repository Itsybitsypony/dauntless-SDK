#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_targetting_data_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gameplay_targetting_data.gameplay_targetting_data_C
// 0x0020 (0x0048 - 0x0028)
class Ugameplay_targetting_data_C : public UObject
{
public:
	TArray<class AActor*>                              ActorList;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                             PositionList;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gameplay_targetting_data.gameplay_targetting_data_C");
		return ptr;
	}


	void SetupFromEQSInstance(class UEnvQueryInstanceBlueprintWrapper* EQSQueryInstance);
	void SetupPositionData(TArray<struct FVector>* Positions);
	void SetupActorData(TArray<class AActor*>* Actors);
	void GetLocations(TArray<struct FVector>* Locations);
	void GetActors(TArray<class AActor*>* ActorData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
