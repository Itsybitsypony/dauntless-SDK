// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MenuButtonParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_MenuButtonParent.BPI_MenuButtonParent_C.ReturnFocusedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_MenuButton_C*         FocusedButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_MenuButtonParent_C::ReturnFocusedButton(class Uw_MenuButton_C* FocusedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MenuButtonParent.BPI_MenuButtonParent_C.ReturnFocusedButton");

	UBPI_MenuButtonParent_C_ReturnFocusedButton_Params params;
	params.FocusedButton = FocusedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
