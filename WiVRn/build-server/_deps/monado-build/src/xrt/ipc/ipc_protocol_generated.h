// Copyright 2020-2023, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  Generated IPC protocol header.
 * @author Jakob Bornecrantz <jakob@collabora.com>
 * @ingroup ipc
 */

#pragma once

#include "xrt/xrt_compiler.h"


#ifdef __cplusplus
extern "C" {
#endif


struct ipc_connection;

typedef enum ipc_command
{
	IPC_ERR = 0,
	IPC_INSTANCE_GET_SHM_FD,
	IPC_INSTANCE_DESCRIBE_CLIENT,
	IPC_SYSTEM_GET_CLIENT_INFO,
	IPC_SYSTEM_GET_CLIENTS,
	IPC_SYSTEM_SET_PRIMARY_CLIENT,
	IPC_SYSTEM_SET_FOCUSED_CLIENT,
	IPC_SYSTEM_TOGGLE_IO_CLIENT,
	IPC_SYSTEM_TOGGLE_IO_DEVICE,
	IPC_SYSTEM_DEVICES_GET_ROLES,
	IPC_SYSTEM_COMPOSITOR_GET_INFO,
	IPC_SESSION_CREATE,
	IPC_SESSION_POLL_EVENTS,
	IPC_SESSION_BEGIN,
	IPC_SESSION_END,
	IPC_SESSION_DESTROY,
	IPC_SPACE_CREATE_SEMANTIC_IDS,
	IPC_SPACE_CREATE_OFFSET,
	IPC_SPACE_CREATE_POSE,
	IPC_SPACE_LOCATE_SPACE,
	IPC_SPACE_LOCATE_DEVICE,
	IPC_SPACE_DESTROY,
	IPC_SPACE_MARK_REF_SPACE_IN_USE,
	IPC_SPACE_UNMARK_REF_SPACE_IN_USE,
	IPC_SPACE_RECENTER_LOCAL_SPACES,
	IPC_COMPOSITOR_GET_INFO,
	IPC_COMPOSITOR_PREDICT_FRAME,
	IPC_COMPOSITOR_WAIT_WOKE,
	IPC_COMPOSITOR_BEGIN_FRAME,
	IPC_COMPOSITOR_DISCARD_FRAME,
	IPC_COMPOSITOR_LAYER_SYNC,
	IPC_COMPOSITOR_LAYER_SYNC_WITH_SEMAPHORE,
	IPC_COMPOSITOR_SET_THREAD_HINT,
	IPC_COMPOSITOR_GET_DISPLAY_REFRESH_RATE,
	IPC_COMPOSITOR_REQUEST_DISPLAY_REFRESH_RATE,
	IPC_SWAPCHAIN_GET_PROPERTIES,
	IPC_SWAPCHAIN_CREATE,
	IPC_SWAPCHAIN_IMPORT,
	IPC_SWAPCHAIN_WAIT_IMAGE,
	IPC_SWAPCHAIN_ACQUIRE_IMAGE,
	IPC_SWAPCHAIN_RELEASE_IMAGE,
	IPC_SWAPCHAIN_DESTROY,
	IPC_COMPOSITOR_SEMAPHORE_CREATE,
	IPC_COMPOSITOR_SEMAPHORE_DESTROY,
	IPC_DEVICE_UPDATE_INPUT,
	IPC_DEVICE_GET_TRACKED_POSE,
	IPC_DEVICE_GET_HAND_TRACKING,
	IPC_DEVICE_GET_VIEW_POSES,
	IPC_DEVICE_GET_VIEW_POSES_2,
	IPC_DEVICE_COMPUTE_DISTORTION,
	IPC_DEVICE_SET_OUTPUT,
	IPC_DEVICE_GET_VISIBILITY_MASK,
	IPC_DEVICE_IS_FORM_FACTOR_AVAILABLE,
} ipc_command_t;

struct ipc_command_msg
{
	enum ipc_command cmd;
};

struct ipc_result_reply
{
	xrt_result_t result;
};


static inline const char *
ipc_cmd_to_str(ipc_command_t id)
{
	switch (id) {
	case IPC_ERR: return "IPC_ERR";
	case IPC_INSTANCE_GET_SHM_FD: return "IPC_INSTANCE_GET_SHM_FD";
	case IPC_INSTANCE_DESCRIBE_CLIENT: return "IPC_INSTANCE_DESCRIBE_CLIENT";
	case IPC_SYSTEM_GET_CLIENT_INFO: return "IPC_SYSTEM_GET_CLIENT_INFO";
	case IPC_SYSTEM_GET_CLIENTS: return "IPC_SYSTEM_GET_CLIENTS";
	case IPC_SYSTEM_SET_PRIMARY_CLIENT: return "IPC_SYSTEM_SET_PRIMARY_CLIENT";
	case IPC_SYSTEM_SET_FOCUSED_CLIENT: return "IPC_SYSTEM_SET_FOCUSED_CLIENT";
	case IPC_SYSTEM_TOGGLE_IO_CLIENT: return "IPC_SYSTEM_TOGGLE_IO_CLIENT";
	case IPC_SYSTEM_TOGGLE_IO_DEVICE: return "IPC_SYSTEM_TOGGLE_IO_DEVICE";
	case IPC_SYSTEM_DEVICES_GET_ROLES: return "IPC_SYSTEM_DEVICES_GET_ROLES";
	case IPC_SYSTEM_COMPOSITOR_GET_INFO: return "IPC_SYSTEM_COMPOSITOR_GET_INFO";
	case IPC_SESSION_CREATE: return "IPC_SESSION_CREATE";
	case IPC_SESSION_POLL_EVENTS: return "IPC_SESSION_POLL_EVENTS";
	case IPC_SESSION_BEGIN: return "IPC_SESSION_BEGIN";
	case IPC_SESSION_END: return "IPC_SESSION_END";
	case IPC_SESSION_DESTROY: return "IPC_SESSION_DESTROY";
	case IPC_SPACE_CREATE_SEMANTIC_IDS: return "IPC_SPACE_CREATE_SEMANTIC_IDS";
	case IPC_SPACE_CREATE_OFFSET: return "IPC_SPACE_CREATE_OFFSET";
	case IPC_SPACE_CREATE_POSE: return "IPC_SPACE_CREATE_POSE";
	case IPC_SPACE_LOCATE_SPACE: return "IPC_SPACE_LOCATE_SPACE";
	case IPC_SPACE_LOCATE_DEVICE: return "IPC_SPACE_LOCATE_DEVICE";
	case IPC_SPACE_DESTROY: return "IPC_SPACE_DESTROY";
	case IPC_SPACE_MARK_REF_SPACE_IN_USE: return "IPC_SPACE_MARK_REF_SPACE_IN_USE";
	case IPC_SPACE_UNMARK_REF_SPACE_IN_USE: return "IPC_SPACE_UNMARK_REF_SPACE_IN_USE";
	case IPC_SPACE_RECENTER_LOCAL_SPACES: return "IPC_SPACE_RECENTER_LOCAL_SPACES";
	case IPC_COMPOSITOR_GET_INFO: return "IPC_COMPOSITOR_GET_INFO";
	case IPC_COMPOSITOR_PREDICT_FRAME: return "IPC_COMPOSITOR_PREDICT_FRAME";
	case IPC_COMPOSITOR_WAIT_WOKE: return "IPC_COMPOSITOR_WAIT_WOKE";
	case IPC_COMPOSITOR_BEGIN_FRAME: return "IPC_COMPOSITOR_BEGIN_FRAME";
	case IPC_COMPOSITOR_DISCARD_FRAME: return "IPC_COMPOSITOR_DISCARD_FRAME";
	case IPC_COMPOSITOR_LAYER_SYNC: return "IPC_COMPOSITOR_LAYER_SYNC";
	case IPC_COMPOSITOR_LAYER_SYNC_WITH_SEMAPHORE: return "IPC_COMPOSITOR_LAYER_SYNC_WITH_SEMAPHORE";
	case IPC_COMPOSITOR_SET_THREAD_HINT: return "IPC_COMPOSITOR_SET_THREAD_HINT";
	case IPC_COMPOSITOR_GET_DISPLAY_REFRESH_RATE: return "IPC_COMPOSITOR_GET_DISPLAY_REFRESH_RATE";
	case IPC_COMPOSITOR_REQUEST_DISPLAY_REFRESH_RATE: return "IPC_COMPOSITOR_REQUEST_DISPLAY_REFRESH_RATE";
	case IPC_SWAPCHAIN_GET_PROPERTIES: return "IPC_SWAPCHAIN_GET_PROPERTIES";
	case IPC_SWAPCHAIN_CREATE: return "IPC_SWAPCHAIN_CREATE";
	case IPC_SWAPCHAIN_IMPORT: return "IPC_SWAPCHAIN_IMPORT";
	case IPC_SWAPCHAIN_WAIT_IMAGE: return "IPC_SWAPCHAIN_WAIT_IMAGE";
	case IPC_SWAPCHAIN_ACQUIRE_IMAGE: return "IPC_SWAPCHAIN_ACQUIRE_IMAGE";
	case IPC_SWAPCHAIN_RELEASE_IMAGE: return "IPC_SWAPCHAIN_RELEASE_IMAGE";
	case IPC_SWAPCHAIN_DESTROY: return "IPC_SWAPCHAIN_DESTROY";
	case IPC_COMPOSITOR_SEMAPHORE_CREATE: return "IPC_COMPOSITOR_SEMAPHORE_CREATE";
	case IPC_COMPOSITOR_SEMAPHORE_DESTROY: return "IPC_COMPOSITOR_SEMAPHORE_DESTROY";
	case IPC_DEVICE_UPDATE_INPUT: return "IPC_DEVICE_UPDATE_INPUT";
	case IPC_DEVICE_GET_TRACKED_POSE: return "IPC_DEVICE_GET_TRACKED_POSE";
	case IPC_DEVICE_GET_HAND_TRACKING: return "IPC_DEVICE_GET_HAND_TRACKING";
	case IPC_DEVICE_GET_VIEW_POSES: return "IPC_DEVICE_GET_VIEW_POSES";
	case IPC_DEVICE_GET_VIEW_POSES_2: return "IPC_DEVICE_GET_VIEW_POSES_2";
	case IPC_DEVICE_COMPUTE_DISTORTION: return "IPC_DEVICE_COMPUTE_DISTORTION";
	case IPC_DEVICE_SET_OUTPUT: return "IPC_DEVICE_SET_OUTPUT";
	case IPC_DEVICE_GET_VISIBILITY_MASK: return "IPC_DEVICE_GET_VISIBILITY_MASK";
	case IPC_DEVICE_IS_FORM_FACTOR_AVAILABLE: return "IPC_DEVICE_IS_FORM_FACTOR_AVAILABLE";
	default: return "IPC_UNKNOWN";
	}
}
#pragma pack (push, 1)
struct ipc_instance_describe_client_msg
{
	enum ipc_command cmd;
	struct ipc_client_description desc;
};

struct ipc_system_get_client_info_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_system_get_client_info_reply
{
	xrt_result_t result;
	struct ipc_app_state ias;
};

struct ipc_system_get_clients_reply
{
	xrt_result_t result;
	struct ipc_client_list clients;
};

struct ipc_system_set_primary_client_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_system_set_focused_client_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_system_toggle_io_client_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_system_toggle_io_device_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_system_devices_get_roles_reply
{
	xrt_result_t result;
	struct xrt_system_roles system_roles;
};

struct ipc_system_compositor_get_info_reply
{
	xrt_result_t result;
	struct xrt_system_compositor_info info;
};

struct ipc_session_create_msg
{
	enum ipc_command cmd;
	struct xrt_session_info xsi;
	bool create_native_compositor;
};

struct ipc_session_poll_events_reply
{
	xrt_result_t result;
	union xrt_session_event event;
};

struct ipc_space_create_semantic_ids_reply
{
	xrt_result_t result;
	uint32_t root_id;
	uint32_t view_id;
	uint32_t local_id;
	uint32_t local_floor_id;
	uint32_t stage_id;
	uint32_t unbounded_id;
};

struct ipc_space_create_offset_msg
{
	enum ipc_command cmd;
	uint32_t parent_id;
	struct xrt_pose offset;
};

struct ipc_space_create_offset_reply
{
	xrt_result_t result;
	uint32_t space_id;
};

struct ipc_space_create_pose_msg
{
	enum ipc_command cmd;
	uint32_t xdev_id;
	enum xrt_input_name name;
};

struct ipc_space_create_pose_reply
{
	xrt_result_t result;
	uint32_t space_id;
};

struct ipc_space_locate_space_msg
{
	enum ipc_command cmd;
	uint32_t base_space_id;
	struct xrt_pose base_offset;
	uint64_t at_timestamp;
	uint32_t space_id;
	struct xrt_pose offset;
};

struct ipc_space_locate_space_reply
{
	xrt_result_t result;
	struct xrt_space_relation relation;
};

struct ipc_space_locate_device_msg
{
	enum ipc_command cmd;
	uint32_t base_space_id;
	struct xrt_pose base_offset;
	uint64_t at_timestamp;
	uint32_t xdev_id;
};

struct ipc_space_locate_device_reply
{
	xrt_result_t result;
	struct xrt_space_relation relation;
};

struct ipc_space_destroy_msg
{
	enum ipc_command cmd;
	uint32_t space_id;
};

struct ipc_space_mark_ref_space_in_use_msg
{
	enum ipc_command cmd;
	enum xrt_reference_space_type type;
};

struct ipc_space_unmark_ref_space_in_use_msg
{
	enum ipc_command cmd;
	enum xrt_reference_space_type type;
};

struct ipc_compositor_get_info_reply
{
	xrt_result_t result;
	struct xrt_compositor_info info;
};

struct ipc_compositor_predict_frame_reply
{
	xrt_result_t result;
	int64_t frame_id;
	uint64_t wake_up_time;
	uint64_t predicted_display_time;
	uint64_t predicted_display_period;
};

struct ipc_compositor_wait_woke_msg
{
	enum ipc_command cmd;
	int64_t frame_id;
};

struct ipc_compositor_begin_frame_msg
{
	enum ipc_command cmd;
	int64_t frame_id;
};

struct ipc_compositor_discard_frame_msg
{
	enum ipc_command cmd;
	int64_t frame_id;
};

struct ipc_compositor_layer_sync_msg
{
	enum ipc_command cmd;
	uint32_t slot_id;
	uint32_t handle_count;
};

struct ipc_compositor_layer_sync_reply
{
	xrt_result_t result;
	uint32_t free_slot_id;
};

struct ipc_compositor_layer_sync_with_semaphore_msg
{
	enum ipc_command cmd;
	uint32_t slot_id;
	uint32_t semaphore_id;
	uint64_t semaphore_value;
};

struct ipc_compositor_layer_sync_with_semaphore_reply
{
	xrt_result_t result;
	uint32_t free_slot_id;
};

struct ipc_compositor_set_thread_hint_msg
{
	enum ipc_command cmd;
	enum xrt_thread_hint hint;
	uint32_t thread_id;
};

struct ipc_compositor_get_display_refresh_rate_reply
{
	xrt_result_t result;
	float out_display_refresh_rate_hz;
};

struct ipc_compositor_request_display_refresh_rate_msg
{
	enum ipc_command cmd;
	float display_refresh_rate_hz;
};

struct ipc_swapchain_get_properties_msg
{
	enum ipc_command cmd;
	struct xrt_swapchain_create_info info;
};

struct ipc_swapchain_get_properties_reply
{
	xrt_result_t result;
	struct xrt_swapchain_create_properties xsccp;
};

struct ipc_swapchain_create_msg
{
	enum ipc_command cmd;
	struct xrt_swapchain_create_info info;
};

struct ipc_swapchain_create_reply
{
	xrt_result_t result;
	uint32_t id;
	uint32_t image_count;
	uint64_t size;
	bool use_dedicated_allocation;
};

struct ipc_swapchain_import_msg
{
	enum ipc_command cmd;
	struct xrt_swapchain_create_info info;
	struct ipc_arg_swapchain_from_native args;
	uint32_t handle_count;
};

struct ipc_swapchain_import_reply
{
	xrt_result_t result;
	uint32_t id;
};

struct ipc_swapchain_wait_image_msg
{
	enum ipc_command cmd;
	uint32_t id;
	uint64_t timeout_ns;
	uint32_t index;
};

struct ipc_swapchain_acquire_image_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_swapchain_acquire_image_reply
{
	xrt_result_t result;
	uint32_t index;
};

struct ipc_swapchain_release_image_msg
{
	enum ipc_command cmd;
	uint32_t id;
	uint32_t index;
};

struct ipc_swapchain_destroy_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_compositor_semaphore_create_reply
{
	xrt_result_t result;
	uint32_t id;
};

struct ipc_compositor_semaphore_destroy_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_device_update_input_msg
{
	enum ipc_command cmd;
	uint32_t id;
};

struct ipc_device_get_tracked_pose_msg
{
	enum ipc_command cmd;
	uint32_t id;
	enum xrt_input_name name;
	uint64_t at_timestamp;
};

struct ipc_device_get_tracked_pose_reply
{
	xrt_result_t result;
	struct xrt_space_relation relation;
};

struct ipc_device_get_hand_tracking_msg
{
	enum ipc_command cmd;
	uint32_t id;
	enum xrt_input_name name;
	uint64_t at_timestamp;
};

struct ipc_device_get_hand_tracking_reply
{
	xrt_result_t result;
	struct xrt_hand_joint_set value;
	uint64_t timestamp;
};

struct ipc_device_get_view_poses_msg
{
	enum ipc_command cmd;
	uint32_t id;
	struct xrt_vec3 fallback_eye_relation;
	uint64_t at_timestamp_ns;
	uint32_t view_count;
};

struct ipc_device_get_view_poses_reply
{
	xrt_result_t result;
	struct xrt_space_relation head_relation;
	uint32_t view_count;
};

struct ipc_device_get_view_poses_2_msg
{
	enum ipc_command cmd;
	uint32_t id;
	struct xrt_vec3 fallback_eye_relation;
	uint64_t at_timestamp_ns;
};

struct ipc_device_get_view_poses_2_reply
{
	xrt_result_t result;
	struct ipc_info_get_view_poses_2 info;
};

struct ipc_device_compute_distortion_msg
{
	enum ipc_command cmd;
	uint32_t id;
	uint32_t view;
	float u;
	float v;
};

struct ipc_device_compute_distortion_reply
{
	xrt_result_t result;
	bool ret;
	struct xrt_uv_triplet triplet;
};

struct ipc_device_set_output_msg
{
	enum ipc_command cmd;
	uint32_t id;
	enum xrt_output_name name;
	union xrt_output_value value;
};

struct ipc_device_get_visibility_mask_msg
{
	enum ipc_command cmd;
	uint32_t id;
	enum xrt_visibility_mask_type type;
	uint32_t view_index;
};

struct ipc_device_get_visibility_mask_reply
{
	xrt_result_t result;
	uint32_t mask_size;
};

struct ipc_device_is_form_factor_available_msg
{
	enum ipc_command cmd;
	uint32_t id;
	enum xrt_form_factor form_factor;
};

struct ipc_device_is_form_factor_available_reply
{
	xrt_result_t result;
	bool available;
};
#pragma pack (pop)

#ifdef __cplusplus
}
#endif
