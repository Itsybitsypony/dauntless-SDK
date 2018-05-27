// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_active_base_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_active_base_buff.lantern_active_base_buff_C.GetLantern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLantern*          Lantern                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alantern_active_base_buff_C::GetLantern(class AArchonLantern** Lantern)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_base_buff.lantern_active_base_buff_C.GetLantern");

	Alantern_active_base_buff_C_GetLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lantern != nullptr)
		*Lantern = params.Lantern;
}


// Function lantern_active_base_buff.lantern_active_base_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alantern_active_base_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_base_buff.lantern_active_base_buff_C.UserConstructionScript");

	Alantern_active_base_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_active_base_buff.lantern_active_base_buff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Alantern_active_base_buff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_base_buff.lantern_active_base_buff_C.ReceiveDestroyed");

	Alantern_active_base_buff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_active_base_buff.lantern_active_base_buff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Alantern_active_base_buff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_base_buff.lantern_active_base_buff_C.MulticastOnAdded");

	Alantern_active_base_buff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_active_base_buff.lantern_active_base_buff_C.ExecuteUbergraph_lantern_active_base_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alantern_active_base_buff_C::ExecuteUbergraph_lantern_active_base_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_active_base_buff.lantern_active_base_buff_C.ExecuteUbergraph_lantern_active_base_buff");

	Alantern_active_base_buff_C_ExecuteUbergraph_lantern_active_base_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
