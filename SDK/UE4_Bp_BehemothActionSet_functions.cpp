// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Bp_BehemothActionSet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.GetActionByClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BehemothAction_C*    Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_BehemothActionSet_C::GetActionByClass(class UClass* ActionClass, class ABP_BehemothAction_C** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.GetActionByClass");

	ABp_BehemothActionSet_C_GetActionByClass_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.SpawnActionActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABp_Behemoth_C*          OwningBehemoth                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStruct_ActionSet       Struct_ActionSet               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABP_BehemothAction_C*> InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class ABP_BehemothAction_C*    Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABp_BehemothActionSet_C::SpawnActionActor(class ABp_Behemoth_C* OwningBehemoth, struct FStruct_ActionSet* Struct_ActionSet, TArray<class ABP_BehemothAction_C*>* InputPin, class ABP_BehemothAction_C** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.SpawnActionActor");

	ABp_BehemothActionSet_C_SpawnActionActor_Params params;
	params.OwningBehemoth = OwningBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Struct_ActionSet != nullptr)
		*Struct_ActionSet = params.Struct_ActionSet;
	if (InputPin != nullptr)
		*InputPin = params.InputPin;
	if (Action != nullptr)
		*Action = params.Action;
}


// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABp_BehemothActionSet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.UserConstructionScript");

	ABp_BehemothActionSet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABp_BehemothActionSet_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ReceiveDestroyed");

	ABp_BehemothActionSet_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ExecuteUbergraph_Bp_BehemothActionSet
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABp_BehemothActionSet_C::ExecuteUbergraph_Bp_BehemothActionSet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_BehemothActionSet.Bp_BehemothActionSet_C.ExecuteUbergraph_Bp_BehemothActionSet");

	ABp_BehemothActionSet_C_ExecuteUbergraph_Bp_BehemothActionSet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
