#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_eventdispatcher_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.OnCustomNotifyEvent__DelegateSignature
struct Ubehemoth_eventdispatcher_bpc_C_OnCustomNotifyEvent__DelegateSignature_Params
{
	struct FName                                       CustomNotifyEventName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.AuthOnStateChanged__DelegateSignature
struct Ubehemoth_eventdispatcher_bpc_C_AuthOnStateChanged__DelegateSignature_Params
{
	TEnumAsByte<Ebehemoth_states_enum>                 State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_state_event>                 ChangeThatHappened;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
