#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_persistent_spawn_type_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_start_immediately_type_classes.hpp"
#include "UE4_persistent_actor_spawn_params_classes.hpp"
#include "UE4_persistent_projectile_spawn_params_classes.hpp"
#include "UE4_persistent_spawn_criteria_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct persistent_spawn_params.persistent_spawn_params
// 0x00C4
struct Fpersistent_spawn_params
{
	struct FName                                       UniqueKey_26_A793C2E045252C1152C88DB2728BCD96;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Epersistent_spawn_type>                SpawnType_5_E7B97E19448F6A77CE3327BD33878DE3;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct Fpersistent_actor_spawn_params              ActorSpawnData_22_D3F8A3D348158906E521E3BCA8864E40;       // 0x0010(0x0040) (Edit, BlueprintVisible)
	struct Fpersistent_projectile_spawn_params         ProjectileSpawnData_23_B629595D4E01835E8FBC899907B841CC;  // 0x0050(0x0038) (Edit, BlueprintVisible)
	TEnumAsByte<Estart_immediately_type>               StartImmediately_21_65F020154CAF5504C66C7AAF5B69C922;     // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Epersistent_spawn_criteria>            SpawnBasedOn_30_22C9B8C246826FE468C3A79E3BB89FCC;         // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              TimeBetweenSpawns_15_983CD6054F3B504030CC60939C28BCF7;    // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBetweenSpawns_33_0965A18E452D1B22F1D5A4A085C03237;// 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShareGUID_51_674BCC4D4C65B7F01ABEE69D9A7FA8B2;            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              INTERNAL_LastSpawnTimeStamp_47_D47478DE49A4DBFFBAB7FAA4ECFDFE8D;// 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     INTERNAL_LastSpawnActorLoc_48_28332CF245ABB8707ACA55B96E976056;// 0x009C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGuid                                       INTERNAL_SharedGUID_54_6DEE02FB4E8AA9935323ABA2D08457C1;  // 0x00A8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                INTERNAL_TotalDesiredSpawns_60_1375ECDF43329F14C8630091FDF60EB5;// 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                INTERNAL_CurrentNumSpawns_61_5212883E4CFDFA3815A41C8F42116F15;// 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              INTERNAL_TotalTime_65_9E88E3D04D54EA1434B38E876B4DCDC7;   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
