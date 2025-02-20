﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AnimalEcological

#include "Basic.hpp"

#include "BPI_AnimalEcological_classes.hpp"
#include "BPI_AnimalEcological_parameters.hpp"


namespace SDK
{

// Function BPI_AnimalEcological.BPI_AnimalEcological_C.TakeOffStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::TakeOffStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "TakeOffStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.TakeOffEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::TakeOffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "TakeOffEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.AlertStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::AlertStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "AlertStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.AlertEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::AlertEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "AlertEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.UnderAttackStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::UnderAttackStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "UnderAttackStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.UnderAttackEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::UnderAttackEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "UnderAttackEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.IdleStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::IdleStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "IdleStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.IdleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::IdleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "IdleEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.InteractStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::InteractStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "InteractStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.InteractEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::InteractEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "InteractEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.StateMachineInitializationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::StateMachineInitializationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "StateMachineInitializationComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.NoneStateStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::NoneStateStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "NoneStateStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.NoneStateEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::NoneStateEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "NoneStateEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.GetCurrentActionTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ActionTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimalEcological_C::GetCurrentActionTime(float* ActionTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "GetCurrentActionTime");

	Params::BPI_AnimalEcological_C_GetCurrentActionTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActionTime != nullptr)
		*ActionTime = Parms.ActionTime;
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.FeedStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBPI_AnimalEcological_C::FeedStart(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "FeedStart");

	Params::BPI_AnimalEcological_C_FeedStart Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.SystemUiStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::SystemUiStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "SystemUiStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_AnimalEcological.BPI_AnimalEcological_C.SystemUiEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_AnimalEcological_C::SystemUiEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_AnimalEcological_C", "SystemUiEnd");

	UObject::ProcessEvent(Func, nullptr);
}

}

