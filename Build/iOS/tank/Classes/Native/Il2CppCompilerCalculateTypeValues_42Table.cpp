#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Grpc.Core.AsyncAuthInterceptor
struct AsyncAuthInterceptor_t3273427652;
// Grpc.Core.AuthInterceptorContext
struct AuthInterceptorContext_t555162081;
// Grpc.Core.Internal.BatchContextSafeHandle
struct BatchContextSafeHandle_t2277040938;
// Grpc.Core.Internal.CStringSafeHandle
struct CStringSafeHandle_t521852717;
// Grpc.Core.Internal.CallCredentialsSafeHandle
struct CallCredentialsSafeHandle_t65360148;
// Grpc.Core.Internal.CallSafeHandle
struct CallSafeHandle_t2712843673;
// Grpc.Core.Internal.ChannelArgsSafeHandle
struct ChannelArgsSafeHandle_t921416692;
// Grpc.Core.Internal.ChannelCredentialsSafeHandle
struct ChannelCredentialsSafeHandle_t3282931414;
// Grpc.Core.Internal.ChannelSafeHandle
struct ChannelSafeHandle_t3597796930;
// Grpc.Core.Internal.CompletionQueueSafeHandle
struct CompletionQueueSafeHandle_t835930791;
// Grpc.Core.Internal.GprLogDelegate
struct GprLogDelegate_t25055494;
// Grpc.Core.Internal.MetadataArraySafeHandle
struct MetadataArraySafeHandle_t1753552187;
// Grpc.Core.Internal.NativeExtension
struct NativeExtension_t4133024928;
// Grpc.Core.Internal.NativeMetadataCredentialsPlugin
struct NativeMetadataCredentialsPlugin_t2272103877;
// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3
struct U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240;
// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4
struct U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009;
// Grpc.Core.Internal.NativeMetadataInterceptor
struct NativeMetadataInterceptor_t3643657361;
// Grpc.Core.Internal.NativeMethods
struct NativeMethods_t1137985067;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate
struct gprsharp_convert_clock_type_delegate_t1755859444;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate
struct gprsharp_free_delegate_t3453134242;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate
struct gprsharp_inf_future_delegate_t1471086569;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate
struct gprsharp_inf_past_delegate_t3920462529;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate
struct gprsharp_now_delegate_t2976584151;
// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate
struct gprsharp_sizeof_timespec_delegate_t1822509259;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate
struct grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate
struct grpcsharp_auth_context_property_iterator_delegate_t641318545;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate
struct grpcsharp_auth_context_release_delegate_t83664199;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate
struct grpcsharp_auth_property_iterator_next_delegate_t4267042899;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate
struct grpcsharp_batch_context_create_delegate_t4041094647;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate
struct grpcsharp_batch_context_destroy_delegate_t3097840777;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate
struct grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate
struct grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate
struct grpcsharp_batch_context_recv_message_length_delegate_t2576883917;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate
struct grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate
struct grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate
struct grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate
struct grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate
struct grpcsharp_batch_context_reset_delegate_t1240336310;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate
struct grpcsharp_call_auth_context_delegate_t3089219098;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate
struct grpcsharp_call_cancel_delegate_t1770075385;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate
struct grpcsharp_call_cancel_with_status_delegate_t322311674;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate
struct grpcsharp_call_credentials_release_delegate_t4173796462;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate
struct grpcsharp_call_destroy_delegate_t3472236717;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate
struct grpcsharp_call_get_peer_delegate_t4293430173;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate
struct grpcsharp_call_recv_initial_metadata_delegate_t1420662382;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate
struct grpcsharp_call_recv_message_delegate_t3263680702;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate
struct grpcsharp_call_send_close_from_client_delegate_t3404740706;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate
struct grpcsharp_call_send_initial_metadata_delegate_t2871837368;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate
struct grpcsharp_call_send_message_delegate_t80977843;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate
struct grpcsharp_call_send_status_from_server_delegate_t1281609886;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate
struct grpcsharp_call_set_credentials_delegate_t2164951723;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate
struct grpcsharp_call_start_client_streaming_delegate_t186521236;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate
struct grpcsharp_call_start_duplex_streaming_delegate_t668243240;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate
struct grpcsharp_call_start_server_streaming_delegate_t941302023;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate
struct grpcsharp_call_start_serverside_delegate_t702333229;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate
struct grpcsharp_call_start_unary_delegate_t1332494428;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate
struct grpcsharp_channel_args_create_delegate_t223697083;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate
struct grpcsharp_channel_args_destroy_delegate_t3019422610;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate
struct grpcsharp_channel_args_set_integer_delegate_t1374818234;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate
struct grpcsharp_channel_args_set_string_delegate_t2671812739;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate
struct grpcsharp_channel_check_connectivity_state_delegate_t3896712294;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate
struct grpcsharp_channel_create_call_delegate_t1689755209;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate
struct grpcsharp_channel_credentials_release_delegate_t3260923539;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate
struct grpcsharp_channel_destroy_delegate_t1789251192;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate
struct grpcsharp_channel_get_target_delegate_t1912627058;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate
struct grpcsharp_channel_watch_connectivity_state_delegate_t2921567600;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate
struct grpcsharp_completion_queue_create_async_delegate_t360079728;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate
struct grpcsharp_completion_queue_create_sync_delegate_t1808910508;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate
struct grpcsharp_completion_queue_destroy_delegate_t1464055640;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate
struct grpcsharp_completion_queue_next_delegate_t3269686616;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate
struct grpcsharp_completion_queue_pluck_delegate_t285374971;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate
struct grpcsharp_completion_queue_shutdown_delegate_t248163633;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate
struct grpcsharp_composite_call_credentials_create_delegate_t3738706681;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate
struct grpcsharp_composite_channel_credentials_create_delegate_t11741719;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate
struct grpcsharp_init_delegate_t697069341;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate
struct grpcsharp_insecure_channel_create_delegate_t1754677822;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate
struct grpcsharp_metadata_array_add_delegate_t281551042;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate
struct grpcsharp_metadata_array_count_delegate_t1171955796;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate
struct grpcsharp_metadata_array_create_delegate_t2940265924;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate
struct grpcsharp_metadata_array_destroy_full_delegate_t46908578;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate
struct grpcsharp_metadata_array_get_key_delegate_t2312063556;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate
struct grpcsharp_metadata_array_get_value_delegate_t2215973087;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate
struct grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate
struct grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate
struct grpcsharp_override_default_ssl_roots_delegate_t2112048917;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate
struct grpcsharp_redirect_log_delegate_t1051680661;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate
struct grpcsharp_request_call_context_call_delegate_t2297854097;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate
struct grpcsharp_request_call_context_create_delegate_t1071596268;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate
struct grpcsharp_request_call_context_deadline_delegate_t3662856317;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate
struct grpcsharp_request_call_context_destroy_delegate_t2729585044;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate
struct grpcsharp_request_call_context_host_delegate_t2701984728;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate
struct grpcsharp_request_call_context_method_delegate_t1144596552;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate
struct grpcsharp_request_call_context_request_metadata_delegate_t3549298166;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate
struct grpcsharp_request_call_context_reset_delegate_t511489013;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate
struct grpcsharp_secure_channel_create_delegate_t858919073;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate
struct grpcsharp_server_add_insecure_http2_port_delegate_t811346158;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate
struct grpcsharp_server_add_secure_http2_port_delegate_t102470377;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate
struct grpcsharp_server_cancel_all_calls_delegate_t4278007468;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate
struct grpcsharp_server_create_delegate_t4127831655;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate
struct grpcsharp_server_credentials_release_delegate_t2095714663;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate
struct grpcsharp_server_destroy_delegate_t2436759005;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate
struct grpcsharp_server_register_completion_queue_delegate_t2206715366;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate
struct grpcsharp_server_request_call_delegate_t2796155047;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate
struct grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate
struct grpcsharp_server_start_delegate_t4158963393;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate
struct grpcsharp_shutdown_delegate_t1539905248;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate
struct grpcsharp_sizeof_grpc_event_delegate_t4083509947;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate
struct grpcsharp_ssl_credentials_create_delegate_t1837265019;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate
struct grpcsharp_ssl_server_credentials_create_delegate_t3254816087;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate
struct grpcsharp_test_callback_delegate_t521268474;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate
struct grpcsharp_test_nop_delegate_t1977043325;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate
struct grpcsharp_test_override_method_delegate_t51326422;
// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate
struct grpcsharp_version_string_delegate_t3086718951;
// Grpc.Core.Internal.RequestCallContextSafeHandle
struct RequestCallContextSafeHandle_t2091348057;
// Grpc.Core.Internal.ServerCredentialsSafeHandle
struct ServerCredentialsSafeHandle_t1041742559;
// Grpc.Core.Internal.ServerSafeHandle
struct ServerSafeHandle_t2594746476;
// Grpc.Core.Logging.ILogger
struct ILogger_t1070553006;
// Grpc.Core.Metadata
struct Metadata_t3698311594;
// System.Action
struct Action_t1264377477;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Void
struct Void_t1185182177;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef MARSHALUTILS_T3818635350_H
#define MARSHALUTILS_T3818635350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.MarshalUtils
struct  MarshalUtils_t3818635350  : public RuntimeObject
{
public:

public:
};

struct MarshalUtils_t3818635350_StaticFields
{
public:
	// System.Text.Encoding Grpc.Core.Internal.MarshalUtils::EncodingUTF8
	Encoding_t1523322056 * ___EncodingUTF8_0;
	// System.Text.Encoding Grpc.Core.Internal.MarshalUtils::EncodingASCII
	Encoding_t1523322056 * ___EncodingASCII_1;

public:
	inline static int32_t get_offset_of_EncodingUTF8_0() { return static_cast<int32_t>(offsetof(MarshalUtils_t3818635350_StaticFields, ___EncodingUTF8_0)); }
	inline Encoding_t1523322056 * get_EncodingUTF8_0() const { return ___EncodingUTF8_0; }
	inline Encoding_t1523322056 ** get_address_of_EncodingUTF8_0() { return &___EncodingUTF8_0; }
	inline void set_EncodingUTF8_0(Encoding_t1523322056 * value)
	{
		___EncodingUTF8_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodingUTF8_0), value);
	}

	inline static int32_t get_offset_of_EncodingASCII_1() { return static_cast<int32_t>(offsetof(MarshalUtils_t3818635350_StaticFields, ___EncodingASCII_1)); }
	inline Encoding_t1523322056 * get_EncodingASCII_1() const { return ___EncodingASCII_1; }
	inline Encoding_t1523322056 ** get_address_of_EncodingASCII_1() { return &___EncodingASCII_1; }
	inline void set_EncodingASCII_1(Encoding_t1523322056 * value)
	{
		___EncodingASCII_1 = value;
		Il2CppCodeGenWriteBarrier((&___EncodingASCII_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALUTILS_T3818635350_H
#ifndef NATIVEEXTENSION_T4133024928_H
#define NATIVEEXTENSION_T4133024928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeExtension
struct  NativeExtension_t4133024928  : public RuntimeObject
{
public:
	// Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::nativeMethods
	NativeMethods_t1137985067 * ___nativeMethods_3;

public:
	inline static int32_t get_offset_of_nativeMethods_3() { return static_cast<int32_t>(offsetof(NativeExtension_t4133024928, ___nativeMethods_3)); }
	inline NativeMethods_t1137985067 * get_nativeMethods_3() const { return ___nativeMethods_3; }
	inline NativeMethods_t1137985067 ** get_address_of_nativeMethods_3() { return &___nativeMethods_3; }
	inline void set_nativeMethods_3(NativeMethods_t1137985067 * value)
	{
		___nativeMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&___nativeMethods_3), value);
	}
};

struct NativeExtension_t4133024928_StaticFields
{
public:
	// Grpc.Core.Logging.ILogger Grpc.Core.Internal.NativeExtension::Logger
	RuntimeObject* ___Logger_0;
	// System.Object Grpc.Core.Internal.NativeExtension::staticLock
	RuntimeObject * ___staticLock_1;
	// Grpc.Core.Internal.NativeExtension modreq(System.Runtime.CompilerServices.IsVolatile) Grpc.Core.Internal.NativeExtension::instance
	NativeExtension_t4133024928 * ___instance_2;

public:
	inline static int32_t get_offset_of_Logger_0() { return static_cast<int32_t>(offsetof(NativeExtension_t4133024928_StaticFields, ___Logger_0)); }
	inline RuntimeObject* get_Logger_0() const { return ___Logger_0; }
	inline RuntimeObject** get_address_of_Logger_0() { return &___Logger_0; }
	inline void set_Logger_0(RuntimeObject* value)
	{
		___Logger_0 = value;
		Il2CppCodeGenWriteBarrier((&___Logger_0), value);
	}

	inline static int32_t get_offset_of_staticLock_1() { return static_cast<int32_t>(offsetof(NativeExtension_t4133024928_StaticFields, ___staticLock_1)); }
	inline RuntimeObject * get_staticLock_1() const { return ___staticLock_1; }
	inline RuntimeObject ** get_address_of_staticLock_1() { return &___staticLock_1; }
	inline void set_staticLock_1(RuntimeObject * value)
	{
		___staticLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___staticLock_1), value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(NativeExtension_t4133024928_StaticFields, ___instance_2)); }
	inline NativeExtension_t4133024928 * get_instance_2() const { return ___instance_2; }
	inline NativeExtension_t4133024928 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(NativeExtension_t4133024928 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEXTENSION_T4133024928_H
#ifndef NATIVELOGREDIRECTOR_T1281039030_H
#define NATIVELOGREDIRECTOR_T1281039030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeLogRedirector
struct  NativeLogRedirector_t1281039030  : public RuntimeObject
{
public:

public:
};

struct NativeLogRedirector_t1281039030_StaticFields
{
public:
	// System.Object Grpc.Core.Internal.NativeLogRedirector::staticLock
	RuntimeObject * ___staticLock_0;
	// Grpc.Core.Internal.GprLogDelegate Grpc.Core.Internal.NativeLogRedirector::writeCallback
	GprLogDelegate_t25055494 * ___writeCallback_1;

public:
	inline static int32_t get_offset_of_staticLock_0() { return static_cast<int32_t>(offsetof(NativeLogRedirector_t1281039030_StaticFields, ___staticLock_0)); }
	inline RuntimeObject * get_staticLock_0() const { return ___staticLock_0; }
	inline RuntimeObject ** get_address_of_staticLock_0() { return &___staticLock_0; }
	inline void set_staticLock_0(RuntimeObject * value)
	{
		___staticLock_0 = value;
		Il2CppCodeGenWriteBarrier((&___staticLock_0), value);
	}

	inline static int32_t get_offset_of_writeCallback_1() { return static_cast<int32_t>(offsetof(NativeLogRedirector_t1281039030_StaticFields, ___writeCallback_1)); }
	inline GprLogDelegate_t25055494 * get_writeCallback_1() const { return ___writeCallback_1; }
	inline GprLogDelegate_t25055494 ** get_address_of_writeCallback_1() { return &___writeCallback_1; }
	inline void set_writeCallback_1(GprLogDelegate_t25055494 * value)
	{
		___writeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVELOGREDIRECTOR_T1281039030_H
#ifndef U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY3_T363056240_H
#define U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY3_T363056240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3
struct  U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240  : public RuntimeObject
{
public:
	// Grpc.Core.AuthInterceptorContext Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3::context
	AuthInterceptorContext_t555162081 * ___context_0;
	// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4 Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3::<>f__ref$4
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * ___U3CU3Ef__refU244_1;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240, ___context_0)); }
	inline AuthInterceptorContext_t555162081 * get_context_0() const { return ___context_0; }
	inline AuthInterceptorContext_t555162081 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(AuthInterceptorContext_t555162081 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU244_1() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240, ___U3CU3Ef__refU244_1)); }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * get_U3CU3Ef__refU244_1() const { return ___U3CU3Ef__refU244_1; }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 ** get_address_of_U3CU3Ef__refU244_1() { return &___U3CU3Ef__refU244_1; }
	inline void set_U3CU3Ef__refU244_1(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * value)
	{
		___U3CU3Ef__refU244_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU244_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY3_T363056240_H
#ifndef NATIVEMETHODS_T1137985067_H
#define NATIVEMETHODS_T1137985067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods
struct  NativeMethods_t1137985067  : public RuntimeObject
{
public:
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_init
	grpcsharp_init_delegate_t697069341 * ___grpcsharp_init_1;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_shutdown
	grpcsharp_shutdown_delegate_t1539905248 * ___grpcsharp_shutdown_2;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_version_string
	grpcsharp_version_string_delegate_t3086718951 * ___grpcsharp_version_string_3;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_create
	grpcsharp_batch_context_create_delegate_t4041094647 * ___grpcsharp_batch_context_create_4;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_initial_metadata
	grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * ___grpcsharp_batch_context_recv_initial_metadata_5;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_message_length
	grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * ___grpcsharp_batch_context_recv_message_length_6;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_message_to_buffer
	grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * ___grpcsharp_batch_context_recv_message_to_buffer_7;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_status_on_client_status
	grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * ___grpcsharp_batch_context_recv_status_on_client_status_8;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_status_on_client_details
	grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * ___grpcsharp_batch_context_recv_status_on_client_details_9;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_status_on_client_trailing_metadata
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * ___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_recv_close_on_server_cancelled
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * ___grpcsharp_batch_context_recv_close_on_server_cancelled_11;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_reset
	grpcsharp_batch_context_reset_delegate_t1240336310 * ___grpcsharp_batch_context_reset_12;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_batch_context_destroy
	grpcsharp_batch_context_destroy_delegate_t3097840777 * ___grpcsharp_batch_context_destroy_13;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_create
	grpcsharp_request_call_context_create_delegate_t1071596268 * ___grpcsharp_request_call_context_create_14;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_call
	grpcsharp_request_call_context_call_delegate_t2297854097 * ___grpcsharp_request_call_context_call_15;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_method
	grpcsharp_request_call_context_method_delegate_t1144596552 * ___grpcsharp_request_call_context_method_16;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_host
	grpcsharp_request_call_context_host_delegate_t2701984728 * ___grpcsharp_request_call_context_host_17;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_deadline
	grpcsharp_request_call_context_deadline_delegate_t3662856317 * ___grpcsharp_request_call_context_deadline_18;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_request_metadata
	grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * ___grpcsharp_request_call_context_request_metadata_19;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_reset
	grpcsharp_request_call_context_reset_delegate_t511489013 * ___grpcsharp_request_call_context_reset_20;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_request_call_context_destroy
	grpcsharp_request_call_context_destroy_delegate_t2729585044 * ___grpcsharp_request_call_context_destroy_21;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_composite_call_credentials_create
	grpcsharp_composite_call_credentials_create_delegate_t3738706681 * ___grpcsharp_composite_call_credentials_create_22;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_credentials_release
	grpcsharp_call_credentials_release_delegate_t4173796462 * ___grpcsharp_call_credentials_release_23;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_cancel
	grpcsharp_call_cancel_delegate_t1770075385 * ___grpcsharp_call_cancel_24;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_cancel_with_status
	grpcsharp_call_cancel_with_status_delegate_t322311674 * ___grpcsharp_call_cancel_with_status_25;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_start_unary
	grpcsharp_call_start_unary_delegate_t1332494428 * ___grpcsharp_call_start_unary_26;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_start_client_streaming
	grpcsharp_call_start_client_streaming_delegate_t186521236 * ___grpcsharp_call_start_client_streaming_27;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_start_server_streaming
	grpcsharp_call_start_server_streaming_delegate_t941302023 * ___grpcsharp_call_start_server_streaming_28;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_start_duplex_streaming
	grpcsharp_call_start_duplex_streaming_delegate_t668243240 * ___grpcsharp_call_start_duplex_streaming_29;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_send_message
	grpcsharp_call_send_message_delegate_t80977843 * ___grpcsharp_call_send_message_30;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_send_close_from_client
	grpcsharp_call_send_close_from_client_delegate_t3404740706 * ___grpcsharp_call_send_close_from_client_31;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_send_status_from_server
	grpcsharp_call_send_status_from_server_delegate_t1281609886 * ___grpcsharp_call_send_status_from_server_32;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_recv_message
	grpcsharp_call_recv_message_delegate_t3263680702 * ___grpcsharp_call_recv_message_33;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_recv_initial_metadata
	grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * ___grpcsharp_call_recv_initial_metadata_34;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_start_serverside
	grpcsharp_call_start_serverside_delegate_t702333229 * ___grpcsharp_call_start_serverside_35;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_send_initial_metadata
	grpcsharp_call_send_initial_metadata_delegate_t2871837368 * ___grpcsharp_call_send_initial_metadata_36;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_set_credentials
	grpcsharp_call_set_credentials_delegate_t2164951723 * ___grpcsharp_call_set_credentials_37;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_get_peer
	grpcsharp_call_get_peer_delegate_t4293430173 * ___grpcsharp_call_get_peer_38;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_destroy
	grpcsharp_call_destroy_delegate_t3472236717 * ___grpcsharp_call_destroy_39;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_args_create
	grpcsharp_channel_args_create_delegate_t223697083 * ___grpcsharp_channel_args_create_40;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_args_set_string
	grpcsharp_channel_args_set_string_delegate_t2671812739 * ___grpcsharp_channel_args_set_string_41;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_args_set_integer
	grpcsharp_channel_args_set_integer_delegate_t1374818234 * ___grpcsharp_channel_args_set_integer_42;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_args_destroy
	grpcsharp_channel_args_destroy_delegate_t3019422610 * ___grpcsharp_channel_args_destroy_43;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_override_default_ssl_roots
	grpcsharp_override_default_ssl_roots_delegate_t2112048917 * ___grpcsharp_override_default_ssl_roots_44;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_ssl_credentials_create
	grpcsharp_ssl_credentials_create_delegate_t1837265019 * ___grpcsharp_ssl_credentials_create_45;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_composite_channel_credentials_create
	grpcsharp_composite_channel_credentials_create_delegate_t11741719 * ___grpcsharp_composite_channel_credentials_create_46;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_credentials_release
	grpcsharp_channel_credentials_release_delegate_t3260923539 * ___grpcsharp_channel_credentials_release_47;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_insecure_channel_create
	grpcsharp_insecure_channel_create_delegate_t1754677822 * ___grpcsharp_insecure_channel_create_48;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_secure_channel_create
	grpcsharp_secure_channel_create_delegate_t858919073 * ___grpcsharp_secure_channel_create_49;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_create_call
	grpcsharp_channel_create_call_delegate_t1689755209 * ___grpcsharp_channel_create_call_50;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_check_connectivity_state
	grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * ___grpcsharp_channel_check_connectivity_state_51;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_watch_connectivity_state
	grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * ___grpcsharp_channel_watch_connectivity_state_52;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_get_target
	grpcsharp_channel_get_target_delegate_t1912627058 * ___grpcsharp_channel_get_target_53;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_channel_destroy
	grpcsharp_channel_destroy_delegate_t1789251192 * ___grpcsharp_channel_destroy_54;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_sizeof_grpc_event
	grpcsharp_sizeof_grpc_event_delegate_t4083509947 * ___grpcsharp_sizeof_grpc_event_55;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_create_async
	grpcsharp_completion_queue_create_async_delegate_t360079728 * ___grpcsharp_completion_queue_create_async_56;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_create_sync
	grpcsharp_completion_queue_create_sync_delegate_t1808910508 * ___grpcsharp_completion_queue_create_sync_57;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_shutdown
	grpcsharp_completion_queue_shutdown_delegate_t248163633 * ___grpcsharp_completion_queue_shutdown_58;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_next
	grpcsharp_completion_queue_next_delegate_t3269686616 * ___grpcsharp_completion_queue_next_59;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_pluck
	grpcsharp_completion_queue_pluck_delegate_t285374971 * ___grpcsharp_completion_queue_pluck_60;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_completion_queue_destroy
	grpcsharp_completion_queue_destroy_delegate_t1464055640 * ___grpcsharp_completion_queue_destroy_61;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate Grpc.Core.Internal.NativeMethods::gprsharp_free
	gprsharp_free_delegate_t3453134242 * ___gprsharp_free_62;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_create
	grpcsharp_metadata_array_create_delegate_t2940265924 * ___grpcsharp_metadata_array_create_63;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_add
	grpcsharp_metadata_array_add_delegate_t281551042 * ___grpcsharp_metadata_array_add_64;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_count
	grpcsharp_metadata_array_count_delegate_t1171955796 * ___grpcsharp_metadata_array_count_65;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_get_key
	grpcsharp_metadata_array_get_key_delegate_t2312063556 * ___grpcsharp_metadata_array_get_key_66;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_get_value
	grpcsharp_metadata_array_get_value_delegate_t2215973087 * ___grpcsharp_metadata_array_get_value_67;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_array_destroy_full
	grpcsharp_metadata_array_destroy_full_delegate_t46908578 * ___grpcsharp_metadata_array_destroy_full_68;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_redirect_log
	grpcsharp_redirect_log_delegate_t1051680661 * ___grpcsharp_redirect_log_69;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_credentials_create_from_plugin
	grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * ___grpcsharp_metadata_credentials_create_from_plugin_70;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_metadata_credentials_notify_from_plugin
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * ___grpcsharp_metadata_credentials_notify_from_plugin_71;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_ssl_server_credentials_create
	grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * ___grpcsharp_ssl_server_credentials_create_72;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_credentials_release
	grpcsharp_server_credentials_release_delegate_t2095714663 * ___grpcsharp_server_credentials_release_73;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_create
	grpcsharp_server_create_delegate_t4127831655 * ___grpcsharp_server_create_74;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_register_completion_queue
	grpcsharp_server_register_completion_queue_delegate_t2206715366 * ___grpcsharp_server_register_completion_queue_75;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_add_insecure_http2_port
	grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * ___grpcsharp_server_add_insecure_http2_port_76;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_add_secure_http2_port
	grpcsharp_server_add_secure_http2_port_delegate_t102470377 * ___grpcsharp_server_add_secure_http2_port_77;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_start
	grpcsharp_server_start_delegate_t4158963393 * ___grpcsharp_server_start_78;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_request_call
	grpcsharp_server_request_call_delegate_t2796155047 * ___grpcsharp_server_request_call_79;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_cancel_all_calls
	grpcsharp_server_cancel_all_calls_delegate_t4278007468 * ___grpcsharp_server_cancel_all_calls_80;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_shutdown_and_notify_callback
	grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * ___grpcsharp_server_shutdown_and_notify_callback_81;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_server_destroy
	grpcsharp_server_destroy_delegate_t2436759005 * ___grpcsharp_server_destroy_82;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_call_auth_context
	grpcsharp_call_auth_context_delegate_t3089219098 * ___grpcsharp_call_auth_context_83;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_auth_context_peer_identity_property_name
	grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * ___grpcsharp_auth_context_peer_identity_property_name_84;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_auth_context_property_iterator
	grpcsharp_auth_context_property_iterator_delegate_t641318545 * ___grpcsharp_auth_context_property_iterator_85;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_auth_property_iterator_next
	grpcsharp_auth_property_iterator_next_delegate_t4267042899 * ___grpcsharp_auth_property_iterator_next_86;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_auth_context_release
	grpcsharp_auth_context_release_delegate_t83664199 * ___grpcsharp_auth_context_release_87;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate Grpc.Core.Internal.NativeMethods::gprsharp_now
	gprsharp_now_delegate_t2976584151 * ___gprsharp_now_88;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate Grpc.Core.Internal.NativeMethods::gprsharp_inf_future
	gprsharp_inf_future_delegate_t1471086569 * ___gprsharp_inf_future_89;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate Grpc.Core.Internal.NativeMethods::gprsharp_inf_past
	gprsharp_inf_past_delegate_t3920462529 * ___gprsharp_inf_past_90;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate Grpc.Core.Internal.NativeMethods::gprsharp_convert_clock_type
	gprsharp_convert_clock_type_delegate_t1755859444 * ___gprsharp_convert_clock_type_91;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate Grpc.Core.Internal.NativeMethods::gprsharp_sizeof_timespec
	gprsharp_sizeof_timespec_delegate_t1822509259 * ___gprsharp_sizeof_timespec_92;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_test_callback
	grpcsharp_test_callback_delegate_t521268474 * ___grpcsharp_test_callback_93;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_test_nop
	grpcsharp_test_nop_delegate_t1977043325 * ___grpcsharp_test_nop_94;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate Grpc.Core.Internal.NativeMethods::grpcsharp_test_override_method
	grpcsharp_test_override_method_delegate_t51326422 * ___grpcsharp_test_override_method_95;

public:
	inline static int32_t get_offset_of_grpcsharp_init_1() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_init_1)); }
	inline grpcsharp_init_delegate_t697069341 * get_grpcsharp_init_1() const { return ___grpcsharp_init_1; }
	inline grpcsharp_init_delegate_t697069341 ** get_address_of_grpcsharp_init_1() { return &___grpcsharp_init_1; }
	inline void set_grpcsharp_init_1(grpcsharp_init_delegate_t697069341 * value)
	{
		___grpcsharp_init_1 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_init_1), value);
	}

	inline static int32_t get_offset_of_grpcsharp_shutdown_2() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_shutdown_2)); }
	inline grpcsharp_shutdown_delegate_t1539905248 * get_grpcsharp_shutdown_2() const { return ___grpcsharp_shutdown_2; }
	inline grpcsharp_shutdown_delegate_t1539905248 ** get_address_of_grpcsharp_shutdown_2() { return &___grpcsharp_shutdown_2; }
	inline void set_grpcsharp_shutdown_2(grpcsharp_shutdown_delegate_t1539905248 * value)
	{
		___grpcsharp_shutdown_2 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_shutdown_2), value);
	}

	inline static int32_t get_offset_of_grpcsharp_version_string_3() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_version_string_3)); }
	inline grpcsharp_version_string_delegate_t3086718951 * get_grpcsharp_version_string_3() const { return ___grpcsharp_version_string_3; }
	inline grpcsharp_version_string_delegate_t3086718951 ** get_address_of_grpcsharp_version_string_3() { return &___grpcsharp_version_string_3; }
	inline void set_grpcsharp_version_string_3(grpcsharp_version_string_delegate_t3086718951 * value)
	{
		___grpcsharp_version_string_3 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_version_string_3), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_create_4() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_create_4)); }
	inline grpcsharp_batch_context_create_delegate_t4041094647 * get_grpcsharp_batch_context_create_4() const { return ___grpcsharp_batch_context_create_4; }
	inline grpcsharp_batch_context_create_delegate_t4041094647 ** get_address_of_grpcsharp_batch_context_create_4() { return &___grpcsharp_batch_context_create_4; }
	inline void set_grpcsharp_batch_context_create_4(grpcsharp_batch_context_create_delegate_t4041094647 * value)
	{
		___grpcsharp_batch_context_create_4 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_create_4), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_initial_metadata_5() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_initial_metadata_5)); }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * get_grpcsharp_batch_context_recv_initial_metadata_5() const { return ___grpcsharp_batch_context_recv_initial_metadata_5; }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 ** get_address_of_grpcsharp_batch_context_recv_initial_metadata_5() { return &___grpcsharp_batch_context_recv_initial_metadata_5; }
	inline void set_grpcsharp_batch_context_recv_initial_metadata_5(grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * value)
	{
		___grpcsharp_batch_context_recv_initial_metadata_5 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_initial_metadata_5), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_message_length_6() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_message_length_6)); }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * get_grpcsharp_batch_context_recv_message_length_6() const { return ___grpcsharp_batch_context_recv_message_length_6; }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 ** get_address_of_grpcsharp_batch_context_recv_message_length_6() { return &___grpcsharp_batch_context_recv_message_length_6; }
	inline void set_grpcsharp_batch_context_recv_message_length_6(grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * value)
	{
		___grpcsharp_batch_context_recv_message_length_6 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_message_length_6), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_message_to_buffer_7() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_message_to_buffer_7)); }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * get_grpcsharp_batch_context_recv_message_to_buffer_7() const { return ___grpcsharp_batch_context_recv_message_to_buffer_7; }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 ** get_address_of_grpcsharp_batch_context_recv_message_to_buffer_7() { return &___grpcsharp_batch_context_recv_message_to_buffer_7; }
	inline void set_grpcsharp_batch_context_recv_message_to_buffer_7(grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * value)
	{
		___grpcsharp_batch_context_recv_message_to_buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_message_to_buffer_7), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_status_on_client_status_8() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_status_on_client_status_8)); }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * get_grpcsharp_batch_context_recv_status_on_client_status_8() const { return ___grpcsharp_batch_context_recv_status_on_client_status_8; }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 ** get_address_of_grpcsharp_batch_context_recv_status_on_client_status_8() { return &___grpcsharp_batch_context_recv_status_on_client_status_8; }
	inline void set_grpcsharp_batch_context_recv_status_on_client_status_8(grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * value)
	{
		___grpcsharp_batch_context_recv_status_on_client_status_8 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_status_on_client_status_8), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_status_on_client_details_9() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_status_on_client_details_9)); }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * get_grpcsharp_batch_context_recv_status_on_client_details_9() const { return ___grpcsharp_batch_context_recv_status_on_client_details_9; }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 ** get_address_of_grpcsharp_batch_context_recv_status_on_client_details_9() { return &___grpcsharp_batch_context_recv_status_on_client_details_9; }
	inline void set_grpcsharp_batch_context_recv_status_on_client_details_9(grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * value)
	{
		___grpcsharp_batch_context_recv_status_on_client_details_9 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_status_on_client_details_9), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10)); }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * get_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10() const { return ___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10; }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 ** get_address_of_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10() { return &___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10; }
	inline void set_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10(grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * value)
	{
		___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_recv_close_on_server_cancelled_11() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_recv_close_on_server_cancelled_11)); }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * get_grpcsharp_batch_context_recv_close_on_server_cancelled_11() const { return ___grpcsharp_batch_context_recv_close_on_server_cancelled_11; }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 ** get_address_of_grpcsharp_batch_context_recv_close_on_server_cancelled_11() { return &___grpcsharp_batch_context_recv_close_on_server_cancelled_11; }
	inline void set_grpcsharp_batch_context_recv_close_on_server_cancelled_11(grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * value)
	{
		___grpcsharp_batch_context_recv_close_on_server_cancelled_11 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_recv_close_on_server_cancelled_11), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_reset_12() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_reset_12)); }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 * get_grpcsharp_batch_context_reset_12() const { return ___grpcsharp_batch_context_reset_12; }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 ** get_address_of_grpcsharp_batch_context_reset_12() { return &___grpcsharp_batch_context_reset_12; }
	inline void set_grpcsharp_batch_context_reset_12(grpcsharp_batch_context_reset_delegate_t1240336310 * value)
	{
		___grpcsharp_batch_context_reset_12 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_reset_12), value);
	}

	inline static int32_t get_offset_of_grpcsharp_batch_context_destroy_13() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_batch_context_destroy_13)); }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 * get_grpcsharp_batch_context_destroy_13() const { return ___grpcsharp_batch_context_destroy_13; }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 ** get_address_of_grpcsharp_batch_context_destroy_13() { return &___grpcsharp_batch_context_destroy_13; }
	inline void set_grpcsharp_batch_context_destroy_13(grpcsharp_batch_context_destroy_delegate_t3097840777 * value)
	{
		___grpcsharp_batch_context_destroy_13 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_batch_context_destroy_13), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_create_14() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_create_14)); }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 * get_grpcsharp_request_call_context_create_14() const { return ___grpcsharp_request_call_context_create_14; }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 ** get_address_of_grpcsharp_request_call_context_create_14() { return &___grpcsharp_request_call_context_create_14; }
	inline void set_grpcsharp_request_call_context_create_14(grpcsharp_request_call_context_create_delegate_t1071596268 * value)
	{
		___grpcsharp_request_call_context_create_14 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_create_14), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_call_15() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_call_15)); }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 * get_grpcsharp_request_call_context_call_15() const { return ___grpcsharp_request_call_context_call_15; }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 ** get_address_of_grpcsharp_request_call_context_call_15() { return &___grpcsharp_request_call_context_call_15; }
	inline void set_grpcsharp_request_call_context_call_15(grpcsharp_request_call_context_call_delegate_t2297854097 * value)
	{
		___grpcsharp_request_call_context_call_15 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_call_15), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_method_16() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_method_16)); }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 * get_grpcsharp_request_call_context_method_16() const { return ___grpcsharp_request_call_context_method_16; }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 ** get_address_of_grpcsharp_request_call_context_method_16() { return &___grpcsharp_request_call_context_method_16; }
	inline void set_grpcsharp_request_call_context_method_16(grpcsharp_request_call_context_method_delegate_t1144596552 * value)
	{
		___grpcsharp_request_call_context_method_16 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_method_16), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_host_17() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_host_17)); }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 * get_grpcsharp_request_call_context_host_17() const { return ___grpcsharp_request_call_context_host_17; }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 ** get_address_of_grpcsharp_request_call_context_host_17() { return &___grpcsharp_request_call_context_host_17; }
	inline void set_grpcsharp_request_call_context_host_17(grpcsharp_request_call_context_host_delegate_t2701984728 * value)
	{
		___grpcsharp_request_call_context_host_17 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_host_17), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_deadline_18() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_deadline_18)); }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 * get_grpcsharp_request_call_context_deadline_18() const { return ___grpcsharp_request_call_context_deadline_18; }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 ** get_address_of_grpcsharp_request_call_context_deadline_18() { return &___grpcsharp_request_call_context_deadline_18; }
	inline void set_grpcsharp_request_call_context_deadline_18(grpcsharp_request_call_context_deadline_delegate_t3662856317 * value)
	{
		___grpcsharp_request_call_context_deadline_18 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_deadline_18), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_request_metadata_19() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_request_metadata_19)); }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * get_grpcsharp_request_call_context_request_metadata_19() const { return ___grpcsharp_request_call_context_request_metadata_19; }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 ** get_address_of_grpcsharp_request_call_context_request_metadata_19() { return &___grpcsharp_request_call_context_request_metadata_19; }
	inline void set_grpcsharp_request_call_context_request_metadata_19(grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * value)
	{
		___grpcsharp_request_call_context_request_metadata_19 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_request_metadata_19), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_reset_20() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_reset_20)); }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 * get_grpcsharp_request_call_context_reset_20() const { return ___grpcsharp_request_call_context_reset_20; }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 ** get_address_of_grpcsharp_request_call_context_reset_20() { return &___grpcsharp_request_call_context_reset_20; }
	inline void set_grpcsharp_request_call_context_reset_20(grpcsharp_request_call_context_reset_delegate_t511489013 * value)
	{
		___grpcsharp_request_call_context_reset_20 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_reset_20), value);
	}

	inline static int32_t get_offset_of_grpcsharp_request_call_context_destroy_21() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_request_call_context_destroy_21)); }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 * get_grpcsharp_request_call_context_destroy_21() const { return ___grpcsharp_request_call_context_destroy_21; }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 ** get_address_of_grpcsharp_request_call_context_destroy_21() { return &___grpcsharp_request_call_context_destroy_21; }
	inline void set_grpcsharp_request_call_context_destroy_21(grpcsharp_request_call_context_destroy_delegate_t2729585044 * value)
	{
		___grpcsharp_request_call_context_destroy_21 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_request_call_context_destroy_21), value);
	}

	inline static int32_t get_offset_of_grpcsharp_composite_call_credentials_create_22() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_composite_call_credentials_create_22)); }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 * get_grpcsharp_composite_call_credentials_create_22() const { return ___grpcsharp_composite_call_credentials_create_22; }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 ** get_address_of_grpcsharp_composite_call_credentials_create_22() { return &___grpcsharp_composite_call_credentials_create_22; }
	inline void set_grpcsharp_composite_call_credentials_create_22(grpcsharp_composite_call_credentials_create_delegate_t3738706681 * value)
	{
		___grpcsharp_composite_call_credentials_create_22 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_composite_call_credentials_create_22), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_credentials_release_23() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_credentials_release_23)); }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 * get_grpcsharp_call_credentials_release_23() const { return ___grpcsharp_call_credentials_release_23; }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 ** get_address_of_grpcsharp_call_credentials_release_23() { return &___grpcsharp_call_credentials_release_23; }
	inline void set_grpcsharp_call_credentials_release_23(grpcsharp_call_credentials_release_delegate_t4173796462 * value)
	{
		___grpcsharp_call_credentials_release_23 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_credentials_release_23), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_cancel_24() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_cancel_24)); }
	inline grpcsharp_call_cancel_delegate_t1770075385 * get_grpcsharp_call_cancel_24() const { return ___grpcsharp_call_cancel_24; }
	inline grpcsharp_call_cancel_delegate_t1770075385 ** get_address_of_grpcsharp_call_cancel_24() { return &___grpcsharp_call_cancel_24; }
	inline void set_grpcsharp_call_cancel_24(grpcsharp_call_cancel_delegate_t1770075385 * value)
	{
		___grpcsharp_call_cancel_24 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_cancel_24), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_cancel_with_status_25() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_cancel_with_status_25)); }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 * get_grpcsharp_call_cancel_with_status_25() const { return ___grpcsharp_call_cancel_with_status_25; }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 ** get_address_of_grpcsharp_call_cancel_with_status_25() { return &___grpcsharp_call_cancel_with_status_25; }
	inline void set_grpcsharp_call_cancel_with_status_25(grpcsharp_call_cancel_with_status_delegate_t322311674 * value)
	{
		___grpcsharp_call_cancel_with_status_25 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_cancel_with_status_25), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_start_unary_26() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_start_unary_26)); }
	inline grpcsharp_call_start_unary_delegate_t1332494428 * get_grpcsharp_call_start_unary_26() const { return ___grpcsharp_call_start_unary_26; }
	inline grpcsharp_call_start_unary_delegate_t1332494428 ** get_address_of_grpcsharp_call_start_unary_26() { return &___grpcsharp_call_start_unary_26; }
	inline void set_grpcsharp_call_start_unary_26(grpcsharp_call_start_unary_delegate_t1332494428 * value)
	{
		___grpcsharp_call_start_unary_26 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_start_unary_26), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_start_client_streaming_27() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_start_client_streaming_27)); }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 * get_grpcsharp_call_start_client_streaming_27() const { return ___grpcsharp_call_start_client_streaming_27; }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 ** get_address_of_grpcsharp_call_start_client_streaming_27() { return &___grpcsharp_call_start_client_streaming_27; }
	inline void set_grpcsharp_call_start_client_streaming_27(grpcsharp_call_start_client_streaming_delegate_t186521236 * value)
	{
		___grpcsharp_call_start_client_streaming_27 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_start_client_streaming_27), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_start_server_streaming_28() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_start_server_streaming_28)); }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 * get_grpcsharp_call_start_server_streaming_28() const { return ___grpcsharp_call_start_server_streaming_28; }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 ** get_address_of_grpcsharp_call_start_server_streaming_28() { return &___grpcsharp_call_start_server_streaming_28; }
	inline void set_grpcsharp_call_start_server_streaming_28(grpcsharp_call_start_server_streaming_delegate_t941302023 * value)
	{
		___grpcsharp_call_start_server_streaming_28 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_start_server_streaming_28), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_start_duplex_streaming_29() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_start_duplex_streaming_29)); }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 * get_grpcsharp_call_start_duplex_streaming_29() const { return ___grpcsharp_call_start_duplex_streaming_29; }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 ** get_address_of_grpcsharp_call_start_duplex_streaming_29() { return &___grpcsharp_call_start_duplex_streaming_29; }
	inline void set_grpcsharp_call_start_duplex_streaming_29(grpcsharp_call_start_duplex_streaming_delegate_t668243240 * value)
	{
		___grpcsharp_call_start_duplex_streaming_29 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_start_duplex_streaming_29), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_send_message_30() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_send_message_30)); }
	inline grpcsharp_call_send_message_delegate_t80977843 * get_grpcsharp_call_send_message_30() const { return ___grpcsharp_call_send_message_30; }
	inline grpcsharp_call_send_message_delegate_t80977843 ** get_address_of_grpcsharp_call_send_message_30() { return &___grpcsharp_call_send_message_30; }
	inline void set_grpcsharp_call_send_message_30(grpcsharp_call_send_message_delegate_t80977843 * value)
	{
		___grpcsharp_call_send_message_30 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_send_message_30), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_send_close_from_client_31() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_send_close_from_client_31)); }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 * get_grpcsharp_call_send_close_from_client_31() const { return ___grpcsharp_call_send_close_from_client_31; }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 ** get_address_of_grpcsharp_call_send_close_from_client_31() { return &___grpcsharp_call_send_close_from_client_31; }
	inline void set_grpcsharp_call_send_close_from_client_31(grpcsharp_call_send_close_from_client_delegate_t3404740706 * value)
	{
		___grpcsharp_call_send_close_from_client_31 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_send_close_from_client_31), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_send_status_from_server_32() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_send_status_from_server_32)); }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 * get_grpcsharp_call_send_status_from_server_32() const { return ___grpcsharp_call_send_status_from_server_32; }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 ** get_address_of_grpcsharp_call_send_status_from_server_32() { return &___grpcsharp_call_send_status_from_server_32; }
	inline void set_grpcsharp_call_send_status_from_server_32(grpcsharp_call_send_status_from_server_delegate_t1281609886 * value)
	{
		___grpcsharp_call_send_status_from_server_32 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_send_status_from_server_32), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_recv_message_33() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_recv_message_33)); }
	inline grpcsharp_call_recv_message_delegate_t3263680702 * get_grpcsharp_call_recv_message_33() const { return ___grpcsharp_call_recv_message_33; }
	inline grpcsharp_call_recv_message_delegate_t3263680702 ** get_address_of_grpcsharp_call_recv_message_33() { return &___grpcsharp_call_recv_message_33; }
	inline void set_grpcsharp_call_recv_message_33(grpcsharp_call_recv_message_delegate_t3263680702 * value)
	{
		___grpcsharp_call_recv_message_33 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_recv_message_33), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_recv_initial_metadata_34() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_recv_initial_metadata_34)); }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * get_grpcsharp_call_recv_initial_metadata_34() const { return ___grpcsharp_call_recv_initial_metadata_34; }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 ** get_address_of_grpcsharp_call_recv_initial_metadata_34() { return &___grpcsharp_call_recv_initial_metadata_34; }
	inline void set_grpcsharp_call_recv_initial_metadata_34(grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * value)
	{
		___grpcsharp_call_recv_initial_metadata_34 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_recv_initial_metadata_34), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_start_serverside_35() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_start_serverside_35)); }
	inline grpcsharp_call_start_serverside_delegate_t702333229 * get_grpcsharp_call_start_serverside_35() const { return ___grpcsharp_call_start_serverside_35; }
	inline grpcsharp_call_start_serverside_delegate_t702333229 ** get_address_of_grpcsharp_call_start_serverside_35() { return &___grpcsharp_call_start_serverside_35; }
	inline void set_grpcsharp_call_start_serverside_35(grpcsharp_call_start_serverside_delegate_t702333229 * value)
	{
		___grpcsharp_call_start_serverside_35 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_start_serverside_35), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_send_initial_metadata_36() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_send_initial_metadata_36)); }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 * get_grpcsharp_call_send_initial_metadata_36() const { return ___grpcsharp_call_send_initial_metadata_36; }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 ** get_address_of_grpcsharp_call_send_initial_metadata_36() { return &___grpcsharp_call_send_initial_metadata_36; }
	inline void set_grpcsharp_call_send_initial_metadata_36(grpcsharp_call_send_initial_metadata_delegate_t2871837368 * value)
	{
		___grpcsharp_call_send_initial_metadata_36 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_send_initial_metadata_36), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_set_credentials_37() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_set_credentials_37)); }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 * get_grpcsharp_call_set_credentials_37() const { return ___grpcsharp_call_set_credentials_37; }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 ** get_address_of_grpcsharp_call_set_credentials_37() { return &___grpcsharp_call_set_credentials_37; }
	inline void set_grpcsharp_call_set_credentials_37(grpcsharp_call_set_credentials_delegate_t2164951723 * value)
	{
		___grpcsharp_call_set_credentials_37 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_set_credentials_37), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_get_peer_38() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_get_peer_38)); }
	inline grpcsharp_call_get_peer_delegate_t4293430173 * get_grpcsharp_call_get_peer_38() const { return ___grpcsharp_call_get_peer_38; }
	inline grpcsharp_call_get_peer_delegate_t4293430173 ** get_address_of_grpcsharp_call_get_peer_38() { return &___grpcsharp_call_get_peer_38; }
	inline void set_grpcsharp_call_get_peer_38(grpcsharp_call_get_peer_delegate_t4293430173 * value)
	{
		___grpcsharp_call_get_peer_38 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_get_peer_38), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_destroy_39() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_destroy_39)); }
	inline grpcsharp_call_destroy_delegate_t3472236717 * get_grpcsharp_call_destroy_39() const { return ___grpcsharp_call_destroy_39; }
	inline grpcsharp_call_destroy_delegate_t3472236717 ** get_address_of_grpcsharp_call_destroy_39() { return &___grpcsharp_call_destroy_39; }
	inline void set_grpcsharp_call_destroy_39(grpcsharp_call_destroy_delegate_t3472236717 * value)
	{
		___grpcsharp_call_destroy_39 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_destroy_39), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_args_create_40() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_args_create_40)); }
	inline grpcsharp_channel_args_create_delegate_t223697083 * get_grpcsharp_channel_args_create_40() const { return ___grpcsharp_channel_args_create_40; }
	inline grpcsharp_channel_args_create_delegate_t223697083 ** get_address_of_grpcsharp_channel_args_create_40() { return &___grpcsharp_channel_args_create_40; }
	inline void set_grpcsharp_channel_args_create_40(grpcsharp_channel_args_create_delegate_t223697083 * value)
	{
		___grpcsharp_channel_args_create_40 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_args_create_40), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_args_set_string_41() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_args_set_string_41)); }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 * get_grpcsharp_channel_args_set_string_41() const { return ___grpcsharp_channel_args_set_string_41; }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 ** get_address_of_grpcsharp_channel_args_set_string_41() { return &___grpcsharp_channel_args_set_string_41; }
	inline void set_grpcsharp_channel_args_set_string_41(grpcsharp_channel_args_set_string_delegate_t2671812739 * value)
	{
		___grpcsharp_channel_args_set_string_41 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_args_set_string_41), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_args_set_integer_42() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_args_set_integer_42)); }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 * get_grpcsharp_channel_args_set_integer_42() const { return ___grpcsharp_channel_args_set_integer_42; }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 ** get_address_of_grpcsharp_channel_args_set_integer_42() { return &___grpcsharp_channel_args_set_integer_42; }
	inline void set_grpcsharp_channel_args_set_integer_42(grpcsharp_channel_args_set_integer_delegate_t1374818234 * value)
	{
		___grpcsharp_channel_args_set_integer_42 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_args_set_integer_42), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_args_destroy_43() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_args_destroy_43)); }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 * get_grpcsharp_channel_args_destroy_43() const { return ___grpcsharp_channel_args_destroy_43; }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 ** get_address_of_grpcsharp_channel_args_destroy_43() { return &___grpcsharp_channel_args_destroy_43; }
	inline void set_grpcsharp_channel_args_destroy_43(grpcsharp_channel_args_destroy_delegate_t3019422610 * value)
	{
		___grpcsharp_channel_args_destroy_43 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_args_destroy_43), value);
	}

	inline static int32_t get_offset_of_grpcsharp_override_default_ssl_roots_44() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_override_default_ssl_roots_44)); }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 * get_grpcsharp_override_default_ssl_roots_44() const { return ___grpcsharp_override_default_ssl_roots_44; }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 ** get_address_of_grpcsharp_override_default_ssl_roots_44() { return &___grpcsharp_override_default_ssl_roots_44; }
	inline void set_grpcsharp_override_default_ssl_roots_44(grpcsharp_override_default_ssl_roots_delegate_t2112048917 * value)
	{
		___grpcsharp_override_default_ssl_roots_44 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_override_default_ssl_roots_44), value);
	}

	inline static int32_t get_offset_of_grpcsharp_ssl_credentials_create_45() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_ssl_credentials_create_45)); }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 * get_grpcsharp_ssl_credentials_create_45() const { return ___grpcsharp_ssl_credentials_create_45; }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 ** get_address_of_grpcsharp_ssl_credentials_create_45() { return &___grpcsharp_ssl_credentials_create_45; }
	inline void set_grpcsharp_ssl_credentials_create_45(grpcsharp_ssl_credentials_create_delegate_t1837265019 * value)
	{
		___grpcsharp_ssl_credentials_create_45 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_ssl_credentials_create_45), value);
	}

	inline static int32_t get_offset_of_grpcsharp_composite_channel_credentials_create_46() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_composite_channel_credentials_create_46)); }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 * get_grpcsharp_composite_channel_credentials_create_46() const { return ___grpcsharp_composite_channel_credentials_create_46; }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 ** get_address_of_grpcsharp_composite_channel_credentials_create_46() { return &___grpcsharp_composite_channel_credentials_create_46; }
	inline void set_grpcsharp_composite_channel_credentials_create_46(grpcsharp_composite_channel_credentials_create_delegate_t11741719 * value)
	{
		___grpcsharp_composite_channel_credentials_create_46 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_composite_channel_credentials_create_46), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_credentials_release_47() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_credentials_release_47)); }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 * get_grpcsharp_channel_credentials_release_47() const { return ___grpcsharp_channel_credentials_release_47; }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 ** get_address_of_grpcsharp_channel_credentials_release_47() { return &___grpcsharp_channel_credentials_release_47; }
	inline void set_grpcsharp_channel_credentials_release_47(grpcsharp_channel_credentials_release_delegate_t3260923539 * value)
	{
		___grpcsharp_channel_credentials_release_47 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_credentials_release_47), value);
	}

	inline static int32_t get_offset_of_grpcsharp_insecure_channel_create_48() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_insecure_channel_create_48)); }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 * get_grpcsharp_insecure_channel_create_48() const { return ___grpcsharp_insecure_channel_create_48; }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 ** get_address_of_grpcsharp_insecure_channel_create_48() { return &___grpcsharp_insecure_channel_create_48; }
	inline void set_grpcsharp_insecure_channel_create_48(grpcsharp_insecure_channel_create_delegate_t1754677822 * value)
	{
		___grpcsharp_insecure_channel_create_48 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_insecure_channel_create_48), value);
	}

	inline static int32_t get_offset_of_grpcsharp_secure_channel_create_49() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_secure_channel_create_49)); }
	inline grpcsharp_secure_channel_create_delegate_t858919073 * get_grpcsharp_secure_channel_create_49() const { return ___grpcsharp_secure_channel_create_49; }
	inline grpcsharp_secure_channel_create_delegate_t858919073 ** get_address_of_grpcsharp_secure_channel_create_49() { return &___grpcsharp_secure_channel_create_49; }
	inline void set_grpcsharp_secure_channel_create_49(grpcsharp_secure_channel_create_delegate_t858919073 * value)
	{
		___grpcsharp_secure_channel_create_49 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_secure_channel_create_49), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_create_call_50() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_create_call_50)); }
	inline grpcsharp_channel_create_call_delegate_t1689755209 * get_grpcsharp_channel_create_call_50() const { return ___grpcsharp_channel_create_call_50; }
	inline grpcsharp_channel_create_call_delegate_t1689755209 ** get_address_of_grpcsharp_channel_create_call_50() { return &___grpcsharp_channel_create_call_50; }
	inline void set_grpcsharp_channel_create_call_50(grpcsharp_channel_create_call_delegate_t1689755209 * value)
	{
		___grpcsharp_channel_create_call_50 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_create_call_50), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_check_connectivity_state_51() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_check_connectivity_state_51)); }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * get_grpcsharp_channel_check_connectivity_state_51() const { return ___grpcsharp_channel_check_connectivity_state_51; }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 ** get_address_of_grpcsharp_channel_check_connectivity_state_51() { return &___grpcsharp_channel_check_connectivity_state_51; }
	inline void set_grpcsharp_channel_check_connectivity_state_51(grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * value)
	{
		___grpcsharp_channel_check_connectivity_state_51 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_check_connectivity_state_51), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_watch_connectivity_state_52() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_watch_connectivity_state_52)); }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * get_grpcsharp_channel_watch_connectivity_state_52() const { return ___grpcsharp_channel_watch_connectivity_state_52; }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 ** get_address_of_grpcsharp_channel_watch_connectivity_state_52() { return &___grpcsharp_channel_watch_connectivity_state_52; }
	inline void set_grpcsharp_channel_watch_connectivity_state_52(grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * value)
	{
		___grpcsharp_channel_watch_connectivity_state_52 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_watch_connectivity_state_52), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_get_target_53() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_get_target_53)); }
	inline grpcsharp_channel_get_target_delegate_t1912627058 * get_grpcsharp_channel_get_target_53() const { return ___grpcsharp_channel_get_target_53; }
	inline grpcsharp_channel_get_target_delegate_t1912627058 ** get_address_of_grpcsharp_channel_get_target_53() { return &___grpcsharp_channel_get_target_53; }
	inline void set_grpcsharp_channel_get_target_53(grpcsharp_channel_get_target_delegate_t1912627058 * value)
	{
		___grpcsharp_channel_get_target_53 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_get_target_53), value);
	}

	inline static int32_t get_offset_of_grpcsharp_channel_destroy_54() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_channel_destroy_54)); }
	inline grpcsharp_channel_destroy_delegate_t1789251192 * get_grpcsharp_channel_destroy_54() const { return ___grpcsharp_channel_destroy_54; }
	inline grpcsharp_channel_destroy_delegate_t1789251192 ** get_address_of_grpcsharp_channel_destroy_54() { return &___grpcsharp_channel_destroy_54; }
	inline void set_grpcsharp_channel_destroy_54(grpcsharp_channel_destroy_delegate_t1789251192 * value)
	{
		___grpcsharp_channel_destroy_54 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_channel_destroy_54), value);
	}

	inline static int32_t get_offset_of_grpcsharp_sizeof_grpc_event_55() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_sizeof_grpc_event_55)); }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 * get_grpcsharp_sizeof_grpc_event_55() const { return ___grpcsharp_sizeof_grpc_event_55; }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 ** get_address_of_grpcsharp_sizeof_grpc_event_55() { return &___grpcsharp_sizeof_grpc_event_55; }
	inline void set_grpcsharp_sizeof_grpc_event_55(grpcsharp_sizeof_grpc_event_delegate_t4083509947 * value)
	{
		___grpcsharp_sizeof_grpc_event_55 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_sizeof_grpc_event_55), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_create_async_56() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_create_async_56)); }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 * get_grpcsharp_completion_queue_create_async_56() const { return ___grpcsharp_completion_queue_create_async_56; }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 ** get_address_of_grpcsharp_completion_queue_create_async_56() { return &___grpcsharp_completion_queue_create_async_56; }
	inline void set_grpcsharp_completion_queue_create_async_56(grpcsharp_completion_queue_create_async_delegate_t360079728 * value)
	{
		___grpcsharp_completion_queue_create_async_56 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_create_async_56), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_create_sync_57() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_create_sync_57)); }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 * get_grpcsharp_completion_queue_create_sync_57() const { return ___grpcsharp_completion_queue_create_sync_57; }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 ** get_address_of_grpcsharp_completion_queue_create_sync_57() { return &___grpcsharp_completion_queue_create_sync_57; }
	inline void set_grpcsharp_completion_queue_create_sync_57(grpcsharp_completion_queue_create_sync_delegate_t1808910508 * value)
	{
		___grpcsharp_completion_queue_create_sync_57 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_create_sync_57), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_shutdown_58() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_shutdown_58)); }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 * get_grpcsharp_completion_queue_shutdown_58() const { return ___grpcsharp_completion_queue_shutdown_58; }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 ** get_address_of_grpcsharp_completion_queue_shutdown_58() { return &___grpcsharp_completion_queue_shutdown_58; }
	inline void set_grpcsharp_completion_queue_shutdown_58(grpcsharp_completion_queue_shutdown_delegate_t248163633 * value)
	{
		___grpcsharp_completion_queue_shutdown_58 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_shutdown_58), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_next_59() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_next_59)); }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 * get_grpcsharp_completion_queue_next_59() const { return ___grpcsharp_completion_queue_next_59; }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 ** get_address_of_grpcsharp_completion_queue_next_59() { return &___grpcsharp_completion_queue_next_59; }
	inline void set_grpcsharp_completion_queue_next_59(grpcsharp_completion_queue_next_delegate_t3269686616 * value)
	{
		___grpcsharp_completion_queue_next_59 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_next_59), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_pluck_60() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_pluck_60)); }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 * get_grpcsharp_completion_queue_pluck_60() const { return ___grpcsharp_completion_queue_pluck_60; }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 ** get_address_of_grpcsharp_completion_queue_pluck_60() { return &___grpcsharp_completion_queue_pluck_60; }
	inline void set_grpcsharp_completion_queue_pluck_60(grpcsharp_completion_queue_pluck_delegate_t285374971 * value)
	{
		___grpcsharp_completion_queue_pluck_60 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_pluck_60), value);
	}

	inline static int32_t get_offset_of_grpcsharp_completion_queue_destroy_61() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_completion_queue_destroy_61)); }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 * get_grpcsharp_completion_queue_destroy_61() const { return ___grpcsharp_completion_queue_destroy_61; }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 ** get_address_of_grpcsharp_completion_queue_destroy_61() { return &___grpcsharp_completion_queue_destroy_61; }
	inline void set_grpcsharp_completion_queue_destroy_61(grpcsharp_completion_queue_destroy_delegate_t1464055640 * value)
	{
		___grpcsharp_completion_queue_destroy_61 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_completion_queue_destroy_61), value);
	}

	inline static int32_t get_offset_of_gprsharp_free_62() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_free_62)); }
	inline gprsharp_free_delegate_t3453134242 * get_gprsharp_free_62() const { return ___gprsharp_free_62; }
	inline gprsharp_free_delegate_t3453134242 ** get_address_of_gprsharp_free_62() { return &___gprsharp_free_62; }
	inline void set_gprsharp_free_62(gprsharp_free_delegate_t3453134242 * value)
	{
		___gprsharp_free_62 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_free_62), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_create_63() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_create_63)); }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 * get_grpcsharp_metadata_array_create_63() const { return ___grpcsharp_metadata_array_create_63; }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 ** get_address_of_grpcsharp_metadata_array_create_63() { return &___grpcsharp_metadata_array_create_63; }
	inline void set_grpcsharp_metadata_array_create_63(grpcsharp_metadata_array_create_delegate_t2940265924 * value)
	{
		___grpcsharp_metadata_array_create_63 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_create_63), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_add_64() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_add_64)); }
	inline grpcsharp_metadata_array_add_delegate_t281551042 * get_grpcsharp_metadata_array_add_64() const { return ___grpcsharp_metadata_array_add_64; }
	inline grpcsharp_metadata_array_add_delegate_t281551042 ** get_address_of_grpcsharp_metadata_array_add_64() { return &___grpcsharp_metadata_array_add_64; }
	inline void set_grpcsharp_metadata_array_add_64(grpcsharp_metadata_array_add_delegate_t281551042 * value)
	{
		___grpcsharp_metadata_array_add_64 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_add_64), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_count_65() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_count_65)); }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 * get_grpcsharp_metadata_array_count_65() const { return ___grpcsharp_metadata_array_count_65; }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 ** get_address_of_grpcsharp_metadata_array_count_65() { return &___grpcsharp_metadata_array_count_65; }
	inline void set_grpcsharp_metadata_array_count_65(grpcsharp_metadata_array_count_delegate_t1171955796 * value)
	{
		___grpcsharp_metadata_array_count_65 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_count_65), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_get_key_66() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_get_key_66)); }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 * get_grpcsharp_metadata_array_get_key_66() const { return ___grpcsharp_metadata_array_get_key_66; }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 ** get_address_of_grpcsharp_metadata_array_get_key_66() { return &___grpcsharp_metadata_array_get_key_66; }
	inline void set_grpcsharp_metadata_array_get_key_66(grpcsharp_metadata_array_get_key_delegate_t2312063556 * value)
	{
		___grpcsharp_metadata_array_get_key_66 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_get_key_66), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_get_value_67() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_get_value_67)); }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 * get_grpcsharp_metadata_array_get_value_67() const { return ___grpcsharp_metadata_array_get_value_67; }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 ** get_address_of_grpcsharp_metadata_array_get_value_67() { return &___grpcsharp_metadata_array_get_value_67; }
	inline void set_grpcsharp_metadata_array_get_value_67(grpcsharp_metadata_array_get_value_delegate_t2215973087 * value)
	{
		___grpcsharp_metadata_array_get_value_67 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_get_value_67), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_array_destroy_full_68() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_array_destroy_full_68)); }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 * get_grpcsharp_metadata_array_destroy_full_68() const { return ___grpcsharp_metadata_array_destroy_full_68; }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 ** get_address_of_grpcsharp_metadata_array_destroy_full_68() { return &___grpcsharp_metadata_array_destroy_full_68; }
	inline void set_grpcsharp_metadata_array_destroy_full_68(grpcsharp_metadata_array_destroy_full_delegate_t46908578 * value)
	{
		___grpcsharp_metadata_array_destroy_full_68 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_array_destroy_full_68), value);
	}

	inline static int32_t get_offset_of_grpcsharp_redirect_log_69() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_redirect_log_69)); }
	inline grpcsharp_redirect_log_delegate_t1051680661 * get_grpcsharp_redirect_log_69() const { return ___grpcsharp_redirect_log_69; }
	inline grpcsharp_redirect_log_delegate_t1051680661 ** get_address_of_grpcsharp_redirect_log_69() { return &___grpcsharp_redirect_log_69; }
	inline void set_grpcsharp_redirect_log_69(grpcsharp_redirect_log_delegate_t1051680661 * value)
	{
		___grpcsharp_redirect_log_69 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_redirect_log_69), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_credentials_create_from_plugin_70() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_credentials_create_from_plugin_70)); }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * get_grpcsharp_metadata_credentials_create_from_plugin_70() const { return ___grpcsharp_metadata_credentials_create_from_plugin_70; }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 ** get_address_of_grpcsharp_metadata_credentials_create_from_plugin_70() { return &___grpcsharp_metadata_credentials_create_from_plugin_70; }
	inline void set_grpcsharp_metadata_credentials_create_from_plugin_70(grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * value)
	{
		___grpcsharp_metadata_credentials_create_from_plugin_70 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_credentials_create_from_plugin_70), value);
	}

	inline static int32_t get_offset_of_grpcsharp_metadata_credentials_notify_from_plugin_71() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_metadata_credentials_notify_from_plugin_71)); }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * get_grpcsharp_metadata_credentials_notify_from_plugin_71() const { return ___grpcsharp_metadata_credentials_notify_from_plugin_71; }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 ** get_address_of_grpcsharp_metadata_credentials_notify_from_plugin_71() { return &___grpcsharp_metadata_credentials_notify_from_plugin_71; }
	inline void set_grpcsharp_metadata_credentials_notify_from_plugin_71(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * value)
	{
		___grpcsharp_metadata_credentials_notify_from_plugin_71 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_metadata_credentials_notify_from_plugin_71), value);
	}

	inline static int32_t get_offset_of_grpcsharp_ssl_server_credentials_create_72() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_ssl_server_credentials_create_72)); }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * get_grpcsharp_ssl_server_credentials_create_72() const { return ___grpcsharp_ssl_server_credentials_create_72; }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 ** get_address_of_grpcsharp_ssl_server_credentials_create_72() { return &___grpcsharp_ssl_server_credentials_create_72; }
	inline void set_grpcsharp_ssl_server_credentials_create_72(grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * value)
	{
		___grpcsharp_ssl_server_credentials_create_72 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_ssl_server_credentials_create_72), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_credentials_release_73() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_credentials_release_73)); }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 * get_grpcsharp_server_credentials_release_73() const { return ___grpcsharp_server_credentials_release_73; }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 ** get_address_of_grpcsharp_server_credentials_release_73() { return &___grpcsharp_server_credentials_release_73; }
	inline void set_grpcsharp_server_credentials_release_73(grpcsharp_server_credentials_release_delegate_t2095714663 * value)
	{
		___grpcsharp_server_credentials_release_73 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_credentials_release_73), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_create_74() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_create_74)); }
	inline grpcsharp_server_create_delegate_t4127831655 * get_grpcsharp_server_create_74() const { return ___grpcsharp_server_create_74; }
	inline grpcsharp_server_create_delegate_t4127831655 ** get_address_of_grpcsharp_server_create_74() { return &___grpcsharp_server_create_74; }
	inline void set_grpcsharp_server_create_74(grpcsharp_server_create_delegate_t4127831655 * value)
	{
		___grpcsharp_server_create_74 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_create_74), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_register_completion_queue_75() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_register_completion_queue_75)); }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 * get_grpcsharp_server_register_completion_queue_75() const { return ___grpcsharp_server_register_completion_queue_75; }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 ** get_address_of_grpcsharp_server_register_completion_queue_75() { return &___grpcsharp_server_register_completion_queue_75; }
	inline void set_grpcsharp_server_register_completion_queue_75(grpcsharp_server_register_completion_queue_delegate_t2206715366 * value)
	{
		___grpcsharp_server_register_completion_queue_75 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_register_completion_queue_75), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_add_insecure_http2_port_76() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_add_insecure_http2_port_76)); }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * get_grpcsharp_server_add_insecure_http2_port_76() const { return ___grpcsharp_server_add_insecure_http2_port_76; }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 ** get_address_of_grpcsharp_server_add_insecure_http2_port_76() { return &___grpcsharp_server_add_insecure_http2_port_76; }
	inline void set_grpcsharp_server_add_insecure_http2_port_76(grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * value)
	{
		___grpcsharp_server_add_insecure_http2_port_76 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_add_insecure_http2_port_76), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_add_secure_http2_port_77() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_add_secure_http2_port_77)); }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 * get_grpcsharp_server_add_secure_http2_port_77() const { return ___grpcsharp_server_add_secure_http2_port_77; }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 ** get_address_of_grpcsharp_server_add_secure_http2_port_77() { return &___grpcsharp_server_add_secure_http2_port_77; }
	inline void set_grpcsharp_server_add_secure_http2_port_77(grpcsharp_server_add_secure_http2_port_delegate_t102470377 * value)
	{
		___grpcsharp_server_add_secure_http2_port_77 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_add_secure_http2_port_77), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_start_78() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_start_78)); }
	inline grpcsharp_server_start_delegate_t4158963393 * get_grpcsharp_server_start_78() const { return ___grpcsharp_server_start_78; }
	inline grpcsharp_server_start_delegate_t4158963393 ** get_address_of_grpcsharp_server_start_78() { return &___grpcsharp_server_start_78; }
	inline void set_grpcsharp_server_start_78(grpcsharp_server_start_delegate_t4158963393 * value)
	{
		___grpcsharp_server_start_78 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_start_78), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_request_call_79() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_request_call_79)); }
	inline grpcsharp_server_request_call_delegate_t2796155047 * get_grpcsharp_server_request_call_79() const { return ___grpcsharp_server_request_call_79; }
	inline grpcsharp_server_request_call_delegate_t2796155047 ** get_address_of_grpcsharp_server_request_call_79() { return &___grpcsharp_server_request_call_79; }
	inline void set_grpcsharp_server_request_call_79(grpcsharp_server_request_call_delegate_t2796155047 * value)
	{
		___grpcsharp_server_request_call_79 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_request_call_79), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_cancel_all_calls_80() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_cancel_all_calls_80)); }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 * get_grpcsharp_server_cancel_all_calls_80() const { return ___grpcsharp_server_cancel_all_calls_80; }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 ** get_address_of_grpcsharp_server_cancel_all_calls_80() { return &___grpcsharp_server_cancel_all_calls_80; }
	inline void set_grpcsharp_server_cancel_all_calls_80(grpcsharp_server_cancel_all_calls_delegate_t4278007468 * value)
	{
		___grpcsharp_server_cancel_all_calls_80 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_cancel_all_calls_80), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_shutdown_and_notify_callback_81() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_shutdown_and_notify_callback_81)); }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * get_grpcsharp_server_shutdown_and_notify_callback_81() const { return ___grpcsharp_server_shutdown_and_notify_callback_81; }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 ** get_address_of_grpcsharp_server_shutdown_and_notify_callback_81() { return &___grpcsharp_server_shutdown_and_notify_callback_81; }
	inline void set_grpcsharp_server_shutdown_and_notify_callback_81(grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * value)
	{
		___grpcsharp_server_shutdown_and_notify_callback_81 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_shutdown_and_notify_callback_81), value);
	}

	inline static int32_t get_offset_of_grpcsharp_server_destroy_82() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_server_destroy_82)); }
	inline grpcsharp_server_destroy_delegate_t2436759005 * get_grpcsharp_server_destroy_82() const { return ___grpcsharp_server_destroy_82; }
	inline grpcsharp_server_destroy_delegate_t2436759005 ** get_address_of_grpcsharp_server_destroy_82() { return &___grpcsharp_server_destroy_82; }
	inline void set_grpcsharp_server_destroy_82(grpcsharp_server_destroy_delegate_t2436759005 * value)
	{
		___grpcsharp_server_destroy_82 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_server_destroy_82), value);
	}

	inline static int32_t get_offset_of_grpcsharp_call_auth_context_83() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_call_auth_context_83)); }
	inline grpcsharp_call_auth_context_delegate_t3089219098 * get_grpcsharp_call_auth_context_83() const { return ___grpcsharp_call_auth_context_83; }
	inline grpcsharp_call_auth_context_delegate_t3089219098 ** get_address_of_grpcsharp_call_auth_context_83() { return &___grpcsharp_call_auth_context_83; }
	inline void set_grpcsharp_call_auth_context_83(grpcsharp_call_auth_context_delegate_t3089219098 * value)
	{
		___grpcsharp_call_auth_context_83 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_call_auth_context_83), value);
	}

	inline static int32_t get_offset_of_grpcsharp_auth_context_peer_identity_property_name_84() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_auth_context_peer_identity_property_name_84)); }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * get_grpcsharp_auth_context_peer_identity_property_name_84() const { return ___grpcsharp_auth_context_peer_identity_property_name_84; }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 ** get_address_of_grpcsharp_auth_context_peer_identity_property_name_84() { return &___grpcsharp_auth_context_peer_identity_property_name_84; }
	inline void set_grpcsharp_auth_context_peer_identity_property_name_84(grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * value)
	{
		___grpcsharp_auth_context_peer_identity_property_name_84 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_auth_context_peer_identity_property_name_84), value);
	}

	inline static int32_t get_offset_of_grpcsharp_auth_context_property_iterator_85() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_auth_context_property_iterator_85)); }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 * get_grpcsharp_auth_context_property_iterator_85() const { return ___grpcsharp_auth_context_property_iterator_85; }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 ** get_address_of_grpcsharp_auth_context_property_iterator_85() { return &___grpcsharp_auth_context_property_iterator_85; }
	inline void set_grpcsharp_auth_context_property_iterator_85(grpcsharp_auth_context_property_iterator_delegate_t641318545 * value)
	{
		___grpcsharp_auth_context_property_iterator_85 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_auth_context_property_iterator_85), value);
	}

	inline static int32_t get_offset_of_grpcsharp_auth_property_iterator_next_86() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_auth_property_iterator_next_86)); }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 * get_grpcsharp_auth_property_iterator_next_86() const { return ___grpcsharp_auth_property_iterator_next_86; }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 ** get_address_of_grpcsharp_auth_property_iterator_next_86() { return &___grpcsharp_auth_property_iterator_next_86; }
	inline void set_grpcsharp_auth_property_iterator_next_86(grpcsharp_auth_property_iterator_next_delegate_t4267042899 * value)
	{
		___grpcsharp_auth_property_iterator_next_86 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_auth_property_iterator_next_86), value);
	}

	inline static int32_t get_offset_of_grpcsharp_auth_context_release_87() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_auth_context_release_87)); }
	inline grpcsharp_auth_context_release_delegate_t83664199 * get_grpcsharp_auth_context_release_87() const { return ___grpcsharp_auth_context_release_87; }
	inline grpcsharp_auth_context_release_delegate_t83664199 ** get_address_of_grpcsharp_auth_context_release_87() { return &___grpcsharp_auth_context_release_87; }
	inline void set_grpcsharp_auth_context_release_87(grpcsharp_auth_context_release_delegate_t83664199 * value)
	{
		___grpcsharp_auth_context_release_87 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_auth_context_release_87), value);
	}

	inline static int32_t get_offset_of_gprsharp_now_88() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_now_88)); }
	inline gprsharp_now_delegate_t2976584151 * get_gprsharp_now_88() const { return ___gprsharp_now_88; }
	inline gprsharp_now_delegate_t2976584151 ** get_address_of_gprsharp_now_88() { return &___gprsharp_now_88; }
	inline void set_gprsharp_now_88(gprsharp_now_delegate_t2976584151 * value)
	{
		___gprsharp_now_88 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_now_88), value);
	}

	inline static int32_t get_offset_of_gprsharp_inf_future_89() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_inf_future_89)); }
	inline gprsharp_inf_future_delegate_t1471086569 * get_gprsharp_inf_future_89() const { return ___gprsharp_inf_future_89; }
	inline gprsharp_inf_future_delegate_t1471086569 ** get_address_of_gprsharp_inf_future_89() { return &___gprsharp_inf_future_89; }
	inline void set_gprsharp_inf_future_89(gprsharp_inf_future_delegate_t1471086569 * value)
	{
		___gprsharp_inf_future_89 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_inf_future_89), value);
	}

	inline static int32_t get_offset_of_gprsharp_inf_past_90() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_inf_past_90)); }
	inline gprsharp_inf_past_delegate_t3920462529 * get_gprsharp_inf_past_90() const { return ___gprsharp_inf_past_90; }
	inline gprsharp_inf_past_delegate_t3920462529 ** get_address_of_gprsharp_inf_past_90() { return &___gprsharp_inf_past_90; }
	inline void set_gprsharp_inf_past_90(gprsharp_inf_past_delegate_t3920462529 * value)
	{
		___gprsharp_inf_past_90 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_inf_past_90), value);
	}

	inline static int32_t get_offset_of_gprsharp_convert_clock_type_91() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_convert_clock_type_91)); }
	inline gprsharp_convert_clock_type_delegate_t1755859444 * get_gprsharp_convert_clock_type_91() const { return ___gprsharp_convert_clock_type_91; }
	inline gprsharp_convert_clock_type_delegate_t1755859444 ** get_address_of_gprsharp_convert_clock_type_91() { return &___gprsharp_convert_clock_type_91; }
	inline void set_gprsharp_convert_clock_type_91(gprsharp_convert_clock_type_delegate_t1755859444 * value)
	{
		___gprsharp_convert_clock_type_91 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_convert_clock_type_91), value);
	}

	inline static int32_t get_offset_of_gprsharp_sizeof_timespec_92() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___gprsharp_sizeof_timespec_92)); }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 * get_gprsharp_sizeof_timespec_92() const { return ___gprsharp_sizeof_timespec_92; }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 ** get_address_of_gprsharp_sizeof_timespec_92() { return &___gprsharp_sizeof_timespec_92; }
	inline void set_gprsharp_sizeof_timespec_92(gprsharp_sizeof_timespec_delegate_t1822509259 * value)
	{
		___gprsharp_sizeof_timespec_92 = value;
		Il2CppCodeGenWriteBarrier((&___gprsharp_sizeof_timespec_92), value);
	}

	inline static int32_t get_offset_of_grpcsharp_test_callback_93() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_test_callback_93)); }
	inline grpcsharp_test_callback_delegate_t521268474 * get_grpcsharp_test_callback_93() const { return ___grpcsharp_test_callback_93; }
	inline grpcsharp_test_callback_delegate_t521268474 ** get_address_of_grpcsharp_test_callback_93() { return &___grpcsharp_test_callback_93; }
	inline void set_grpcsharp_test_callback_93(grpcsharp_test_callback_delegate_t521268474 * value)
	{
		___grpcsharp_test_callback_93 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_test_callback_93), value);
	}

	inline static int32_t get_offset_of_grpcsharp_test_nop_94() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_test_nop_94)); }
	inline grpcsharp_test_nop_delegate_t1977043325 * get_grpcsharp_test_nop_94() const { return ___grpcsharp_test_nop_94; }
	inline grpcsharp_test_nop_delegate_t1977043325 ** get_address_of_grpcsharp_test_nop_94() { return &___grpcsharp_test_nop_94; }
	inline void set_grpcsharp_test_nop_94(grpcsharp_test_nop_delegate_t1977043325 * value)
	{
		___grpcsharp_test_nop_94 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_test_nop_94), value);
	}

	inline static int32_t get_offset_of_grpcsharp_test_override_method_95() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067, ___grpcsharp_test_override_method_95)); }
	inline grpcsharp_test_override_method_delegate_t51326422 * get_grpcsharp_test_override_method_95() const { return ___grpcsharp_test_override_method_95; }
	inline grpcsharp_test_override_method_delegate_t51326422 ** get_address_of_grpcsharp_test_override_method_95() { return &___grpcsharp_test_override_method_95; }
	inline void set_grpcsharp_test_override_method_95(grpcsharp_test_override_method_delegate_t51326422 * value)
	{
		___grpcsharp_test_override_method_95 = value;
		Il2CppCodeGenWriteBarrier((&___grpcsharp_test_override_method_95), value);
	}
};

struct NativeMethods_t1137985067_StaticFields
{
public:
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache0
	grpcsharp_init_delegate_t697069341 * ___U3CU3Ef__mgU24cache0_96;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1
	grpcsharp_shutdown_delegate_t1539905248 * ___U3CU3Ef__mgU24cache1_97;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2
	grpcsharp_version_string_delegate_t3086718951 * ___U3CU3Ef__mgU24cache2_98;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3
	grpcsharp_batch_context_create_delegate_t4041094647 * ___U3CU3Ef__mgU24cache3_99;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4
	grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * ___U3CU3Ef__mgU24cache4_100;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5
	grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * ___U3CU3Ef__mgU24cache5_101;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6
	grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * ___U3CU3Ef__mgU24cache6_102;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7
	grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * ___U3CU3Ef__mgU24cache7_103;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8
	grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * ___U3CU3Ef__mgU24cache8_104;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * ___U3CU3Ef__mgU24cache9_105;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * ___U3CU3Ef__mgU24cacheA_106;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB
	grpcsharp_batch_context_reset_delegate_t1240336310 * ___U3CU3Ef__mgU24cacheB_107;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheC
	grpcsharp_batch_context_destroy_delegate_t3097840777 * ___U3CU3Ef__mgU24cacheC_108;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheD
	grpcsharp_request_call_context_create_delegate_t1071596268 * ___U3CU3Ef__mgU24cacheD_109;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheE
	grpcsharp_request_call_context_call_delegate_t2297854097 * ___U3CU3Ef__mgU24cacheE_110;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheF
	grpcsharp_request_call_context_method_delegate_t1144596552 * ___U3CU3Ef__mgU24cacheF_111;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache10
	grpcsharp_request_call_context_host_delegate_t2701984728 * ___U3CU3Ef__mgU24cache10_112;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache11
	grpcsharp_request_call_context_deadline_delegate_t3662856317 * ___U3CU3Ef__mgU24cache11_113;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache12
	grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * ___U3CU3Ef__mgU24cache12_114;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache13
	grpcsharp_request_call_context_reset_delegate_t511489013 * ___U3CU3Ef__mgU24cache13_115;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache14
	grpcsharp_request_call_context_destroy_delegate_t2729585044 * ___U3CU3Ef__mgU24cache14_116;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache15
	grpcsharp_composite_call_credentials_create_delegate_t3738706681 * ___U3CU3Ef__mgU24cache15_117;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache16
	grpcsharp_call_credentials_release_delegate_t4173796462 * ___U3CU3Ef__mgU24cache16_118;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache17
	grpcsharp_call_cancel_delegate_t1770075385 * ___U3CU3Ef__mgU24cache17_119;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache18
	grpcsharp_call_cancel_with_status_delegate_t322311674 * ___U3CU3Ef__mgU24cache18_120;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache19
	grpcsharp_call_start_unary_delegate_t1332494428 * ___U3CU3Ef__mgU24cache19_121;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1A
	grpcsharp_call_start_client_streaming_delegate_t186521236 * ___U3CU3Ef__mgU24cache1A_122;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1B
	grpcsharp_call_start_server_streaming_delegate_t941302023 * ___U3CU3Ef__mgU24cache1B_123;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1C
	grpcsharp_call_start_duplex_streaming_delegate_t668243240 * ___U3CU3Ef__mgU24cache1C_124;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1D
	grpcsharp_call_send_message_delegate_t80977843 * ___U3CU3Ef__mgU24cache1D_125;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1E
	grpcsharp_call_send_close_from_client_delegate_t3404740706 * ___U3CU3Ef__mgU24cache1E_126;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache1F
	grpcsharp_call_send_status_from_server_delegate_t1281609886 * ___U3CU3Ef__mgU24cache1F_127;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache20
	grpcsharp_call_recv_message_delegate_t3263680702 * ___U3CU3Ef__mgU24cache20_128;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache21
	grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * ___U3CU3Ef__mgU24cache21_129;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache22
	grpcsharp_call_start_serverside_delegate_t702333229 * ___U3CU3Ef__mgU24cache22_130;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache23
	grpcsharp_call_send_initial_metadata_delegate_t2871837368 * ___U3CU3Ef__mgU24cache23_131;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache24
	grpcsharp_call_set_credentials_delegate_t2164951723 * ___U3CU3Ef__mgU24cache24_132;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache25
	grpcsharp_call_get_peer_delegate_t4293430173 * ___U3CU3Ef__mgU24cache25_133;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache26
	grpcsharp_call_destroy_delegate_t3472236717 * ___U3CU3Ef__mgU24cache26_134;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache27
	grpcsharp_channel_args_create_delegate_t223697083 * ___U3CU3Ef__mgU24cache27_135;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache28
	grpcsharp_channel_args_set_string_delegate_t2671812739 * ___U3CU3Ef__mgU24cache28_136;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache29
	grpcsharp_channel_args_set_integer_delegate_t1374818234 * ___U3CU3Ef__mgU24cache29_137;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2A
	grpcsharp_channel_args_destroy_delegate_t3019422610 * ___U3CU3Ef__mgU24cache2A_138;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2B
	grpcsharp_override_default_ssl_roots_delegate_t2112048917 * ___U3CU3Ef__mgU24cache2B_139;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2C
	grpcsharp_ssl_credentials_create_delegate_t1837265019 * ___U3CU3Ef__mgU24cache2C_140;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2D
	grpcsharp_composite_channel_credentials_create_delegate_t11741719 * ___U3CU3Ef__mgU24cache2D_141;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2E
	grpcsharp_channel_credentials_release_delegate_t3260923539 * ___U3CU3Ef__mgU24cache2E_142;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache2F
	grpcsharp_insecure_channel_create_delegate_t1754677822 * ___U3CU3Ef__mgU24cache2F_143;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache30
	grpcsharp_secure_channel_create_delegate_t858919073 * ___U3CU3Ef__mgU24cache30_144;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache31
	grpcsharp_channel_create_call_delegate_t1689755209 * ___U3CU3Ef__mgU24cache31_145;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache32
	grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * ___U3CU3Ef__mgU24cache32_146;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache33
	grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * ___U3CU3Ef__mgU24cache33_147;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache34
	grpcsharp_channel_get_target_delegate_t1912627058 * ___U3CU3Ef__mgU24cache34_148;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache35
	grpcsharp_channel_destroy_delegate_t1789251192 * ___U3CU3Ef__mgU24cache35_149;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache36
	grpcsharp_sizeof_grpc_event_delegate_t4083509947 * ___U3CU3Ef__mgU24cache36_150;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache37
	grpcsharp_completion_queue_create_async_delegate_t360079728 * ___U3CU3Ef__mgU24cache37_151;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache38
	grpcsharp_completion_queue_create_sync_delegate_t1808910508 * ___U3CU3Ef__mgU24cache38_152;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache39
	grpcsharp_completion_queue_shutdown_delegate_t248163633 * ___U3CU3Ef__mgU24cache39_153;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3A
	grpcsharp_completion_queue_next_delegate_t3269686616 * ___U3CU3Ef__mgU24cache3A_154;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3B
	grpcsharp_completion_queue_pluck_delegate_t285374971 * ___U3CU3Ef__mgU24cache3B_155;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3C
	grpcsharp_completion_queue_destroy_delegate_t1464055640 * ___U3CU3Ef__mgU24cache3C_156;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3D
	gprsharp_free_delegate_t3453134242 * ___U3CU3Ef__mgU24cache3D_157;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3E
	grpcsharp_metadata_array_create_delegate_t2940265924 * ___U3CU3Ef__mgU24cache3E_158;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache3F
	grpcsharp_metadata_array_add_delegate_t281551042 * ___U3CU3Ef__mgU24cache3F_159;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache40
	grpcsharp_metadata_array_count_delegate_t1171955796 * ___U3CU3Ef__mgU24cache40_160;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache41
	grpcsharp_metadata_array_get_key_delegate_t2312063556 * ___U3CU3Ef__mgU24cache41_161;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache42
	grpcsharp_metadata_array_get_value_delegate_t2215973087 * ___U3CU3Ef__mgU24cache42_162;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache43
	grpcsharp_metadata_array_destroy_full_delegate_t46908578 * ___U3CU3Ef__mgU24cache43_163;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache44
	grpcsharp_redirect_log_delegate_t1051680661 * ___U3CU3Ef__mgU24cache44_164;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache45
	grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * ___U3CU3Ef__mgU24cache45_165;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache46
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * ___U3CU3Ef__mgU24cache46_166;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache47
	grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * ___U3CU3Ef__mgU24cache47_167;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache48
	grpcsharp_server_credentials_release_delegate_t2095714663 * ___U3CU3Ef__mgU24cache48_168;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache49
	grpcsharp_server_create_delegate_t4127831655 * ___U3CU3Ef__mgU24cache49_169;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4A
	grpcsharp_server_register_completion_queue_delegate_t2206715366 * ___U3CU3Ef__mgU24cache4A_170;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4B
	grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * ___U3CU3Ef__mgU24cache4B_171;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4C
	grpcsharp_server_add_secure_http2_port_delegate_t102470377 * ___U3CU3Ef__mgU24cache4C_172;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4D
	grpcsharp_server_start_delegate_t4158963393 * ___U3CU3Ef__mgU24cache4D_173;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4E
	grpcsharp_server_request_call_delegate_t2796155047 * ___U3CU3Ef__mgU24cache4E_174;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache4F
	grpcsharp_server_cancel_all_calls_delegate_t4278007468 * ___U3CU3Ef__mgU24cache4F_175;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache50
	grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * ___U3CU3Ef__mgU24cache50_176;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache51
	grpcsharp_server_destroy_delegate_t2436759005 * ___U3CU3Ef__mgU24cache51_177;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache52
	grpcsharp_call_auth_context_delegate_t3089219098 * ___U3CU3Ef__mgU24cache52_178;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache53
	grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * ___U3CU3Ef__mgU24cache53_179;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache54
	grpcsharp_auth_context_property_iterator_delegate_t641318545 * ___U3CU3Ef__mgU24cache54_180;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache55
	grpcsharp_auth_property_iterator_next_delegate_t4267042899 * ___U3CU3Ef__mgU24cache55_181;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache56
	grpcsharp_auth_context_release_delegate_t83664199 * ___U3CU3Ef__mgU24cache56_182;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache57
	gprsharp_now_delegate_t2976584151 * ___U3CU3Ef__mgU24cache57_183;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache58
	gprsharp_inf_future_delegate_t1471086569 * ___U3CU3Ef__mgU24cache58_184;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache59
	gprsharp_inf_past_delegate_t3920462529 * ___U3CU3Ef__mgU24cache59_185;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5A
	gprsharp_convert_clock_type_delegate_t1755859444 * ___U3CU3Ef__mgU24cache5A_186;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5B
	gprsharp_sizeof_timespec_delegate_t1822509259 * ___U3CU3Ef__mgU24cache5B_187;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5C
	grpcsharp_test_callback_delegate_t521268474 * ___U3CU3Ef__mgU24cache5C_188;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5D
	grpcsharp_test_nop_delegate_t1977043325 * ___U3CU3Ef__mgU24cache5D_189;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5E
	grpcsharp_test_override_method_delegate_t51326422 * ___U3CU3Ef__mgU24cache5E_190;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache5F
	grpcsharp_init_delegate_t697069341 * ___U3CU3Ef__mgU24cache5F_191;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache60
	grpcsharp_shutdown_delegate_t1539905248 * ___U3CU3Ef__mgU24cache60_192;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache61
	grpcsharp_version_string_delegate_t3086718951 * ___U3CU3Ef__mgU24cache61_193;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache62
	grpcsharp_batch_context_create_delegate_t4041094647 * ___U3CU3Ef__mgU24cache62_194;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache63
	grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * ___U3CU3Ef__mgU24cache63_195;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache64
	grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * ___U3CU3Ef__mgU24cache64_196;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache65
	grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * ___U3CU3Ef__mgU24cache65_197;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache66
	grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * ___U3CU3Ef__mgU24cache66_198;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache67
	grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * ___U3CU3Ef__mgU24cache67_199;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache68
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * ___U3CU3Ef__mgU24cache68_200;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache69
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * ___U3CU3Ef__mgU24cache69_201;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6A
	grpcsharp_batch_context_reset_delegate_t1240336310 * ___U3CU3Ef__mgU24cache6A_202;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6B
	grpcsharp_batch_context_destroy_delegate_t3097840777 * ___U3CU3Ef__mgU24cache6B_203;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6C
	grpcsharp_request_call_context_create_delegate_t1071596268 * ___U3CU3Ef__mgU24cache6C_204;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6D
	grpcsharp_request_call_context_call_delegate_t2297854097 * ___U3CU3Ef__mgU24cache6D_205;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6E
	grpcsharp_request_call_context_method_delegate_t1144596552 * ___U3CU3Ef__mgU24cache6E_206;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache6F
	grpcsharp_request_call_context_host_delegate_t2701984728 * ___U3CU3Ef__mgU24cache6F_207;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache70
	grpcsharp_request_call_context_deadline_delegate_t3662856317 * ___U3CU3Ef__mgU24cache70_208;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache71
	grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * ___U3CU3Ef__mgU24cache71_209;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache72
	grpcsharp_request_call_context_reset_delegate_t511489013 * ___U3CU3Ef__mgU24cache72_210;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache73
	grpcsharp_request_call_context_destroy_delegate_t2729585044 * ___U3CU3Ef__mgU24cache73_211;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache74
	grpcsharp_composite_call_credentials_create_delegate_t3738706681 * ___U3CU3Ef__mgU24cache74_212;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache75
	grpcsharp_call_credentials_release_delegate_t4173796462 * ___U3CU3Ef__mgU24cache75_213;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache76
	grpcsharp_call_cancel_delegate_t1770075385 * ___U3CU3Ef__mgU24cache76_214;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache77
	grpcsharp_call_cancel_with_status_delegate_t322311674 * ___U3CU3Ef__mgU24cache77_215;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache78
	grpcsharp_call_start_unary_delegate_t1332494428 * ___U3CU3Ef__mgU24cache78_216;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache79
	grpcsharp_call_start_client_streaming_delegate_t186521236 * ___U3CU3Ef__mgU24cache79_217;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7A
	grpcsharp_call_start_server_streaming_delegate_t941302023 * ___U3CU3Ef__mgU24cache7A_218;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7B
	grpcsharp_call_start_duplex_streaming_delegate_t668243240 * ___U3CU3Ef__mgU24cache7B_219;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7C
	grpcsharp_call_send_message_delegate_t80977843 * ___U3CU3Ef__mgU24cache7C_220;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7D
	grpcsharp_call_send_close_from_client_delegate_t3404740706 * ___U3CU3Ef__mgU24cache7D_221;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7E
	grpcsharp_call_send_status_from_server_delegate_t1281609886 * ___U3CU3Ef__mgU24cache7E_222;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache7F
	grpcsharp_call_recv_message_delegate_t3263680702 * ___U3CU3Ef__mgU24cache7F_223;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache80
	grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * ___U3CU3Ef__mgU24cache80_224;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache81
	grpcsharp_call_start_serverside_delegate_t702333229 * ___U3CU3Ef__mgU24cache81_225;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache82
	grpcsharp_call_send_initial_metadata_delegate_t2871837368 * ___U3CU3Ef__mgU24cache82_226;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache83
	grpcsharp_call_set_credentials_delegate_t2164951723 * ___U3CU3Ef__mgU24cache83_227;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache84
	grpcsharp_call_get_peer_delegate_t4293430173 * ___U3CU3Ef__mgU24cache84_228;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache85
	grpcsharp_call_destroy_delegate_t3472236717 * ___U3CU3Ef__mgU24cache85_229;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache86
	grpcsharp_channel_args_create_delegate_t223697083 * ___U3CU3Ef__mgU24cache86_230;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache87
	grpcsharp_channel_args_set_string_delegate_t2671812739 * ___U3CU3Ef__mgU24cache87_231;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache88
	grpcsharp_channel_args_set_integer_delegate_t1374818234 * ___U3CU3Ef__mgU24cache88_232;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache89
	grpcsharp_channel_args_destroy_delegate_t3019422610 * ___U3CU3Ef__mgU24cache89_233;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8A
	grpcsharp_override_default_ssl_roots_delegate_t2112048917 * ___U3CU3Ef__mgU24cache8A_234;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8B
	grpcsharp_ssl_credentials_create_delegate_t1837265019 * ___U3CU3Ef__mgU24cache8B_235;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8C
	grpcsharp_composite_channel_credentials_create_delegate_t11741719 * ___U3CU3Ef__mgU24cache8C_236;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8D
	grpcsharp_channel_credentials_release_delegate_t3260923539 * ___U3CU3Ef__mgU24cache8D_237;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8E
	grpcsharp_insecure_channel_create_delegate_t1754677822 * ___U3CU3Ef__mgU24cache8E_238;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache8F
	grpcsharp_secure_channel_create_delegate_t858919073 * ___U3CU3Ef__mgU24cache8F_239;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache90
	grpcsharp_channel_create_call_delegate_t1689755209 * ___U3CU3Ef__mgU24cache90_240;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache91
	grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * ___U3CU3Ef__mgU24cache91_241;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache92
	grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * ___U3CU3Ef__mgU24cache92_242;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache93
	grpcsharp_channel_get_target_delegate_t1912627058 * ___U3CU3Ef__mgU24cache93_243;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache94
	grpcsharp_channel_destroy_delegate_t1789251192 * ___U3CU3Ef__mgU24cache94_244;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache95
	grpcsharp_sizeof_grpc_event_delegate_t4083509947 * ___U3CU3Ef__mgU24cache95_245;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache96
	grpcsharp_completion_queue_create_async_delegate_t360079728 * ___U3CU3Ef__mgU24cache96_246;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache97
	grpcsharp_completion_queue_create_sync_delegate_t1808910508 * ___U3CU3Ef__mgU24cache97_247;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache98
	grpcsharp_completion_queue_shutdown_delegate_t248163633 * ___U3CU3Ef__mgU24cache98_248;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache99
	grpcsharp_completion_queue_next_delegate_t3269686616 * ___U3CU3Ef__mgU24cache99_249;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9A
	grpcsharp_completion_queue_pluck_delegate_t285374971 * ___U3CU3Ef__mgU24cache9A_250;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9B
	grpcsharp_completion_queue_destroy_delegate_t1464055640 * ___U3CU3Ef__mgU24cache9B_251;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9C
	gprsharp_free_delegate_t3453134242 * ___U3CU3Ef__mgU24cache9C_252;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9D
	grpcsharp_metadata_array_create_delegate_t2940265924 * ___U3CU3Ef__mgU24cache9D_253;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9E
	grpcsharp_metadata_array_add_delegate_t281551042 * ___U3CU3Ef__mgU24cache9E_254;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cache9F
	grpcsharp_metadata_array_count_delegate_t1171955796 * ___U3CU3Ef__mgU24cache9F_255;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA0
	grpcsharp_metadata_array_get_key_delegate_t2312063556 * ___U3CU3Ef__mgU24cacheA0_256;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA1
	grpcsharp_metadata_array_get_value_delegate_t2215973087 * ___U3CU3Ef__mgU24cacheA1_257;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA2
	grpcsharp_metadata_array_destroy_full_delegate_t46908578 * ___U3CU3Ef__mgU24cacheA2_258;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA3
	grpcsharp_redirect_log_delegate_t1051680661 * ___U3CU3Ef__mgU24cacheA3_259;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA4
	grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * ___U3CU3Ef__mgU24cacheA4_260;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA5
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * ___U3CU3Ef__mgU24cacheA5_261;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA6
	grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * ___U3CU3Ef__mgU24cacheA6_262;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA7
	grpcsharp_server_credentials_release_delegate_t2095714663 * ___U3CU3Ef__mgU24cacheA7_263;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA8
	grpcsharp_server_create_delegate_t4127831655 * ___U3CU3Ef__mgU24cacheA8_264;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheA9
	grpcsharp_server_register_completion_queue_delegate_t2206715366 * ___U3CU3Ef__mgU24cacheA9_265;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAA
	grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * ___U3CU3Ef__mgU24cacheAA_266;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAB
	grpcsharp_server_add_secure_http2_port_delegate_t102470377 * ___U3CU3Ef__mgU24cacheAB_267;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAC
	grpcsharp_server_start_delegate_t4158963393 * ___U3CU3Ef__mgU24cacheAC_268;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAD
	grpcsharp_server_request_call_delegate_t2796155047 * ___U3CU3Ef__mgU24cacheAD_269;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAE
	grpcsharp_server_cancel_all_calls_delegate_t4278007468 * ___U3CU3Ef__mgU24cacheAE_270;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheAF
	grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * ___U3CU3Ef__mgU24cacheAF_271;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB0
	grpcsharp_server_destroy_delegate_t2436759005 * ___U3CU3Ef__mgU24cacheB0_272;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB1
	grpcsharp_call_auth_context_delegate_t3089219098 * ___U3CU3Ef__mgU24cacheB1_273;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB2
	grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * ___U3CU3Ef__mgU24cacheB2_274;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB3
	grpcsharp_auth_context_property_iterator_delegate_t641318545 * ___U3CU3Ef__mgU24cacheB3_275;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB4
	grpcsharp_auth_property_iterator_next_delegate_t4267042899 * ___U3CU3Ef__mgU24cacheB4_276;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB5
	grpcsharp_auth_context_release_delegate_t83664199 * ___U3CU3Ef__mgU24cacheB5_277;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB6
	gprsharp_now_delegate_t2976584151 * ___U3CU3Ef__mgU24cacheB6_278;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB7
	gprsharp_inf_future_delegate_t1471086569 * ___U3CU3Ef__mgU24cacheB7_279;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB8
	gprsharp_inf_past_delegate_t3920462529 * ___U3CU3Ef__mgU24cacheB8_280;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheB9
	gprsharp_convert_clock_type_delegate_t1755859444 * ___U3CU3Ef__mgU24cacheB9_281;
	// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheBA
	gprsharp_sizeof_timespec_delegate_t1822509259 * ___U3CU3Ef__mgU24cacheBA_282;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheBB
	grpcsharp_test_callback_delegate_t521268474 * ___U3CU3Ef__mgU24cacheBB_283;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheBC
	grpcsharp_test_nop_delegate_t1977043325 * ___U3CU3Ef__mgU24cacheBC_284;
	// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate Grpc.Core.Internal.NativeMethods::<>f__mg$cacheBD
	grpcsharp_test_override_method_delegate_t51326422 * ___U3CU3Ef__mgU24cacheBD_285;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_96() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache0_96)); }
	inline grpcsharp_init_delegate_t697069341 * get_U3CU3Ef__mgU24cache0_96() const { return ___U3CU3Ef__mgU24cache0_96; }
	inline grpcsharp_init_delegate_t697069341 ** get_address_of_U3CU3Ef__mgU24cache0_96() { return &___U3CU3Ef__mgU24cache0_96; }
	inline void set_U3CU3Ef__mgU24cache0_96(grpcsharp_init_delegate_t697069341 * value)
	{
		___U3CU3Ef__mgU24cache0_96 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_96), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_97() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1_97)); }
	inline grpcsharp_shutdown_delegate_t1539905248 * get_U3CU3Ef__mgU24cache1_97() const { return ___U3CU3Ef__mgU24cache1_97; }
	inline grpcsharp_shutdown_delegate_t1539905248 ** get_address_of_U3CU3Ef__mgU24cache1_97() { return &___U3CU3Ef__mgU24cache1_97; }
	inline void set_U3CU3Ef__mgU24cache1_97(grpcsharp_shutdown_delegate_t1539905248 * value)
	{
		___U3CU3Ef__mgU24cache1_97 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_97), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_98() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2_98)); }
	inline grpcsharp_version_string_delegate_t3086718951 * get_U3CU3Ef__mgU24cache2_98() const { return ___U3CU3Ef__mgU24cache2_98; }
	inline grpcsharp_version_string_delegate_t3086718951 ** get_address_of_U3CU3Ef__mgU24cache2_98() { return &___U3CU3Ef__mgU24cache2_98; }
	inline void set_U3CU3Ef__mgU24cache2_98(grpcsharp_version_string_delegate_t3086718951 * value)
	{
		___U3CU3Ef__mgU24cache2_98 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_98), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_99() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3_99)); }
	inline grpcsharp_batch_context_create_delegate_t4041094647 * get_U3CU3Ef__mgU24cache3_99() const { return ___U3CU3Ef__mgU24cache3_99; }
	inline grpcsharp_batch_context_create_delegate_t4041094647 ** get_address_of_U3CU3Ef__mgU24cache3_99() { return &___U3CU3Ef__mgU24cache3_99; }
	inline void set_U3CU3Ef__mgU24cache3_99(grpcsharp_batch_context_create_delegate_t4041094647 * value)
	{
		___U3CU3Ef__mgU24cache3_99 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_99), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_100() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4_100)); }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * get_U3CU3Ef__mgU24cache4_100() const { return ___U3CU3Ef__mgU24cache4_100; }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 ** get_address_of_U3CU3Ef__mgU24cache4_100() { return &___U3CU3Ef__mgU24cache4_100; }
	inline void set_U3CU3Ef__mgU24cache4_100(grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * value)
	{
		___U3CU3Ef__mgU24cache4_100 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_100), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_101() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5_101)); }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * get_U3CU3Ef__mgU24cache5_101() const { return ___U3CU3Ef__mgU24cache5_101; }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 ** get_address_of_U3CU3Ef__mgU24cache5_101() { return &___U3CU3Ef__mgU24cache5_101; }
	inline void set_U3CU3Ef__mgU24cache5_101(grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * value)
	{
		___U3CU3Ef__mgU24cache5_101 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_101), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_102() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6_102)); }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * get_U3CU3Ef__mgU24cache6_102() const { return ___U3CU3Ef__mgU24cache6_102; }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 ** get_address_of_U3CU3Ef__mgU24cache6_102() { return &___U3CU3Ef__mgU24cache6_102; }
	inline void set_U3CU3Ef__mgU24cache6_102(grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * value)
	{
		___U3CU3Ef__mgU24cache6_102 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_102), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_103() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7_103)); }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * get_U3CU3Ef__mgU24cache7_103() const { return ___U3CU3Ef__mgU24cache7_103; }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 ** get_address_of_U3CU3Ef__mgU24cache7_103() { return &___U3CU3Ef__mgU24cache7_103; }
	inline void set_U3CU3Ef__mgU24cache7_103(grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * value)
	{
		___U3CU3Ef__mgU24cache7_103 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_103), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_104() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8_104)); }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * get_U3CU3Ef__mgU24cache8_104() const { return ___U3CU3Ef__mgU24cache8_104; }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 ** get_address_of_U3CU3Ef__mgU24cache8_104() { return &___U3CU3Ef__mgU24cache8_104; }
	inline void set_U3CU3Ef__mgU24cache8_104(grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * value)
	{
		___U3CU3Ef__mgU24cache8_104 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_104), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_105() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9_105)); }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * get_U3CU3Ef__mgU24cache9_105() const { return ___U3CU3Ef__mgU24cache9_105; }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 ** get_address_of_U3CU3Ef__mgU24cache9_105() { return &___U3CU3Ef__mgU24cache9_105; }
	inline void set_U3CU3Ef__mgU24cache9_105(grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * value)
	{
		___U3CU3Ef__mgU24cache9_105 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_105), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_106() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA_106)); }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * get_U3CU3Ef__mgU24cacheA_106() const { return ___U3CU3Ef__mgU24cacheA_106; }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 ** get_address_of_U3CU3Ef__mgU24cacheA_106() { return &___U3CU3Ef__mgU24cacheA_106; }
	inline void set_U3CU3Ef__mgU24cacheA_106(grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * value)
	{
		___U3CU3Ef__mgU24cacheA_106 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_106), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_107() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB_107)); }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 * get_U3CU3Ef__mgU24cacheB_107() const { return ___U3CU3Ef__mgU24cacheB_107; }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 ** get_address_of_U3CU3Ef__mgU24cacheB_107() { return &___U3CU3Ef__mgU24cacheB_107; }
	inline void set_U3CU3Ef__mgU24cacheB_107(grpcsharp_batch_context_reset_delegate_t1240336310 * value)
	{
		___U3CU3Ef__mgU24cacheB_107 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_107), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_108() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheC_108)); }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 * get_U3CU3Ef__mgU24cacheC_108() const { return ___U3CU3Ef__mgU24cacheC_108; }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 ** get_address_of_U3CU3Ef__mgU24cacheC_108() { return &___U3CU3Ef__mgU24cacheC_108; }
	inline void set_U3CU3Ef__mgU24cacheC_108(grpcsharp_batch_context_destroy_delegate_t3097840777 * value)
	{
		___U3CU3Ef__mgU24cacheC_108 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_108), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_109() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheD_109)); }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 * get_U3CU3Ef__mgU24cacheD_109() const { return ___U3CU3Ef__mgU24cacheD_109; }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 ** get_address_of_U3CU3Ef__mgU24cacheD_109() { return &___U3CU3Ef__mgU24cacheD_109; }
	inline void set_U3CU3Ef__mgU24cacheD_109(grpcsharp_request_call_context_create_delegate_t1071596268 * value)
	{
		___U3CU3Ef__mgU24cacheD_109 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_109), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_110() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheE_110)); }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 * get_U3CU3Ef__mgU24cacheE_110() const { return ___U3CU3Ef__mgU24cacheE_110; }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 ** get_address_of_U3CU3Ef__mgU24cacheE_110() { return &___U3CU3Ef__mgU24cacheE_110; }
	inline void set_U3CU3Ef__mgU24cacheE_110(grpcsharp_request_call_context_call_delegate_t2297854097 * value)
	{
		___U3CU3Ef__mgU24cacheE_110 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_110), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_111() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheF_111)); }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 * get_U3CU3Ef__mgU24cacheF_111() const { return ___U3CU3Ef__mgU24cacheF_111; }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 ** get_address_of_U3CU3Ef__mgU24cacheF_111() { return &___U3CU3Ef__mgU24cacheF_111; }
	inline void set_U3CU3Ef__mgU24cacheF_111(grpcsharp_request_call_context_method_delegate_t1144596552 * value)
	{
		___U3CU3Ef__mgU24cacheF_111 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_111), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_112() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache10_112)); }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 * get_U3CU3Ef__mgU24cache10_112() const { return ___U3CU3Ef__mgU24cache10_112; }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 ** get_address_of_U3CU3Ef__mgU24cache10_112() { return &___U3CU3Ef__mgU24cache10_112; }
	inline void set_U3CU3Ef__mgU24cache10_112(grpcsharp_request_call_context_host_delegate_t2701984728 * value)
	{
		___U3CU3Ef__mgU24cache10_112 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_112), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_113() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache11_113)); }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 * get_U3CU3Ef__mgU24cache11_113() const { return ___U3CU3Ef__mgU24cache11_113; }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 ** get_address_of_U3CU3Ef__mgU24cache11_113() { return &___U3CU3Ef__mgU24cache11_113; }
	inline void set_U3CU3Ef__mgU24cache11_113(grpcsharp_request_call_context_deadline_delegate_t3662856317 * value)
	{
		___U3CU3Ef__mgU24cache11_113 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_113), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_114() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache12_114)); }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * get_U3CU3Ef__mgU24cache12_114() const { return ___U3CU3Ef__mgU24cache12_114; }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 ** get_address_of_U3CU3Ef__mgU24cache12_114() { return &___U3CU3Ef__mgU24cache12_114; }
	inline void set_U3CU3Ef__mgU24cache12_114(grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * value)
	{
		___U3CU3Ef__mgU24cache12_114 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache12_114), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_115() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache13_115)); }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 * get_U3CU3Ef__mgU24cache13_115() const { return ___U3CU3Ef__mgU24cache13_115; }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 ** get_address_of_U3CU3Ef__mgU24cache13_115() { return &___U3CU3Ef__mgU24cache13_115; }
	inline void set_U3CU3Ef__mgU24cache13_115(grpcsharp_request_call_context_reset_delegate_t511489013 * value)
	{
		___U3CU3Ef__mgU24cache13_115 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache13_115), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_116() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache14_116)); }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 * get_U3CU3Ef__mgU24cache14_116() const { return ___U3CU3Ef__mgU24cache14_116; }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 ** get_address_of_U3CU3Ef__mgU24cache14_116() { return &___U3CU3Ef__mgU24cache14_116; }
	inline void set_U3CU3Ef__mgU24cache14_116(grpcsharp_request_call_context_destroy_delegate_t2729585044 * value)
	{
		___U3CU3Ef__mgU24cache14_116 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache14_116), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache15_117() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache15_117)); }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 * get_U3CU3Ef__mgU24cache15_117() const { return ___U3CU3Ef__mgU24cache15_117; }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 ** get_address_of_U3CU3Ef__mgU24cache15_117() { return &___U3CU3Ef__mgU24cache15_117; }
	inline void set_U3CU3Ef__mgU24cache15_117(grpcsharp_composite_call_credentials_create_delegate_t3738706681 * value)
	{
		___U3CU3Ef__mgU24cache15_117 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache15_117), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache16_118() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache16_118)); }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 * get_U3CU3Ef__mgU24cache16_118() const { return ___U3CU3Ef__mgU24cache16_118; }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 ** get_address_of_U3CU3Ef__mgU24cache16_118() { return &___U3CU3Ef__mgU24cache16_118; }
	inline void set_U3CU3Ef__mgU24cache16_118(grpcsharp_call_credentials_release_delegate_t4173796462 * value)
	{
		___U3CU3Ef__mgU24cache16_118 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache16_118), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache17_119() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache17_119)); }
	inline grpcsharp_call_cancel_delegate_t1770075385 * get_U3CU3Ef__mgU24cache17_119() const { return ___U3CU3Ef__mgU24cache17_119; }
	inline grpcsharp_call_cancel_delegate_t1770075385 ** get_address_of_U3CU3Ef__mgU24cache17_119() { return &___U3CU3Ef__mgU24cache17_119; }
	inline void set_U3CU3Ef__mgU24cache17_119(grpcsharp_call_cancel_delegate_t1770075385 * value)
	{
		___U3CU3Ef__mgU24cache17_119 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache17_119), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache18_120() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache18_120)); }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 * get_U3CU3Ef__mgU24cache18_120() const { return ___U3CU3Ef__mgU24cache18_120; }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 ** get_address_of_U3CU3Ef__mgU24cache18_120() { return &___U3CU3Ef__mgU24cache18_120; }
	inline void set_U3CU3Ef__mgU24cache18_120(grpcsharp_call_cancel_with_status_delegate_t322311674 * value)
	{
		___U3CU3Ef__mgU24cache18_120 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache18_120), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache19_121() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache19_121)); }
	inline grpcsharp_call_start_unary_delegate_t1332494428 * get_U3CU3Ef__mgU24cache19_121() const { return ___U3CU3Ef__mgU24cache19_121; }
	inline grpcsharp_call_start_unary_delegate_t1332494428 ** get_address_of_U3CU3Ef__mgU24cache19_121() { return &___U3CU3Ef__mgU24cache19_121; }
	inline void set_U3CU3Ef__mgU24cache19_121(grpcsharp_call_start_unary_delegate_t1332494428 * value)
	{
		___U3CU3Ef__mgU24cache19_121 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache19_121), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1A_122() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1A_122)); }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 * get_U3CU3Ef__mgU24cache1A_122() const { return ___U3CU3Ef__mgU24cache1A_122; }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 ** get_address_of_U3CU3Ef__mgU24cache1A_122() { return &___U3CU3Ef__mgU24cache1A_122; }
	inline void set_U3CU3Ef__mgU24cache1A_122(grpcsharp_call_start_client_streaming_delegate_t186521236 * value)
	{
		___U3CU3Ef__mgU24cache1A_122 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1A_122), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1B_123() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1B_123)); }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 * get_U3CU3Ef__mgU24cache1B_123() const { return ___U3CU3Ef__mgU24cache1B_123; }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 ** get_address_of_U3CU3Ef__mgU24cache1B_123() { return &___U3CU3Ef__mgU24cache1B_123; }
	inline void set_U3CU3Ef__mgU24cache1B_123(grpcsharp_call_start_server_streaming_delegate_t941302023 * value)
	{
		___U3CU3Ef__mgU24cache1B_123 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1B_123), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1C_124() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1C_124)); }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 * get_U3CU3Ef__mgU24cache1C_124() const { return ___U3CU3Ef__mgU24cache1C_124; }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 ** get_address_of_U3CU3Ef__mgU24cache1C_124() { return &___U3CU3Ef__mgU24cache1C_124; }
	inline void set_U3CU3Ef__mgU24cache1C_124(grpcsharp_call_start_duplex_streaming_delegate_t668243240 * value)
	{
		___U3CU3Ef__mgU24cache1C_124 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1C_124), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1D_125() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1D_125)); }
	inline grpcsharp_call_send_message_delegate_t80977843 * get_U3CU3Ef__mgU24cache1D_125() const { return ___U3CU3Ef__mgU24cache1D_125; }
	inline grpcsharp_call_send_message_delegate_t80977843 ** get_address_of_U3CU3Ef__mgU24cache1D_125() { return &___U3CU3Ef__mgU24cache1D_125; }
	inline void set_U3CU3Ef__mgU24cache1D_125(grpcsharp_call_send_message_delegate_t80977843 * value)
	{
		___U3CU3Ef__mgU24cache1D_125 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1D_125), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1E_126() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1E_126)); }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 * get_U3CU3Ef__mgU24cache1E_126() const { return ___U3CU3Ef__mgU24cache1E_126; }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 ** get_address_of_U3CU3Ef__mgU24cache1E_126() { return &___U3CU3Ef__mgU24cache1E_126; }
	inline void set_U3CU3Ef__mgU24cache1E_126(grpcsharp_call_send_close_from_client_delegate_t3404740706 * value)
	{
		___U3CU3Ef__mgU24cache1E_126 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1E_126), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1F_127() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache1F_127)); }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 * get_U3CU3Ef__mgU24cache1F_127() const { return ___U3CU3Ef__mgU24cache1F_127; }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 ** get_address_of_U3CU3Ef__mgU24cache1F_127() { return &___U3CU3Ef__mgU24cache1F_127; }
	inline void set_U3CU3Ef__mgU24cache1F_127(grpcsharp_call_send_status_from_server_delegate_t1281609886 * value)
	{
		___U3CU3Ef__mgU24cache1F_127 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1F_127), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache20_128() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache20_128)); }
	inline grpcsharp_call_recv_message_delegate_t3263680702 * get_U3CU3Ef__mgU24cache20_128() const { return ___U3CU3Ef__mgU24cache20_128; }
	inline grpcsharp_call_recv_message_delegate_t3263680702 ** get_address_of_U3CU3Ef__mgU24cache20_128() { return &___U3CU3Ef__mgU24cache20_128; }
	inline void set_U3CU3Ef__mgU24cache20_128(grpcsharp_call_recv_message_delegate_t3263680702 * value)
	{
		___U3CU3Ef__mgU24cache20_128 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache20_128), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache21_129() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache21_129)); }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * get_U3CU3Ef__mgU24cache21_129() const { return ___U3CU3Ef__mgU24cache21_129; }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 ** get_address_of_U3CU3Ef__mgU24cache21_129() { return &___U3CU3Ef__mgU24cache21_129; }
	inline void set_U3CU3Ef__mgU24cache21_129(grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * value)
	{
		___U3CU3Ef__mgU24cache21_129 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache21_129), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache22_130() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache22_130)); }
	inline grpcsharp_call_start_serverside_delegate_t702333229 * get_U3CU3Ef__mgU24cache22_130() const { return ___U3CU3Ef__mgU24cache22_130; }
	inline grpcsharp_call_start_serverside_delegate_t702333229 ** get_address_of_U3CU3Ef__mgU24cache22_130() { return &___U3CU3Ef__mgU24cache22_130; }
	inline void set_U3CU3Ef__mgU24cache22_130(grpcsharp_call_start_serverside_delegate_t702333229 * value)
	{
		___U3CU3Ef__mgU24cache22_130 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache22_130), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache23_131() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache23_131)); }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 * get_U3CU3Ef__mgU24cache23_131() const { return ___U3CU3Ef__mgU24cache23_131; }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 ** get_address_of_U3CU3Ef__mgU24cache23_131() { return &___U3CU3Ef__mgU24cache23_131; }
	inline void set_U3CU3Ef__mgU24cache23_131(grpcsharp_call_send_initial_metadata_delegate_t2871837368 * value)
	{
		___U3CU3Ef__mgU24cache23_131 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache23_131), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache24_132() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache24_132)); }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 * get_U3CU3Ef__mgU24cache24_132() const { return ___U3CU3Ef__mgU24cache24_132; }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 ** get_address_of_U3CU3Ef__mgU24cache24_132() { return &___U3CU3Ef__mgU24cache24_132; }
	inline void set_U3CU3Ef__mgU24cache24_132(grpcsharp_call_set_credentials_delegate_t2164951723 * value)
	{
		___U3CU3Ef__mgU24cache24_132 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache24_132), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache25_133() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache25_133)); }
	inline grpcsharp_call_get_peer_delegate_t4293430173 * get_U3CU3Ef__mgU24cache25_133() const { return ___U3CU3Ef__mgU24cache25_133; }
	inline grpcsharp_call_get_peer_delegate_t4293430173 ** get_address_of_U3CU3Ef__mgU24cache25_133() { return &___U3CU3Ef__mgU24cache25_133; }
	inline void set_U3CU3Ef__mgU24cache25_133(grpcsharp_call_get_peer_delegate_t4293430173 * value)
	{
		___U3CU3Ef__mgU24cache25_133 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache25_133), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache26_134() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache26_134)); }
	inline grpcsharp_call_destroy_delegate_t3472236717 * get_U3CU3Ef__mgU24cache26_134() const { return ___U3CU3Ef__mgU24cache26_134; }
	inline grpcsharp_call_destroy_delegate_t3472236717 ** get_address_of_U3CU3Ef__mgU24cache26_134() { return &___U3CU3Ef__mgU24cache26_134; }
	inline void set_U3CU3Ef__mgU24cache26_134(grpcsharp_call_destroy_delegate_t3472236717 * value)
	{
		___U3CU3Ef__mgU24cache26_134 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache26_134), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache27_135() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache27_135)); }
	inline grpcsharp_channel_args_create_delegate_t223697083 * get_U3CU3Ef__mgU24cache27_135() const { return ___U3CU3Ef__mgU24cache27_135; }
	inline grpcsharp_channel_args_create_delegate_t223697083 ** get_address_of_U3CU3Ef__mgU24cache27_135() { return &___U3CU3Ef__mgU24cache27_135; }
	inline void set_U3CU3Ef__mgU24cache27_135(grpcsharp_channel_args_create_delegate_t223697083 * value)
	{
		___U3CU3Ef__mgU24cache27_135 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache27_135), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache28_136() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache28_136)); }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 * get_U3CU3Ef__mgU24cache28_136() const { return ___U3CU3Ef__mgU24cache28_136; }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 ** get_address_of_U3CU3Ef__mgU24cache28_136() { return &___U3CU3Ef__mgU24cache28_136; }
	inline void set_U3CU3Ef__mgU24cache28_136(grpcsharp_channel_args_set_string_delegate_t2671812739 * value)
	{
		___U3CU3Ef__mgU24cache28_136 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache28_136), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache29_137() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache29_137)); }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 * get_U3CU3Ef__mgU24cache29_137() const { return ___U3CU3Ef__mgU24cache29_137; }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 ** get_address_of_U3CU3Ef__mgU24cache29_137() { return &___U3CU3Ef__mgU24cache29_137; }
	inline void set_U3CU3Ef__mgU24cache29_137(grpcsharp_channel_args_set_integer_delegate_t1374818234 * value)
	{
		___U3CU3Ef__mgU24cache29_137 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache29_137), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2A_138() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2A_138)); }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 * get_U3CU3Ef__mgU24cache2A_138() const { return ___U3CU3Ef__mgU24cache2A_138; }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 ** get_address_of_U3CU3Ef__mgU24cache2A_138() { return &___U3CU3Ef__mgU24cache2A_138; }
	inline void set_U3CU3Ef__mgU24cache2A_138(grpcsharp_channel_args_destroy_delegate_t3019422610 * value)
	{
		___U3CU3Ef__mgU24cache2A_138 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2A_138), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2B_139() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2B_139)); }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 * get_U3CU3Ef__mgU24cache2B_139() const { return ___U3CU3Ef__mgU24cache2B_139; }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 ** get_address_of_U3CU3Ef__mgU24cache2B_139() { return &___U3CU3Ef__mgU24cache2B_139; }
	inline void set_U3CU3Ef__mgU24cache2B_139(grpcsharp_override_default_ssl_roots_delegate_t2112048917 * value)
	{
		___U3CU3Ef__mgU24cache2B_139 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2B_139), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2C_140() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2C_140)); }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 * get_U3CU3Ef__mgU24cache2C_140() const { return ___U3CU3Ef__mgU24cache2C_140; }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 ** get_address_of_U3CU3Ef__mgU24cache2C_140() { return &___U3CU3Ef__mgU24cache2C_140; }
	inline void set_U3CU3Ef__mgU24cache2C_140(grpcsharp_ssl_credentials_create_delegate_t1837265019 * value)
	{
		___U3CU3Ef__mgU24cache2C_140 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2C_140), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2D_141() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2D_141)); }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 * get_U3CU3Ef__mgU24cache2D_141() const { return ___U3CU3Ef__mgU24cache2D_141; }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 ** get_address_of_U3CU3Ef__mgU24cache2D_141() { return &___U3CU3Ef__mgU24cache2D_141; }
	inline void set_U3CU3Ef__mgU24cache2D_141(grpcsharp_composite_channel_credentials_create_delegate_t11741719 * value)
	{
		___U3CU3Ef__mgU24cache2D_141 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2D_141), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2E_142() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2E_142)); }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 * get_U3CU3Ef__mgU24cache2E_142() const { return ___U3CU3Ef__mgU24cache2E_142; }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 ** get_address_of_U3CU3Ef__mgU24cache2E_142() { return &___U3CU3Ef__mgU24cache2E_142; }
	inline void set_U3CU3Ef__mgU24cache2E_142(grpcsharp_channel_credentials_release_delegate_t3260923539 * value)
	{
		___U3CU3Ef__mgU24cache2E_142 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2E_142), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2F_143() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache2F_143)); }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 * get_U3CU3Ef__mgU24cache2F_143() const { return ___U3CU3Ef__mgU24cache2F_143; }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 ** get_address_of_U3CU3Ef__mgU24cache2F_143() { return &___U3CU3Ef__mgU24cache2F_143; }
	inline void set_U3CU3Ef__mgU24cache2F_143(grpcsharp_insecure_channel_create_delegate_t1754677822 * value)
	{
		___U3CU3Ef__mgU24cache2F_143 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2F_143), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache30_144() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache30_144)); }
	inline grpcsharp_secure_channel_create_delegate_t858919073 * get_U3CU3Ef__mgU24cache30_144() const { return ___U3CU3Ef__mgU24cache30_144; }
	inline grpcsharp_secure_channel_create_delegate_t858919073 ** get_address_of_U3CU3Ef__mgU24cache30_144() { return &___U3CU3Ef__mgU24cache30_144; }
	inline void set_U3CU3Ef__mgU24cache30_144(grpcsharp_secure_channel_create_delegate_t858919073 * value)
	{
		___U3CU3Ef__mgU24cache30_144 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache30_144), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache31_145() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache31_145)); }
	inline grpcsharp_channel_create_call_delegate_t1689755209 * get_U3CU3Ef__mgU24cache31_145() const { return ___U3CU3Ef__mgU24cache31_145; }
	inline grpcsharp_channel_create_call_delegate_t1689755209 ** get_address_of_U3CU3Ef__mgU24cache31_145() { return &___U3CU3Ef__mgU24cache31_145; }
	inline void set_U3CU3Ef__mgU24cache31_145(grpcsharp_channel_create_call_delegate_t1689755209 * value)
	{
		___U3CU3Ef__mgU24cache31_145 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache31_145), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache32_146() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache32_146)); }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * get_U3CU3Ef__mgU24cache32_146() const { return ___U3CU3Ef__mgU24cache32_146; }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 ** get_address_of_U3CU3Ef__mgU24cache32_146() { return &___U3CU3Ef__mgU24cache32_146; }
	inline void set_U3CU3Ef__mgU24cache32_146(grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * value)
	{
		___U3CU3Ef__mgU24cache32_146 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache32_146), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache33_147() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache33_147)); }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * get_U3CU3Ef__mgU24cache33_147() const { return ___U3CU3Ef__mgU24cache33_147; }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 ** get_address_of_U3CU3Ef__mgU24cache33_147() { return &___U3CU3Ef__mgU24cache33_147; }
	inline void set_U3CU3Ef__mgU24cache33_147(grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * value)
	{
		___U3CU3Ef__mgU24cache33_147 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache33_147), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache34_148() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache34_148)); }
	inline grpcsharp_channel_get_target_delegate_t1912627058 * get_U3CU3Ef__mgU24cache34_148() const { return ___U3CU3Ef__mgU24cache34_148; }
	inline grpcsharp_channel_get_target_delegate_t1912627058 ** get_address_of_U3CU3Ef__mgU24cache34_148() { return &___U3CU3Ef__mgU24cache34_148; }
	inline void set_U3CU3Ef__mgU24cache34_148(grpcsharp_channel_get_target_delegate_t1912627058 * value)
	{
		___U3CU3Ef__mgU24cache34_148 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache34_148), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache35_149() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache35_149)); }
	inline grpcsharp_channel_destroy_delegate_t1789251192 * get_U3CU3Ef__mgU24cache35_149() const { return ___U3CU3Ef__mgU24cache35_149; }
	inline grpcsharp_channel_destroy_delegate_t1789251192 ** get_address_of_U3CU3Ef__mgU24cache35_149() { return &___U3CU3Ef__mgU24cache35_149; }
	inline void set_U3CU3Ef__mgU24cache35_149(grpcsharp_channel_destroy_delegate_t1789251192 * value)
	{
		___U3CU3Ef__mgU24cache35_149 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache35_149), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache36_150() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache36_150)); }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 * get_U3CU3Ef__mgU24cache36_150() const { return ___U3CU3Ef__mgU24cache36_150; }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 ** get_address_of_U3CU3Ef__mgU24cache36_150() { return &___U3CU3Ef__mgU24cache36_150; }
	inline void set_U3CU3Ef__mgU24cache36_150(grpcsharp_sizeof_grpc_event_delegate_t4083509947 * value)
	{
		___U3CU3Ef__mgU24cache36_150 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache36_150), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache37_151() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache37_151)); }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 * get_U3CU3Ef__mgU24cache37_151() const { return ___U3CU3Ef__mgU24cache37_151; }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 ** get_address_of_U3CU3Ef__mgU24cache37_151() { return &___U3CU3Ef__mgU24cache37_151; }
	inline void set_U3CU3Ef__mgU24cache37_151(grpcsharp_completion_queue_create_async_delegate_t360079728 * value)
	{
		___U3CU3Ef__mgU24cache37_151 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache37_151), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache38_152() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache38_152)); }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 * get_U3CU3Ef__mgU24cache38_152() const { return ___U3CU3Ef__mgU24cache38_152; }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 ** get_address_of_U3CU3Ef__mgU24cache38_152() { return &___U3CU3Ef__mgU24cache38_152; }
	inline void set_U3CU3Ef__mgU24cache38_152(grpcsharp_completion_queue_create_sync_delegate_t1808910508 * value)
	{
		___U3CU3Ef__mgU24cache38_152 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache38_152), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache39_153() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache39_153)); }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 * get_U3CU3Ef__mgU24cache39_153() const { return ___U3CU3Ef__mgU24cache39_153; }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 ** get_address_of_U3CU3Ef__mgU24cache39_153() { return &___U3CU3Ef__mgU24cache39_153; }
	inline void set_U3CU3Ef__mgU24cache39_153(grpcsharp_completion_queue_shutdown_delegate_t248163633 * value)
	{
		___U3CU3Ef__mgU24cache39_153 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache39_153), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3A_154() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3A_154)); }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 * get_U3CU3Ef__mgU24cache3A_154() const { return ___U3CU3Ef__mgU24cache3A_154; }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 ** get_address_of_U3CU3Ef__mgU24cache3A_154() { return &___U3CU3Ef__mgU24cache3A_154; }
	inline void set_U3CU3Ef__mgU24cache3A_154(grpcsharp_completion_queue_next_delegate_t3269686616 * value)
	{
		___U3CU3Ef__mgU24cache3A_154 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3A_154), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3B_155() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3B_155)); }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 * get_U3CU3Ef__mgU24cache3B_155() const { return ___U3CU3Ef__mgU24cache3B_155; }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 ** get_address_of_U3CU3Ef__mgU24cache3B_155() { return &___U3CU3Ef__mgU24cache3B_155; }
	inline void set_U3CU3Ef__mgU24cache3B_155(grpcsharp_completion_queue_pluck_delegate_t285374971 * value)
	{
		___U3CU3Ef__mgU24cache3B_155 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3B_155), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3C_156() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3C_156)); }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 * get_U3CU3Ef__mgU24cache3C_156() const { return ___U3CU3Ef__mgU24cache3C_156; }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 ** get_address_of_U3CU3Ef__mgU24cache3C_156() { return &___U3CU3Ef__mgU24cache3C_156; }
	inline void set_U3CU3Ef__mgU24cache3C_156(grpcsharp_completion_queue_destroy_delegate_t1464055640 * value)
	{
		___U3CU3Ef__mgU24cache3C_156 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3C_156), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3D_157() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3D_157)); }
	inline gprsharp_free_delegate_t3453134242 * get_U3CU3Ef__mgU24cache3D_157() const { return ___U3CU3Ef__mgU24cache3D_157; }
	inline gprsharp_free_delegate_t3453134242 ** get_address_of_U3CU3Ef__mgU24cache3D_157() { return &___U3CU3Ef__mgU24cache3D_157; }
	inline void set_U3CU3Ef__mgU24cache3D_157(gprsharp_free_delegate_t3453134242 * value)
	{
		___U3CU3Ef__mgU24cache3D_157 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3D_157), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3E_158() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3E_158)); }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 * get_U3CU3Ef__mgU24cache3E_158() const { return ___U3CU3Ef__mgU24cache3E_158; }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 ** get_address_of_U3CU3Ef__mgU24cache3E_158() { return &___U3CU3Ef__mgU24cache3E_158; }
	inline void set_U3CU3Ef__mgU24cache3E_158(grpcsharp_metadata_array_create_delegate_t2940265924 * value)
	{
		___U3CU3Ef__mgU24cache3E_158 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3E_158), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3F_159() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache3F_159)); }
	inline grpcsharp_metadata_array_add_delegate_t281551042 * get_U3CU3Ef__mgU24cache3F_159() const { return ___U3CU3Ef__mgU24cache3F_159; }
	inline grpcsharp_metadata_array_add_delegate_t281551042 ** get_address_of_U3CU3Ef__mgU24cache3F_159() { return &___U3CU3Ef__mgU24cache3F_159; }
	inline void set_U3CU3Ef__mgU24cache3F_159(grpcsharp_metadata_array_add_delegate_t281551042 * value)
	{
		___U3CU3Ef__mgU24cache3F_159 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3F_159), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache40_160() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache40_160)); }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 * get_U3CU3Ef__mgU24cache40_160() const { return ___U3CU3Ef__mgU24cache40_160; }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 ** get_address_of_U3CU3Ef__mgU24cache40_160() { return &___U3CU3Ef__mgU24cache40_160; }
	inline void set_U3CU3Ef__mgU24cache40_160(grpcsharp_metadata_array_count_delegate_t1171955796 * value)
	{
		___U3CU3Ef__mgU24cache40_160 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache40_160), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache41_161() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache41_161)); }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 * get_U3CU3Ef__mgU24cache41_161() const { return ___U3CU3Ef__mgU24cache41_161; }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 ** get_address_of_U3CU3Ef__mgU24cache41_161() { return &___U3CU3Ef__mgU24cache41_161; }
	inline void set_U3CU3Ef__mgU24cache41_161(grpcsharp_metadata_array_get_key_delegate_t2312063556 * value)
	{
		___U3CU3Ef__mgU24cache41_161 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache41_161), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache42_162() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache42_162)); }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 * get_U3CU3Ef__mgU24cache42_162() const { return ___U3CU3Ef__mgU24cache42_162; }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 ** get_address_of_U3CU3Ef__mgU24cache42_162() { return &___U3CU3Ef__mgU24cache42_162; }
	inline void set_U3CU3Ef__mgU24cache42_162(grpcsharp_metadata_array_get_value_delegate_t2215973087 * value)
	{
		___U3CU3Ef__mgU24cache42_162 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache42_162), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache43_163() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache43_163)); }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 * get_U3CU3Ef__mgU24cache43_163() const { return ___U3CU3Ef__mgU24cache43_163; }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 ** get_address_of_U3CU3Ef__mgU24cache43_163() { return &___U3CU3Ef__mgU24cache43_163; }
	inline void set_U3CU3Ef__mgU24cache43_163(grpcsharp_metadata_array_destroy_full_delegate_t46908578 * value)
	{
		___U3CU3Ef__mgU24cache43_163 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache43_163), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache44_164() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache44_164)); }
	inline grpcsharp_redirect_log_delegate_t1051680661 * get_U3CU3Ef__mgU24cache44_164() const { return ___U3CU3Ef__mgU24cache44_164; }
	inline grpcsharp_redirect_log_delegate_t1051680661 ** get_address_of_U3CU3Ef__mgU24cache44_164() { return &___U3CU3Ef__mgU24cache44_164; }
	inline void set_U3CU3Ef__mgU24cache44_164(grpcsharp_redirect_log_delegate_t1051680661 * value)
	{
		___U3CU3Ef__mgU24cache44_164 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache44_164), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache45_165() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache45_165)); }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * get_U3CU3Ef__mgU24cache45_165() const { return ___U3CU3Ef__mgU24cache45_165; }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 ** get_address_of_U3CU3Ef__mgU24cache45_165() { return &___U3CU3Ef__mgU24cache45_165; }
	inline void set_U3CU3Ef__mgU24cache45_165(grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * value)
	{
		___U3CU3Ef__mgU24cache45_165 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache45_165), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache46_166() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache46_166)); }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * get_U3CU3Ef__mgU24cache46_166() const { return ___U3CU3Ef__mgU24cache46_166; }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 ** get_address_of_U3CU3Ef__mgU24cache46_166() { return &___U3CU3Ef__mgU24cache46_166; }
	inline void set_U3CU3Ef__mgU24cache46_166(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * value)
	{
		___U3CU3Ef__mgU24cache46_166 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache46_166), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache47_167() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache47_167)); }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * get_U3CU3Ef__mgU24cache47_167() const { return ___U3CU3Ef__mgU24cache47_167; }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 ** get_address_of_U3CU3Ef__mgU24cache47_167() { return &___U3CU3Ef__mgU24cache47_167; }
	inline void set_U3CU3Ef__mgU24cache47_167(grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * value)
	{
		___U3CU3Ef__mgU24cache47_167 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache47_167), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache48_168() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache48_168)); }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 * get_U3CU3Ef__mgU24cache48_168() const { return ___U3CU3Ef__mgU24cache48_168; }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 ** get_address_of_U3CU3Ef__mgU24cache48_168() { return &___U3CU3Ef__mgU24cache48_168; }
	inline void set_U3CU3Ef__mgU24cache48_168(grpcsharp_server_credentials_release_delegate_t2095714663 * value)
	{
		___U3CU3Ef__mgU24cache48_168 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache48_168), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache49_169() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache49_169)); }
	inline grpcsharp_server_create_delegate_t4127831655 * get_U3CU3Ef__mgU24cache49_169() const { return ___U3CU3Ef__mgU24cache49_169; }
	inline grpcsharp_server_create_delegate_t4127831655 ** get_address_of_U3CU3Ef__mgU24cache49_169() { return &___U3CU3Ef__mgU24cache49_169; }
	inline void set_U3CU3Ef__mgU24cache49_169(grpcsharp_server_create_delegate_t4127831655 * value)
	{
		___U3CU3Ef__mgU24cache49_169 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache49_169), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4A_170() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4A_170)); }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 * get_U3CU3Ef__mgU24cache4A_170() const { return ___U3CU3Ef__mgU24cache4A_170; }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 ** get_address_of_U3CU3Ef__mgU24cache4A_170() { return &___U3CU3Ef__mgU24cache4A_170; }
	inline void set_U3CU3Ef__mgU24cache4A_170(grpcsharp_server_register_completion_queue_delegate_t2206715366 * value)
	{
		___U3CU3Ef__mgU24cache4A_170 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4A_170), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4B_171() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4B_171)); }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * get_U3CU3Ef__mgU24cache4B_171() const { return ___U3CU3Ef__mgU24cache4B_171; }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 ** get_address_of_U3CU3Ef__mgU24cache4B_171() { return &___U3CU3Ef__mgU24cache4B_171; }
	inline void set_U3CU3Ef__mgU24cache4B_171(grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * value)
	{
		___U3CU3Ef__mgU24cache4B_171 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4B_171), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4C_172() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4C_172)); }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 * get_U3CU3Ef__mgU24cache4C_172() const { return ___U3CU3Ef__mgU24cache4C_172; }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 ** get_address_of_U3CU3Ef__mgU24cache4C_172() { return &___U3CU3Ef__mgU24cache4C_172; }
	inline void set_U3CU3Ef__mgU24cache4C_172(grpcsharp_server_add_secure_http2_port_delegate_t102470377 * value)
	{
		___U3CU3Ef__mgU24cache4C_172 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4C_172), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4D_173() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4D_173)); }
	inline grpcsharp_server_start_delegate_t4158963393 * get_U3CU3Ef__mgU24cache4D_173() const { return ___U3CU3Ef__mgU24cache4D_173; }
	inline grpcsharp_server_start_delegate_t4158963393 ** get_address_of_U3CU3Ef__mgU24cache4D_173() { return &___U3CU3Ef__mgU24cache4D_173; }
	inline void set_U3CU3Ef__mgU24cache4D_173(grpcsharp_server_start_delegate_t4158963393 * value)
	{
		___U3CU3Ef__mgU24cache4D_173 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4D_173), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4E_174() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4E_174)); }
	inline grpcsharp_server_request_call_delegate_t2796155047 * get_U3CU3Ef__mgU24cache4E_174() const { return ___U3CU3Ef__mgU24cache4E_174; }
	inline grpcsharp_server_request_call_delegate_t2796155047 ** get_address_of_U3CU3Ef__mgU24cache4E_174() { return &___U3CU3Ef__mgU24cache4E_174; }
	inline void set_U3CU3Ef__mgU24cache4E_174(grpcsharp_server_request_call_delegate_t2796155047 * value)
	{
		___U3CU3Ef__mgU24cache4E_174 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4E_174), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4F_175() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache4F_175)); }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 * get_U3CU3Ef__mgU24cache4F_175() const { return ___U3CU3Ef__mgU24cache4F_175; }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 ** get_address_of_U3CU3Ef__mgU24cache4F_175() { return &___U3CU3Ef__mgU24cache4F_175; }
	inline void set_U3CU3Ef__mgU24cache4F_175(grpcsharp_server_cancel_all_calls_delegate_t4278007468 * value)
	{
		___U3CU3Ef__mgU24cache4F_175 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4F_175), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache50_176() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache50_176)); }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * get_U3CU3Ef__mgU24cache50_176() const { return ___U3CU3Ef__mgU24cache50_176; }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 ** get_address_of_U3CU3Ef__mgU24cache50_176() { return &___U3CU3Ef__mgU24cache50_176; }
	inline void set_U3CU3Ef__mgU24cache50_176(grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * value)
	{
		___U3CU3Ef__mgU24cache50_176 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache50_176), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache51_177() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache51_177)); }
	inline grpcsharp_server_destroy_delegate_t2436759005 * get_U3CU3Ef__mgU24cache51_177() const { return ___U3CU3Ef__mgU24cache51_177; }
	inline grpcsharp_server_destroy_delegate_t2436759005 ** get_address_of_U3CU3Ef__mgU24cache51_177() { return &___U3CU3Ef__mgU24cache51_177; }
	inline void set_U3CU3Ef__mgU24cache51_177(grpcsharp_server_destroy_delegate_t2436759005 * value)
	{
		___U3CU3Ef__mgU24cache51_177 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache51_177), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache52_178() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache52_178)); }
	inline grpcsharp_call_auth_context_delegate_t3089219098 * get_U3CU3Ef__mgU24cache52_178() const { return ___U3CU3Ef__mgU24cache52_178; }
	inline grpcsharp_call_auth_context_delegate_t3089219098 ** get_address_of_U3CU3Ef__mgU24cache52_178() { return &___U3CU3Ef__mgU24cache52_178; }
	inline void set_U3CU3Ef__mgU24cache52_178(grpcsharp_call_auth_context_delegate_t3089219098 * value)
	{
		___U3CU3Ef__mgU24cache52_178 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache52_178), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache53_179() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache53_179)); }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * get_U3CU3Ef__mgU24cache53_179() const { return ___U3CU3Ef__mgU24cache53_179; }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 ** get_address_of_U3CU3Ef__mgU24cache53_179() { return &___U3CU3Ef__mgU24cache53_179; }
	inline void set_U3CU3Ef__mgU24cache53_179(grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * value)
	{
		___U3CU3Ef__mgU24cache53_179 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache53_179), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache54_180() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache54_180)); }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 * get_U3CU3Ef__mgU24cache54_180() const { return ___U3CU3Ef__mgU24cache54_180; }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 ** get_address_of_U3CU3Ef__mgU24cache54_180() { return &___U3CU3Ef__mgU24cache54_180; }
	inline void set_U3CU3Ef__mgU24cache54_180(grpcsharp_auth_context_property_iterator_delegate_t641318545 * value)
	{
		___U3CU3Ef__mgU24cache54_180 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache54_180), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache55_181() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache55_181)); }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 * get_U3CU3Ef__mgU24cache55_181() const { return ___U3CU3Ef__mgU24cache55_181; }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 ** get_address_of_U3CU3Ef__mgU24cache55_181() { return &___U3CU3Ef__mgU24cache55_181; }
	inline void set_U3CU3Ef__mgU24cache55_181(grpcsharp_auth_property_iterator_next_delegate_t4267042899 * value)
	{
		___U3CU3Ef__mgU24cache55_181 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache55_181), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache56_182() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache56_182)); }
	inline grpcsharp_auth_context_release_delegate_t83664199 * get_U3CU3Ef__mgU24cache56_182() const { return ___U3CU3Ef__mgU24cache56_182; }
	inline grpcsharp_auth_context_release_delegate_t83664199 ** get_address_of_U3CU3Ef__mgU24cache56_182() { return &___U3CU3Ef__mgU24cache56_182; }
	inline void set_U3CU3Ef__mgU24cache56_182(grpcsharp_auth_context_release_delegate_t83664199 * value)
	{
		___U3CU3Ef__mgU24cache56_182 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache56_182), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache57_183() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache57_183)); }
	inline gprsharp_now_delegate_t2976584151 * get_U3CU3Ef__mgU24cache57_183() const { return ___U3CU3Ef__mgU24cache57_183; }
	inline gprsharp_now_delegate_t2976584151 ** get_address_of_U3CU3Ef__mgU24cache57_183() { return &___U3CU3Ef__mgU24cache57_183; }
	inline void set_U3CU3Ef__mgU24cache57_183(gprsharp_now_delegate_t2976584151 * value)
	{
		___U3CU3Ef__mgU24cache57_183 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache57_183), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache58_184() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache58_184)); }
	inline gprsharp_inf_future_delegate_t1471086569 * get_U3CU3Ef__mgU24cache58_184() const { return ___U3CU3Ef__mgU24cache58_184; }
	inline gprsharp_inf_future_delegate_t1471086569 ** get_address_of_U3CU3Ef__mgU24cache58_184() { return &___U3CU3Ef__mgU24cache58_184; }
	inline void set_U3CU3Ef__mgU24cache58_184(gprsharp_inf_future_delegate_t1471086569 * value)
	{
		___U3CU3Ef__mgU24cache58_184 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache58_184), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache59_185() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache59_185)); }
	inline gprsharp_inf_past_delegate_t3920462529 * get_U3CU3Ef__mgU24cache59_185() const { return ___U3CU3Ef__mgU24cache59_185; }
	inline gprsharp_inf_past_delegate_t3920462529 ** get_address_of_U3CU3Ef__mgU24cache59_185() { return &___U3CU3Ef__mgU24cache59_185; }
	inline void set_U3CU3Ef__mgU24cache59_185(gprsharp_inf_past_delegate_t3920462529 * value)
	{
		___U3CU3Ef__mgU24cache59_185 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache59_185), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5A_186() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5A_186)); }
	inline gprsharp_convert_clock_type_delegate_t1755859444 * get_U3CU3Ef__mgU24cache5A_186() const { return ___U3CU3Ef__mgU24cache5A_186; }
	inline gprsharp_convert_clock_type_delegate_t1755859444 ** get_address_of_U3CU3Ef__mgU24cache5A_186() { return &___U3CU3Ef__mgU24cache5A_186; }
	inline void set_U3CU3Ef__mgU24cache5A_186(gprsharp_convert_clock_type_delegate_t1755859444 * value)
	{
		___U3CU3Ef__mgU24cache5A_186 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5A_186), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5B_187() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5B_187)); }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 * get_U3CU3Ef__mgU24cache5B_187() const { return ___U3CU3Ef__mgU24cache5B_187; }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 ** get_address_of_U3CU3Ef__mgU24cache5B_187() { return &___U3CU3Ef__mgU24cache5B_187; }
	inline void set_U3CU3Ef__mgU24cache5B_187(gprsharp_sizeof_timespec_delegate_t1822509259 * value)
	{
		___U3CU3Ef__mgU24cache5B_187 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5B_187), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5C_188() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5C_188)); }
	inline grpcsharp_test_callback_delegate_t521268474 * get_U3CU3Ef__mgU24cache5C_188() const { return ___U3CU3Ef__mgU24cache5C_188; }
	inline grpcsharp_test_callback_delegate_t521268474 ** get_address_of_U3CU3Ef__mgU24cache5C_188() { return &___U3CU3Ef__mgU24cache5C_188; }
	inline void set_U3CU3Ef__mgU24cache5C_188(grpcsharp_test_callback_delegate_t521268474 * value)
	{
		___U3CU3Ef__mgU24cache5C_188 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5C_188), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5D_189() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5D_189)); }
	inline grpcsharp_test_nop_delegate_t1977043325 * get_U3CU3Ef__mgU24cache5D_189() const { return ___U3CU3Ef__mgU24cache5D_189; }
	inline grpcsharp_test_nop_delegate_t1977043325 ** get_address_of_U3CU3Ef__mgU24cache5D_189() { return &___U3CU3Ef__mgU24cache5D_189; }
	inline void set_U3CU3Ef__mgU24cache5D_189(grpcsharp_test_nop_delegate_t1977043325 * value)
	{
		___U3CU3Ef__mgU24cache5D_189 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5D_189), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5E_190() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5E_190)); }
	inline grpcsharp_test_override_method_delegate_t51326422 * get_U3CU3Ef__mgU24cache5E_190() const { return ___U3CU3Ef__mgU24cache5E_190; }
	inline grpcsharp_test_override_method_delegate_t51326422 ** get_address_of_U3CU3Ef__mgU24cache5E_190() { return &___U3CU3Ef__mgU24cache5E_190; }
	inline void set_U3CU3Ef__mgU24cache5E_190(grpcsharp_test_override_method_delegate_t51326422 * value)
	{
		___U3CU3Ef__mgU24cache5E_190 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5E_190), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5F_191() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache5F_191)); }
	inline grpcsharp_init_delegate_t697069341 * get_U3CU3Ef__mgU24cache5F_191() const { return ___U3CU3Ef__mgU24cache5F_191; }
	inline grpcsharp_init_delegate_t697069341 ** get_address_of_U3CU3Ef__mgU24cache5F_191() { return &___U3CU3Ef__mgU24cache5F_191; }
	inline void set_U3CU3Ef__mgU24cache5F_191(grpcsharp_init_delegate_t697069341 * value)
	{
		___U3CU3Ef__mgU24cache5F_191 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5F_191), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache60_192() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache60_192)); }
	inline grpcsharp_shutdown_delegate_t1539905248 * get_U3CU3Ef__mgU24cache60_192() const { return ___U3CU3Ef__mgU24cache60_192; }
	inline grpcsharp_shutdown_delegate_t1539905248 ** get_address_of_U3CU3Ef__mgU24cache60_192() { return &___U3CU3Ef__mgU24cache60_192; }
	inline void set_U3CU3Ef__mgU24cache60_192(grpcsharp_shutdown_delegate_t1539905248 * value)
	{
		___U3CU3Ef__mgU24cache60_192 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache60_192), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache61_193() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache61_193)); }
	inline grpcsharp_version_string_delegate_t3086718951 * get_U3CU3Ef__mgU24cache61_193() const { return ___U3CU3Ef__mgU24cache61_193; }
	inline grpcsharp_version_string_delegate_t3086718951 ** get_address_of_U3CU3Ef__mgU24cache61_193() { return &___U3CU3Ef__mgU24cache61_193; }
	inline void set_U3CU3Ef__mgU24cache61_193(grpcsharp_version_string_delegate_t3086718951 * value)
	{
		___U3CU3Ef__mgU24cache61_193 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache61_193), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache62_194() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache62_194)); }
	inline grpcsharp_batch_context_create_delegate_t4041094647 * get_U3CU3Ef__mgU24cache62_194() const { return ___U3CU3Ef__mgU24cache62_194; }
	inline grpcsharp_batch_context_create_delegate_t4041094647 ** get_address_of_U3CU3Ef__mgU24cache62_194() { return &___U3CU3Ef__mgU24cache62_194; }
	inline void set_U3CU3Ef__mgU24cache62_194(grpcsharp_batch_context_create_delegate_t4041094647 * value)
	{
		___U3CU3Ef__mgU24cache62_194 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache62_194), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache63_195() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache63_195)); }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * get_U3CU3Ef__mgU24cache63_195() const { return ___U3CU3Ef__mgU24cache63_195; }
	inline grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 ** get_address_of_U3CU3Ef__mgU24cache63_195() { return &___U3CU3Ef__mgU24cache63_195; }
	inline void set_U3CU3Ef__mgU24cache63_195(grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988 * value)
	{
		___U3CU3Ef__mgU24cache63_195 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache63_195), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache64_196() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache64_196)); }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * get_U3CU3Ef__mgU24cache64_196() const { return ___U3CU3Ef__mgU24cache64_196; }
	inline grpcsharp_batch_context_recv_message_length_delegate_t2576883917 ** get_address_of_U3CU3Ef__mgU24cache64_196() { return &___U3CU3Ef__mgU24cache64_196; }
	inline void set_U3CU3Ef__mgU24cache64_196(grpcsharp_batch_context_recv_message_length_delegate_t2576883917 * value)
	{
		___U3CU3Ef__mgU24cache64_196 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache64_196), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache65_197() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache65_197)); }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * get_U3CU3Ef__mgU24cache65_197() const { return ___U3CU3Ef__mgU24cache65_197; }
	inline grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 ** get_address_of_U3CU3Ef__mgU24cache65_197() { return &___U3CU3Ef__mgU24cache65_197; }
	inline void set_U3CU3Ef__mgU24cache65_197(grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513 * value)
	{
		___U3CU3Ef__mgU24cache65_197 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache65_197), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache66_198() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache66_198)); }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * get_U3CU3Ef__mgU24cache66_198() const { return ___U3CU3Ef__mgU24cache66_198; }
	inline grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 ** get_address_of_U3CU3Ef__mgU24cache66_198() { return &___U3CU3Ef__mgU24cache66_198; }
	inline void set_U3CU3Ef__mgU24cache66_198(grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403 * value)
	{
		___U3CU3Ef__mgU24cache66_198 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache66_198), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache67_199() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache67_199)); }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * get_U3CU3Ef__mgU24cache67_199() const { return ___U3CU3Ef__mgU24cache67_199; }
	inline grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 ** get_address_of_U3CU3Ef__mgU24cache67_199() { return &___U3CU3Ef__mgU24cache67_199; }
	inline void set_U3CU3Ef__mgU24cache67_199(grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363 * value)
	{
		___U3CU3Ef__mgU24cache67_199 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache67_199), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache68_200() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache68_200)); }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * get_U3CU3Ef__mgU24cache68_200() const { return ___U3CU3Ef__mgU24cache68_200; }
	inline grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 ** get_address_of_U3CU3Ef__mgU24cache68_200() { return &___U3CU3Ef__mgU24cache68_200; }
	inline void set_U3CU3Ef__mgU24cache68_200(grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499 * value)
	{
		___U3CU3Ef__mgU24cache68_200 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache68_200), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache69_201() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache69_201)); }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * get_U3CU3Ef__mgU24cache69_201() const { return ___U3CU3Ef__mgU24cache69_201; }
	inline grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 ** get_address_of_U3CU3Ef__mgU24cache69_201() { return &___U3CU3Ef__mgU24cache69_201; }
	inline void set_U3CU3Ef__mgU24cache69_201(grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573 * value)
	{
		___U3CU3Ef__mgU24cache69_201 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache69_201), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6A_202() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6A_202)); }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 * get_U3CU3Ef__mgU24cache6A_202() const { return ___U3CU3Ef__mgU24cache6A_202; }
	inline grpcsharp_batch_context_reset_delegate_t1240336310 ** get_address_of_U3CU3Ef__mgU24cache6A_202() { return &___U3CU3Ef__mgU24cache6A_202; }
	inline void set_U3CU3Ef__mgU24cache6A_202(grpcsharp_batch_context_reset_delegate_t1240336310 * value)
	{
		___U3CU3Ef__mgU24cache6A_202 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6A_202), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6B_203() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6B_203)); }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 * get_U3CU3Ef__mgU24cache6B_203() const { return ___U3CU3Ef__mgU24cache6B_203; }
	inline grpcsharp_batch_context_destroy_delegate_t3097840777 ** get_address_of_U3CU3Ef__mgU24cache6B_203() { return &___U3CU3Ef__mgU24cache6B_203; }
	inline void set_U3CU3Ef__mgU24cache6B_203(grpcsharp_batch_context_destroy_delegate_t3097840777 * value)
	{
		___U3CU3Ef__mgU24cache6B_203 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6B_203), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6C_204() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6C_204)); }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 * get_U3CU3Ef__mgU24cache6C_204() const { return ___U3CU3Ef__mgU24cache6C_204; }
	inline grpcsharp_request_call_context_create_delegate_t1071596268 ** get_address_of_U3CU3Ef__mgU24cache6C_204() { return &___U3CU3Ef__mgU24cache6C_204; }
	inline void set_U3CU3Ef__mgU24cache6C_204(grpcsharp_request_call_context_create_delegate_t1071596268 * value)
	{
		___U3CU3Ef__mgU24cache6C_204 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6C_204), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6D_205() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6D_205)); }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 * get_U3CU3Ef__mgU24cache6D_205() const { return ___U3CU3Ef__mgU24cache6D_205; }
	inline grpcsharp_request_call_context_call_delegate_t2297854097 ** get_address_of_U3CU3Ef__mgU24cache6D_205() { return &___U3CU3Ef__mgU24cache6D_205; }
	inline void set_U3CU3Ef__mgU24cache6D_205(grpcsharp_request_call_context_call_delegate_t2297854097 * value)
	{
		___U3CU3Ef__mgU24cache6D_205 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6D_205), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6E_206() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6E_206)); }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 * get_U3CU3Ef__mgU24cache6E_206() const { return ___U3CU3Ef__mgU24cache6E_206; }
	inline grpcsharp_request_call_context_method_delegate_t1144596552 ** get_address_of_U3CU3Ef__mgU24cache6E_206() { return &___U3CU3Ef__mgU24cache6E_206; }
	inline void set_U3CU3Ef__mgU24cache6E_206(grpcsharp_request_call_context_method_delegate_t1144596552 * value)
	{
		___U3CU3Ef__mgU24cache6E_206 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6E_206), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6F_207() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache6F_207)); }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 * get_U3CU3Ef__mgU24cache6F_207() const { return ___U3CU3Ef__mgU24cache6F_207; }
	inline grpcsharp_request_call_context_host_delegate_t2701984728 ** get_address_of_U3CU3Ef__mgU24cache6F_207() { return &___U3CU3Ef__mgU24cache6F_207; }
	inline void set_U3CU3Ef__mgU24cache6F_207(grpcsharp_request_call_context_host_delegate_t2701984728 * value)
	{
		___U3CU3Ef__mgU24cache6F_207 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6F_207), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache70_208() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache70_208)); }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 * get_U3CU3Ef__mgU24cache70_208() const { return ___U3CU3Ef__mgU24cache70_208; }
	inline grpcsharp_request_call_context_deadline_delegate_t3662856317 ** get_address_of_U3CU3Ef__mgU24cache70_208() { return &___U3CU3Ef__mgU24cache70_208; }
	inline void set_U3CU3Ef__mgU24cache70_208(grpcsharp_request_call_context_deadline_delegate_t3662856317 * value)
	{
		___U3CU3Ef__mgU24cache70_208 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache70_208), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache71_209() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache71_209)); }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * get_U3CU3Ef__mgU24cache71_209() const { return ___U3CU3Ef__mgU24cache71_209; }
	inline grpcsharp_request_call_context_request_metadata_delegate_t3549298166 ** get_address_of_U3CU3Ef__mgU24cache71_209() { return &___U3CU3Ef__mgU24cache71_209; }
	inline void set_U3CU3Ef__mgU24cache71_209(grpcsharp_request_call_context_request_metadata_delegate_t3549298166 * value)
	{
		___U3CU3Ef__mgU24cache71_209 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache71_209), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache72_210() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache72_210)); }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 * get_U3CU3Ef__mgU24cache72_210() const { return ___U3CU3Ef__mgU24cache72_210; }
	inline grpcsharp_request_call_context_reset_delegate_t511489013 ** get_address_of_U3CU3Ef__mgU24cache72_210() { return &___U3CU3Ef__mgU24cache72_210; }
	inline void set_U3CU3Ef__mgU24cache72_210(grpcsharp_request_call_context_reset_delegate_t511489013 * value)
	{
		___U3CU3Ef__mgU24cache72_210 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache72_210), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache73_211() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache73_211)); }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 * get_U3CU3Ef__mgU24cache73_211() const { return ___U3CU3Ef__mgU24cache73_211; }
	inline grpcsharp_request_call_context_destroy_delegate_t2729585044 ** get_address_of_U3CU3Ef__mgU24cache73_211() { return &___U3CU3Ef__mgU24cache73_211; }
	inline void set_U3CU3Ef__mgU24cache73_211(grpcsharp_request_call_context_destroy_delegate_t2729585044 * value)
	{
		___U3CU3Ef__mgU24cache73_211 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache73_211), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache74_212() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache74_212)); }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 * get_U3CU3Ef__mgU24cache74_212() const { return ___U3CU3Ef__mgU24cache74_212; }
	inline grpcsharp_composite_call_credentials_create_delegate_t3738706681 ** get_address_of_U3CU3Ef__mgU24cache74_212() { return &___U3CU3Ef__mgU24cache74_212; }
	inline void set_U3CU3Ef__mgU24cache74_212(grpcsharp_composite_call_credentials_create_delegate_t3738706681 * value)
	{
		___U3CU3Ef__mgU24cache74_212 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache74_212), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache75_213() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache75_213)); }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 * get_U3CU3Ef__mgU24cache75_213() const { return ___U3CU3Ef__mgU24cache75_213; }
	inline grpcsharp_call_credentials_release_delegate_t4173796462 ** get_address_of_U3CU3Ef__mgU24cache75_213() { return &___U3CU3Ef__mgU24cache75_213; }
	inline void set_U3CU3Ef__mgU24cache75_213(grpcsharp_call_credentials_release_delegate_t4173796462 * value)
	{
		___U3CU3Ef__mgU24cache75_213 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache75_213), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache76_214() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache76_214)); }
	inline grpcsharp_call_cancel_delegate_t1770075385 * get_U3CU3Ef__mgU24cache76_214() const { return ___U3CU3Ef__mgU24cache76_214; }
	inline grpcsharp_call_cancel_delegate_t1770075385 ** get_address_of_U3CU3Ef__mgU24cache76_214() { return &___U3CU3Ef__mgU24cache76_214; }
	inline void set_U3CU3Ef__mgU24cache76_214(grpcsharp_call_cancel_delegate_t1770075385 * value)
	{
		___U3CU3Ef__mgU24cache76_214 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache76_214), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache77_215() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache77_215)); }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 * get_U3CU3Ef__mgU24cache77_215() const { return ___U3CU3Ef__mgU24cache77_215; }
	inline grpcsharp_call_cancel_with_status_delegate_t322311674 ** get_address_of_U3CU3Ef__mgU24cache77_215() { return &___U3CU3Ef__mgU24cache77_215; }
	inline void set_U3CU3Ef__mgU24cache77_215(grpcsharp_call_cancel_with_status_delegate_t322311674 * value)
	{
		___U3CU3Ef__mgU24cache77_215 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache77_215), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache78_216() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache78_216)); }
	inline grpcsharp_call_start_unary_delegate_t1332494428 * get_U3CU3Ef__mgU24cache78_216() const { return ___U3CU3Ef__mgU24cache78_216; }
	inline grpcsharp_call_start_unary_delegate_t1332494428 ** get_address_of_U3CU3Ef__mgU24cache78_216() { return &___U3CU3Ef__mgU24cache78_216; }
	inline void set_U3CU3Ef__mgU24cache78_216(grpcsharp_call_start_unary_delegate_t1332494428 * value)
	{
		___U3CU3Ef__mgU24cache78_216 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache78_216), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache79_217() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache79_217)); }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 * get_U3CU3Ef__mgU24cache79_217() const { return ___U3CU3Ef__mgU24cache79_217; }
	inline grpcsharp_call_start_client_streaming_delegate_t186521236 ** get_address_of_U3CU3Ef__mgU24cache79_217() { return &___U3CU3Ef__mgU24cache79_217; }
	inline void set_U3CU3Ef__mgU24cache79_217(grpcsharp_call_start_client_streaming_delegate_t186521236 * value)
	{
		___U3CU3Ef__mgU24cache79_217 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache79_217), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7A_218() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7A_218)); }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 * get_U3CU3Ef__mgU24cache7A_218() const { return ___U3CU3Ef__mgU24cache7A_218; }
	inline grpcsharp_call_start_server_streaming_delegate_t941302023 ** get_address_of_U3CU3Ef__mgU24cache7A_218() { return &___U3CU3Ef__mgU24cache7A_218; }
	inline void set_U3CU3Ef__mgU24cache7A_218(grpcsharp_call_start_server_streaming_delegate_t941302023 * value)
	{
		___U3CU3Ef__mgU24cache7A_218 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7A_218), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7B_219() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7B_219)); }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 * get_U3CU3Ef__mgU24cache7B_219() const { return ___U3CU3Ef__mgU24cache7B_219; }
	inline grpcsharp_call_start_duplex_streaming_delegate_t668243240 ** get_address_of_U3CU3Ef__mgU24cache7B_219() { return &___U3CU3Ef__mgU24cache7B_219; }
	inline void set_U3CU3Ef__mgU24cache7B_219(grpcsharp_call_start_duplex_streaming_delegate_t668243240 * value)
	{
		___U3CU3Ef__mgU24cache7B_219 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7B_219), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7C_220() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7C_220)); }
	inline grpcsharp_call_send_message_delegate_t80977843 * get_U3CU3Ef__mgU24cache7C_220() const { return ___U3CU3Ef__mgU24cache7C_220; }
	inline grpcsharp_call_send_message_delegate_t80977843 ** get_address_of_U3CU3Ef__mgU24cache7C_220() { return &___U3CU3Ef__mgU24cache7C_220; }
	inline void set_U3CU3Ef__mgU24cache7C_220(grpcsharp_call_send_message_delegate_t80977843 * value)
	{
		___U3CU3Ef__mgU24cache7C_220 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7C_220), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7D_221() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7D_221)); }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 * get_U3CU3Ef__mgU24cache7D_221() const { return ___U3CU3Ef__mgU24cache7D_221; }
	inline grpcsharp_call_send_close_from_client_delegate_t3404740706 ** get_address_of_U3CU3Ef__mgU24cache7D_221() { return &___U3CU3Ef__mgU24cache7D_221; }
	inline void set_U3CU3Ef__mgU24cache7D_221(grpcsharp_call_send_close_from_client_delegate_t3404740706 * value)
	{
		___U3CU3Ef__mgU24cache7D_221 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7D_221), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7E_222() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7E_222)); }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 * get_U3CU3Ef__mgU24cache7E_222() const { return ___U3CU3Ef__mgU24cache7E_222; }
	inline grpcsharp_call_send_status_from_server_delegate_t1281609886 ** get_address_of_U3CU3Ef__mgU24cache7E_222() { return &___U3CU3Ef__mgU24cache7E_222; }
	inline void set_U3CU3Ef__mgU24cache7E_222(grpcsharp_call_send_status_from_server_delegate_t1281609886 * value)
	{
		___U3CU3Ef__mgU24cache7E_222 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7E_222), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7F_223() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache7F_223)); }
	inline grpcsharp_call_recv_message_delegate_t3263680702 * get_U3CU3Ef__mgU24cache7F_223() const { return ___U3CU3Ef__mgU24cache7F_223; }
	inline grpcsharp_call_recv_message_delegate_t3263680702 ** get_address_of_U3CU3Ef__mgU24cache7F_223() { return &___U3CU3Ef__mgU24cache7F_223; }
	inline void set_U3CU3Ef__mgU24cache7F_223(grpcsharp_call_recv_message_delegate_t3263680702 * value)
	{
		___U3CU3Ef__mgU24cache7F_223 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7F_223), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache80_224() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache80_224)); }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * get_U3CU3Ef__mgU24cache80_224() const { return ___U3CU3Ef__mgU24cache80_224; }
	inline grpcsharp_call_recv_initial_metadata_delegate_t1420662382 ** get_address_of_U3CU3Ef__mgU24cache80_224() { return &___U3CU3Ef__mgU24cache80_224; }
	inline void set_U3CU3Ef__mgU24cache80_224(grpcsharp_call_recv_initial_metadata_delegate_t1420662382 * value)
	{
		___U3CU3Ef__mgU24cache80_224 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache80_224), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache81_225() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache81_225)); }
	inline grpcsharp_call_start_serverside_delegate_t702333229 * get_U3CU3Ef__mgU24cache81_225() const { return ___U3CU3Ef__mgU24cache81_225; }
	inline grpcsharp_call_start_serverside_delegate_t702333229 ** get_address_of_U3CU3Ef__mgU24cache81_225() { return &___U3CU3Ef__mgU24cache81_225; }
	inline void set_U3CU3Ef__mgU24cache81_225(grpcsharp_call_start_serverside_delegate_t702333229 * value)
	{
		___U3CU3Ef__mgU24cache81_225 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache81_225), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache82_226() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache82_226)); }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 * get_U3CU3Ef__mgU24cache82_226() const { return ___U3CU3Ef__mgU24cache82_226; }
	inline grpcsharp_call_send_initial_metadata_delegate_t2871837368 ** get_address_of_U3CU3Ef__mgU24cache82_226() { return &___U3CU3Ef__mgU24cache82_226; }
	inline void set_U3CU3Ef__mgU24cache82_226(grpcsharp_call_send_initial_metadata_delegate_t2871837368 * value)
	{
		___U3CU3Ef__mgU24cache82_226 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache82_226), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache83_227() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache83_227)); }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 * get_U3CU3Ef__mgU24cache83_227() const { return ___U3CU3Ef__mgU24cache83_227; }
	inline grpcsharp_call_set_credentials_delegate_t2164951723 ** get_address_of_U3CU3Ef__mgU24cache83_227() { return &___U3CU3Ef__mgU24cache83_227; }
	inline void set_U3CU3Ef__mgU24cache83_227(grpcsharp_call_set_credentials_delegate_t2164951723 * value)
	{
		___U3CU3Ef__mgU24cache83_227 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache83_227), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache84_228() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache84_228)); }
	inline grpcsharp_call_get_peer_delegate_t4293430173 * get_U3CU3Ef__mgU24cache84_228() const { return ___U3CU3Ef__mgU24cache84_228; }
	inline grpcsharp_call_get_peer_delegate_t4293430173 ** get_address_of_U3CU3Ef__mgU24cache84_228() { return &___U3CU3Ef__mgU24cache84_228; }
	inline void set_U3CU3Ef__mgU24cache84_228(grpcsharp_call_get_peer_delegate_t4293430173 * value)
	{
		___U3CU3Ef__mgU24cache84_228 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache84_228), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache85_229() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache85_229)); }
	inline grpcsharp_call_destroy_delegate_t3472236717 * get_U3CU3Ef__mgU24cache85_229() const { return ___U3CU3Ef__mgU24cache85_229; }
	inline grpcsharp_call_destroy_delegate_t3472236717 ** get_address_of_U3CU3Ef__mgU24cache85_229() { return &___U3CU3Ef__mgU24cache85_229; }
	inline void set_U3CU3Ef__mgU24cache85_229(grpcsharp_call_destroy_delegate_t3472236717 * value)
	{
		___U3CU3Ef__mgU24cache85_229 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache85_229), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache86_230() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache86_230)); }
	inline grpcsharp_channel_args_create_delegate_t223697083 * get_U3CU3Ef__mgU24cache86_230() const { return ___U3CU3Ef__mgU24cache86_230; }
	inline grpcsharp_channel_args_create_delegate_t223697083 ** get_address_of_U3CU3Ef__mgU24cache86_230() { return &___U3CU3Ef__mgU24cache86_230; }
	inline void set_U3CU3Ef__mgU24cache86_230(grpcsharp_channel_args_create_delegate_t223697083 * value)
	{
		___U3CU3Ef__mgU24cache86_230 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache86_230), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache87_231() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache87_231)); }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 * get_U3CU3Ef__mgU24cache87_231() const { return ___U3CU3Ef__mgU24cache87_231; }
	inline grpcsharp_channel_args_set_string_delegate_t2671812739 ** get_address_of_U3CU3Ef__mgU24cache87_231() { return &___U3CU3Ef__mgU24cache87_231; }
	inline void set_U3CU3Ef__mgU24cache87_231(grpcsharp_channel_args_set_string_delegate_t2671812739 * value)
	{
		___U3CU3Ef__mgU24cache87_231 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache87_231), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache88_232() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache88_232)); }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 * get_U3CU3Ef__mgU24cache88_232() const { return ___U3CU3Ef__mgU24cache88_232; }
	inline grpcsharp_channel_args_set_integer_delegate_t1374818234 ** get_address_of_U3CU3Ef__mgU24cache88_232() { return &___U3CU3Ef__mgU24cache88_232; }
	inline void set_U3CU3Ef__mgU24cache88_232(grpcsharp_channel_args_set_integer_delegate_t1374818234 * value)
	{
		___U3CU3Ef__mgU24cache88_232 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache88_232), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache89_233() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache89_233)); }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 * get_U3CU3Ef__mgU24cache89_233() const { return ___U3CU3Ef__mgU24cache89_233; }
	inline grpcsharp_channel_args_destroy_delegate_t3019422610 ** get_address_of_U3CU3Ef__mgU24cache89_233() { return &___U3CU3Ef__mgU24cache89_233; }
	inline void set_U3CU3Ef__mgU24cache89_233(grpcsharp_channel_args_destroy_delegate_t3019422610 * value)
	{
		___U3CU3Ef__mgU24cache89_233 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache89_233), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8A_234() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8A_234)); }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 * get_U3CU3Ef__mgU24cache8A_234() const { return ___U3CU3Ef__mgU24cache8A_234; }
	inline grpcsharp_override_default_ssl_roots_delegate_t2112048917 ** get_address_of_U3CU3Ef__mgU24cache8A_234() { return &___U3CU3Ef__mgU24cache8A_234; }
	inline void set_U3CU3Ef__mgU24cache8A_234(grpcsharp_override_default_ssl_roots_delegate_t2112048917 * value)
	{
		___U3CU3Ef__mgU24cache8A_234 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8A_234), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8B_235() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8B_235)); }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 * get_U3CU3Ef__mgU24cache8B_235() const { return ___U3CU3Ef__mgU24cache8B_235; }
	inline grpcsharp_ssl_credentials_create_delegate_t1837265019 ** get_address_of_U3CU3Ef__mgU24cache8B_235() { return &___U3CU3Ef__mgU24cache8B_235; }
	inline void set_U3CU3Ef__mgU24cache8B_235(grpcsharp_ssl_credentials_create_delegate_t1837265019 * value)
	{
		___U3CU3Ef__mgU24cache8B_235 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8B_235), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8C_236() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8C_236)); }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 * get_U3CU3Ef__mgU24cache8C_236() const { return ___U3CU3Ef__mgU24cache8C_236; }
	inline grpcsharp_composite_channel_credentials_create_delegate_t11741719 ** get_address_of_U3CU3Ef__mgU24cache8C_236() { return &___U3CU3Ef__mgU24cache8C_236; }
	inline void set_U3CU3Ef__mgU24cache8C_236(grpcsharp_composite_channel_credentials_create_delegate_t11741719 * value)
	{
		___U3CU3Ef__mgU24cache8C_236 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8C_236), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8D_237() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8D_237)); }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 * get_U3CU3Ef__mgU24cache8D_237() const { return ___U3CU3Ef__mgU24cache8D_237; }
	inline grpcsharp_channel_credentials_release_delegate_t3260923539 ** get_address_of_U3CU3Ef__mgU24cache8D_237() { return &___U3CU3Ef__mgU24cache8D_237; }
	inline void set_U3CU3Ef__mgU24cache8D_237(grpcsharp_channel_credentials_release_delegate_t3260923539 * value)
	{
		___U3CU3Ef__mgU24cache8D_237 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8D_237), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8E_238() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8E_238)); }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 * get_U3CU3Ef__mgU24cache8E_238() const { return ___U3CU3Ef__mgU24cache8E_238; }
	inline grpcsharp_insecure_channel_create_delegate_t1754677822 ** get_address_of_U3CU3Ef__mgU24cache8E_238() { return &___U3CU3Ef__mgU24cache8E_238; }
	inline void set_U3CU3Ef__mgU24cache8E_238(grpcsharp_insecure_channel_create_delegate_t1754677822 * value)
	{
		___U3CU3Ef__mgU24cache8E_238 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8E_238), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8F_239() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache8F_239)); }
	inline grpcsharp_secure_channel_create_delegate_t858919073 * get_U3CU3Ef__mgU24cache8F_239() const { return ___U3CU3Ef__mgU24cache8F_239; }
	inline grpcsharp_secure_channel_create_delegate_t858919073 ** get_address_of_U3CU3Ef__mgU24cache8F_239() { return &___U3CU3Ef__mgU24cache8F_239; }
	inline void set_U3CU3Ef__mgU24cache8F_239(grpcsharp_secure_channel_create_delegate_t858919073 * value)
	{
		___U3CU3Ef__mgU24cache8F_239 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8F_239), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache90_240() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache90_240)); }
	inline grpcsharp_channel_create_call_delegate_t1689755209 * get_U3CU3Ef__mgU24cache90_240() const { return ___U3CU3Ef__mgU24cache90_240; }
	inline grpcsharp_channel_create_call_delegate_t1689755209 ** get_address_of_U3CU3Ef__mgU24cache90_240() { return &___U3CU3Ef__mgU24cache90_240; }
	inline void set_U3CU3Ef__mgU24cache90_240(grpcsharp_channel_create_call_delegate_t1689755209 * value)
	{
		___U3CU3Ef__mgU24cache90_240 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache90_240), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache91_241() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache91_241)); }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * get_U3CU3Ef__mgU24cache91_241() const { return ___U3CU3Ef__mgU24cache91_241; }
	inline grpcsharp_channel_check_connectivity_state_delegate_t3896712294 ** get_address_of_U3CU3Ef__mgU24cache91_241() { return &___U3CU3Ef__mgU24cache91_241; }
	inline void set_U3CU3Ef__mgU24cache91_241(grpcsharp_channel_check_connectivity_state_delegate_t3896712294 * value)
	{
		___U3CU3Ef__mgU24cache91_241 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache91_241), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache92_242() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache92_242)); }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * get_U3CU3Ef__mgU24cache92_242() const { return ___U3CU3Ef__mgU24cache92_242; }
	inline grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 ** get_address_of_U3CU3Ef__mgU24cache92_242() { return &___U3CU3Ef__mgU24cache92_242; }
	inline void set_U3CU3Ef__mgU24cache92_242(grpcsharp_channel_watch_connectivity_state_delegate_t2921567600 * value)
	{
		___U3CU3Ef__mgU24cache92_242 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache92_242), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache93_243() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache93_243)); }
	inline grpcsharp_channel_get_target_delegate_t1912627058 * get_U3CU3Ef__mgU24cache93_243() const { return ___U3CU3Ef__mgU24cache93_243; }
	inline grpcsharp_channel_get_target_delegate_t1912627058 ** get_address_of_U3CU3Ef__mgU24cache93_243() { return &___U3CU3Ef__mgU24cache93_243; }
	inline void set_U3CU3Ef__mgU24cache93_243(grpcsharp_channel_get_target_delegate_t1912627058 * value)
	{
		___U3CU3Ef__mgU24cache93_243 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache93_243), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache94_244() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache94_244)); }
	inline grpcsharp_channel_destroy_delegate_t1789251192 * get_U3CU3Ef__mgU24cache94_244() const { return ___U3CU3Ef__mgU24cache94_244; }
	inline grpcsharp_channel_destroy_delegate_t1789251192 ** get_address_of_U3CU3Ef__mgU24cache94_244() { return &___U3CU3Ef__mgU24cache94_244; }
	inline void set_U3CU3Ef__mgU24cache94_244(grpcsharp_channel_destroy_delegate_t1789251192 * value)
	{
		___U3CU3Ef__mgU24cache94_244 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache94_244), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache95_245() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache95_245)); }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 * get_U3CU3Ef__mgU24cache95_245() const { return ___U3CU3Ef__mgU24cache95_245; }
	inline grpcsharp_sizeof_grpc_event_delegate_t4083509947 ** get_address_of_U3CU3Ef__mgU24cache95_245() { return &___U3CU3Ef__mgU24cache95_245; }
	inline void set_U3CU3Ef__mgU24cache95_245(grpcsharp_sizeof_grpc_event_delegate_t4083509947 * value)
	{
		___U3CU3Ef__mgU24cache95_245 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache95_245), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache96_246() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache96_246)); }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 * get_U3CU3Ef__mgU24cache96_246() const { return ___U3CU3Ef__mgU24cache96_246; }
	inline grpcsharp_completion_queue_create_async_delegate_t360079728 ** get_address_of_U3CU3Ef__mgU24cache96_246() { return &___U3CU3Ef__mgU24cache96_246; }
	inline void set_U3CU3Ef__mgU24cache96_246(grpcsharp_completion_queue_create_async_delegate_t360079728 * value)
	{
		___U3CU3Ef__mgU24cache96_246 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache96_246), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache97_247() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache97_247)); }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 * get_U3CU3Ef__mgU24cache97_247() const { return ___U3CU3Ef__mgU24cache97_247; }
	inline grpcsharp_completion_queue_create_sync_delegate_t1808910508 ** get_address_of_U3CU3Ef__mgU24cache97_247() { return &___U3CU3Ef__mgU24cache97_247; }
	inline void set_U3CU3Ef__mgU24cache97_247(grpcsharp_completion_queue_create_sync_delegate_t1808910508 * value)
	{
		___U3CU3Ef__mgU24cache97_247 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache97_247), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache98_248() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache98_248)); }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 * get_U3CU3Ef__mgU24cache98_248() const { return ___U3CU3Ef__mgU24cache98_248; }
	inline grpcsharp_completion_queue_shutdown_delegate_t248163633 ** get_address_of_U3CU3Ef__mgU24cache98_248() { return &___U3CU3Ef__mgU24cache98_248; }
	inline void set_U3CU3Ef__mgU24cache98_248(grpcsharp_completion_queue_shutdown_delegate_t248163633 * value)
	{
		___U3CU3Ef__mgU24cache98_248 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache98_248), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache99_249() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache99_249)); }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 * get_U3CU3Ef__mgU24cache99_249() const { return ___U3CU3Ef__mgU24cache99_249; }
	inline grpcsharp_completion_queue_next_delegate_t3269686616 ** get_address_of_U3CU3Ef__mgU24cache99_249() { return &___U3CU3Ef__mgU24cache99_249; }
	inline void set_U3CU3Ef__mgU24cache99_249(grpcsharp_completion_queue_next_delegate_t3269686616 * value)
	{
		___U3CU3Ef__mgU24cache99_249 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache99_249), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9A_250() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9A_250)); }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 * get_U3CU3Ef__mgU24cache9A_250() const { return ___U3CU3Ef__mgU24cache9A_250; }
	inline grpcsharp_completion_queue_pluck_delegate_t285374971 ** get_address_of_U3CU3Ef__mgU24cache9A_250() { return &___U3CU3Ef__mgU24cache9A_250; }
	inline void set_U3CU3Ef__mgU24cache9A_250(grpcsharp_completion_queue_pluck_delegate_t285374971 * value)
	{
		___U3CU3Ef__mgU24cache9A_250 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9A_250), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9B_251() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9B_251)); }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 * get_U3CU3Ef__mgU24cache9B_251() const { return ___U3CU3Ef__mgU24cache9B_251; }
	inline grpcsharp_completion_queue_destroy_delegate_t1464055640 ** get_address_of_U3CU3Ef__mgU24cache9B_251() { return &___U3CU3Ef__mgU24cache9B_251; }
	inline void set_U3CU3Ef__mgU24cache9B_251(grpcsharp_completion_queue_destroy_delegate_t1464055640 * value)
	{
		___U3CU3Ef__mgU24cache9B_251 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9B_251), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9C_252() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9C_252)); }
	inline gprsharp_free_delegate_t3453134242 * get_U3CU3Ef__mgU24cache9C_252() const { return ___U3CU3Ef__mgU24cache9C_252; }
	inline gprsharp_free_delegate_t3453134242 ** get_address_of_U3CU3Ef__mgU24cache9C_252() { return &___U3CU3Ef__mgU24cache9C_252; }
	inline void set_U3CU3Ef__mgU24cache9C_252(gprsharp_free_delegate_t3453134242 * value)
	{
		___U3CU3Ef__mgU24cache9C_252 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9C_252), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9D_253() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9D_253)); }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 * get_U3CU3Ef__mgU24cache9D_253() const { return ___U3CU3Ef__mgU24cache9D_253; }
	inline grpcsharp_metadata_array_create_delegate_t2940265924 ** get_address_of_U3CU3Ef__mgU24cache9D_253() { return &___U3CU3Ef__mgU24cache9D_253; }
	inline void set_U3CU3Ef__mgU24cache9D_253(grpcsharp_metadata_array_create_delegate_t2940265924 * value)
	{
		___U3CU3Ef__mgU24cache9D_253 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9D_253), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9E_254() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9E_254)); }
	inline grpcsharp_metadata_array_add_delegate_t281551042 * get_U3CU3Ef__mgU24cache9E_254() const { return ___U3CU3Ef__mgU24cache9E_254; }
	inline grpcsharp_metadata_array_add_delegate_t281551042 ** get_address_of_U3CU3Ef__mgU24cache9E_254() { return &___U3CU3Ef__mgU24cache9E_254; }
	inline void set_U3CU3Ef__mgU24cache9E_254(grpcsharp_metadata_array_add_delegate_t281551042 * value)
	{
		___U3CU3Ef__mgU24cache9E_254 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9E_254), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9F_255() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cache9F_255)); }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 * get_U3CU3Ef__mgU24cache9F_255() const { return ___U3CU3Ef__mgU24cache9F_255; }
	inline grpcsharp_metadata_array_count_delegate_t1171955796 ** get_address_of_U3CU3Ef__mgU24cache9F_255() { return &___U3CU3Ef__mgU24cache9F_255; }
	inline void set_U3CU3Ef__mgU24cache9F_255(grpcsharp_metadata_array_count_delegate_t1171955796 * value)
	{
		___U3CU3Ef__mgU24cache9F_255 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9F_255), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA0_256() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA0_256)); }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 * get_U3CU3Ef__mgU24cacheA0_256() const { return ___U3CU3Ef__mgU24cacheA0_256; }
	inline grpcsharp_metadata_array_get_key_delegate_t2312063556 ** get_address_of_U3CU3Ef__mgU24cacheA0_256() { return &___U3CU3Ef__mgU24cacheA0_256; }
	inline void set_U3CU3Ef__mgU24cacheA0_256(grpcsharp_metadata_array_get_key_delegate_t2312063556 * value)
	{
		___U3CU3Ef__mgU24cacheA0_256 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA0_256), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA1_257() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA1_257)); }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 * get_U3CU3Ef__mgU24cacheA1_257() const { return ___U3CU3Ef__mgU24cacheA1_257; }
	inline grpcsharp_metadata_array_get_value_delegate_t2215973087 ** get_address_of_U3CU3Ef__mgU24cacheA1_257() { return &___U3CU3Ef__mgU24cacheA1_257; }
	inline void set_U3CU3Ef__mgU24cacheA1_257(grpcsharp_metadata_array_get_value_delegate_t2215973087 * value)
	{
		___U3CU3Ef__mgU24cacheA1_257 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA1_257), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA2_258() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA2_258)); }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 * get_U3CU3Ef__mgU24cacheA2_258() const { return ___U3CU3Ef__mgU24cacheA2_258; }
	inline grpcsharp_metadata_array_destroy_full_delegate_t46908578 ** get_address_of_U3CU3Ef__mgU24cacheA2_258() { return &___U3CU3Ef__mgU24cacheA2_258; }
	inline void set_U3CU3Ef__mgU24cacheA2_258(grpcsharp_metadata_array_destroy_full_delegate_t46908578 * value)
	{
		___U3CU3Ef__mgU24cacheA2_258 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA2_258), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA3_259() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA3_259)); }
	inline grpcsharp_redirect_log_delegate_t1051680661 * get_U3CU3Ef__mgU24cacheA3_259() const { return ___U3CU3Ef__mgU24cacheA3_259; }
	inline grpcsharp_redirect_log_delegate_t1051680661 ** get_address_of_U3CU3Ef__mgU24cacheA3_259() { return &___U3CU3Ef__mgU24cacheA3_259; }
	inline void set_U3CU3Ef__mgU24cacheA3_259(grpcsharp_redirect_log_delegate_t1051680661 * value)
	{
		___U3CU3Ef__mgU24cacheA3_259 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA3_259), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA4_260() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA4_260)); }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * get_U3CU3Ef__mgU24cacheA4_260() const { return ___U3CU3Ef__mgU24cacheA4_260; }
	inline grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 ** get_address_of_U3CU3Ef__mgU24cacheA4_260() { return &___U3CU3Ef__mgU24cacheA4_260; }
	inline void set_U3CU3Ef__mgU24cacheA4_260(grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702 * value)
	{
		___U3CU3Ef__mgU24cacheA4_260 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA4_260), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA5_261() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA5_261)); }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * get_U3CU3Ef__mgU24cacheA5_261() const { return ___U3CU3Ef__mgU24cacheA5_261; }
	inline grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 ** get_address_of_U3CU3Ef__mgU24cacheA5_261() { return &___U3CU3Ef__mgU24cacheA5_261; }
	inline void set_U3CU3Ef__mgU24cacheA5_261(grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334 * value)
	{
		___U3CU3Ef__mgU24cacheA5_261 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA5_261), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA6_262() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA6_262)); }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * get_U3CU3Ef__mgU24cacheA6_262() const { return ___U3CU3Ef__mgU24cacheA6_262; }
	inline grpcsharp_ssl_server_credentials_create_delegate_t3254816087 ** get_address_of_U3CU3Ef__mgU24cacheA6_262() { return &___U3CU3Ef__mgU24cacheA6_262; }
	inline void set_U3CU3Ef__mgU24cacheA6_262(grpcsharp_ssl_server_credentials_create_delegate_t3254816087 * value)
	{
		___U3CU3Ef__mgU24cacheA6_262 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA6_262), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA7_263() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA7_263)); }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 * get_U3CU3Ef__mgU24cacheA7_263() const { return ___U3CU3Ef__mgU24cacheA7_263; }
	inline grpcsharp_server_credentials_release_delegate_t2095714663 ** get_address_of_U3CU3Ef__mgU24cacheA7_263() { return &___U3CU3Ef__mgU24cacheA7_263; }
	inline void set_U3CU3Ef__mgU24cacheA7_263(grpcsharp_server_credentials_release_delegate_t2095714663 * value)
	{
		___U3CU3Ef__mgU24cacheA7_263 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA7_263), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA8_264() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA8_264)); }
	inline grpcsharp_server_create_delegate_t4127831655 * get_U3CU3Ef__mgU24cacheA8_264() const { return ___U3CU3Ef__mgU24cacheA8_264; }
	inline grpcsharp_server_create_delegate_t4127831655 ** get_address_of_U3CU3Ef__mgU24cacheA8_264() { return &___U3CU3Ef__mgU24cacheA8_264; }
	inline void set_U3CU3Ef__mgU24cacheA8_264(grpcsharp_server_create_delegate_t4127831655 * value)
	{
		___U3CU3Ef__mgU24cacheA8_264 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA8_264), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA9_265() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheA9_265)); }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 * get_U3CU3Ef__mgU24cacheA9_265() const { return ___U3CU3Ef__mgU24cacheA9_265; }
	inline grpcsharp_server_register_completion_queue_delegate_t2206715366 ** get_address_of_U3CU3Ef__mgU24cacheA9_265() { return &___U3CU3Ef__mgU24cacheA9_265; }
	inline void set_U3CU3Ef__mgU24cacheA9_265(grpcsharp_server_register_completion_queue_delegate_t2206715366 * value)
	{
		___U3CU3Ef__mgU24cacheA9_265 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA9_265), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAA_266() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAA_266)); }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * get_U3CU3Ef__mgU24cacheAA_266() const { return ___U3CU3Ef__mgU24cacheAA_266; }
	inline grpcsharp_server_add_insecure_http2_port_delegate_t811346158 ** get_address_of_U3CU3Ef__mgU24cacheAA_266() { return &___U3CU3Ef__mgU24cacheAA_266; }
	inline void set_U3CU3Ef__mgU24cacheAA_266(grpcsharp_server_add_insecure_http2_port_delegate_t811346158 * value)
	{
		___U3CU3Ef__mgU24cacheAA_266 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAA_266), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAB_267() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAB_267)); }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 * get_U3CU3Ef__mgU24cacheAB_267() const { return ___U3CU3Ef__mgU24cacheAB_267; }
	inline grpcsharp_server_add_secure_http2_port_delegate_t102470377 ** get_address_of_U3CU3Ef__mgU24cacheAB_267() { return &___U3CU3Ef__mgU24cacheAB_267; }
	inline void set_U3CU3Ef__mgU24cacheAB_267(grpcsharp_server_add_secure_http2_port_delegate_t102470377 * value)
	{
		___U3CU3Ef__mgU24cacheAB_267 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAB_267), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAC_268() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAC_268)); }
	inline grpcsharp_server_start_delegate_t4158963393 * get_U3CU3Ef__mgU24cacheAC_268() const { return ___U3CU3Ef__mgU24cacheAC_268; }
	inline grpcsharp_server_start_delegate_t4158963393 ** get_address_of_U3CU3Ef__mgU24cacheAC_268() { return &___U3CU3Ef__mgU24cacheAC_268; }
	inline void set_U3CU3Ef__mgU24cacheAC_268(grpcsharp_server_start_delegate_t4158963393 * value)
	{
		___U3CU3Ef__mgU24cacheAC_268 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAC_268), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAD_269() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAD_269)); }
	inline grpcsharp_server_request_call_delegate_t2796155047 * get_U3CU3Ef__mgU24cacheAD_269() const { return ___U3CU3Ef__mgU24cacheAD_269; }
	inline grpcsharp_server_request_call_delegate_t2796155047 ** get_address_of_U3CU3Ef__mgU24cacheAD_269() { return &___U3CU3Ef__mgU24cacheAD_269; }
	inline void set_U3CU3Ef__mgU24cacheAD_269(grpcsharp_server_request_call_delegate_t2796155047 * value)
	{
		___U3CU3Ef__mgU24cacheAD_269 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAD_269), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAE_270() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAE_270)); }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 * get_U3CU3Ef__mgU24cacheAE_270() const { return ___U3CU3Ef__mgU24cacheAE_270; }
	inline grpcsharp_server_cancel_all_calls_delegate_t4278007468 ** get_address_of_U3CU3Ef__mgU24cacheAE_270() { return &___U3CU3Ef__mgU24cacheAE_270; }
	inline void set_U3CU3Ef__mgU24cacheAE_270(grpcsharp_server_cancel_all_calls_delegate_t4278007468 * value)
	{
		___U3CU3Ef__mgU24cacheAE_270 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAE_270), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheAF_271() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheAF_271)); }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * get_U3CU3Ef__mgU24cacheAF_271() const { return ___U3CU3Ef__mgU24cacheAF_271; }
	inline grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 ** get_address_of_U3CU3Ef__mgU24cacheAF_271() { return &___U3CU3Ef__mgU24cacheAF_271; }
	inline void set_U3CU3Ef__mgU24cacheAF_271(grpcsharp_server_shutdown_and_notify_callback_delegate_t3723486306 * value)
	{
		___U3CU3Ef__mgU24cacheAF_271 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheAF_271), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB0_272() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB0_272)); }
	inline grpcsharp_server_destroy_delegate_t2436759005 * get_U3CU3Ef__mgU24cacheB0_272() const { return ___U3CU3Ef__mgU24cacheB0_272; }
	inline grpcsharp_server_destroy_delegate_t2436759005 ** get_address_of_U3CU3Ef__mgU24cacheB0_272() { return &___U3CU3Ef__mgU24cacheB0_272; }
	inline void set_U3CU3Ef__mgU24cacheB0_272(grpcsharp_server_destroy_delegate_t2436759005 * value)
	{
		___U3CU3Ef__mgU24cacheB0_272 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB0_272), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB1_273() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB1_273)); }
	inline grpcsharp_call_auth_context_delegate_t3089219098 * get_U3CU3Ef__mgU24cacheB1_273() const { return ___U3CU3Ef__mgU24cacheB1_273; }
	inline grpcsharp_call_auth_context_delegate_t3089219098 ** get_address_of_U3CU3Ef__mgU24cacheB1_273() { return &___U3CU3Ef__mgU24cacheB1_273; }
	inline void set_U3CU3Ef__mgU24cacheB1_273(grpcsharp_call_auth_context_delegate_t3089219098 * value)
	{
		___U3CU3Ef__mgU24cacheB1_273 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB1_273), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB2_274() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB2_274)); }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * get_U3CU3Ef__mgU24cacheB2_274() const { return ___U3CU3Ef__mgU24cacheB2_274; }
	inline grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 ** get_address_of_U3CU3Ef__mgU24cacheB2_274() { return &___U3CU3Ef__mgU24cacheB2_274; }
	inline void set_U3CU3Ef__mgU24cacheB2_274(grpcsharp_auth_context_peer_identity_property_name_delegate_t246656889 * value)
	{
		___U3CU3Ef__mgU24cacheB2_274 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB2_274), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB3_275() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB3_275)); }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 * get_U3CU3Ef__mgU24cacheB3_275() const { return ___U3CU3Ef__mgU24cacheB3_275; }
	inline grpcsharp_auth_context_property_iterator_delegate_t641318545 ** get_address_of_U3CU3Ef__mgU24cacheB3_275() { return &___U3CU3Ef__mgU24cacheB3_275; }
	inline void set_U3CU3Ef__mgU24cacheB3_275(grpcsharp_auth_context_property_iterator_delegate_t641318545 * value)
	{
		___U3CU3Ef__mgU24cacheB3_275 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB3_275), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB4_276() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB4_276)); }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 * get_U3CU3Ef__mgU24cacheB4_276() const { return ___U3CU3Ef__mgU24cacheB4_276; }
	inline grpcsharp_auth_property_iterator_next_delegate_t4267042899 ** get_address_of_U3CU3Ef__mgU24cacheB4_276() { return &___U3CU3Ef__mgU24cacheB4_276; }
	inline void set_U3CU3Ef__mgU24cacheB4_276(grpcsharp_auth_property_iterator_next_delegate_t4267042899 * value)
	{
		___U3CU3Ef__mgU24cacheB4_276 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB4_276), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB5_277() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB5_277)); }
	inline grpcsharp_auth_context_release_delegate_t83664199 * get_U3CU3Ef__mgU24cacheB5_277() const { return ___U3CU3Ef__mgU24cacheB5_277; }
	inline grpcsharp_auth_context_release_delegate_t83664199 ** get_address_of_U3CU3Ef__mgU24cacheB5_277() { return &___U3CU3Ef__mgU24cacheB5_277; }
	inline void set_U3CU3Ef__mgU24cacheB5_277(grpcsharp_auth_context_release_delegate_t83664199 * value)
	{
		___U3CU3Ef__mgU24cacheB5_277 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB5_277), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB6_278() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB6_278)); }
	inline gprsharp_now_delegate_t2976584151 * get_U3CU3Ef__mgU24cacheB6_278() const { return ___U3CU3Ef__mgU24cacheB6_278; }
	inline gprsharp_now_delegate_t2976584151 ** get_address_of_U3CU3Ef__mgU24cacheB6_278() { return &___U3CU3Ef__mgU24cacheB6_278; }
	inline void set_U3CU3Ef__mgU24cacheB6_278(gprsharp_now_delegate_t2976584151 * value)
	{
		___U3CU3Ef__mgU24cacheB6_278 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB6_278), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB7_279() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB7_279)); }
	inline gprsharp_inf_future_delegate_t1471086569 * get_U3CU3Ef__mgU24cacheB7_279() const { return ___U3CU3Ef__mgU24cacheB7_279; }
	inline gprsharp_inf_future_delegate_t1471086569 ** get_address_of_U3CU3Ef__mgU24cacheB7_279() { return &___U3CU3Ef__mgU24cacheB7_279; }
	inline void set_U3CU3Ef__mgU24cacheB7_279(gprsharp_inf_future_delegate_t1471086569 * value)
	{
		___U3CU3Ef__mgU24cacheB7_279 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB7_279), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB8_280() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB8_280)); }
	inline gprsharp_inf_past_delegate_t3920462529 * get_U3CU3Ef__mgU24cacheB8_280() const { return ___U3CU3Ef__mgU24cacheB8_280; }
	inline gprsharp_inf_past_delegate_t3920462529 ** get_address_of_U3CU3Ef__mgU24cacheB8_280() { return &___U3CU3Ef__mgU24cacheB8_280; }
	inline void set_U3CU3Ef__mgU24cacheB8_280(gprsharp_inf_past_delegate_t3920462529 * value)
	{
		___U3CU3Ef__mgU24cacheB8_280 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB8_280), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB9_281() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheB9_281)); }
	inline gprsharp_convert_clock_type_delegate_t1755859444 * get_U3CU3Ef__mgU24cacheB9_281() const { return ___U3CU3Ef__mgU24cacheB9_281; }
	inline gprsharp_convert_clock_type_delegate_t1755859444 ** get_address_of_U3CU3Ef__mgU24cacheB9_281() { return &___U3CU3Ef__mgU24cacheB9_281; }
	inline void set_U3CU3Ef__mgU24cacheB9_281(gprsharp_convert_clock_type_delegate_t1755859444 * value)
	{
		___U3CU3Ef__mgU24cacheB9_281 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB9_281), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheBA_282() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheBA_282)); }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 * get_U3CU3Ef__mgU24cacheBA_282() const { return ___U3CU3Ef__mgU24cacheBA_282; }
	inline gprsharp_sizeof_timespec_delegate_t1822509259 ** get_address_of_U3CU3Ef__mgU24cacheBA_282() { return &___U3CU3Ef__mgU24cacheBA_282; }
	inline void set_U3CU3Ef__mgU24cacheBA_282(gprsharp_sizeof_timespec_delegate_t1822509259 * value)
	{
		___U3CU3Ef__mgU24cacheBA_282 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheBA_282), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheBB_283() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheBB_283)); }
	inline grpcsharp_test_callback_delegate_t521268474 * get_U3CU3Ef__mgU24cacheBB_283() const { return ___U3CU3Ef__mgU24cacheBB_283; }
	inline grpcsharp_test_callback_delegate_t521268474 ** get_address_of_U3CU3Ef__mgU24cacheBB_283() { return &___U3CU3Ef__mgU24cacheBB_283; }
	inline void set_U3CU3Ef__mgU24cacheBB_283(grpcsharp_test_callback_delegate_t521268474 * value)
	{
		___U3CU3Ef__mgU24cacheBB_283 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheBB_283), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheBC_284() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheBC_284)); }
	inline grpcsharp_test_nop_delegate_t1977043325 * get_U3CU3Ef__mgU24cacheBC_284() const { return ___U3CU3Ef__mgU24cacheBC_284; }
	inline grpcsharp_test_nop_delegate_t1977043325 ** get_address_of_U3CU3Ef__mgU24cacheBC_284() { return &___U3CU3Ef__mgU24cacheBC_284; }
	inline void set_U3CU3Ef__mgU24cacheBC_284(grpcsharp_test_nop_delegate_t1977043325 * value)
	{
		___U3CU3Ef__mgU24cacheBC_284 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheBC_284), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheBD_285() { return static_cast<int32_t>(offsetof(NativeMethods_t1137985067_StaticFields, ___U3CU3Ef__mgU24cacheBD_285)); }
	inline grpcsharp_test_override_method_delegate_t51326422 * get_U3CU3Ef__mgU24cacheBD_285() const { return ___U3CU3Ef__mgU24cacheBD_285; }
	inline grpcsharp_test_override_method_delegate_t51326422 ** get_address_of_U3CU3Ef__mgU24cacheBD_285() { return &___U3CU3Ef__mgU24cacheBD_285; }
	inline void set_U3CU3Ef__mgU24cacheBD_285(grpcsharp_test_override_method_delegate_t51326422 * value)
	{
		___U3CU3Ef__mgU24cacheBD_285 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheBD_285), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMETHODS_T1137985067_H
#ifndef DELEGATES_T3609693803_H
#define DELEGATES_T3609693803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates
struct  Delegates_t3609693803  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATES_T3609693803_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef CONFIGUREDTASKAWAITER_T555647845_H
#define CONFIGUREDTASKAWAITER_T555647845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t555647845 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T555647845_H
#ifndef TASKAWAITER_T919683548_H
#define TASKAWAITER_T919683548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t919683548 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t919683548, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
};
#endif // TASKAWAITER_T919683548_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef CHANNELSTATE_T3413242015_H
#define CHANNELSTATE_T3413242015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.ChannelState
struct  ChannelState_t3413242015 
{
public:
	// System.Int32 Grpc.Core.ChannelState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChannelState_t3413242015, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSTATE_T3413242015_H
#ifndef CONTEXTPROPAGATIONFLAGS_T1162504225_H
#define CONTEXTPROPAGATIONFLAGS_T1162504225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.ContextPropagationFlags
struct  ContextPropagationFlags_t1162504225 
{
public:
	// System.Int32 Grpc.Core.ContextPropagationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContextPropagationFlags_t1162504225, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTPROPAGATIONFLAGS_T1162504225_H
#ifndef CALLERROR_T2724741161_H
#define CALLERROR_T2724741161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.CallError
struct  CallError_t2724741161 
{
public:
	// System.Int32 Grpc.Core.Internal.CallError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallError_t2724741161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLERROR_T2724741161_H
#ifndef CALLFLAGS_T162503483_H
#define CALLFLAGS_T162503483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.CallFlags
struct  CallFlags_t162503483 
{
public:
	// System.Int32 Grpc.Core.Internal.CallFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallFlags_t162503483, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLFLAGS_T162503483_H
#ifndef CLOCKTYPE_T1539584236_H
#define CLOCKTYPE_T1539584236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.ClockType
struct  ClockType_t1539584236 
{
public:
	// System.Int32 Grpc.Core.Internal.ClockType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClockType_t1539584236, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOCKTYPE_T1539584236_H
#ifndef COMPLETIONTYPE_T835508695_H
#define COMPLETIONTYPE_T835508695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.CompletionQueueEvent/CompletionType
struct  CompletionType_t835508695 
{
public:
	// System.Int32 Grpc.Core.Internal.CompletionQueueEvent/CompletionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompletionType_t835508695, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLETIONTYPE_T835508695_H
#ifndef NATIVEMETADATACREDENTIALSPLUGIN_T2272103877_H
#define NATIVEMETADATACREDENTIALSPLUGIN_T2272103877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataCredentialsPlugin
struct  NativeMetadataCredentialsPlugin_t2272103877  : public RuntimeObject
{
public:
	// Grpc.Core.AsyncAuthInterceptor Grpc.Core.Internal.NativeMetadataCredentialsPlugin::interceptor
	AsyncAuthInterceptor_t3273427652 * ___interceptor_4;
	// System.Runtime.InteropServices.GCHandle Grpc.Core.Internal.NativeMetadataCredentialsPlugin::gcHandle
	GCHandle_t3351438187  ___gcHandle_5;
	// Grpc.Core.Internal.NativeMetadataInterceptor Grpc.Core.Internal.NativeMetadataCredentialsPlugin::nativeInterceptor
	NativeMetadataInterceptor_t3643657361 * ___nativeInterceptor_6;
	// Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMetadataCredentialsPlugin::credentials
	CallCredentialsSafeHandle_t65360148 * ___credentials_7;

public:
	inline static int32_t get_offset_of_interceptor_4() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877, ___interceptor_4)); }
	inline AsyncAuthInterceptor_t3273427652 * get_interceptor_4() const { return ___interceptor_4; }
	inline AsyncAuthInterceptor_t3273427652 ** get_address_of_interceptor_4() { return &___interceptor_4; }
	inline void set_interceptor_4(AsyncAuthInterceptor_t3273427652 * value)
	{
		___interceptor_4 = value;
		Il2CppCodeGenWriteBarrier((&___interceptor_4), value);
	}

	inline static int32_t get_offset_of_gcHandle_5() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877, ___gcHandle_5)); }
	inline GCHandle_t3351438187  get_gcHandle_5() const { return ___gcHandle_5; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_5() { return &___gcHandle_5; }
	inline void set_gcHandle_5(GCHandle_t3351438187  value)
	{
		___gcHandle_5 = value;
	}

	inline static int32_t get_offset_of_nativeInterceptor_6() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877, ___nativeInterceptor_6)); }
	inline NativeMetadataInterceptor_t3643657361 * get_nativeInterceptor_6() const { return ___nativeInterceptor_6; }
	inline NativeMetadataInterceptor_t3643657361 ** get_address_of_nativeInterceptor_6() { return &___nativeInterceptor_6; }
	inline void set_nativeInterceptor_6(NativeMetadataInterceptor_t3643657361 * value)
	{
		___nativeInterceptor_6 = value;
		Il2CppCodeGenWriteBarrier((&___nativeInterceptor_6), value);
	}

	inline static int32_t get_offset_of_credentials_7() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877, ___credentials_7)); }
	inline CallCredentialsSafeHandle_t65360148 * get_credentials_7() const { return ___credentials_7; }
	inline CallCredentialsSafeHandle_t65360148 ** get_address_of_credentials_7() { return &___credentials_7; }
	inline void set_credentials_7(CallCredentialsSafeHandle_t65360148 * value)
	{
		___credentials_7 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_7), value);
	}
};

struct NativeMetadataCredentialsPlugin_t2272103877_StaticFields
{
public:
	// Grpc.Core.Logging.ILogger Grpc.Core.Internal.NativeMetadataCredentialsPlugin::Logger
	RuntimeObject* ___Logger_2;
	// Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeMetadataCredentialsPlugin::Native
	NativeMethods_t1137985067 * ___Native_3;

public:
	inline static int32_t get_offset_of_Logger_2() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877_StaticFields, ___Logger_2)); }
	inline RuntimeObject* get_Logger_2() const { return ___Logger_2; }
	inline RuntimeObject** get_address_of_Logger_2() { return &___Logger_2; }
	inline void set_Logger_2(RuntimeObject* value)
	{
		___Logger_2 = value;
		Il2CppCodeGenWriteBarrier((&___Logger_2), value);
	}

	inline static int32_t get_offset_of_Native_3() { return static_cast<int32_t>(offsetof(NativeMetadataCredentialsPlugin_t2272103877_StaticFields, ___Native_3)); }
	inline NativeMethods_t1137985067 * get_Native_3() const { return ___Native_3; }
	inline NativeMethods_t1137985067 ** get_address_of_Native_3() { return &___Native_3; }
	inline void set_Native_3(NativeMethods_t1137985067 * value)
	{
		___Native_3 = value;
		Il2CppCodeGenWriteBarrier((&___Native_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMETADATACREDENTIALSPLUGIN_T2272103877_H
#ifndef U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY4_T4254739009_H
#define U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY4_T4254739009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4
struct  U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009  : public RuntimeObject
{
public:
	// System.IntPtr Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4::callbackPtr
	intptr_t ___callbackPtr_0;
	// System.IntPtr Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4::userDataPtr
	intptr_t ___userDataPtr_1;
	// Grpc.Core.Internal.NativeMetadataCredentialsPlugin Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4::$this
	NativeMetadataCredentialsPlugin_t2272103877 * ___U24this_2;

public:
	inline static int32_t get_offset_of_callbackPtr_0() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009, ___callbackPtr_0)); }
	inline intptr_t get_callbackPtr_0() const { return ___callbackPtr_0; }
	inline intptr_t* get_address_of_callbackPtr_0() { return &___callbackPtr_0; }
	inline void set_callbackPtr_0(intptr_t value)
	{
		___callbackPtr_0 = value;
	}

	inline static int32_t get_offset_of_userDataPtr_1() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009, ___userDataPtr_1)); }
	inline intptr_t get_userDataPtr_1() const { return ___userDataPtr_1; }
	inline intptr_t* get_address_of_userDataPtr_1() { return &___userDataPtr_1; }
	inline void set_userDataPtr_1(intptr_t value)
	{
		___userDataPtr_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009, ___U24this_2)); }
	inline NativeMetadataCredentialsPlugin_t2272103877 * get_U24this_2() const { return ___U24this_2; }
	inline NativeMetadataCredentialsPlugin_t2272103877 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NativeMetadataCredentialsPlugin_t2272103877 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ANONSTOREY4_T4254739009_H
#ifndef STATUSCODE_T2946794771_H
#define STATUSCODE_T2946794771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.StatusCode
struct  StatusCode_t2946794771 
{
public:
	// System.Int32 Grpc.Core.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t2946794771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUSCODE_T2946794771_H
#ifndef WRITEFLAGS_T1684742181_H
#define WRITEFLAGS_T1684742181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.WriteFlags
struct  WriteFlags_t1684742181 
{
public:
	// System.Int32 Grpc.Core.WriteFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteFlags_t1684742181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEFLAGS_T1684742181_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef ASYNCVOIDMETHODBUILDER_T3819840891_H
#define ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t3819840891 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t3187275312 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t2326897723 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t2326897723 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_task_2)); }
	inline Task_t3187275312 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t3187275312 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t3187275312 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_pinvoke
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_com
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_com ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
#ifndef COMPLETIONQUEUEEVENT_T4075518423_H
#define COMPLETIONQUEUEEVENT_T4075518423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.CompletionQueueEvent
struct  CompletionQueueEvent_t4075518423 
{
public:
	// Grpc.Core.Internal.CompletionQueueEvent/CompletionType Grpc.Core.Internal.CompletionQueueEvent::type
	int32_t ___type_1;
	// System.Int32 Grpc.Core.Internal.CompletionQueueEvent::success
	int32_t ___success_2;
	// System.IntPtr Grpc.Core.Internal.CompletionQueueEvent::tag
	intptr_t ___tag_3;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(CompletionQueueEvent_t4075518423, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_success_2() { return static_cast<int32_t>(offsetof(CompletionQueueEvent_t4075518423, ___success_2)); }
	inline int32_t get_success_2() const { return ___success_2; }
	inline int32_t* get_address_of_success_2() { return &___success_2; }
	inline void set_success_2(int32_t value)
	{
		___success_2 = value;
	}

	inline static int32_t get_offset_of_tag_3() { return static_cast<int32_t>(offsetof(CompletionQueueEvent_t4075518423, ___tag_3)); }
	inline intptr_t get_tag_3() const { return ___tag_3; }
	inline intptr_t* get_address_of_tag_3() { return &___tag_3; }
	inline void set_tag_3(intptr_t value)
	{
		___tag_3 = value;
	}
};

struct CompletionQueueEvent_t4075518423_StaticFields
{
public:
	// Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.CompletionQueueEvent::Native
	NativeMethods_t1137985067 * ___Native_0;

public:
	inline static int32_t get_offset_of_Native_0() { return static_cast<int32_t>(offsetof(CompletionQueueEvent_t4075518423_StaticFields, ___Native_0)); }
	inline NativeMethods_t1137985067 * get_Native_0() const { return ___Native_0; }
	inline NativeMethods_t1137985067 ** get_address_of_Native_0() { return &___Native_0; }
	inline void set_Native_0(NativeMethods_t1137985067 * value)
	{
		___Native_0 = value;
		Il2CppCodeGenWriteBarrier((&___Native_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPLETIONQUEUEEVENT_T4075518423_H
#ifndef U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ASYNC2_T3280572027_H
#define U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ASYNC2_T3280572027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2
struct  U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027 
{
public:
	// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey4 Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2::<>f__ref$4
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * ___U3CU3Ef__refU244_0;
	// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3 Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2::<>f__ref$3
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240 * ___U3CU3Ef__refU243_1;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2::$builder
	AsyncVoidMethodBuilder_t3819840891  ___U24builder_2;
	// System.Int32 Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2::$PC
	int32_t ___U24PC_3;
	// System.Runtime.CompilerServices.TaskAwaiter Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<NativeMetadataInterceptorHandler>c__AnonStorey3/<NativeMetadataInterceptorHandler>c__async2::$awaiter0
	TaskAwaiter_t919683548  ___U24awaiter0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__refU244_0() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027, ___U3CU3Ef__refU244_0)); }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * get_U3CU3Ef__refU244_0() const { return ___U3CU3Ef__refU244_0; }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 ** get_address_of_U3CU3Ef__refU244_0() { return &___U3CU3Ef__refU244_0; }
	inline void set_U3CU3Ef__refU244_0(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009 * value)
	{
		___U3CU3Ef__refU244_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU244_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU243_1() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027, ___U3CU3Ef__refU243_1)); }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240 * get_U3CU3Ef__refU243_1() const { return ___U3CU3Ef__refU243_1; }
	inline U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240 ** get_address_of_U3CU3Ef__refU243_1() { return &___U3CU3Ef__refU243_1; }
	inline void set_U3CU3Ef__refU243_1(U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240 * value)
	{
		___U3CU3Ef__refU243_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU243_1), value);
	}

	inline static int32_t get_offset_of_U24builder_2() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027, ___U24builder_2)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U24builder_2() const { return ___U24builder_2; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U24builder_2() { return &___U24builder_2; }
	inline void set_U24builder_2(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U24builder_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}

	inline static int32_t get_offset_of_U24awaiter0_4() { return static_cast<int32_t>(offsetof(U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027, ___U24awaiter0_4)); }
	inline TaskAwaiter_t919683548  get_U24awaiter0_4() const { return ___U24awaiter0_4; }
	inline TaskAwaiter_t919683548 * get_address_of_U24awaiter0_4() { return &___U24awaiter0_4; }
	inline void set_U24awaiter0_4(TaskAwaiter_t919683548  value)
	{
		___U24awaiter0_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNATIVEMETADATAINTERCEPTORHANDLERU3EC__ASYNC2_T3280572027_H
#ifndef SAFEHANDLEZEROISINVALID_T1582872828_H
#define SAFEHANDLEZEROISINVALID_T1582872828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.SafeHandleZeroIsInvalid
struct  SafeHandleZeroIsInvalid_t1582872828  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROISINVALID_T1582872828_H
#ifndef TIMESPEC_T3802667966_H
#define TIMESPEC_T3802667966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.Timespec
struct  Timespec_t3802667966 
{
public:
	// System.Int64 Grpc.Core.Internal.Timespec::tv_sec
	int64_t ___tv_sec_5;
	// System.Int32 Grpc.Core.Internal.Timespec::tv_nsec
	int32_t ___tv_nsec_6;
	// Grpc.Core.Internal.ClockType Grpc.Core.Internal.Timespec::clock_type
	int32_t ___clock_type_7;

public:
	inline static int32_t get_offset_of_tv_sec_5() { return static_cast<int32_t>(offsetof(Timespec_t3802667966, ___tv_sec_5)); }
	inline int64_t get_tv_sec_5() const { return ___tv_sec_5; }
	inline int64_t* get_address_of_tv_sec_5() { return &___tv_sec_5; }
	inline void set_tv_sec_5(int64_t value)
	{
		___tv_sec_5 = value;
	}

	inline static int32_t get_offset_of_tv_nsec_6() { return static_cast<int32_t>(offsetof(Timespec_t3802667966, ___tv_nsec_6)); }
	inline int32_t get_tv_nsec_6() const { return ___tv_nsec_6; }
	inline int32_t* get_address_of_tv_nsec_6() { return &___tv_nsec_6; }
	inline void set_tv_nsec_6(int32_t value)
	{
		___tv_nsec_6 = value;
	}

	inline static int32_t get_offset_of_clock_type_7() { return static_cast<int32_t>(offsetof(Timespec_t3802667966, ___clock_type_7)); }
	inline int32_t get_clock_type_7() const { return ___clock_type_7; }
	inline int32_t* get_address_of_clock_type_7() { return &___clock_type_7; }
	inline void set_clock_type_7(int32_t value)
	{
		___clock_type_7 = value;
	}
};

struct Timespec_t3802667966_StaticFields
{
public:
	// Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.Timespec::Native
	NativeMethods_t1137985067 * ___Native_3;
	// System.DateTime Grpc.Core.Internal.Timespec::UnixEpoch
	DateTime_t3738529785  ___UnixEpoch_4;

public:
	inline static int32_t get_offset_of_Native_3() { return static_cast<int32_t>(offsetof(Timespec_t3802667966_StaticFields, ___Native_3)); }
	inline NativeMethods_t1137985067 * get_Native_3() const { return ___Native_3; }
	inline NativeMethods_t1137985067 ** get_address_of_Native_3() { return &___Native_3; }
	inline void set_Native_3(NativeMethods_t1137985067 * value)
	{
		___Native_3 = value;
		Il2CppCodeGenWriteBarrier((&___Native_3), value);
	}

	inline static int32_t get_offset_of_UnixEpoch_4() { return static_cast<int32_t>(offsetof(Timespec_t3802667966_StaticFields, ___UnixEpoch_4)); }
	inline DateTime_t3738529785  get_UnixEpoch_4() const { return ___UnixEpoch_4; }
	inline DateTime_t3738529785 * get_address_of_UnixEpoch_4() { return &___UnixEpoch_4; }
	inline void set_UnixEpoch_4(DateTime_t3738529785  value)
	{
		___UnixEpoch_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPEC_T3802667966_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
#ifndef GPRLOGDELEGATE_T25055494_H
#define GPRLOGDELEGATE_T25055494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.GprLogDelegate
struct  GprLogDelegate_t25055494  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPRLOGDELEGATE_T25055494_H
#ifndef METADATAARRAYSAFEHANDLE_T1753552187_H
#define METADATAARRAYSAFEHANDLE_T1753552187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.MetadataArraySafeHandle
struct  MetadataArraySafeHandle_t1753552187  : public SafeHandleZeroIsInvalid_t1582872828
{
public:

public:
};

struct MetadataArraySafeHandle_t1753552187_StaticFields
{
public:
	// Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.MetadataArraySafeHandle::Native
	NativeMethods_t1137985067 * ___Native_6;

public:
	inline static int32_t get_offset_of_Native_6() { return static_cast<int32_t>(offsetof(MetadataArraySafeHandle_t1753552187_StaticFields, ___Native_6)); }
	inline NativeMethods_t1137985067 * get_Native_6() const { return ___Native_6; }
	inline NativeMethods_t1137985067 ** get_address_of_Native_6() { return &___Native_6; }
	inline void set_Native_6(NativeMethods_t1137985067 * value)
	{
		___Native_6 = value;
		Il2CppCodeGenWriteBarrier((&___Native_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAARRAYSAFEHANDLE_T1753552187_H
#ifndef NATIVECALLBACKTESTDELEGATE_T203946621_H
#define NATIVECALLBACKTESTDELEGATE_T203946621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeCallbackTestDelegate
struct  NativeCallbackTestDelegate_t203946621  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECALLBACKTESTDELEGATE_T203946621_H
#ifndef U3CGETMETADATAASYNCU3EC__ASYNC0_T1361467418_H
#define U3CGETMETADATAASYNCU3EC__ASYNC0_T1361467418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0
struct  U3CGetMetadataAsyncU3Ec__async0_t1361467418 
{
public:
	// Grpc.Core.Metadata Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::<metadata>__1
	Metadata_t3698311594 * ___U3CmetadataU3E__1_0;
	// Grpc.Core.AuthInterceptorContext Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::context
	AuthInterceptorContext_t555162081 * ___context_1;
	// System.IntPtr Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::callbackPtr
	intptr_t ___callbackPtr_2;
	// System.IntPtr Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::userDataPtr
	intptr_t ___userDataPtr_3;
	// Grpc.Core.Internal.NativeMetadataCredentialsPlugin Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::$this
	NativeMetadataCredentialsPlugin_t2272103877 * ___U24this_4;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::$builder
	AsyncTaskMethodBuilder_t3536885450  ___U24builder_5;
	// System.Int32 Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::$PC
	int32_t ___U24PC_6;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Grpc.Core.Internal.NativeMetadataCredentialsPlugin/<GetMetadataAsync>c__async0::$awaiter0
	ConfiguredTaskAwaiter_t555647845  ___U24awaiter0_7;

public:
	inline static int32_t get_offset_of_U3CmetadataU3E__1_0() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___U3CmetadataU3E__1_0)); }
	inline Metadata_t3698311594 * get_U3CmetadataU3E__1_0() const { return ___U3CmetadataU3E__1_0; }
	inline Metadata_t3698311594 ** get_address_of_U3CmetadataU3E__1_0() { return &___U3CmetadataU3E__1_0; }
	inline void set_U3CmetadataU3E__1_0(Metadata_t3698311594 * value)
	{
		___U3CmetadataU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3E__1_0), value);
	}

	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___context_1)); }
	inline AuthInterceptorContext_t555162081 * get_context_1() const { return ___context_1; }
	inline AuthInterceptorContext_t555162081 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(AuthInterceptorContext_t555162081 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_callbackPtr_2() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___callbackPtr_2)); }
	inline intptr_t get_callbackPtr_2() const { return ___callbackPtr_2; }
	inline intptr_t* get_address_of_callbackPtr_2() { return &___callbackPtr_2; }
	inline void set_callbackPtr_2(intptr_t value)
	{
		___callbackPtr_2 = value;
	}

	inline static int32_t get_offset_of_userDataPtr_3() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___userDataPtr_3)); }
	inline intptr_t get_userDataPtr_3() const { return ___userDataPtr_3; }
	inline intptr_t* get_address_of_userDataPtr_3() { return &___userDataPtr_3; }
	inline void set_userDataPtr_3(intptr_t value)
	{
		___userDataPtr_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___U24this_4)); }
	inline NativeMetadataCredentialsPlugin_t2272103877 * get_U24this_4() const { return ___U24this_4; }
	inline NativeMetadataCredentialsPlugin_t2272103877 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(NativeMetadataCredentialsPlugin_t2272103877 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24builder_5() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___U24builder_5)); }
	inline AsyncTaskMethodBuilder_t3536885450  get_U24builder_5() const { return ___U24builder_5; }
	inline AsyncTaskMethodBuilder_t3536885450 * get_address_of_U24builder_5() { return &___U24builder_5; }
	inline void set_U24builder_5(AsyncTaskMethodBuilder_t3536885450  value)
	{
		___U24builder_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24awaiter0_7() { return static_cast<int32_t>(offsetof(U3CGetMetadataAsyncU3Ec__async0_t1361467418, ___U24awaiter0_7)); }
	inline ConfiguredTaskAwaiter_t555647845  get_U24awaiter0_7() const { return ___U24awaiter0_7; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_U24awaiter0_7() { return &___U24awaiter0_7; }
	inline void set_U24awaiter0_7(ConfiguredTaskAwaiter_t555647845  value)
	{
		___U24awaiter0_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETMETADATAASYNCU3EC__ASYNC0_T1361467418_H
#ifndef NATIVEMETADATAINTERCEPTOR_T3643657361_H
#define NATIVEMETADATAINTERCEPTOR_T3643657361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMetadataInterceptor
struct  NativeMetadataInterceptor_t3643657361  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMETADATAINTERCEPTOR_T3643657361_H
#ifndef GPRSHARP_FREE_DELEGATE_T3453134242_H
#define GPRSHARP_FREE_DELEGATE_T3453134242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate
struct  gprsharp_free_delegate_t3453134242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPRSHARP_FREE_DELEGATE_T3453134242_H
#ifndef GRPCSHARP_BATCH_CONTEXT_CREATE_DELEGATE_T4041094647_H
#define GRPCSHARP_BATCH_CONTEXT_CREATE_DELEGATE_T4041094647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate
struct  grpcsharp_batch_context_create_delegate_t4041094647  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_CREATE_DELEGATE_T4041094647_H
#ifndef GRPCSHARP_BATCH_CONTEXT_DESTROY_DELEGATE_T3097840777_H
#define GRPCSHARP_BATCH_CONTEXT_DESTROY_DELEGATE_T3097840777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate
struct  grpcsharp_batch_context_destroy_delegate_t3097840777  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_DESTROY_DELEGATE_T3097840777_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_CLOSE_ON_SERVER_CANCELLED_DELEGATE_T223297573_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_CLOSE_ON_SERVER_CANCELLED_DELEGATE_T223297573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate
struct  grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_CLOSE_ON_SERVER_CANCELLED_DELEGATE_T223297573_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_INITIAL_METADATA_DELEGATE_T4196611988_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_INITIAL_METADATA_DELEGATE_T4196611988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate
struct  grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_INITIAL_METADATA_DELEGATE_T4196611988_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_LENGTH_DELEGATE_T2576883917_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_LENGTH_DELEGATE_T2576883917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate
struct  grpcsharp_batch_context_recv_message_length_delegate_t2576883917  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_LENGTH_DELEGATE_T2576883917_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_TO_BUFFER_DELEGATE_T4105833513_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_TO_BUFFER_DELEGATE_T4105833513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate
struct  grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_MESSAGE_TO_BUFFER_DELEGATE_T4105833513_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_DETAILS_DELEGATE_T2533415363_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_DETAILS_DELEGATE_T2533415363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate
struct  grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_DETAILS_DELEGATE_T2533415363_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_STATUS_DELEGATE_T880784403_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_STATUS_DELEGATE_T880784403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate
struct  grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_STATUS_DELEGATE_T880784403_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_TRAILING_METADATA_DELEGATE_T1319752499_H
#define GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_TRAILING_METADATA_DELEGATE_T1319752499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate
struct  grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RECV_STATUS_ON_CLIENT_TRAILING_METADATA_DELEGATE_T1319752499_H
#ifndef GRPCSHARP_BATCH_CONTEXT_RESET_DELEGATE_T1240336310_H
#define GRPCSHARP_BATCH_CONTEXT_RESET_DELEGATE_T1240336310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate
struct  grpcsharp_batch_context_reset_delegate_t1240336310  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_BATCH_CONTEXT_RESET_DELEGATE_T1240336310_H
#ifndef GRPCSHARP_CALL_CANCEL_DELEGATE_T1770075385_H
#define GRPCSHARP_CALL_CANCEL_DELEGATE_T1770075385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate
struct  grpcsharp_call_cancel_delegate_t1770075385  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_CANCEL_DELEGATE_T1770075385_H
#ifndef GRPCSHARP_CALL_CANCEL_WITH_STATUS_DELEGATE_T322311674_H
#define GRPCSHARP_CALL_CANCEL_WITH_STATUS_DELEGATE_T322311674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate
struct  grpcsharp_call_cancel_with_status_delegate_t322311674  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_CANCEL_WITH_STATUS_DELEGATE_T322311674_H
#ifndef GRPCSHARP_CALL_CREDENTIALS_RELEASE_DELEGATE_T4173796462_H
#define GRPCSHARP_CALL_CREDENTIALS_RELEASE_DELEGATE_T4173796462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate
struct  grpcsharp_call_credentials_release_delegate_t4173796462  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_CREDENTIALS_RELEASE_DELEGATE_T4173796462_H
#ifndef GRPCSHARP_CALL_DESTROY_DELEGATE_T3472236717_H
#define GRPCSHARP_CALL_DESTROY_DELEGATE_T3472236717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate
struct  grpcsharp_call_destroy_delegate_t3472236717  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_DESTROY_DELEGATE_T3472236717_H
#ifndef GRPCSHARP_CALL_GET_PEER_DELEGATE_T4293430173_H
#define GRPCSHARP_CALL_GET_PEER_DELEGATE_T4293430173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate
struct  grpcsharp_call_get_peer_delegate_t4293430173  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_GET_PEER_DELEGATE_T4293430173_H
#ifndef GRPCSHARP_CALL_RECV_INITIAL_METADATA_DELEGATE_T1420662382_H
#define GRPCSHARP_CALL_RECV_INITIAL_METADATA_DELEGATE_T1420662382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate
struct  grpcsharp_call_recv_initial_metadata_delegate_t1420662382  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_RECV_INITIAL_METADATA_DELEGATE_T1420662382_H
#ifndef GRPCSHARP_CALL_RECV_MESSAGE_DELEGATE_T3263680702_H
#define GRPCSHARP_CALL_RECV_MESSAGE_DELEGATE_T3263680702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate
struct  grpcsharp_call_recv_message_delegate_t3263680702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_RECV_MESSAGE_DELEGATE_T3263680702_H
#ifndef GRPCSHARP_CALL_SEND_CLOSE_FROM_CLIENT_DELEGATE_T3404740706_H
#define GRPCSHARP_CALL_SEND_CLOSE_FROM_CLIENT_DELEGATE_T3404740706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate
struct  grpcsharp_call_send_close_from_client_delegate_t3404740706  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_SEND_CLOSE_FROM_CLIENT_DELEGATE_T3404740706_H
#ifndef GRPCSHARP_CALL_SEND_INITIAL_METADATA_DELEGATE_T2871837368_H
#define GRPCSHARP_CALL_SEND_INITIAL_METADATA_DELEGATE_T2871837368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate
struct  grpcsharp_call_send_initial_metadata_delegate_t2871837368  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_SEND_INITIAL_METADATA_DELEGATE_T2871837368_H
#ifndef GRPCSHARP_CALL_SEND_MESSAGE_DELEGATE_T80977843_H
#define GRPCSHARP_CALL_SEND_MESSAGE_DELEGATE_T80977843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate
struct  grpcsharp_call_send_message_delegate_t80977843  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_SEND_MESSAGE_DELEGATE_T80977843_H
#ifndef GRPCSHARP_CALL_SEND_STATUS_FROM_SERVER_DELEGATE_T1281609886_H
#define GRPCSHARP_CALL_SEND_STATUS_FROM_SERVER_DELEGATE_T1281609886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate
struct  grpcsharp_call_send_status_from_server_delegate_t1281609886  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_SEND_STATUS_FROM_SERVER_DELEGATE_T1281609886_H
#ifndef GRPCSHARP_CALL_SET_CREDENTIALS_DELEGATE_T2164951723_H
#define GRPCSHARP_CALL_SET_CREDENTIALS_DELEGATE_T2164951723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate
struct  grpcsharp_call_set_credentials_delegate_t2164951723  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_SET_CREDENTIALS_DELEGATE_T2164951723_H
#ifndef GRPCSHARP_CALL_START_CLIENT_STREAMING_DELEGATE_T186521236_H
#define GRPCSHARP_CALL_START_CLIENT_STREAMING_DELEGATE_T186521236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate
struct  grpcsharp_call_start_client_streaming_delegate_t186521236  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_START_CLIENT_STREAMING_DELEGATE_T186521236_H
#ifndef GRPCSHARP_CALL_START_DUPLEX_STREAMING_DELEGATE_T668243240_H
#define GRPCSHARP_CALL_START_DUPLEX_STREAMING_DELEGATE_T668243240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate
struct  grpcsharp_call_start_duplex_streaming_delegate_t668243240  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_START_DUPLEX_STREAMING_DELEGATE_T668243240_H
#ifndef GRPCSHARP_CALL_START_SERVER_STREAMING_DELEGATE_T941302023_H
#define GRPCSHARP_CALL_START_SERVER_STREAMING_DELEGATE_T941302023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate
struct  grpcsharp_call_start_server_streaming_delegate_t941302023  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_START_SERVER_STREAMING_DELEGATE_T941302023_H
#ifndef GRPCSHARP_CALL_START_SERVERSIDE_DELEGATE_T702333229_H
#define GRPCSHARP_CALL_START_SERVERSIDE_DELEGATE_T702333229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate
struct  grpcsharp_call_start_serverside_delegate_t702333229  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_START_SERVERSIDE_DELEGATE_T702333229_H
#ifndef GRPCSHARP_CALL_START_UNARY_DELEGATE_T1332494428_H
#define GRPCSHARP_CALL_START_UNARY_DELEGATE_T1332494428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate
struct  grpcsharp_call_start_unary_delegate_t1332494428  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CALL_START_UNARY_DELEGATE_T1332494428_H
#ifndef GRPCSHARP_CHANNEL_ARGS_CREATE_DELEGATE_T223697083_H
#define GRPCSHARP_CHANNEL_ARGS_CREATE_DELEGATE_T223697083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate
struct  grpcsharp_channel_args_create_delegate_t223697083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_ARGS_CREATE_DELEGATE_T223697083_H
#ifndef GRPCSHARP_CHANNEL_ARGS_DESTROY_DELEGATE_T3019422610_H
#define GRPCSHARP_CHANNEL_ARGS_DESTROY_DELEGATE_T3019422610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate
struct  grpcsharp_channel_args_destroy_delegate_t3019422610  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_ARGS_DESTROY_DELEGATE_T3019422610_H
#ifndef GRPCSHARP_CHANNEL_ARGS_SET_INTEGER_DELEGATE_T1374818234_H
#define GRPCSHARP_CHANNEL_ARGS_SET_INTEGER_DELEGATE_T1374818234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate
struct  grpcsharp_channel_args_set_integer_delegate_t1374818234  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_ARGS_SET_INTEGER_DELEGATE_T1374818234_H
#ifndef GRPCSHARP_CHANNEL_ARGS_SET_STRING_DELEGATE_T2671812739_H
#define GRPCSHARP_CHANNEL_ARGS_SET_STRING_DELEGATE_T2671812739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate
struct  grpcsharp_channel_args_set_string_delegate_t2671812739  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_ARGS_SET_STRING_DELEGATE_T2671812739_H
#ifndef GRPCSHARP_CHANNEL_CHECK_CONNECTIVITY_STATE_DELEGATE_T3896712294_H
#define GRPCSHARP_CHANNEL_CHECK_CONNECTIVITY_STATE_DELEGATE_T3896712294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate
struct  grpcsharp_channel_check_connectivity_state_delegate_t3896712294  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_CHECK_CONNECTIVITY_STATE_DELEGATE_T3896712294_H
#ifndef GRPCSHARP_CHANNEL_CREATE_CALL_DELEGATE_T1689755209_H
#define GRPCSHARP_CHANNEL_CREATE_CALL_DELEGATE_T1689755209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate
struct  grpcsharp_channel_create_call_delegate_t1689755209  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_CREATE_CALL_DELEGATE_T1689755209_H
#ifndef GRPCSHARP_CHANNEL_CREDENTIALS_RELEASE_DELEGATE_T3260923539_H
#define GRPCSHARP_CHANNEL_CREDENTIALS_RELEASE_DELEGATE_T3260923539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate
struct  grpcsharp_channel_credentials_release_delegate_t3260923539  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_CREDENTIALS_RELEASE_DELEGATE_T3260923539_H
#ifndef GRPCSHARP_CHANNEL_DESTROY_DELEGATE_T1789251192_H
#define GRPCSHARP_CHANNEL_DESTROY_DELEGATE_T1789251192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate
struct  grpcsharp_channel_destroy_delegate_t1789251192  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_DESTROY_DELEGATE_T1789251192_H
#ifndef GRPCSHARP_CHANNEL_GET_TARGET_DELEGATE_T1912627058_H
#define GRPCSHARP_CHANNEL_GET_TARGET_DELEGATE_T1912627058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate
struct  grpcsharp_channel_get_target_delegate_t1912627058  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_GET_TARGET_DELEGATE_T1912627058_H
#ifndef GRPCSHARP_CHANNEL_WATCH_CONNECTIVITY_STATE_DELEGATE_T2921567600_H
#define GRPCSHARP_CHANNEL_WATCH_CONNECTIVITY_STATE_DELEGATE_T2921567600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate
struct  grpcsharp_channel_watch_connectivity_state_delegate_t2921567600  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_CHANNEL_WATCH_CONNECTIVITY_STATE_DELEGATE_T2921567600_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_CREATE_ASYNC_DELEGATE_T360079728_H
#define GRPCSHARP_COMPLETION_QUEUE_CREATE_ASYNC_DELEGATE_T360079728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate
struct  grpcsharp_completion_queue_create_async_delegate_t360079728  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_CREATE_ASYNC_DELEGATE_T360079728_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_CREATE_SYNC_DELEGATE_T1808910508_H
#define GRPCSHARP_COMPLETION_QUEUE_CREATE_SYNC_DELEGATE_T1808910508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate
struct  grpcsharp_completion_queue_create_sync_delegate_t1808910508  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_CREATE_SYNC_DELEGATE_T1808910508_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_DESTROY_DELEGATE_T1464055640_H
#define GRPCSHARP_COMPLETION_QUEUE_DESTROY_DELEGATE_T1464055640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate
struct  grpcsharp_completion_queue_destroy_delegate_t1464055640  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_DESTROY_DELEGATE_T1464055640_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_NEXT_DELEGATE_T3269686616_H
#define GRPCSHARP_COMPLETION_QUEUE_NEXT_DELEGATE_T3269686616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate
struct  grpcsharp_completion_queue_next_delegate_t3269686616  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_NEXT_DELEGATE_T3269686616_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_PLUCK_DELEGATE_T285374971_H
#define GRPCSHARP_COMPLETION_QUEUE_PLUCK_DELEGATE_T285374971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate
struct  grpcsharp_completion_queue_pluck_delegate_t285374971  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_PLUCK_DELEGATE_T285374971_H
#ifndef GRPCSHARP_COMPLETION_QUEUE_SHUTDOWN_DELEGATE_T248163633_H
#define GRPCSHARP_COMPLETION_QUEUE_SHUTDOWN_DELEGATE_T248163633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate
struct  grpcsharp_completion_queue_shutdown_delegate_t248163633  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPLETION_QUEUE_SHUTDOWN_DELEGATE_T248163633_H
#ifndef GRPCSHARP_COMPOSITE_CALL_CREDENTIALS_CREATE_DELEGATE_T3738706681_H
#define GRPCSHARP_COMPOSITE_CALL_CREDENTIALS_CREATE_DELEGATE_T3738706681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate
struct  grpcsharp_composite_call_credentials_create_delegate_t3738706681  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPOSITE_CALL_CREDENTIALS_CREATE_DELEGATE_T3738706681_H
#ifndef GRPCSHARP_COMPOSITE_CHANNEL_CREDENTIALS_CREATE_DELEGATE_T11741719_H
#define GRPCSHARP_COMPOSITE_CHANNEL_CREDENTIALS_CREATE_DELEGATE_T11741719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate
struct  grpcsharp_composite_channel_credentials_create_delegate_t11741719  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_COMPOSITE_CHANNEL_CREDENTIALS_CREATE_DELEGATE_T11741719_H
#ifndef GRPCSHARP_INIT_DELEGATE_T697069341_H
#define GRPCSHARP_INIT_DELEGATE_T697069341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate
struct  grpcsharp_init_delegate_t697069341  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_INIT_DELEGATE_T697069341_H
#ifndef GRPCSHARP_INSECURE_CHANNEL_CREATE_DELEGATE_T1754677822_H
#define GRPCSHARP_INSECURE_CHANNEL_CREATE_DELEGATE_T1754677822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate
struct  grpcsharp_insecure_channel_create_delegate_t1754677822  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_INSECURE_CHANNEL_CREATE_DELEGATE_T1754677822_H
#ifndef GRPCSHARP_METADATA_ARRAY_ADD_DELEGATE_T281551042_H
#define GRPCSHARP_METADATA_ARRAY_ADD_DELEGATE_T281551042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate
struct  grpcsharp_metadata_array_add_delegate_t281551042  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_ADD_DELEGATE_T281551042_H
#ifndef GRPCSHARP_METADATA_ARRAY_COUNT_DELEGATE_T1171955796_H
#define GRPCSHARP_METADATA_ARRAY_COUNT_DELEGATE_T1171955796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate
struct  grpcsharp_metadata_array_count_delegate_t1171955796  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_COUNT_DELEGATE_T1171955796_H
#ifndef GRPCSHARP_METADATA_ARRAY_CREATE_DELEGATE_T2940265924_H
#define GRPCSHARP_METADATA_ARRAY_CREATE_DELEGATE_T2940265924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate
struct  grpcsharp_metadata_array_create_delegate_t2940265924  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_CREATE_DELEGATE_T2940265924_H
#ifndef GRPCSHARP_METADATA_ARRAY_DESTROY_FULL_DELEGATE_T46908578_H
#define GRPCSHARP_METADATA_ARRAY_DESTROY_FULL_DELEGATE_T46908578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate
struct  grpcsharp_metadata_array_destroy_full_delegate_t46908578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_DESTROY_FULL_DELEGATE_T46908578_H
#ifndef GRPCSHARP_METADATA_ARRAY_GET_KEY_DELEGATE_T2312063556_H
#define GRPCSHARP_METADATA_ARRAY_GET_KEY_DELEGATE_T2312063556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate
struct  grpcsharp_metadata_array_get_key_delegate_t2312063556  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_GET_KEY_DELEGATE_T2312063556_H
#ifndef GRPCSHARP_METADATA_ARRAY_GET_VALUE_DELEGATE_T2215973087_H
#define GRPCSHARP_METADATA_ARRAY_GET_VALUE_DELEGATE_T2215973087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate
struct  grpcsharp_metadata_array_get_value_delegate_t2215973087  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_ARRAY_GET_VALUE_DELEGATE_T2215973087_H
#ifndef GRPCSHARP_METADATA_CREDENTIALS_CREATE_FROM_PLUGIN_DELEGATE_T1303336702_H
#define GRPCSHARP_METADATA_CREDENTIALS_CREATE_FROM_PLUGIN_DELEGATE_T1303336702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate
struct  grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_CREDENTIALS_CREATE_FROM_PLUGIN_DELEGATE_T1303336702_H
#ifndef GRPCSHARP_METADATA_CREDENTIALS_NOTIFY_FROM_PLUGIN_DELEGATE_T2332353334_H
#define GRPCSHARP_METADATA_CREDENTIALS_NOTIFY_FROM_PLUGIN_DELEGATE_T2332353334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate
struct  grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_METADATA_CREDENTIALS_NOTIFY_FROM_PLUGIN_DELEGATE_T2332353334_H
#ifndef GRPCSHARP_OVERRIDE_DEFAULT_SSL_ROOTS_DELEGATE_T2112048917_H
#define GRPCSHARP_OVERRIDE_DEFAULT_SSL_ROOTS_DELEGATE_T2112048917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots_delegate
struct  grpcsharp_override_default_ssl_roots_delegate_t2112048917  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_OVERRIDE_DEFAULT_SSL_ROOTS_DELEGATE_T2112048917_H
#ifndef GRPCSHARP_REDIRECT_LOG_DELEGATE_T1051680661_H
#define GRPCSHARP_REDIRECT_LOG_DELEGATE_T1051680661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate
struct  grpcsharp_redirect_log_delegate_t1051680661  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REDIRECT_LOG_DELEGATE_T1051680661_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_CALL_DELEGATE_T2297854097_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_CALL_DELEGATE_T2297854097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate
struct  grpcsharp_request_call_context_call_delegate_t2297854097  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_CALL_DELEGATE_T2297854097_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_CREATE_DELEGATE_T1071596268_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_CREATE_DELEGATE_T1071596268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate
struct  grpcsharp_request_call_context_create_delegate_t1071596268  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_CREATE_DELEGATE_T1071596268_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_DEADLINE_DELEGATE_T3662856317_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_DEADLINE_DELEGATE_T3662856317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate
struct  grpcsharp_request_call_context_deadline_delegate_t3662856317  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_DEADLINE_DELEGATE_T3662856317_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_DESTROY_DELEGATE_T2729585044_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_DESTROY_DELEGATE_T2729585044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate
struct  grpcsharp_request_call_context_destroy_delegate_t2729585044  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_DESTROY_DELEGATE_T2729585044_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_HOST_DELEGATE_T2701984728_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_HOST_DELEGATE_T2701984728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate
struct  grpcsharp_request_call_context_host_delegate_t2701984728  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_HOST_DELEGATE_T2701984728_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_METHOD_DELEGATE_T1144596552_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_METHOD_DELEGATE_T1144596552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate
struct  grpcsharp_request_call_context_method_delegate_t1144596552  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_METHOD_DELEGATE_T1144596552_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_REQUEST_METADATA_DELEGATE_T3549298166_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_REQUEST_METADATA_DELEGATE_T3549298166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate
struct  grpcsharp_request_call_context_request_metadata_delegate_t3549298166  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_REQUEST_METADATA_DELEGATE_T3549298166_H
#ifndef GRPCSHARP_REQUEST_CALL_CONTEXT_RESET_DELEGATE_T511489013_H
#define GRPCSHARP_REQUEST_CALL_CONTEXT_RESET_DELEGATE_T511489013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate
struct  grpcsharp_request_call_context_reset_delegate_t511489013  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_REQUEST_CALL_CONTEXT_RESET_DELEGATE_T511489013_H
#ifndef GRPCSHARP_SECURE_CHANNEL_CREATE_DELEGATE_T858919073_H
#define GRPCSHARP_SECURE_CHANNEL_CREATE_DELEGATE_T858919073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate
struct  grpcsharp_secure_channel_create_delegate_t858919073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SECURE_CHANNEL_CREATE_DELEGATE_T858919073_H
#ifndef GRPCSHARP_SERVER_ADD_INSECURE_HTTP2_PORT_DELEGATE_T811346158_H
#define GRPCSHARP_SERVER_ADD_INSECURE_HTTP2_PORT_DELEGATE_T811346158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate
struct  grpcsharp_server_add_insecure_http2_port_delegate_t811346158  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SERVER_ADD_INSECURE_HTTP2_PORT_DELEGATE_T811346158_H
#ifndef GRPCSHARP_SERVER_ADD_SECURE_HTTP2_PORT_DELEGATE_T102470377_H
#define GRPCSHARP_SERVER_ADD_SECURE_HTTP2_PORT_DELEGATE_T102470377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate
struct  grpcsharp_server_add_secure_http2_port_delegate_t102470377  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SERVER_ADD_SECURE_HTTP2_PORT_DELEGATE_T102470377_H
#ifndef GRPCSHARP_SERVER_CREATE_DELEGATE_T4127831655_H
#define GRPCSHARP_SERVER_CREATE_DELEGATE_T4127831655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate
struct  grpcsharp_server_create_delegate_t4127831655  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SERVER_CREATE_DELEGATE_T4127831655_H
#ifndef GRPCSHARP_SERVER_CREDENTIALS_RELEASE_DELEGATE_T2095714663_H
#define GRPCSHARP_SERVER_CREDENTIALS_RELEASE_DELEGATE_T2095714663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate
struct  grpcsharp_server_credentials_release_delegate_t2095714663  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SERVER_CREDENTIALS_RELEASE_DELEGATE_T2095714663_H
#ifndef GRPCSHARP_SERVER_REGISTER_COMPLETION_QUEUE_DELEGATE_T2206715366_H
#define GRPCSHARP_SERVER_REGISTER_COMPLETION_QUEUE_DELEGATE_T2206715366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate
struct  grpcsharp_server_register_completion_queue_delegate_t2206715366  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SERVER_REGISTER_COMPLETION_QUEUE_DELEGATE_T2206715366_H
#ifndef GRPCSHARP_SHUTDOWN_DELEGATE_T1539905248_H
#define GRPCSHARP_SHUTDOWN_DELEGATE_T1539905248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate
struct  grpcsharp_shutdown_delegate_t1539905248  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SHUTDOWN_DELEGATE_T1539905248_H
#ifndef GRPCSHARP_SIZEOF_GRPC_EVENT_DELEGATE_T4083509947_H
#define GRPCSHARP_SIZEOF_GRPC_EVENT_DELEGATE_T4083509947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate
struct  grpcsharp_sizeof_grpc_event_delegate_t4083509947  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SIZEOF_GRPC_EVENT_DELEGATE_T4083509947_H
#ifndef GRPCSHARP_SSL_CREDENTIALS_CREATE_DELEGATE_T1837265019_H
#define GRPCSHARP_SSL_CREDENTIALS_CREATE_DELEGATE_T1837265019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate
struct  grpcsharp_ssl_credentials_create_delegate_t1837265019  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SSL_CREDENTIALS_CREATE_DELEGATE_T1837265019_H
#ifndef GRPCSHARP_SSL_SERVER_CREDENTIALS_CREATE_DELEGATE_T3254816087_H
#define GRPCSHARP_SSL_SERVER_CREDENTIALS_CREATE_DELEGATE_T3254816087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate
struct  grpcsharp_ssl_server_credentials_create_delegate_t3254816087  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_SSL_SERVER_CREDENTIALS_CREATE_DELEGATE_T3254816087_H
#ifndef GRPCSHARP_VERSION_STRING_DELEGATE_T3086718951_H
#define GRPCSHARP_VERSION_STRING_DELEGATE_T3086718951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate
struct  grpcsharp_version_string_delegate_t3086718951  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRPCSHARP_VERSION_STRING_DELEGATE_T3086718951_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4200 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4201 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4202 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4203 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4204 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4205 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4206 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4207 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4208 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4209 = { sizeof (MarshalUtils_t3818635350), -1, sizeof(MarshalUtils_t3818635350_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4209[2] = 
{
	MarshalUtils_t3818635350_StaticFields::get_offset_of_EncodingUTF8_0(),
	MarshalUtils_t3818635350_StaticFields::get_offset_of_EncodingASCII_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4210 = { sizeof (MetadataArraySafeHandle_t1753552187), sizeof(void*), sizeof(MetadataArraySafeHandle_t1753552187_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4210[1] = 
{
	MetadataArraySafeHandle_t1753552187_StaticFields::get_offset_of_Native_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4211 = { sizeof (NativeExtension_t4133024928), -1, sizeof(NativeExtension_t4133024928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4211[4] = 
{
	NativeExtension_t4133024928_StaticFields::get_offset_of_Logger_0(),
	NativeExtension_t4133024928_StaticFields::get_offset_of_staticLock_1(),
	NativeExtension_t4133024928_StaticFields::get_offset_of_instance_2(),
	NativeExtension_t4133024928::get_offset_of_nativeMethods_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4212 = { sizeof (GprLogDelegate_t25055494), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4213 = { sizeof (NativeLogRedirector_t1281039030), -1, sizeof(NativeLogRedirector_t1281039030_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4213[2] = 
{
	NativeLogRedirector_t1281039030_StaticFields::get_offset_of_staticLock_0(),
	NativeLogRedirector_t1281039030_StaticFields::get_offset_of_writeCallback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4214 = { sizeof (NativeMetadataInterceptor_t3643657361), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4215 = { sizeof (NativeMetadataCredentialsPlugin_t2272103877), -1, sizeof(NativeMetadataCredentialsPlugin_t2272103877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4215[8] = 
{
	0,
	0,
	NativeMetadataCredentialsPlugin_t2272103877_StaticFields::get_offset_of_Logger_2(),
	NativeMetadataCredentialsPlugin_t2272103877_StaticFields::get_offset_of_Native_3(),
	NativeMetadataCredentialsPlugin_t2272103877::get_offset_of_interceptor_4(),
	NativeMetadataCredentialsPlugin_t2272103877::get_offset_of_gcHandle_5(),
	NativeMetadataCredentialsPlugin_t2272103877::get_offset_of_nativeInterceptor_6(),
	NativeMetadataCredentialsPlugin_t2272103877::get_offset_of_credentials_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4216 = { sizeof (U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4216[3] = 
{
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009::get_offset_of_callbackPtr_0(),
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009::get_offset_of_userDataPtr_1(),
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey4_t4254739009::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4217 = { sizeof (U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4217[2] = 
{
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240::get_offset_of_context_0(),
	U3CNativeMetadataInterceptorHandlerU3Ec__AnonStorey3_t363056240::get_offset_of_U3CU3Ef__refU244_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4218 = { sizeof (U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4218[5] = 
{
	U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027::get_offset_of_U3CU3Ef__refU244_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027::get_offset_of_U3CU3Ef__refU243_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027::get_offset_of_U24builder_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027::get_offset_of_U24PC_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CNativeMetadataInterceptorHandlerU3Ec__async2_t3280572027::get_offset_of_U24awaiter0_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4219 = { sizeof (U3CGetMetadataAsyncU3Ec__async0_t1361467418)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4219[8] = 
{
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_U3CmetadataU3E__1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_context_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_callbackPtr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_userDataPtr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_U24this_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_U24builder_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_U24PC_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CGetMetadataAsyncU3Ec__async0_t1361467418::get_offset_of_U24awaiter0_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4220 = { sizeof (NativeCallbackTestDelegate_t203946621), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4221 = { sizeof (NativeMethods_t1137985067), -1, sizeof(NativeMethods_t1137985067_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4221[286] = 
{
	0,
	NativeMethods_t1137985067::get_offset_of_grpcsharp_init_1(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_shutdown_2(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_version_string_3(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_create_4(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_initial_metadata_5(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_message_length_6(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_message_to_buffer_7(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_status_on_client_status_8(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_status_on_client_details_9(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_status_on_client_trailing_metadata_10(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_recv_close_on_server_cancelled_11(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_reset_12(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_batch_context_destroy_13(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_create_14(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_call_15(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_method_16(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_host_17(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_deadline_18(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_request_metadata_19(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_reset_20(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_request_call_context_destroy_21(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_composite_call_credentials_create_22(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_credentials_release_23(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_cancel_24(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_cancel_with_status_25(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_start_unary_26(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_start_client_streaming_27(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_start_server_streaming_28(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_start_duplex_streaming_29(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_send_message_30(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_send_close_from_client_31(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_send_status_from_server_32(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_recv_message_33(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_recv_initial_metadata_34(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_start_serverside_35(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_send_initial_metadata_36(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_set_credentials_37(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_get_peer_38(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_destroy_39(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_args_create_40(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_args_set_string_41(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_args_set_integer_42(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_args_destroy_43(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_override_default_ssl_roots_44(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_ssl_credentials_create_45(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_composite_channel_credentials_create_46(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_credentials_release_47(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_insecure_channel_create_48(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_secure_channel_create_49(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_create_call_50(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_check_connectivity_state_51(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_watch_connectivity_state_52(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_get_target_53(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_channel_destroy_54(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_sizeof_grpc_event_55(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_create_async_56(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_create_sync_57(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_shutdown_58(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_next_59(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_pluck_60(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_completion_queue_destroy_61(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_free_62(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_create_63(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_add_64(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_count_65(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_get_key_66(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_get_value_67(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_array_destroy_full_68(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_redirect_log_69(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_credentials_create_from_plugin_70(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_metadata_credentials_notify_from_plugin_71(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_ssl_server_credentials_create_72(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_credentials_release_73(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_create_74(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_register_completion_queue_75(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_add_insecure_http2_port_76(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_add_secure_http2_port_77(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_start_78(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_request_call_79(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_cancel_all_calls_80(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_shutdown_and_notify_callback_81(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_server_destroy_82(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_call_auth_context_83(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_auth_context_peer_identity_property_name_84(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_auth_context_property_iterator_85(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_auth_property_iterator_next_86(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_auth_context_release_87(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_now_88(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_inf_future_89(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_inf_past_90(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_convert_clock_type_91(),
	NativeMethods_t1137985067::get_offset_of_gprsharp_sizeof_timespec_92(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_test_callback_93(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_test_nop_94(),
	NativeMethods_t1137985067::get_offset_of_grpcsharp_test_override_method_95(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_96(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_97(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_98(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_99(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_100(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_101(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_102(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_103(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_104(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_105(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_106(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB_107(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheC_108(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheD_109(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheE_110(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheF_111(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache10_112(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache11_113(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache12_114(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache13_115(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache14_116(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache15_117(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache16_118(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache17_119(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache18_120(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache19_121(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1A_122(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1B_123(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1C_124(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1D_125(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1E_126(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1F_127(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache20_128(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache21_129(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache22_130(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache23_131(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache24_132(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache25_133(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache26_134(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache27_135(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache28_136(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache29_137(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2A_138(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2B_139(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2C_140(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2D_141(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2E_142(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2F_143(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache30_144(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache31_145(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache32_146(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache33_147(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache34_148(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache35_149(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache36_150(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache37_151(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache38_152(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache39_153(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3A_154(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3B_155(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3C_156(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3D_157(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3E_158(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3F_159(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache40_160(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache41_161(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache42_162(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache43_163(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache44_164(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache45_165(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache46_166(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache47_167(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache48_168(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache49_169(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4A_170(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4B_171(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4C_172(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4D_173(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4E_174(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4F_175(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache50_176(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache51_177(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache52_178(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache53_179(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache54_180(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache55_181(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache56_182(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache57_183(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache58_184(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache59_185(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5A_186(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5B_187(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5C_188(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5D_189(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5E_190(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5F_191(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache60_192(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache61_193(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache62_194(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache63_195(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache64_196(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache65_197(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache66_198(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache67_199(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache68_200(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache69_201(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6A_202(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6B_203(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6C_204(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6D_205(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6E_206(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6F_207(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache70_208(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache71_209(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache72_210(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache73_211(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache74_212(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache75_213(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache76_214(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache77_215(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache78_216(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache79_217(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7A_218(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7B_219(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7C_220(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7D_221(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7E_222(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7F_223(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache80_224(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache81_225(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache82_226(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache83_227(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache84_228(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache85_229(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache86_230(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache87_231(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache88_232(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache89_233(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8A_234(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8B_235(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8C_236(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8D_237(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8E_238(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8F_239(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache90_240(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache91_241(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache92_242(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache93_243(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache94_244(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache95_245(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache96_246(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache97_247(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache98_248(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache99_249(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9A_250(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9B_251(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9C_252(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9D_253(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9E_254(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9F_255(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA0_256(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA1_257(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA2_258(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA3_259(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA4_260(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA5_261(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA6_262(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA7_263(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA8_264(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA9_265(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAA_266(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAB_267(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAC_268(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAD_269(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAE_270(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheAF_271(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB0_272(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB1_273(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB2_274(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB3_275(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB4_276(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB5_277(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB6_278(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB7_279(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB8_280(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB9_281(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheBA_282(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheBB_283(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheBC_284(),
	NativeMethods_t1137985067_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheBD_285(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4222 = { sizeof (Delegates_t3609693803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4223 = { sizeof (grpcsharp_init_delegate_t697069341), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4224 = { sizeof (grpcsharp_shutdown_delegate_t1539905248), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4225 = { sizeof (grpcsharp_version_string_delegate_t3086718951), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4226 = { sizeof (grpcsharp_batch_context_create_delegate_t4041094647), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4227 = { sizeof (grpcsharp_batch_context_recv_initial_metadata_delegate_t4196611988), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4228 = { sizeof (grpcsharp_batch_context_recv_message_length_delegate_t2576883917), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4229 = { sizeof (grpcsharp_batch_context_recv_message_to_buffer_delegate_t4105833513), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4230 = { sizeof (grpcsharp_batch_context_recv_status_on_client_status_delegate_t880784403), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4231 = { sizeof (grpcsharp_batch_context_recv_status_on_client_details_delegate_t2533415363), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4232 = { sizeof (grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_t1319752499), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4233 = { sizeof (grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_t223297573), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4234 = { sizeof (grpcsharp_batch_context_reset_delegate_t1240336310), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4235 = { sizeof (grpcsharp_batch_context_destroy_delegate_t3097840777), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4236 = { sizeof (grpcsharp_request_call_context_create_delegate_t1071596268), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4237 = { sizeof (grpcsharp_request_call_context_call_delegate_t2297854097), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4238 = { sizeof (grpcsharp_request_call_context_method_delegate_t1144596552), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4239 = { sizeof (grpcsharp_request_call_context_host_delegate_t2701984728), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4240 = { sizeof (grpcsharp_request_call_context_deadline_delegate_t3662856317), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4241 = { sizeof (grpcsharp_request_call_context_request_metadata_delegate_t3549298166), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4242 = { sizeof (grpcsharp_request_call_context_reset_delegate_t511489013), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4243 = { sizeof (grpcsharp_request_call_context_destroy_delegate_t2729585044), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4244 = { sizeof (grpcsharp_composite_call_credentials_create_delegate_t3738706681), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4245 = { sizeof (grpcsharp_call_credentials_release_delegate_t4173796462), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4246 = { sizeof (grpcsharp_call_cancel_delegate_t1770075385), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4247 = { sizeof (grpcsharp_call_cancel_with_status_delegate_t322311674), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4248 = { sizeof (grpcsharp_call_start_unary_delegate_t1332494428), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4249 = { sizeof (grpcsharp_call_start_client_streaming_delegate_t186521236), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4250 = { sizeof (grpcsharp_call_start_server_streaming_delegate_t941302023), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4251 = { sizeof (grpcsharp_call_start_duplex_streaming_delegate_t668243240), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4252 = { sizeof (grpcsharp_call_send_message_delegate_t80977843), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4253 = { sizeof (grpcsharp_call_send_close_from_client_delegate_t3404740706), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4254 = { sizeof (grpcsharp_call_send_status_from_server_delegate_t1281609886), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4255 = { sizeof (grpcsharp_call_recv_message_delegate_t3263680702), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4256 = { sizeof (grpcsharp_call_recv_initial_metadata_delegate_t1420662382), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4257 = { sizeof (grpcsharp_call_start_serverside_delegate_t702333229), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4258 = { sizeof (grpcsharp_call_send_initial_metadata_delegate_t2871837368), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4259 = { sizeof (grpcsharp_call_set_credentials_delegate_t2164951723), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4260 = { sizeof (grpcsharp_call_get_peer_delegate_t4293430173), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4261 = { sizeof (grpcsharp_call_destroy_delegate_t3472236717), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4262 = { sizeof (grpcsharp_channel_args_create_delegate_t223697083), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4263 = { sizeof (grpcsharp_channel_args_set_string_delegate_t2671812739), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4264 = { sizeof (grpcsharp_channel_args_set_integer_delegate_t1374818234), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4265 = { sizeof (grpcsharp_channel_args_destroy_delegate_t3019422610), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4266 = { sizeof (grpcsharp_override_default_ssl_roots_delegate_t2112048917), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4267 = { sizeof (grpcsharp_ssl_credentials_create_delegate_t1837265019), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4268 = { sizeof (grpcsharp_composite_channel_credentials_create_delegate_t11741719), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4269 = { sizeof (grpcsharp_channel_credentials_release_delegate_t3260923539), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4270 = { sizeof (grpcsharp_insecure_channel_create_delegate_t1754677822), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4271 = { sizeof (grpcsharp_secure_channel_create_delegate_t858919073), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4272 = { sizeof (grpcsharp_channel_create_call_delegate_t1689755209), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4273 = { sizeof (grpcsharp_channel_check_connectivity_state_delegate_t3896712294), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4274 = { sizeof (grpcsharp_channel_watch_connectivity_state_delegate_t2921567600), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4275 = { sizeof (grpcsharp_channel_get_target_delegate_t1912627058), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4276 = { sizeof (grpcsharp_channel_destroy_delegate_t1789251192), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4277 = { sizeof (grpcsharp_sizeof_grpc_event_delegate_t4083509947), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4278 = { sizeof (grpcsharp_completion_queue_create_async_delegate_t360079728), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4279 = { sizeof (grpcsharp_completion_queue_create_sync_delegate_t1808910508), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4280 = { sizeof (grpcsharp_completion_queue_shutdown_delegate_t248163633), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4281 = { sizeof (grpcsharp_completion_queue_next_delegate_t3269686616), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4282 = { sizeof (grpcsharp_completion_queue_pluck_delegate_t285374971), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4283 = { sizeof (grpcsharp_completion_queue_destroy_delegate_t1464055640), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4284 = { sizeof (gprsharp_free_delegate_t3453134242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4285 = { sizeof (grpcsharp_metadata_array_create_delegate_t2940265924), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4286 = { sizeof (grpcsharp_metadata_array_add_delegate_t281551042), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4287 = { sizeof (grpcsharp_metadata_array_count_delegate_t1171955796), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4288 = { sizeof (grpcsharp_metadata_array_get_key_delegate_t2312063556), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4289 = { sizeof (grpcsharp_metadata_array_get_value_delegate_t2215973087), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4290 = { sizeof (grpcsharp_metadata_array_destroy_full_delegate_t46908578), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4291 = { sizeof (grpcsharp_redirect_log_delegate_t1051680661), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4292 = { sizeof (grpcsharp_metadata_credentials_create_from_plugin_delegate_t1303336702), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4293 = { sizeof (grpcsharp_metadata_credentials_notify_from_plugin_delegate_t2332353334), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4294 = { sizeof (grpcsharp_ssl_server_credentials_create_delegate_t3254816087), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4295 = { sizeof (grpcsharp_server_credentials_release_delegate_t2095714663), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4296 = { sizeof (grpcsharp_server_create_delegate_t4127831655), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4297 = { sizeof (grpcsharp_server_register_completion_queue_delegate_t2206715366), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4298 = { sizeof (grpcsharp_server_add_insecure_http2_port_delegate_t811346158), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4299 = { sizeof (grpcsharp_server_add_secure_http2_port_delegate_t102470377), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
