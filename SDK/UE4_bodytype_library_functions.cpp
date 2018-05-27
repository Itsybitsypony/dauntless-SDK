// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bodytype_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bodytype_library.bodytype_library_C.SetBodyTypeMeshAndAudio
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  HeadSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> DynamicPlayerMaterials         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReinitPose                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetAudioRTPC                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubodytype_library_C::STATIC_SetBodyTypeMeshAndAudio(class AActor* Actor, EArchonBodyType BodyType, class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* HeadSlot, bool ReinitPose, bool SetAudioRTPC, class UObject* __WorldContext, TArray<class UMaterialInstanceDynamic*>* DynamicPlayerMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function bodytype_library.bodytype_library_C.SetBodyTypeMeshAndAudio");

	Ubodytype_library_C_SetBodyTypeMeshAndAudio_Params params;
	params.Actor = Actor;
	params.BodyType = BodyType;
	params.Mesh = Mesh;
	params.HeadSlot = HeadSlot;
	params.ReinitPose = ReinitPose;
	params.SetAudioRTPC = SetAudioRTPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicPlayerMaterials != nullptr)
		*DynamicPlayerMaterials = params.DynamicPlayerMaterials;
}


// Function bodytype_library.bodytype_library_C.GetBodyTypeRow
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           SkinMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           HeadMesh                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AnimAdditive                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   PonyTailSocket                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubodytype_library_C::STATIC_GetBodyTypeRow(EArchonBodyType BodyType, class UObject* __WorldContext, class USkeletalMesh** SkinMesh, class USkeletalMesh** HeadMesh, float* AnimAdditive, struct FName* PonyTailSocket, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function bodytype_library.bodytype_library_C.GetBodyTypeRow");

	Ubodytype_library_C_GetBodyTypeRow_Params params;
	params.BodyType = BodyType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinMesh != nullptr)
		*SkinMesh = params.SkinMesh;
	if (HeadMesh != nullptr)
		*HeadMesh = params.HeadMesh;
	if (AnimAdditive != nullptr)
		*AnimAdditive = params.AnimAdditive;
	if (PonyTailSocket != nullptr)
		*PonyTailSocket = params.PonyTailSocket;
	if (Found != nullptr)
		*Found = params.Found;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
