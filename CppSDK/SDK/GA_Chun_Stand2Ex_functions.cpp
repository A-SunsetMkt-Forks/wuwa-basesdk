﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Chun_Stand2Ex

#include "Basic.hpp"

#include "GA_Chun_Stand2Ex_classes.hpp"
#include "GA_Chun_Stand2Ex_parameters.hpp"


namespace SDK
{

// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.ExecuteUbergraph_GA_Chun_Stand2Ex
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Chun_Stand2Ex_C::ExecuteUbergraph_GA_Chun_Stand2Ex(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "ExecuteUbergraph_GA_Chun_Stand2Ex");

	Params::GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.OnCompleted_5D118C384AE61F1C80292E81036C0198
// (BlueprintCallable, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::OnCompleted_5D118C384AE61F1C80292E81036C0198()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "OnCompleted_5D118C384AE61F1C80292E81036C0198");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.OnBlendOut_5D118C384AE61F1C80292E81036C0198
// (BlueprintCallable, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::OnBlendOut_5D118C384AE61F1C80292E81036C0198()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "OnBlendOut_5D118C384AE61F1C80292E81036C0198");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.OnInterrupted_5D118C384AE61F1C80292E81036C0198
// (BlueprintCallable, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::OnInterrupted_5D118C384AE61F1C80292E81036C0198()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "OnInterrupted_5D118C384AE61F1C80292E81036C0198");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.OnCancelled_5D118C384AE61F1C80292E81036C0198
// (BlueprintCallable, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::OnCancelled_5D118C384AE61F1C80292E81036C0198()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "OnCancelled_5D118C384AE61F1C80292E81036C0198");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.OnTick_5D118C384AE61F1C80292E81036C0198
// (BlueprintCallable, BlueprintEvent)

void UGA_Chun_Stand2Ex_C::OnTick_5D118C384AE61F1C80292E81036C0198()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "OnTick_5D118C384AE61F1C80292E81036C0198");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.Added_21071CB943CD992BF8EFD6A3CB16661B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Chun_Stand2Ex_C::Added_21071CB943CD992BF8EFD6A3CB16661B(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Chun_Stand2Ex_C", "Added_21071CB943CD992BF8EFD6A3CB16661B");

	Params::GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}

}

