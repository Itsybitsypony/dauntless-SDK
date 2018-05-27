#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_max_danger_averted_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass max_danger_averted_bpw.max_danger_averted_bpw_C
// 0x0008 (0x02D8 - 0x02D0)
class Umax_danger_averted_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass max_danger_averted_bpw.max_danger_averted_bpw_C");
		return ptr;
	}


	struct FText Get_Crew_Lives_Remaining_Text_1();
	void Construct();
	void ExecuteUbergraph_max_danger_averted_bpw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
