#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MenuButtonParent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_MenuButtonParent.BPI_MenuButtonParent_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_MenuButtonParent_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MenuButtonParent.BPI_MenuButtonParent_C");
		return ptr;
	}


	void ReturnFocusedButton(class Uw_MenuButton_C* FocusedButton);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
