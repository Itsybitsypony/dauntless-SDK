// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_telemetry_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function telemetry_function_library.telemetry_function_library_C.GetActorResistanceJSONArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FJsonBPValue            JSON_Object_Body               (Parm, OutParm)

void Utelemetry_function_library_C::STATIC_GetActorResistanceJSONArray(class AActor* Actor, class UObject* __WorldContext, struct FJsonBPValue* JSON_Object_Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.GetActorResistanceJSONArray");

	Utelemetry_function_library_C_GetActorResistanceJSONArray_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSON_Object_Body != nullptr)
		*JSON_Object_Body = params.JSON_Object_Body;
}


// Function telemetry_function_library.telemetry_function_library_C.GetActorPowerJSONArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FJsonBPValue            JSON_Object_Body               (Parm, OutParm)

void Utelemetry_function_library_C::STATIC_GetActorPowerJSONArray(class AActor* Actor, class UObject* __WorldContext, struct FJsonBPValue* JSON_Object_Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.GetActorPowerJSONArray");

	Utelemetry_function_library_C_GetActorPowerJSONArray_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSON_Object_Body != nullptr)
		*JSON_Object_Body = params.JSON_Object_Body;
}


// Function telemetry_function_library.telemetry_function_library_C.Format Vector to JSON
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position_Vector                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class FString                  Field_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  X_Name                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Y_Name                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Z_Name                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FJsonBPObjectField      JSON_Object                    (Parm, OutParm)

void Utelemetry_function_library_C::STATIC_Format_Vector_to_JSON(const struct FVector& Position_Vector, const class FString& Field_Name, const class FString& X_Name, const class FString& Y_Name, const class FString& Z_Name, class UObject* __WorldContext, struct FJsonBPObjectField* JSON_Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.Format Vector to JSON");

	Utelemetry_function_library_C_Format_Vector_to_JSON_Params params;
	params.Position_Vector = Position_Vector;
	params.Field_Name = Field_Name;
	params.X_Name = X_Name;
	params.Y_Name = Y_Name;
	params.Z_Name = Z_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSON_Object != nullptr)
		*JSON_Object = params.JSON_Object;
}


// Function telemetry_function_library.telemetry_function_library_C.Behemoth Spawn Telemetry
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Inspected_Behemoth             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utelemetry_function_library_C::STATIC_Behemoth_Spawn_Telemetry(class AArchonBehemoth* Inspected_Behemoth, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.Behemoth Spawn Telemetry");

	Utelemetry_function_library_C_Behemoth_Spawn_Telemetry_Params params;
	params.Inspected_Behemoth = Inspected_Behemoth;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function telemetry_function_library.telemetry_function_library_C.Get All Archon Player Controllers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 World_Context_Object           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AArchonPlayerController*> Archon_Player_Controllers      (Parm, OutParm, ZeroConstructor)

void Utelemetry_function_library_C::STATIC_Get_All_Archon_Player_Controllers(class UObject* World_Context_Object, class UObject* __WorldContext, TArray<class AArchonPlayerController*>* Archon_Player_Controllers)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.Get All Archon Player Controllers");

	Utelemetry_function_library_C_Get_All_Archon_Player_Controllers_Params params;
	params.World_Context_Object = World_Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Archon_Player_Controllers != nullptr)
		*Archon_Player_Controllers = params.Archon_Player_Controllers;
}


// Function telemetry_function_library.telemetry_function_library_C.Get Playfab IDs
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Character_or_Controller        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Player_ID                      (Parm, OutParm, ZeroConstructor)
// class FString                  Character_ID                   (Parm, OutParm, ZeroConstructor)

void Utelemetry_function_library_C::STATIC_Get_Playfab_IDs(class AActor* Character_or_Controller, class UObject* __WorldContext, class FString* Player_ID, class FString* Character_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function telemetry_function_library.telemetry_function_library_C.Get Playfab IDs");

	Utelemetry_function_library_C_Get_Playfab_IDs_Params params;
	params.Character_or_Controller = Character_or_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_ID != nullptr)
		*Player_ID = params.Player_ID;
	if (Character_ID != nullptr)
		*Character_ID = params.Character_ID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
