#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_loading_dispatcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function global_loading_dispatcher.global_loading_dispatcher_C.LoadingScreenClosed
struct Uglobal_loading_dispatcher_C_LoadingScreenClosed_Params
{
};

// Function global_loading_dispatcher.global_loading_dispatcher_C.IsLoadingScreenClosed
struct Uglobal_loading_dispatcher_C_IsLoadingScreenClosed_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function global_loading_dispatcher.global_loading_dispatcher_C.OnReset
struct Uglobal_loading_dispatcher_C_OnReset_Params
{
};

// Function global_loading_dispatcher.global_loading_dispatcher_C.ExecuteUbergraph_global_loading_dispatcher
struct Uglobal_loading_dispatcher_C_ExecuteUbergraph_global_loading_dispatcher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_loading_dispatcher.global_loading_dispatcher_C.OnLoadingScreenClosed__DelegateSignature
struct Uglobal_loading_dispatcher_C_OnLoadingScreenClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
