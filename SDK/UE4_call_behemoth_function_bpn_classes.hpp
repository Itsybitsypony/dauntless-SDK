#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_call_behemoth_function_bpn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass call_behemoth_function_bpn.call_behemoth_function_bpn_C
// 0x00D0 (0x0108 - 0x0038)
class Ucall_behemoth_function_bpn_C : public UAnimNotify
{
public:
	struct FName                                       FunctionName;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fbehemoth_requirement_struct                BehemothRequirements;                                     // 0x0040(0x00C8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass call_behemoth_function_bpn.call_behemoth_function_bpn_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
