﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NA004

#include "Basic.hpp"

#include "BP_CommonSmallAnimal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NA004.BP_NA004_C
// 0x0000 (0x07B0 - 0x07B0)
class ABP_NA004_C : public ABP_CommonSmallAnimal_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NA004_C">();
	}
	static class ABP_NA004_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NA004_C>();
	}
};
static_assert(alignof(ABP_NA004_C) == 0x000010, "Wrong alignment on ABP_NA004_C");
static_assert(sizeof(ABP_NA004_C) == 0x0007B0, "Wrong size on ABP_NA004_C");

}

