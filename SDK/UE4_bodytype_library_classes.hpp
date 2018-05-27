#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bodytype_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bodytype_library.bodytype_library_C
// 0x0000 (0x0028 - 0x0028)
class Ubodytype_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bodytype_library.bodytype_library_C");
		return ptr;
	}


	void STATIC_SetBodyTypeMeshAndAudio(class AActor* Actor, EArchonBodyType BodyType, class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* HeadSlot, bool ReinitPose, bool SetAudioRTPC, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* DynamicPlayerMaterials);
	void STATIC_GetBodyTypeRow(EArchonBodyType BodyType, class UObject* __WorldContext, class USkeletalMesh** SkinMesh, class USkeletalMesh** HeadMesh, float* AnimAdditive, struct FName* PonyTailSocket, bool* Found);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
