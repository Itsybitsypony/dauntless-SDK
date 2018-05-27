#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum ELobbyReadyState.ELobbyReadyState
enum class ELobbyReadyState : uint8_t
{
	ELobbyReadyState__NewEnumerator0 = 0,
	ELobbyReadyState__NewEnumerator1 = 1,
	ELobbyReadyState__NewEnumerator2 = 2,
	ELobbyReadyState__NewEnumerator3 = 3,
	ELobbyReadyState__ELobbyReadyState_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
