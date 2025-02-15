﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FSM_ConditionAttributeRate

#include "Basic.hpp"

#include "SAiAttributeRate_structs.hpp"
#include "KuroUtility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FSM_ConditionAttributeRate.BP_FSM_ConditionAttributeRate_C
// 0x0010 (0x0048 - 0x0038)
class UBP_FSM_ConditionAttributeRate_C final : public UKuroStateMachineConditionBase
{
public:
	TArray<struct FSAiAttributeRate>              AttributeRates;                                    // 0x0038(0x0010)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FSM_ConditionAttributeRate_C">();
	}
	static class UBP_FSM_ConditionAttributeRate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FSM_ConditionAttributeRate_C>();
	}
};
static_assert(alignof(UBP_FSM_ConditionAttributeRate_C) == 0x000008, "Wrong alignment on UBP_FSM_ConditionAttributeRate_C");
static_assert(sizeof(UBP_FSM_ConditionAttributeRate_C) == 0x000048, "Wrong size on UBP_FSM_ConditionAttributeRate_C");
static_assert(offsetof(UBP_FSM_ConditionAttributeRate_C, AttributeRates) == 0x000038, "Member 'UBP_FSM_ConditionAttributeRate_C::AttributeRates' has a wrong offset!");

}

