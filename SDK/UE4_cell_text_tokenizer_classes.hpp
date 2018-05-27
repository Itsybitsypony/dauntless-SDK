#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_text_tokenizer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cell_text_tokenizer.cell_text_tokenizer_C
// 0x0004 (0x002C - 0x0028)
class Ucell_text_tokenizer_C : public UObject
{
public:
	float                                              Magnitude;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cell_text_tokenizer.cell_text_tokenizer_C");
		return ptr;
	}


	bool GetTokenSubstitution(class UObject* WorldContextObject, const struct FName& Token, bool IsWithinSubstitution, class FString* SubstitutionText, bool* RetainBrackets);
	void FormatFloatValue(float Value, int MaxFractionalDigits, struct FText* Formatted);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
