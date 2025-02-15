﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_WuYinQuBattleFightingData

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_WuYinQuBattleFightingData.PDA_WuYinQuBattleFightingData_C
// 0x0008 (0x0040 - 0x0038)
class UPDA_WuYinQuBattleFightingData_C final : public UPrimaryDataAsset
{
public:
	class UKuroWeatherDataAsset*                  AtmosFightingData;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_WuYinQuBattleFightingData_C">();
	}
	static class UPDA_WuYinQuBattleFightingData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_WuYinQuBattleFightingData_C>();
	}
};
static_assert(alignof(UPDA_WuYinQuBattleFightingData_C) == 0x000008, "Wrong alignment on UPDA_WuYinQuBattleFightingData_C");
static_assert(sizeof(UPDA_WuYinQuBattleFightingData_C) == 0x000040, "Wrong size on UPDA_WuYinQuBattleFightingData_C");
static_assert(offsetof(UPDA_WuYinQuBattleFightingData_C, AtmosFightingData) == 0x000038, "Member 'UPDA_WuYinQuBattleFightingData_C::AtmosFightingData' has a wrong offset!");

}

