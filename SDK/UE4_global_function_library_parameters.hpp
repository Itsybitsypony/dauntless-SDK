#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function global_function_library.global_function_library_C.Get Global Loading Dispatcher
struct Uglobal_function_library_C_Get_Global_Loading_Dispatcher_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uglobal_loading_dispatcher_C*                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function global_function_library.global_function_library_C.Get Global Event Dispatcher
struct Uglobal_function_library_C_Get_Global_Event_Dispatcher_Params
{
	class UObject*                                     World_Context_Object;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uglobal_event_dispatcher_C*                  Global_Event_Dispatcher;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
