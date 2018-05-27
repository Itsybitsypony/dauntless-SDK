// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_AllyDeathNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_AllyDeathNotification.BPW_AllyDeathNotification_C.Get_ValueRemaining_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_AllyDeathNotification_C::Get_ValueRemaining_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AllyDeathNotification.BPW_AllyDeathNotification_C.Get_ValueRemaining_Text");

	UBPW_AllyDeathNotification_C_Get_ValueRemaining_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_AllyDeathNotification.BPW_AllyDeathNotification_C.Get_Player Name_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_AllyDeathNotification_C::Get_Player_Name_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_AllyDeathNotification.BPW_AllyDeathNotification_C.Get_Player Name_Text_1");

	UBPW_AllyDeathNotification_C_Get_Player_Name_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
