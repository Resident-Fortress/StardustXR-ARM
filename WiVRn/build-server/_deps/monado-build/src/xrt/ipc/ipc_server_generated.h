// Copyright 2020-2023, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  Generated IPC server code.
 * @author Jakob Bornecrantz <jakob@collabora.com>
 * @ingroup ipc_server
 */

#pragma once

#include "shared/ipc_protocol.h"
#include "ipc_protocol_generated.h"
#include "server/ipc_server.h"



#ifdef __cplusplus
extern "C" {
#endif


xrt_result_t
ipc_dispatch(volatile struct ipc_client_state *ics,
             ipc_command_t *ipc_command);

size_t
ipc_command_size(const enum ipc_command cmd);

xrt_result_t
ipc_handle_instance_get_shm_fd(volatile struct ipc_client_state *ics,
                               uint32_t max_handle_count,
                               xrt_shmem_handle_t *out_handles,
                               uint32_t *out_handle_count);

xrt_result_t
ipc_handle_instance_describe_client(volatile struct ipc_client_state *ics,
                                    const struct ipc_client_description *desc);

xrt_result_t
ipc_handle_system_get_client_info(volatile struct ipc_client_state *ics,
                                  uint32_t id,
                                  struct ipc_app_state *out_ias);

xrt_result_t
ipc_handle_system_get_clients(volatile struct ipc_client_state *ics,
                              struct ipc_client_list *out_clients);

xrt_result_t
ipc_handle_system_set_primary_client(volatile struct ipc_client_state *ics,
                                     uint32_t id);

xrt_result_t
ipc_handle_system_set_focused_client(volatile struct ipc_client_state *ics,
                                     uint32_t id);

xrt_result_t
ipc_handle_system_toggle_io_client(volatile struct ipc_client_state *ics,
                                   uint32_t id);

xrt_result_t
ipc_handle_system_toggle_io_device(volatile struct ipc_client_state *ics,
                                   uint32_t id);

xrt_result_t
ipc_handle_system_devices_get_roles(volatile struct ipc_client_state *ics,
                                    struct xrt_system_roles *out_system_roles);

xrt_result_t
ipc_handle_system_compositor_get_info(volatile struct ipc_client_state *ics,
                                      struct xrt_system_compositor_info *out_info);

xrt_result_t
ipc_handle_session_create(volatile struct ipc_client_state *ics,
                          const struct xrt_session_info *xsi,
                          bool create_native_compositor);

xrt_result_t
ipc_handle_session_poll_events(volatile struct ipc_client_state *ics,
                               union xrt_session_event *out_event);

xrt_result_t
ipc_handle_session_begin(volatile struct ipc_client_state *ics);

xrt_result_t
ipc_handle_session_end(volatile struct ipc_client_state *ics);

xrt_result_t
ipc_handle_session_destroy(volatile struct ipc_client_state *ics);

xrt_result_t
ipc_handle_space_create_semantic_ids(volatile struct ipc_client_state *ics,
                                     uint32_t *out_root_id,
                                     uint32_t *out_view_id,
                                     uint32_t *out_local_id,
                                     uint32_t *out_local_floor_id,
                                     uint32_t *out_stage_id,
                                     uint32_t *out_unbounded_id);

xrt_result_t
ipc_handle_space_create_offset(volatile struct ipc_client_state *ics,
                               uint32_t parent_id,
                               const struct xrt_pose *offset,
                               uint32_t *out_space_id);

xrt_result_t
ipc_handle_space_create_pose(volatile struct ipc_client_state *ics,
                             uint32_t xdev_id,
                             enum xrt_input_name name,
                             uint32_t *out_space_id);

xrt_result_t
ipc_handle_space_locate_space(volatile struct ipc_client_state *ics,
                              uint32_t base_space_id,
                              const struct xrt_pose *base_offset,
                              uint64_t at_timestamp,
                              uint32_t space_id,
                              const struct xrt_pose *offset,
                              struct xrt_space_relation *out_relation);

xrt_result_t
ipc_handle_space_locate_device(volatile struct ipc_client_state *ics,
                               uint32_t base_space_id,
                               const struct xrt_pose *base_offset,
                               uint64_t at_timestamp,
                               uint32_t xdev_id,
                               struct xrt_space_relation *out_relation);

xrt_result_t
ipc_handle_space_destroy(volatile struct ipc_client_state *ics,
                         uint32_t space_id);

xrt_result_t
ipc_handle_space_mark_ref_space_in_use(volatile struct ipc_client_state *ics,
                                       enum xrt_reference_space_type type);

xrt_result_t
ipc_handle_space_unmark_ref_space_in_use(volatile struct ipc_client_state *ics,
                                         enum xrt_reference_space_type type);

xrt_result_t
ipc_handle_space_recenter_local_spaces(volatile struct ipc_client_state *ics);

xrt_result_t
ipc_handle_compositor_get_info(volatile struct ipc_client_state *ics,
                               struct xrt_compositor_info *out_info);

xrt_result_t
ipc_handle_compositor_predict_frame(volatile struct ipc_client_state *ics,
                                    int64_t *out_frame_id,
                                    uint64_t *out_wake_up_time,
                                    uint64_t *out_predicted_display_time,
                                    uint64_t *out_predicted_display_period);

xrt_result_t
ipc_handle_compositor_wait_woke(volatile struct ipc_client_state *ics,
                                int64_t frame_id);

xrt_result_t
ipc_handle_compositor_begin_frame(volatile struct ipc_client_state *ics,
                                  int64_t frame_id);

xrt_result_t
ipc_handle_compositor_discard_frame(volatile struct ipc_client_state *ics,
                                    int64_t frame_id);

xrt_result_t
ipc_handle_compositor_layer_sync(volatile struct ipc_client_state *ics,
                                 uint32_t slot_id,
                                 uint32_t *out_free_slot_id,
                                 const xrt_graphics_sync_handle_t *handles,
                                 const uint32_t handle_count);

xrt_result_t
ipc_handle_compositor_layer_sync_with_semaphore(volatile struct ipc_client_state *ics,
                                                uint32_t slot_id,
                                                uint32_t semaphore_id,
                                                uint64_t semaphore_value,
                                                uint32_t *out_free_slot_id);

xrt_result_t
ipc_handle_compositor_set_thread_hint(volatile struct ipc_client_state *ics,
                                      enum xrt_thread_hint hint,
                                      uint32_t thread_id);

xrt_result_t
ipc_handle_compositor_get_display_refresh_rate(volatile struct ipc_client_state *ics,
                                               float *out_out_display_refresh_rate_hz);

xrt_result_t
ipc_handle_compositor_request_display_refresh_rate(volatile struct ipc_client_state *ics,
                                                   float display_refresh_rate_hz);

xrt_result_t
ipc_handle_swapchain_get_properties(volatile struct ipc_client_state *ics,
                                    const struct xrt_swapchain_create_info *info,
                                    struct xrt_swapchain_create_properties *out_xsccp);

xrt_result_t
ipc_handle_swapchain_create(volatile struct ipc_client_state *ics,
                            const struct xrt_swapchain_create_info *info,
                            uint32_t *out_id,
                            uint32_t *out_image_count,
                            uint64_t *out_size,
                            bool *out_use_dedicated_allocation,
                            uint32_t max_handle_count,
                            xrt_graphics_buffer_handle_t *out_handles,
                            uint32_t *out_handle_count);

xrt_result_t
ipc_handle_swapchain_import(volatile struct ipc_client_state *ics,
                            const struct xrt_swapchain_create_info *info,
                            const struct ipc_arg_swapchain_from_native *args,
                            uint32_t *out_id,
                            const xrt_graphics_buffer_handle_t *handles,
                            const uint32_t handle_count);

xrt_result_t
ipc_handle_swapchain_wait_image(volatile struct ipc_client_state *ics,
                                uint32_t id,
                                uint64_t timeout_ns,
                                uint32_t index);

xrt_result_t
ipc_handle_swapchain_acquire_image(volatile struct ipc_client_state *ics,
                                   uint32_t id,
                                   uint32_t *out_index);

xrt_result_t
ipc_handle_swapchain_release_image(volatile struct ipc_client_state *ics,
                                   uint32_t id,
                                   uint32_t index);

xrt_result_t
ipc_handle_swapchain_destroy(volatile struct ipc_client_state *ics,
                             uint32_t id);

xrt_result_t
ipc_handle_compositor_semaphore_create(volatile struct ipc_client_state *ics,
                                       uint32_t *out_id,
                                       uint32_t max_handle_count,
                                       xrt_graphics_sync_handle_t *out_handles,
                                       uint32_t *out_handle_count);

xrt_result_t
ipc_handle_compositor_semaphore_destroy(volatile struct ipc_client_state *ics,
                                        uint32_t id);

xrt_result_t
ipc_handle_device_update_input(volatile struct ipc_client_state *ics,
                               uint32_t id);

xrt_result_t
ipc_handle_device_get_tracked_pose(volatile struct ipc_client_state *ics,
                                   uint32_t id,
                                   enum xrt_input_name name,
                                   uint64_t at_timestamp,
                                   struct xrt_space_relation *out_relation);

xrt_result_t
ipc_handle_device_get_hand_tracking(volatile struct ipc_client_state *ics,
                                    uint32_t id,
                                    enum xrt_input_name name,
                                    uint64_t at_timestamp,
                                    struct xrt_hand_joint_set *out_value,
                                    uint64_t *out_timestamp);

xrt_result_t
ipc_handle_device_get_view_poses(volatile struct ipc_client_state *ics,
                                 uint32_t id,
                                 const struct xrt_vec3 *fallback_eye_relation,
                                 uint64_t at_timestamp_ns,
                                 uint32_t view_count);

xrt_result_t
ipc_handle_device_get_view_poses_2(volatile struct ipc_client_state *ics,
                                   uint32_t id,
                                   const struct xrt_vec3 *fallback_eye_relation,
                                   uint64_t at_timestamp_ns,
                                   struct ipc_info_get_view_poses_2 *out_info);

xrt_result_t
ipc_handle_device_compute_distortion(volatile struct ipc_client_state *ics,
                                     uint32_t id,
                                     uint32_t view,
                                     float u,
                                     float v,
                                     bool *out_ret,
                                     struct xrt_uv_triplet *out_triplet);

xrt_result_t
ipc_handle_device_set_output(volatile struct ipc_client_state *ics,
                             uint32_t id,
                             enum xrt_output_name name,
                             const union xrt_output_value *value);

xrt_result_t
ipc_handle_device_get_visibility_mask(volatile struct ipc_client_state *ics,
                                      uint32_t id,
                                      enum xrt_visibility_mask_type type,
                                      uint32_t view_index);

xrt_result_t
ipc_handle_device_is_form_factor_available(volatile struct ipc_client_state *ics,
                                           uint32_t id,
                                           enum xrt_form_factor form_factor,
                                           bool *out_available);

#ifdef __cplusplus
}
#endif
