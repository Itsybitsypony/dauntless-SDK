// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_unlock_text_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_world_map_unlock_text_bpw.w_world_map_unlock_text_bpw_C.PlayUnlockAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UnlockText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_world_map_unlock_text_bpw_C::PlayUnlockAnimation(const struct FText& UnlockText)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_unlock_text_bpw.w_world_map_unlock_text_bpw_C.PlayUnlockAnimation");

	Uw_world_map_unlock_text_bpw_C_PlayUnlockAnimation_Params params;
	params.UnlockText = UnlockText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
