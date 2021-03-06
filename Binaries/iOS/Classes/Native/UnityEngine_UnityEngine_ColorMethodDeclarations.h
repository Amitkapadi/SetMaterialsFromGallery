﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Color
struct Color_t108;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Color__ctor_m1714 (Color_t108 * __this, float ___r, float ___g, float ___b, float ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
 void Color__ctor_m2398 (Color_t108 * __this, float ___r, float ___g, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
 String_t* Color_ToString_m2399 (Color_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
 int32_t Color_GetHashCode_m2400 (Color_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
 bool Color_Equals_m1569 (Color_t108 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
 Color_t108  Color_Lerp_m1473 (Object_t * __this/* static, unused */, Color_t108  ___a, Color_t108  ___b, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
 Color_t108  Color_get_red_m2401 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
 Color_t108  Color_get_white_m1536 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
 Color_t108  Color_get_black_m1573 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
 Color_t108  Color_op_Multiply_m1869 (Object_t * __this/* static, unused */, Color_t108  ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
 Vector4_t160  Color_op_Implicit_m2402 (Object_t * __this/* static, unused */, Color_t108  ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
