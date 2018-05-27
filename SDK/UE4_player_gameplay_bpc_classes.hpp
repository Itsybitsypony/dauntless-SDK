#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_gameplay_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_gameplay_bpc.player_gameplay_bpc_C
// 0x0018 (0x01E8 - 0x01D0)
class Uplayer_gameplay_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FGuid>                               GameplayGUIDs;                                            // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_gameplay_bpc.player_gameplay_bpc_C");
		return ptr;
	}


	void AuthStartGameplay(TArray<struct Ftimed_gameplay_event> TimedGameplayEvents, TArray<struct Fbeam_request> Beams);
	void AuthStopGameplay();
	void AuthRegisterGameplayGUID(const struct FGuid& Guid);
	void ExecuteUbergraph_player_gameplay_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
