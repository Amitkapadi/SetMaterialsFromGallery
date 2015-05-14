﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1054;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1053;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t799;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.ClientContext::.ctor(Mono.Security.Protocol.Tls.SslClientStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void ClientContext__ctor_m4831 (ClientContext_t1054 * __this, SslClientStream_t1053 * ___stream, int32_t ___securityProtocolType, String_t* ___targetHost, X509CertificateCollection_t799 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::get_SslStream()
 SslClientStream_t1053 * ClientContext_get_SslStream_m4832 (ClientContext_t1054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.ClientContext::get_ClientHelloProtocol()
 int16_t ClientContext_get_ClientHelloProtocol_m4833 (ClientContext_t1054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::set_ClientHelloProtocol(System.Int16)
 void ClientContext_set_ClientHelloProtocol_m4834 (ClientContext_t1054 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::Clear()
 void ClientContext_Clear_m4835 (ClientContext_t1054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
