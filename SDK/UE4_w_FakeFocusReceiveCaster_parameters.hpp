#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_FakeFocusReceiveCaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.OnFocusReceived
struct Uw_FakeFocusReceiveCaster_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.FakeFocusReceived__DelegateSignature
struct Uw_FakeFocusReceiveCaster_C_FakeFocusReceived__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
