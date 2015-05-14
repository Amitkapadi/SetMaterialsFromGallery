﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t42;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t63;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_17MethodDeclarations.h"
#define EventFunction_1__ctor_m1313(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m10988_gshared((EventFunction_1_t2235 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m11898(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m10990_gshared((EventFunction_1_t2235 *)__this, (Object_t *)___handler, (BaseEventData_t23 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m11899(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m10992_gshared((EventFunction_1_t2235 *)__this, (Object_t *)___handler, (BaseEventData_t23 *)___eventData, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m11900(__this, ___result, method) (void)EventFunction_1_EndInvoke_m10994_gshared((EventFunction_1_t2235 *)__this, (Object_t *)___result, method)
