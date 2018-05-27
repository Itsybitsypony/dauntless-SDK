#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_shiny_drop_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C
// 0x000F (0x0700 - 0x06F1)
class Abehemoth_shiny_drop_bp_C : public Ashiny_drop_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_shiny_drop_bp.behemoth_shiny_drop_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_behemoth_shiny_drop_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
