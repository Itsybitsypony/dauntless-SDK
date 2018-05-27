// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function global_function_library.global_function_library_C.Get Global Loading Dispatcher
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uglobal_loading_dispatcher_C* Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uglobal_function_library_C::STATIC_Get_Global_Loading_Dispatcher(class UObject* WorldContextObject, class UObject* __WorldContext, class Uglobal_loading_dispatcher_C** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_function_library.global_function_library_C.Get Global Loading Dispatcher");

	Uglobal_function_library_C_Get_Global_Loading_Dispatcher_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function global_function_library.global_function_library_C.Get Global Event Dispatcher
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 World_Context_Object           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uglobal_event_dispatcher_C* Global_Event_Dispatcher        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uglobal_function_library_C::STATIC_Get_Global_Event_Dispatcher(class UObject* World_Context_Object, class UObject* __WorldContext, class Uglobal_event_dispatcher_C** Global_Event_Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_function_library.global_function_library_C.Get Global Event Dispatcher");

	Uglobal_function_library_C_Get_Global_Event_Dispatcher_Params params;
	params.World_Context_Object = World_Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Event_Dispatcher != nullptr)
		*Global_Event_Dispatcher = params.Global_Event_Dispatcher;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
