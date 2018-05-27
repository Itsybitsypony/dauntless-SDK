#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_targeting_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass targeting_function_library.targeting_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Utargeting_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass targeting_function_library.targeting_function_library_C");
		return ptr;
	}


	void STATIC_DebugDrawGroundSphere(bool Draw, const struct FVector& Location, const class FString& Print, class UObject* __WorldContext);
	void STATIC_FindPointAtRangeFromCharacterBasedOnCamera(class AActor* CameraOwnerActor, float MaxRange, bool DrawDebugLine, class UObject* __WorldContext, struct FVector* Location);
	void STATIC_FindSpotInFrontOfLocation(const struct FVector& StartLocation, const struct FRotator& StartRotation, float HeightOffset, float ForwardOffset, float RightOffset, class UObject* __WorldContext, struct FVector* NewLocation, struct FRotator* NewRotation);
	void STATIC_FindCameraGroundTarget(class AActor* CameraOwnerActor, float AbilityMaxRange, bool DragDebug, class UObject* __WorldContext, struct FVector* TargetLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
