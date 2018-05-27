#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_telemetry_function_library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass telemetry_function_library.telemetry_function_library_C
// 0x0000 (0x0028 - 0x0028)
class Utelemetry_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass telemetry_function_library.telemetry_function_library_C");
		return ptr;
	}


	void STATIC_GetActorResistanceJSONArray(class AActor* Actor, class UObject* __WorldContext, struct FJsonBPValue* JSON_Object_Body);
	void STATIC_GetActorPowerJSONArray(class AActor* Actor, class UObject* __WorldContext, struct FJsonBPValue* JSON_Object_Body);
	void STATIC_Format_Vector_to_JSON(const struct FVector& Position_Vector, const class FString& Field_Name, const class FString& X_Name, const class FString& Y_Name, const class FString& Z_Name, class UObject* __WorldContext, struct FJsonBPObjectField* JSON_Object);
	void STATIC_Behemoth_Spawn_Telemetry(class AArchonBehemoth* Inspected_Behemoth, class UObject* __WorldContext);
	void STATIC_Get_All_Archon_Player_Controllers(class UObject* World_Context_Object, class UObject* __WorldContext, TArray<class AArchonPlayerController*>* Archon_Player_Controllers);
	void STATIC_Get_Playfab_IDs(class AActor* Character_or_Controller, class UObject* __WorldContext, class FString* Player_ID, class FString* Character_ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
