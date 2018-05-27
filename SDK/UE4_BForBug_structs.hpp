#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BForBug.EBugDataType
enum class EBugDataType : uint8_t
{
	EBugDataType__Summary          = 0,
	EBugDataType__AttachmentText   = 1,
	EBugDataType__EBugDataType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BForBug.BugData
// 0x0038
struct FBugData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
