#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_eventdispatcher_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C
// 0x0020 (0x01F0 - 0x01D0)
class Ubehemoth_eventdispatcher_bpc_C : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    AuthOnStateChanged;                                       // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCustomNotifyEvent;                                      // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C");
		return ptr;
	}


	void OnCustomNotifyEvent__DelegateSignature(const struct FName& CustomNotifyEventName);
	void AuthOnStateChanged__DelegateSignature(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> ChangeThatHappened);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
