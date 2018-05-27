// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_anim_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_anim_bp.lantern_anim_bp_C.ExecuteUbergraph_lantern_anim_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_anim_bp_C::ExecuteUbergraph_lantern_anim_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_anim_bp.lantern_anim_bp_C.ExecuteUbergraph_lantern_anim_bp");

	Ulantern_anim_bp_C_ExecuteUbergraph_lantern_anim_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
