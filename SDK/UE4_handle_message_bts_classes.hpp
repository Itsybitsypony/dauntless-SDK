#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_handle_message_bts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass handle_message_bts.handle_message_bts_C
// 0x0038 (0x00D0 - 0x0098)
class Uhandle_message_bts_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<Ecoordination_message_type>            MessageType;                                              // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct Fcoordination_message                       Message;                                                  // 0x00A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       StoreCurrentMessageInBBKey;                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass handle_message_bts.handle_message_bts_C");
		return ptr;
	}


	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_handle_message_bts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
