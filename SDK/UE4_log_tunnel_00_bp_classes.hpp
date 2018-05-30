#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_log_tunnel_00_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass log_tunnel_00_bp.log_tunnel_00_bp_C
// 0x0020 (0x03A8 - 0x0388)
class Alog_tunnel_00_bp_C : public AActor
{
public:
	class UStaticMeshComponent*                        log_tunnel_00;                                            // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNeoFurComponent*                            NeoFur;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        log_tunnel_moss_00;                                       // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass log_tunnel_00_bp.log_tunnel_00_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
