﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_WuYinQuBattleIdleData

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_WuYinQuBattleIdleData.PDA_WuYinQuBattleIdleData_C
// 0x0010 (0x0048 - 0x0038)
class UPDA_WuYinQuBattleIdleData_C final : public UPrimaryDataAsset
{
public:
	class UKuroWeatherDataAsset*                  AtmosInnerData;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroWeatherDataAsset*                  AtmosOuterData;                                    // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_WuYinQuBattleIdleData_C">();
	}
	static class UPDA_WuYinQuBattleIdleData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_WuYinQuBattleIdleData_C>();
	}
};
static_assert(alignof(UPDA_WuYinQuBattleIdleData_C) == 0x000008, "Wrong alignment on UPDA_WuYinQuBattleIdleData_C");
static_assert(sizeof(UPDA_WuYinQuBattleIdleData_C) == 0x000048, "Wrong size on UPDA_WuYinQuBattleIdleData_C");
static_assert(offsetof(UPDA_WuYinQuBattleIdleData_C, AtmosInnerData) == 0x000038, "Member 'UPDA_WuYinQuBattleIdleData_C::AtmosInnerData' has a wrong offset!");
static_assert(offsetof(UPDA_WuYinQuBattleIdleData_C, AtmosOuterData) == 0x000040, "Member 'UPDA_WuYinQuBattleIdleData_C::AtmosOuterData' has a wrong offset!");

}

