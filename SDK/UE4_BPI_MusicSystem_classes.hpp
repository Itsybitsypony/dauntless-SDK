#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MusicSystem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_MusicSystem.BPI_MusicSystem_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_MusicSystem_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MusicSystem.BPI_MusicSystem_C");
		return ptr;
	}


	void NotifyIntroCinematicCompleted(bool* Success);
	void NotifyIntroCinematicStarted(bool* Success);
	void ToggleDebugMusicSystem(bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
