﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EndingPunchCall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_EndingPunchCall.GA_EndingPunchCall_C
// 0x0008 (0x0560 - 0x0558)
class UGA_EndingPunchCall_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_EndingPunchCall_C;               // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_EndingPunchCall(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_7FAD63894494382B81C9228D74ED40E3(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E818C812047();
	void OnBlendOut_5D118C384AE61F1C80292E818C812047();
	void OnInterrupted_5D118C384AE61F1C80292E818C812047();
	void OnCancelled_5D118C384AE61F1C80292E818C812047();
	void OnTick_5D118C384AE61F1C80292E818C812047();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_EndingPunchCall_C">();
	}
	static class UGA_EndingPunchCall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_EndingPunchCall_C>();
	}
};
static_assert(alignof(UGA_EndingPunchCall_C) == 0x000008, "Wrong alignment on UGA_EndingPunchCall_C");
static_assert(sizeof(UGA_EndingPunchCall_C) == 0x000560, "Wrong size on UGA_EndingPunchCall_C");
static_assert(offsetof(UGA_EndingPunchCall_C, UberGraphFrame_GA_EndingPunchCall_C) == 0x000558, "Member 'UGA_EndingPunchCall_C::UberGraphFrame_GA_EndingPunchCall_C' has a wrong offset!");

}

