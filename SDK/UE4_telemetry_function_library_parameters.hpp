#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_telemetry_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function telemetry_function_library.telemetry_function_library_C.GetActorResistanceJSONArray
struct Utelemetry_function_library_C_GetActorResistanceJSONArray_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPValue                                JSON_Object_Body;                                         // (Parm, OutParm)
};

// Function telemetry_function_library.telemetry_function_library_C.GetActorPowerJSONArray
struct Utelemetry_function_library_C_GetActorPowerJSONArray_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPValue                                JSON_Object_Body;                                         // (Parm, OutParm)
};

// Function telemetry_function_library.telemetry_function_library_C.Format Vector to JSON
struct Utelemetry_function_library_C_Format_Vector_to_JSON_Params
{
	struct FVector                                     Position_Vector;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class FString                                      Field_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      X_Name;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Y_Name;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Z_Name;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPObjectField                          JSON_Object;                                              // (Parm, OutParm)
};

// Function telemetry_function_library.telemetry_function_library_C.Behemoth Spawn Telemetry
struct Utelemetry_function_library_C_Behemoth_Spawn_Telemetry_Params
{
	class AArchonBehemoth*                             Inspected_Behemoth;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function telemetry_function_library.telemetry_function_library_C.Get All Archon Player Controllers
struct Utelemetry_function_library_C_Get_All_Archon_Player_Controllers_Params
{
	class UObject*                                     World_Context_Object;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonPlayerController*>             Archon_Player_Controllers;                                // (Parm, OutParm, ZeroConstructor)
};

// Function telemetry_function_library.telemetry_function_library_C.Get Playfab IDs
struct Utelemetry_function_library_C_Get_Playfab_IDs_Params
{
	class AActor*                                      Character_or_Controller;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Player_ID;                                                // (Parm, OutParm, ZeroConstructor)
	class FString                                      Character_ID;                                             // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
