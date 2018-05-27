#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass global_function_library.global_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Uglobal_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass global_function_library.global_function_library_C");
		return ptr;
	}


	void STATIC_Get_Global_Loading_Dispatcher(class UObject* WorldContextObject, class UObject* __WorldContext, class Uglobal_loading_dispatcher_C** Return_Value);
	void STATIC_Get_Global_Event_Dispatcher(class UObject* World_Context_Object, class UObject* __WorldContext, class Uglobal_event_dispatcher_C** Global_Event_Dispatcher);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
