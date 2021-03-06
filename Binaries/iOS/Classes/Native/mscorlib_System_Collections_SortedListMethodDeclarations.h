﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t959;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t767;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t763;
// System.Array
struct Array_t;

// System.Void System.Collections.SortedList::.ctor()
 void SortedList__ctor_m6899 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
 void SortedList__ctor_m4175 (SortedList_t959 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
 void SortedList__ctor_m6900 (SortedList_t959 * __this, Object_t * ___comparer, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
 void SortedList__cctor_m6901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m6902 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
 int32_t SortedList_get_Count_m4179 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
 bool SortedList_get_IsSynchronized_m6903 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
 Object_t * SortedList_get_SyncRoot_m6904 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
 bool SortedList_get_IsFixedSize_m6905 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
 bool SortedList_get_IsReadOnly_m6906 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
 Object_t * SortedList_get_Item_m6907 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
 void SortedList_set_Item_m6908 (SortedList_t959 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
 int32_t SortedList_get_Capacity_m6909 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
 void SortedList_Add_m4177 (SortedList_t959 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
 bool SortedList_Contains_m6910 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
 Object_t * SortedList_GetEnumerator_m6911 (SortedList_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
 void SortedList_Remove_m6912 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
 void SortedList_CopyTo_m6913 (SortedList_t959 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
 void SortedList_RemoveAt_m6914 (SortedList_t959 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
 int32_t SortedList_IndexOfKey_m6915 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
 bool SortedList_ContainsKey_m4176 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
 Object_t * SortedList_GetByIndex_m4178 (SortedList_t959 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
 void SortedList_EnsureCapacity_m6916 (SortedList_t959 * __this, int32_t ___n, int32_t ___free, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
 void SortedList_PutImpl_m6917 (SortedList_t959 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
 Object_t * SortedList_GetImpl_m6918 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
 void SortedList_InitTable_m6919 (SortedList_t959 * __this, int32_t ___capacity, bool ___forceSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
 int32_t SortedList_Find_m6920 (SortedList_t959 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
