#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_beam_firing_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass beam_firing_bpc.beam_firing_bpc_C
// 0x0020 (0x01F0 - 0x01D0)
class Ubeam_firing_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fbeam_request>                       ActiveServerBeamRequests;                                 // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_CurrentIndex;                                           // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ActiveClientBeamRequests;                                 // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass beam_firing_bpc.beam_firing_bpc_C");
		return ptr;
	}


	void AuthTryStopBeamByGUID(const struct FGuid& BeamGUID);
	void INTERNAL_RemoveBeamByRef(class AActor* BeamRef);
	void AuthTryStopBeamByUniqueName(const struct FName& UniqueName);
	void OnRep_ActiveServerBeamRequests();
	void ValidateBeamRequest(const struct Fbeam_request& BeamRequest, bool* IsValid);
	void AuthRequestBeam(const struct Fbeam_request& BeamRequest, class Abase_beam_bp_C** BeamRef, struct FGuid* BeamGUID);
	void ReceiveTick(float* DeltaSeconds);
	void RemoveTheBeamIndex(int Index);
	void OnABeamDestroyed(class AActor* DestroyedActor);
	void BindDestroyEvent(class AActor* Actor);
	void ExecuteUbergraph_beam_firing_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
