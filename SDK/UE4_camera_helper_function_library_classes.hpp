#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_camera_helper_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass camera_helper_function_library.camera_helper_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Ucamera_helper_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass camera_helper_function_library.camera_helper_function_library_C");
		return ptr;
	}


	void STATIC_CalculateWorldCameraLagTarget(class ABP_PlayerCharacter_C* Player, const struct FVector& PreviousTargetOffset, float MinLagDistance, float MaxLagDistance, class UObject* __WorldContext, struct FVector* TargetOffset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
