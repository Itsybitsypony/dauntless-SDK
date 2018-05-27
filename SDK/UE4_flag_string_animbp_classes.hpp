#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flag_string_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass flag_string_animbp.flag_string_animbp_C
// 0x0598 (0x0920 - 0x0388)
class Uflag_string_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ECA48427418316DCD621E3980185C015;      // 0x0390(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0B39C50D402BA2CA9BDDD1B9A611D1F0;// 0x03D8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1408C9F84CCEDBB0FDB92294E39A4524;// 0x0420(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F0053B24AACFE8C9F5ADFA6A387781F;// 0x06A0(0x0280)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass flag_string_animbp.flag_string_animbp_C");
		return ptr;
	}


	void ExecuteUbergraph_flag_string_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
