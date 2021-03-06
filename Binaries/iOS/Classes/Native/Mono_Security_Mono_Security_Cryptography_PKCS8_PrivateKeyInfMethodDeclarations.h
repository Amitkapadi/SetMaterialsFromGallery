﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1020;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.RSA
struct RSA_t820;
// System.Security.Cryptography.DSA
struct DSA_t819;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m4583 (PrivateKeyInfo_t1020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m4584 (PrivateKeyInfo_t1020 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t17* PrivateKeyInfo_get_PrivateKey_m4585 (PrivateKeyInfo_t1020 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m4586 (PrivateKeyInfo_t1020 * __this, ByteU5BU5D_t17* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t17* PrivateKeyInfo_RemoveLeadingZero_m4587 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t17* PrivateKeyInfo_Normalize_m4588 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t820 * PrivateKeyInfo_DecodeRSA_m4589 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t819 * PrivateKeyInfo_DecodeDSA_m4590 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___privateKey, DSAParameters_t966  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
