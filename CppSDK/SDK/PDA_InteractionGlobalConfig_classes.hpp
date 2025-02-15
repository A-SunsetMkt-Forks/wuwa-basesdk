﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_InteractionGlobalConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_InteractionGlobalConfig.PDA_InteractionGlobalConfig_C
// 0x01C0 (0x01F8 - 0x0038)
class UPDA_InteractionGlobalConfig_C final : public UPrimaryDataAsset
{
public:
	bool                                          屏蔽所有水面交互物体;                              // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        植被恢复材质;                                      // 0x0040(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        植被交互计算材质;                                  // 0x0060(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        植被结果材质;                                      // 0x0080(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面波纹触发材质;                                  // 0x00A0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面波纹计算材质;                                  // 0x00C0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        高斯模糊材质;                                      // 0x00E0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面波纹结果材质;                                  // 0x0100(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        植被交互纹理;                                      // 0x0120(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        植被交互临时纹理;                                  // 0x0140(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面交互纹理;                                      // 0x0160(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面交互临时纹理1;                                 // 0x0180(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面交互临时纹理2;                                 // 0x01A0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        水面交互临时纹理3;                                 // 0x01C0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          屏蔽所有草地交互物体;                              // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          停止水模拟;                                        // 0x01E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          停止草模拟;                                        // 0x01E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E3[0x5];                                      // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_InteractionGlobalConfigParameters_C* 交互参数;                                          // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          强制启用水模拟;                                    // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          强制启用草模拟;                                    // 0x01F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_InteractionGlobalConfig_C">();
	}
	static class UPDA_InteractionGlobalConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_InteractionGlobalConfig_C>();
	}
};
static_assert(alignof(UPDA_InteractionGlobalConfig_C) == 0x000008, "Wrong alignment on UPDA_InteractionGlobalConfig_C");
static_assert(sizeof(UPDA_InteractionGlobalConfig_C) == 0x0001F8, "Wrong size on UPDA_InteractionGlobalConfig_C");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 屏蔽所有水面交互物体) == 0x000038, "Member 'UPDA_InteractionGlobalConfig_C::屏蔽所有水面交互物体' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 植被恢复材质) == 0x000040, "Member 'UPDA_InteractionGlobalConfig_C::植被恢复材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 植被交互计算材质) == 0x000060, "Member 'UPDA_InteractionGlobalConfig_C::植被交互计算材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 植被结果材质) == 0x000080, "Member 'UPDA_InteractionGlobalConfig_C::植被结果材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面波纹触发材质) == 0x0000A0, "Member 'UPDA_InteractionGlobalConfig_C::水面波纹触发材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面波纹计算材质) == 0x0000C0, "Member 'UPDA_InteractionGlobalConfig_C::水面波纹计算材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 高斯模糊材质) == 0x0000E0, "Member 'UPDA_InteractionGlobalConfig_C::高斯模糊材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面波纹结果材质) == 0x000100, "Member 'UPDA_InteractionGlobalConfig_C::水面波纹结果材质' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 植被交互纹理) == 0x000120, "Member 'UPDA_InteractionGlobalConfig_C::植被交互纹理' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 植被交互临时纹理) == 0x000140, "Member 'UPDA_InteractionGlobalConfig_C::植被交互临时纹理' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面交互纹理) == 0x000160, "Member 'UPDA_InteractionGlobalConfig_C::水面交互纹理' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面交互临时纹理1) == 0x000180, "Member 'UPDA_InteractionGlobalConfig_C::水面交互临时纹理1' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面交互临时纹理2) == 0x0001A0, "Member 'UPDA_InteractionGlobalConfig_C::水面交互临时纹理2' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 水面交互临时纹理3) == 0x0001C0, "Member 'UPDA_InteractionGlobalConfig_C::水面交互临时纹理3' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 屏蔽所有草地交互物体) == 0x0001E0, "Member 'UPDA_InteractionGlobalConfig_C::屏蔽所有草地交互物体' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 停止水模拟) == 0x0001E1, "Member 'UPDA_InteractionGlobalConfig_C::停止水模拟' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 停止草模拟) == 0x0001E2, "Member 'UPDA_InteractionGlobalConfig_C::停止草模拟' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 交互参数) == 0x0001E8, "Member 'UPDA_InteractionGlobalConfig_C::交互参数' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 强制启用水模拟) == 0x0001F0, "Member 'UPDA_InteractionGlobalConfig_C::强制启用水模拟' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionGlobalConfig_C, 强制启用草模拟) == 0x0001F1, "Member 'UPDA_InteractionGlobalConfig_C::强制启用草模拟' has a wrong offset!");

}

