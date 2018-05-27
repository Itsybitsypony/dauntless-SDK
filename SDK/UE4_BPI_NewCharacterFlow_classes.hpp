#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_NewCharacterFlow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_NewCharacterFlow.BPI_NewCharacterFlow_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_NewCharacterFlow_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_NewCharacterFlow.BPI_NewCharacterFlow_C");
		return ptr;
	}


	void FinishNewCharacterFlow(class APlayerController* Player_Controller);
	void StartNewCharacterFlow(class APlayerController* Player_Controller);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
