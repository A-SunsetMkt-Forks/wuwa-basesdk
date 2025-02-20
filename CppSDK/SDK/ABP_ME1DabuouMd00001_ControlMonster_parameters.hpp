﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_ME1DabuouMd00001_ControlMonster

#include "Basic.hpp"

#include "EMovementDirection_structs.hpp"
#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK::Params
{

// Function ABP_ME1DabuouMd00001_ControlMonster.ABP_ME1DabuouMd00001_ControlMonster_C.ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster
// 0x0040 (0x0040 - 0x0000)
struct ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_5;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EBP_EWorldType                                CallFunc_GetWorldType_ReturnValue;                 // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ABPLogicParams_C*                   CallFunc_SpawnObject_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster) == 0x000008, "Wrong alignment on ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster");
static_assert(sizeof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster) == 0x000040, "Wrong size on ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, EntryPoint) == 0x000000, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_Not_PreBool_ReturnValue_1) == 0x000006, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000008, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000009, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00000C, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00000D, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00000E, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00000F, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x000010, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_BooleanOR_ReturnValue_1) == 0x000011, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_NotEqual_ByteByte_ReturnValue_5) == 0x000012, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_NotEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, K2Node_Event_DeltaTimeX) == 0x000014, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000018, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, K2Node_DynamicCast_AsTs_Base_Character) == 0x000020, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000029, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_IsValid_ReturnValue) == 0x00002A, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_BooleanAND_ReturnValue_1) == 0x00002B, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_GetWorldType_ReturnValue) == 0x00002C, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_GetWorldType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00002D, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00002E, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_BooleanOR_ReturnValue_2) == 0x00002F, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000031, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster, CallFunc_SpawnObject_ReturnValue) == 0x000038, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_ExecuteUbergraph_ABP_ME1DabuouMd00001_ControlMonster::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function ABP_ME1DabuouMd00001_ControlMonster.ABP_ME1DabuouMd00001_ControlMonster_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_ME1DabuouMd00001_ControlMonster.ABP_ME1DabuouMd00001_ControlMonster_C.移动参数更新
// 0x0003 (0x0003 - 0x0000)
struct ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新 final
{
public:
	bool                                          CallFunc_ContainsTag_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsJump_ReturnValue;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMovementDirection                            CallFunc_GetMonsterMoveDirection_ReturnValue;      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新) == 0x000001, "Wrong alignment on ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新");
static_assert(sizeof(ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新) == 0x000003, "Wrong size on ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新, CallFunc_ContainsTag_ReturnValue) == 0x000000, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新::CallFunc_ContainsTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新, CallFunc_IsJump_ReturnValue) == 0x000001, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新::CallFunc_IsJump_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新, CallFunc_GetMonsterMoveDirection_ReturnValue) == 0x000002, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_移动参数更新::CallFunc_GetMonsterMoveDirection_ReturnValue' has a wrong offset!");

// Function ABP_ME1DabuouMd00001_ControlMonster.ABP_ME1DabuouMd00001_ControlMonster_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph");
static_assert(sizeof(ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph) == 0x000010, "Wrong size on ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph");
static_assert(offsetof(ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_ME1DabuouMd00001_ControlMonster_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

