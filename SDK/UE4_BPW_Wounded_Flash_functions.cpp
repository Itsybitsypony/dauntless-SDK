// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_Wounded_Flash_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Wounded_Flash_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.OnAnimationFinished");

	UBPW_Wounded_Flash_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.BleedAnim
// (BlueprintCallable, BlueprintEvent)

void UBPW_Wounded_Flash_C::BleedAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.BleedAnim");

	UBPW_Wounded_Flash_C_BleedAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.ExecuteUbergraph_BPW_Wounded_Flash
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_Wounded_Flash_C::ExecuteUbergraph_BPW_Wounded_Flash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.ExecuteUbergraph_BPW_Wounded_Flash");

	UBPW_Wounded_Flash_C_ExecuteUbergraph_BPW_Wounded_Flash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
