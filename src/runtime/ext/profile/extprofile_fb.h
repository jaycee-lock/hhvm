/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_FB_H__
#define __EXTPROFILE_FB_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_fb.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_fb_thrift_serialize(CVarRef thing) {
  FUNCTION_INJECTION_BUILTIN(fb_thrift_serialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_thrift_serialize(thing);
}

inline Variant x_fb_thrift_unserialize(CVarRef thing, VRefParam success, VRefParam errcode = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_thrift_unserialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_thrift_unserialize(thing, success, errcode);
}

inline Variant x_fb_serialize(CVarRef thing) {
  FUNCTION_INJECTION_BUILTIN(fb_serialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_serialize(thing);
}

inline Variant x_fb_unserialize(CVarRef thing, VRefParam success, VRefParam errcode = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_unserialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_unserialize(thing, success, errcode);
}

inline Variant x_fb_compact_serialize(CVarRef thing) {
  FUNCTION_INJECTION_BUILTIN(fb_compact_serialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_compact_serialize(thing);
}

inline Variant x_fb_compact_unserialize(CVarRef thing, VRefParam success, VRefParam errcode = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_compact_unserialize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_compact_unserialize(thing, success, errcode);
}

inline bool x_fb_intercept(CStrRef name, CVarRef handler, CVarRef data = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_intercept);
  TAINT_OBSERVER(, );
  return f_fb_intercept(name, handler, data);
}

inline Variant x_fb_stubout_intercept_handler(CStrRef name, CVarRef obj, CArrRef params, CVarRef data, VRefParam done) {
  FUNCTION_INJECTION_BUILTIN(fb_stubout_intercept_handler);
  TAINT_OBSERVER(, );
  return f_fb_stubout_intercept_handler(name, obj, params, data, done);
}

inline Variant x_fb_rpc_intercept_handler(CStrRef name, CVarRef obj, CArrRef params, CVarRef data, VRefParam done) {
  FUNCTION_INJECTION_BUILTIN(fb_rpc_intercept_handler);
  TAINT_OBSERVER(, );
  return f_fb_rpc_intercept_handler(name, obj, params, data, done);
}

inline void x_fb_renamed_functions(CArrRef names) {
  FUNCTION_INJECTION_BUILTIN(fb_renamed_functions);
  TAINT_OBSERVER(, );
  f_fb_renamed_functions(names);
}

inline bool x_fb_rename_function(CStrRef orig_func_name, CStrRef new_func_name) {
  FUNCTION_INJECTION_BUILTIN(fb_rename_function);
  TAINT_OBSERVER(, );
  return f_fb_rename_function(orig_func_name, new_func_name);
}

inline bool x_fb_utf8ize(VRefParam input) {
  FUNCTION_INJECTION_BUILTIN(fb_utf8ize);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_utf8ize(input);
}

inline int64 x_fb_utf8_strlen_deprecated(CStrRef input) {
  FUNCTION_INJECTION_BUILTIN(fb_utf8_strlen_deprecated);
  return f_fb_utf8_strlen_deprecated(input);
}

inline int64 x_fb_utf8_strlen(CStrRef input) {
  FUNCTION_INJECTION_BUILTIN(fb_utf8_strlen);
  return f_fb_utf8_strlen(input);
}

inline Variant x_fb_utf8_substr(CStrRef str, int start, int length = INT_MAX) {
  FUNCTION_INJECTION_BUILTIN(fb_utf8_substr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_utf8_substr(str, start, length);
}

inline Array x_fb_call_user_func_safe(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_NOPROFILE_BUILTIN(fb_call_user_func_safe);
  TAINT_OBSERVER(, );
  return f_fb_call_user_func_safe(_argc, function, _argv);
}

inline Variant x_fb_call_user_func_safe_return(int _argc, CVarRef function, CVarRef def, CArrRef _argv = null_array) {
  FUNCTION_NOPROFILE_BUILTIN(fb_call_user_func_safe_return);
  TAINT_OBSERVER(, );
  return f_fb_call_user_func_safe_return(_argc, function, def, _argv);
}

inline Array x_fb_call_user_func_array_safe(CVarRef function, CArrRef params) {
  FUNCTION_NOPROFILE_BUILTIN(fb_call_user_func_array_safe);
  TAINT_OBSERVER(, );
  return f_fb_call_user_func_array_safe(function, params);
}

inline Variant x_fb_get_code_coverage(bool flush) {
  FUNCTION_INJECTION_BUILTIN(fb_get_code_coverage);
  TAINT_OBSERVER(, );
  return f_fb_get_code_coverage(flush);
}

inline void x_fb_enable_code_coverage() {
  FUNCTION_INJECTION_BUILTIN(fb_enable_code_coverage);
  TAINT_OBSERVER(, );
  f_fb_enable_code_coverage();
}

inline Variant x_fb_disable_code_coverage() {
  FUNCTION_INJECTION_BUILTIN(fb_disable_code_coverage);
  TAINT_OBSERVER(, );
  return f_fb_disable_code_coverage();
}

inline void x_xhprof_enable(int flags = 0, CArrRef args = null_array) {
  FUNCTION_INJECTION_BUILTIN(xhprof_enable);
  TAINT_OBSERVER(, );
  f_xhprof_enable(flags, args);
}

inline Variant x_xhprof_disable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_disable);
  TAINT_OBSERVER(, );
  return f_xhprof_disable();
}

inline void x_xhprof_network_enable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_network_enable);
  TAINT_OBSERVER(, );
  f_xhprof_network_enable();
}

inline Variant x_xhprof_network_disable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_network_disable);
  TAINT_OBSERVER(, );
  return f_xhprof_network_disable();
}

inline void x_xhprof_frame_begin(CStrRef name) {
  TAINT_OBSERVER(, );
  f_xhprof_frame_begin(name);
}

inline void x_xhprof_frame_end() {
  TAINT_OBSERVER(, );
  f_xhprof_frame_end();
}

inline Variant x_xhprof_run_trace(CStrRef packedTrace, int flags) {
  FUNCTION_INJECTION_BUILTIN(xhprof_run_trace);
  TAINT_OBSERVER(, );
  return f_xhprof_run_trace(packedTrace, flags);
}

inline void x_xhprof_sample_enable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_sample_enable);
  TAINT_OBSERVER(, );
  f_xhprof_sample_enable();
}

inline Variant x_xhprof_sample_disable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_sample_disable);
  TAINT_OBSERVER(, );
  return f_xhprof_sample_disable();
}

inline void x_fb_load_local_databases(CArrRef servers) {
  FUNCTION_INJECTION_BUILTIN(fb_load_local_databases);
  TAINT_OBSERVER(, );
  f_fb_load_local_databases(servers);
}

inline Array x_fb_parallel_query(CArrRef sql_map, int max_thread = 50, bool combine_result = true, bool retry_query_on_fail = true, int connect_timeout = -1, int read_timeout = -1, bool timeout_in_ms = false) {
  FUNCTION_INJECTION_BUILTIN(fb_parallel_query);
  TAINT_OBSERVER(, );
  return f_fb_parallel_query(sql_map, max_thread, combine_result, retry_query_on_fail, connect_timeout, read_timeout, timeout_in_ms);
}

inline Array x_fb_crossall_query(CStrRef sql, int max_thread = 50, bool retry_query_on_fail = true, int connect_timeout = -1, int read_timeout = -1, bool timeout_in_ms = false) {
  FUNCTION_INJECTION_BUILTIN(fb_crossall_query);
  TAINT_OBSERVER(, );
  return f_fb_crossall_query(sql, max_thread, retry_query_on_fail, connect_timeout, read_timeout, timeout_in_ms);
}

inline void x_fb_set_taint(VRefParam str, int taint) {
  FUNCTION_INJECTION_BUILTIN(fb_set_taint);
  TAINT_OBSERVER(, );
  f_fb_set_taint(str, taint);
}

inline void x_fb_unset_taint(VRefParam str, int taint) {
  FUNCTION_INJECTION_BUILTIN(fb_unset_taint);
  TAINT_OBSERVER(, );
  f_fb_unset_taint(str, taint);
}

inline bool x_fb_get_taint(CStrRef str, int taint) {
  FUNCTION_INJECTION_BUILTIN(fb_get_taint);
  TAINT_OBSERVER(, );
  return f_fb_get_taint(str, taint);
}

inline Array x_fb_get_taint_warning_counts() {
  FUNCTION_INJECTION_BUILTIN(fb_get_taint_warning_counts);
  TAINT_OBSERVER(, );
  return f_fb_get_taint_warning_counts();
}

inline void x_fb_enable_html_taint_trace() {
  FUNCTION_INJECTION_BUILTIN(fb_enable_html_taint_trace);
  TAINT_OBSERVER(, );
  f_fb_enable_html_taint_trace();
}

inline Variant x_fb_const_fetch(CVarRef key) {
  FUNCTION_INJECTION_BUILTIN(fb_const_fetch);
  TAINT_OBSERVER(, );
  return f_fb_const_fetch(key);
}

inline bool x_fb_output_compression(bool new_value) {
  FUNCTION_INJECTION_BUILTIN(fb_output_compression);
  TAINT_OBSERVER(, );
  return f_fb_output_compression(new_value);
}

inline void x_fb_set_exit_callback(CVarRef function) {
  FUNCTION_INJECTION_BUILTIN(fb_set_exit_callback);
  TAINT_OBSERVER(, );
  f_fb_set_exit_callback(function);
}

inline Array x_fb_get_flush_stat() {
  FUNCTION_INJECTION_BUILTIN(fb_get_flush_stat);
  TAINT_OBSERVER(, );
  return f_fb_get_flush_stat();
}

inline int64 x_fb_get_last_flush_size() {
  FUNCTION_INJECTION_BUILTIN(fb_get_last_flush_size);
  TAINT_OBSERVER(, );
  return f_fb_get_last_flush_size();
}

inline Variant x_fb_lazy_stat(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(fb_lazy_stat);
  return f_fb_lazy_stat(filename);
}

inline Variant x_fb_lazy_lstat(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(fb_lazy_lstat);
  return f_fb_lazy_lstat(filename);
}

inline String x_fb_lazy_realpath(CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(fb_lazy_realpath);
  return f_fb_lazy_realpath(filename);
}

inline void x_fb_setprofile(CVarRef callback) {
  FUNCTION_INJECTION_BUILTIN(fb_setprofile);
  f_fb_setprofile(callback);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_FB_H__
