﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsSceneUiTag

#include "Basic.hpp"

#include "TsSceneUiTag_classes.hpp"
#include "TsSceneUiTag_parameters.hpp"


namespace SDK
{

// Function TsSceneUiTag.TsSceneUiTag_C.ExecuteUbergraph_TsSceneUiTag
// (Final, UbergraphFunction, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSceneUiTag_C::ExecuteUbergraph_TsSceneUiTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSceneUiTag_C", "ExecuteUbergraph_TsSceneUiTag");

	Params::TsSceneUiTag_C_ExecuteUbergraph_TsSceneUiTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSceneUiTag.TsSceneUiTag_C.ReceiveEndPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATsSceneUiTag_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSceneUiTag_C", "ReceiveEndPlay");

	Params::TsSceneUiTag_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsSceneUiTag.TsSceneUiTag_C.ReceiveBeginPlay
// (Event, Public, Protected, BlueprintCallable, BlueprintEvent)

void ATsSceneUiTag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSceneUiTag_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsSceneUiTag.TsSceneUiTag_C.OnCanTick
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper)

bool ATsSceneUiTag_C::OnCanTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsSceneUiTag_C", "OnCanTick");

	Params::TsSceneUiTag_C_OnCanTick Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

