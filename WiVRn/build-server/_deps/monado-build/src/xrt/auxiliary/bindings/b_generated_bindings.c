// Copyright 2020-2022, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  Generated bindings data.
 * @author Jakob Bornecrantz <jakob@collabora.com>
 * @author Christoph Haag <christoph.haag@collabora.com>
 * @author Korcan Hussein <korcan.hussein@collabora.com>
 * @ingroup oxr_main
 */

#include "b_generated_bindings.h"
#include <string.h>

// clang-format off

bool
oxr_verify_ext_hand_interaction_ext_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/ext/hand_interaction_ext
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/grasp_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/left/input/pinch_ext/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/grasp_ext/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/left/input/grasp_ext/ready_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/ready_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/left/input/aim_activate_ext/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/right/input/grasp_ext/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/pinch_ext/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/aim_activate_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 48:
			if (strcmp(str, "/user/hand/left/input/aim_activate_ext/ready_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grasp_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/ready_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grasp_ext/ready_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 45:
			if (strcmp(str, "/user/hand/right/input/aim_activate_ext/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/aim_activate_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 49:
			if (strcmp(str, "/user/hand/right/input/aim_activate_ext/ready_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ext_hand_interaction_ext_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_ext_hand_interaction_ext_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_khr_simple_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/khr/simple_controller
	switch (length) {
	case 34:
		if (strcmp(str, "/user/hand/left/input/select/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/hand/left/input/select") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/right/input/select") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/right/input/select/click") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/menu") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_khr_simple_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_khr_simple_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_google_daydream_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/google/daydream_controller
	switch (length) {
	case 34:
		if (strcmp(str, "/user/hand/left/input/select/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/hand/left/input/select") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/right/input/select/click") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/right/input/select") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_google_daydream_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/google/daydream_controller
	switch (length) {
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_google_daydream_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/google/daydream_controller
	switch (length) {
	case 30:
		if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_htc_vive_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/htc/vive_controller
	switch (length) {
	case 34:
		if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/hand/left/input/system") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/left/input/squeeze/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/right/input/system") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/click") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/menu") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_htc_vive_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/htc/vive_controller
	switch (length) {
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_htc_vive_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/htc/vive_controller
	switch (length) {
	case 30:
		if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_htc_vive_pro_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/htc/vive_pro
	switch (length) {
	case 29:
		if (strcmp(str, "/user/head/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 23:
		if (strcmp(str, "/user/head/input/system") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/head/input/volume_up/click") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/head/input/volume_up") == 0) {
			return true;
		} else {
			break;
		}
	case 34:
		if (strcmp(str, "/user/head/input/volume_down/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/head/input/volume_down") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/head/input/mute_mic/click") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/head/input/mute_mic") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_htc_vive_pro_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_htc_vive_pro_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_microsoft_motion_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/motion_controller
	switch (length) {
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/left/input/squeeze/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 34:
		if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/click") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/menu") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/mndx/winmr_system_button
	if (exts->MNDX_system_buttons) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_microsoft_motion_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/motion_controller
	switch (length) {
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_microsoft_motion_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/motion_controller
	switch (length) {
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_microsoft_xbox_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/xbox_controller
	switch (length) {
	case 30:
		if (strcmp(str, "/user/gamepad/input/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/view/click") == 0) {
			return true;
		} else {
			break;
		}
	case 24:
		if (strcmp(str, "/user/gamepad/input/view") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/menu") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/gamepad/input/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/x/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/a/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/y/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/b/click") == 0) {
			return true;
		} else {
			break;
		}
	case 21:
		if (strcmp(str, "/user/gamepad/input/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/b") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/a") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/y") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/gamepad/input/dpad_down/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/dpad_left/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/gamepad/input/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/dpad_right/click") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/gamepad/input/shoulder_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/trigger_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/dpad_up/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/output/haptic_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/gamepad/output/haptic_left/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/trigger_right/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/shoulder_left/click") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/gamepad/input/shoulder_right/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/output/haptic_right/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/output/haptic_left_trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 34:
		if (strcmp(str, "/user/gamepad/input/shoulder_right") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/output/haptic_right_trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left/y") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 45:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 46:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/click") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/trigger_left/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_right/x") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 47:
		if (strcmp(str, "/user/gamepad/output/haptic_left_trigger/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/gamepad/output/haptic_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/trigger_left") == 0) {
			return true;
		} else {
			break;
		}
	case 48:
		if (strcmp(str, "/user/gamepad/output/haptic_right_trigger/haptic") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_microsoft_xbox_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/xbox_controller
	switch (length) {
	case 43:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 45:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 46:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_left/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 47:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_microsoft_xbox_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/xbox_controller
	switch (length) {
	case 35:
		if (strcmp(str, "/user/gamepad/input/thumbstick_left") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/gamepad/input/thumbstick_right") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oculus_go_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/go_controller
	switch (length) {
	case 34:
		if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/hand/left/input/system") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/left/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/right/input/system") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/back/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/back") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/right/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/back/click") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/back") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_oculus_go_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/go_controller
	switch (length) {
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oculus_go_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/go_controller
	switch (length) {
	case 30:
		if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oculus_touch_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/touch_controller
	switch (length) {
	case 29:
		if (strcmp(str, "/user/hand/left/input/x/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/y/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/y/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/x/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 23:
		if (strcmp(str, "/user/hand/left/input/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/x") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbrest") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbrest/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 34:
		if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbrest/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbrest") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/right/input/a/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/right/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else {
			break;
		}
	case 24:
		if (strcmp(str, "/user/hand/right/input/b") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_oculus_touch_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/touch_controller
	switch (length) {
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oculus_touch_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oculus/touch_controller
	switch (length) {
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_valve_index_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/valve/index_controller
	switch (length) {
	case 34:
		if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/system/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
			return true;
		} else {
			break;
		}
	case 28:
		if (strcmp(str, "/user/hand/left/input/system") == 0) {
			return true;
		} else {
			break;
		}
	case 29:
		if (strcmp(str, "/user/hand/left/input/b/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/a/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/a/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/b/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 23:
		if (strcmp(str, "/user/hand/left/input/b") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/a") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/left/input/squeeze/force") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/system/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/force") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/force") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/right/input/a/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 24:
		if (strcmp(str, "/user/hand/right/input/b") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/force") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_valve_index_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/valve/index_controller
	switch (length) {
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_valve_index_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/valve/index_controller
	switch (length) {
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_hp_mixed_reality_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/hp/mixed_reality_controller
	if (exts->EXT_hp_mixed_reality_controller) {
		switch (length) {
		case 29:
			if (strcmp(str, "/user/hand/left/input/x/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/y/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	{
				break;
			}
		case 23:
			if (strcmp(str, "/user/hand/left/input/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/squeeze/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 34:
			if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/right/input/a/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/b/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/squeeze/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
				return true;
			} else 	{
				break;
			}
		case 24:
			if (strcmp(str, "/user/hand/right/input/b") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/a") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/mndx/hp_reverb_g2_system_button
	if (exts->MNDX_system_buttons) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_hp_mixed_reality_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/hp/mixed_reality_controller
	if (exts->EXT_hp_mixed_reality_controller) {
		switch (length) {
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_hp_mixed_reality_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/hp/mixed_reality_controller
	if (exts->EXT_hp_mixed_reality_controller) {
		switch (length) {
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_samsung_odyssey_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/samsung/odyssey_controller
	if (exts->EXT_samsung_odyssey_controller) {
		switch (length) {
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/squeeze/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 34:
			if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/squeeze/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/mndx/samsung_odyssey_system_button
	if (exts->MNDX_system_buttons) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_samsung_odyssey_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/samsung/odyssey_controller
	if (exts->EXT_samsung_odyssey_controller) {
		switch (length) {
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_samsung_odyssey_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/samsung/odyssey_controller
	if (exts->EXT_samsung_odyssey_controller) {
		switch (length) {
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ml_ml2_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/ml/ml2_controller
	if (exts->ML_ml2_controller_interaction) {
		switch (length) {
		case 32:
			if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/home/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/home") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/shoulder/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/force") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/shoulder") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/shoulder") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/home/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/home") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/shoulder/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/force") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ml_ml2_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/ml/ml2_controller
	if (exts->ML_ml2_controller_interaction) {
		switch (length) {
		case 38:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/right/input/trackpad/dpad_center") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ml_ml2_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/ml/ml2_controller
	if (exts->ML_ml2_controller_interaction) {
		switch (length) {
		case 30:
			if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_microsoft_hand_interaction_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/microsoft/hand_interaction
	if (exts->MSFT_hand_interaction) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/left/input/select/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/select") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/right/input/select/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/squeeze/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/select") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/squeeze/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_microsoft_hand_interaction_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_microsoft_hand_interaction_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_mndx_ball_on_a_stick_controller_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/mndx/ball_on_a_stick_controller
	if (exts->MNDX_ball_on_a_stick_controller) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/right/input/start/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/select/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/circle_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/square_mndx") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/right/input/start") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/select") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/ball_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/cross_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/left/input/circle_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/start/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/square_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/cross_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/left/input/start") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/cross_mndx/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/square_mndx/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/body_center_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/circle_mndx/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/cross_mndx/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/body_center_mndx") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/left/input/triangle_mndx/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/triangle_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/select/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/system") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/select") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/ball_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/triangle_mndx") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/ball_mndx/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/left/input/body_center_mndx/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
				return true;
			} else 	{
				break;
			}
		case 25:
			if (strcmp(str, "/user/hand/left/input/aim") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/right/input/circle_mndx/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/square_mndx/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/right/input/triangle_mndx/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/ball_mndx/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/body_center_mndx/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_mndx_ball_on_a_stick_controller_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_mndx_ball_on_a_stick_controller_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_mndx_hydra_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/mndx/hydra
	if (exts->MNDX_hydra) {
		switch (length) {
		case 29:
			if (strcmp(str, "/user/hand/left/input/3/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/4/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/2/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/bumper") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/1/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	{
				break;
			}
		case 23:
			if (strcmp(str, "/user/hand/left/input/2") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/4") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/1") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/3") == 0) {
				return true;
			} else 	{
				break;
			}
		case 34:
			if (strcmp(str, "/user/hand/left/input/bumper/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/bumper") == 0) {
				return true;
			} else 	{
				break;
			}
		case 38:
			if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/bumper/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/right/input/3/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/1/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/4/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/2/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 24:
			if (strcmp(str, "/user/hand/right/input/2") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/4") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/1") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/3") == 0) {
				return true;
			} else 	{
				break;
			}
		case 39:
			if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_mndx_hydra_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/mndx/hydra
	if (exts->MNDX_hydra) {
		switch (length) {
		case 40:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 42:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	{
				break;
			}
		case 43:
			if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
				return true;
			} else 	{
				break;
			}
		case 41:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
				return true;
			} else 	{
				break;
			}
		case 44:
			if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_mndx_hydra_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/mndx/hydra
	if (exts->MNDX_hydra) {
		switch (length) {
		case 32:
			if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ext_eye_gaze_interaction_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/ext/eye_gaze_interaction
	if (exts->EXT_eye_gaze_interaction) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/eyes_ext/input/gaze_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/eyes_ext/input/gaze_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_ext_eye_gaze_interaction_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_ext_eye_gaze_interaction_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_htc_vive_tracker_htcx_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/htc/vive_tracker_htcx
	if (exts->HTCX_vive_tracker_interaction) {
		switch (length) {
		case 34:
			if (strcmp(str, "/user/hand/left/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 28:
			if (strcmp(str, "/user/hand/left/input/system") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/squeeze/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/system/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 29:
			if (strcmp(str, "/user/hand/right/input/system") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/left/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/x") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 26:
			if (strcmp(str, "/user/hand/left/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/left/input/trackpad/touch") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/squeeze/click") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/trackpad") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad") == 0) {
				return true;
			} else 	{
				break;
			}
		case 33:
			if (strcmp(str, "/user/hand/right/input/trackpad/y") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/x") == 0) {
				return true;
			} else 	{
				break;
			}
		case 27:
			if (strcmp(str, "/user/hand/right/input/grip") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/menu") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/click") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/right/input/trackpad/touch") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/palm_pose
	if (exts->EXT_palm_pose) {
		switch (length) {
		case 35:
			if (strcmp(str, "/user/hand/left/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 36:
			if (strcmp(str, "/user/hand/right/input/palm_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/palm_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	// generated from: /virtual_profiles/ext/hand_interaction_poses
	if (exts->EXT_hand_interaction) {
		switch (length) {
		case 36:
			if (strcmp(str, "/user/hand/right/input/poke_ext/pose") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 31:
			if (strcmp(str, "/user/hand/right/input/poke_ext") == 0) {
				return true;
			} else 	if (strcmp(str, "/user/hand/left/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 35:
			if (strcmp(str, "/user/hand/left/input/poke_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 30:
			if (strcmp(str, "/user/hand/left/input/poke_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		case 37:
			if (strcmp(str, "/user/hand/right/input/pinch_ext/pose") == 0) {
				return true;
			} else 	{
				break;
			}
		case 32:
			if (strcmp(str, "/user/hand/right/input/pinch_ext") == 0) {
				return true;
			} else 	{
				break;
			}
		default: break;
		}
	}
	return false;
}

bool
oxr_verify_htc_vive_tracker_htcx_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_htc_vive_tracker_htcx_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	return false;
}

bool
oxr_verify_oppo_mr_controller_oppo_subpath(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oppo/mr_controller_oppo
	switch (length) {
	case 29:
		if (strcmp(str, "/user/hand/left/input/x/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/y/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/y/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/x/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger") == 0) {
			return true;
		} else {
			break;
		}
	case 23:
		if (strcmp(str, "/user/hand/left/input/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/x") == 0) {
			return true;
		} else {
			break;
		}
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/grip/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 26:
		if (strcmp(str, "/user/hand/left/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/menu") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/heartrate_oppo/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 36:
		if (strcmp(str, "/user/hand/left/output/haptic/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/heartrate_oppo") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze/value") == 0) {
			return true;
		} else {
			break;
		}
	case 35:
		if (strcmp(str, "/user/hand/right/input/thumbstick/y") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/trigger/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/squeeze/value") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/x") == 0) {
			return true;
		} else {
			break;
		}
	case 31:
		if (strcmp(str, "/user/hand/left/input/grip/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/aim/pose") == 0) {
			return true;
		} else {
			break;
		}
	case 30:
		if (strcmp(str, "/user/hand/right/input/a/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/output/haptic") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/aim/pose") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/trigger") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/squeeze") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/b/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a/touch") == 0) {
			return true;
		} else {
			break;
		}
	case 25:
		if (strcmp(str, "/user/hand/left/input/aim") == 0) {
			return true;
		} else {
			break;
		}
	case 38:
		if (strcmp(str, "/user/hand/left/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 34:
		if (strcmp(str, "/user/hand/left/input/thumbstick/x") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/y") == 0) {
			return true;
		} else {
			break;
		}
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 24:
		if (strcmp(str, "/user/hand/right/input/b") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/a") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/home/click") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 27:
		if (strcmp(str, "/user/hand/right/input/grip") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/home") == 0) {
			return true;
		} else {
			break;
		}
	case 39:
		if (strcmp(str, "/user/hand/right/input/thumbstick/touch") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/click") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	case 37:
		if (strcmp(str, "/user/hand/right/output/haptic/haptic") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oppo_mr_controller_oppo_dpad_path(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oppo/mr_controller_oppo
	switch (length) {
	case 40:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 42:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_down") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_left") == 0) {
			return true;
		} else {
			break;
		}
	case 43:
		if (strcmp(str, "/user/hand/left/input/thumbstick/dpad_right") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_left") == 0) {
			return true;
		} else if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_down") == 0) {
			return true;
		} else {
			break;
		}
	case 41:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_up") == 0) {
			return true;
		} else {
			break;
		}
	case 44:
		if (strcmp(str, "/user/hand/right/input/thumbstick/dpad_right") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}

bool
oxr_verify_oppo_mr_controller_oppo_dpad_emulator(const struct oxr_verify_extension_status* exts, const char *str, size_t length)
{
	// generated from: /interaction_profiles/oppo/mr_controller_oppo
	switch (length) {
	case 32:
		if (strcmp(str, "/user/hand/left/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	case 33:
		if (strcmp(str, "/user/hand/right/input/thumbstick") == 0) {
			return true;
		} else {
			break;
		}
	default: break;
	}
	return false;
}


struct profile_template profile_templates[19] = { // array of profile_template
	{ // profile_template
		.name = XRT_DEVICE_EXT_HAND_INTERACTION,
		.path = "/interaction_profiles/ext/hand_interaction_ext",
		.localized_name = "Ext Hand Interaction",
		.steamvr_input_profile_path = "ext_hand_interaction_ext_profile.json",
		.steamvr_controller_type = "monado_ext_hand_interaction_ext",
		.binding_count = 22,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/pinch_ext/value",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/value",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/ready_ext",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/aim_activate_ext/value",
				.localized_name = "Aim Activate",
				.paths = { // array of paths
					"/user/hand/left/input/aim_activate_ext/value",
					"/user/hand/left/input/aim_activate_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_ACTIVATE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/aim_activate_ext",
				.localized_name = "Aim Activate",
				.paths = { // array of paths
					"/user/hand/left/input/aim_activate_ext/ready_ext",
					"/user/hand/left/input/aim_activate_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_ACTIVATE_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grasp_ext/value",
				.localized_name = "Grasp",
				.paths = { // array of paths
					"/user/hand/left/input/grasp_ext/value",
					"/user/hand/left/input/grasp_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRASP_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grasp_ext",
				.localized_name = "Grasp",
				.paths = { // array of paths
					"/user/hand/left/input/grasp_ext/ready_ext",
					"/user/hand/left/input/grasp_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRASP_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/pinch_ext/value",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/value",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/ready_ext",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/aim_activate_ext/value",
				.localized_name = "Aim Activate",
				.paths = { // array of paths
					"/user/hand/right/input/aim_activate_ext/value",
					"/user/hand/right/input/aim_activate_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_ACTIVATE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/aim_activate_ext",
				.localized_name = "Aim Activate",
				.paths = { // array of paths
					"/user/hand/right/input/aim_activate_ext/ready_ext",
					"/user/hand/right/input/aim_activate_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_ACTIVATE_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grasp_ext/value",
				.localized_name = "Grasp",
				.paths = { // array of paths
					"/user/hand/right/input/grasp_ext/value",
					"/user/hand/right/input/grasp_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRASP_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grasp_ext",
				.localized_name = "Grasp",
				.paths = { // array of paths
					"/user/hand/right/input/grasp_ext/ready_ext",
					"/user/hand/right/input/grasp_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRASP_READY,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_SIMPLE_CONTROLLER,
		.path = "/interaction_profiles/khr/simple_controller",
		.localized_name = "Khronos Simple Controller",
		.steamvr_input_profile_path = "khr_simple_controller_profile.json",
		.steamvr_controller_type = "monado_khr_simple_controller",
		.binding_count = 16,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/left/input/select/click",
					"/user/hand/left/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_SIMPLE_VIBRATION,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/right/input/select/click",
					"/user/hand/right/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_SIMPLE_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_SIMPLE_VIBRATION,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_DAYDREAM,
		.path = "/interaction_profiles/google/daydream_controller",
		.localized_name = "Google Daydream Controller",
		.steamvr_input_profile_path = "google_daydream_controller_profile.json",
		.steamvr_controller_type = "monado_google_daydream_controller",
		.binding_count = 18,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/left/input/select/click",
					"/user/hand/left/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_BAR_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD,
				.dpad_activate = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/right/input/select/click",
					"/user/hand/right/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_BAR_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_TOUCHPAD,
				.dpad_activate = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_DAYDREAM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_DAYDREAM_TOUCHPAD,
				.activate = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_DAYDREAM_TOUCHPAD,
				.activate = XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_VIVE_WAND,
		.path = "/interaction_profiles/htc/vive_controller",
		.localized_name = "HTC Vive Controller",
		.steamvr_input_profile_path = "htc_vive_controller_profile.json",
		.steamvr_controller_type = "monado_htc_vive_controller",
		.binding_count = 28,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/click",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/application_menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/click",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD,
				.dpad_activate = XRT_INPUT_VIVE_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_VIVE_HAPTIC,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/click",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/application_menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/click",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKPAD,
				.dpad_activate = XRT_INPUT_VIVE_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_VIVE_HAPTIC,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_VIVE_TRACKPAD,
				.activate = XRT_INPUT_VIVE_TRACKPAD_CLICK,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_VIVE_TRACKPAD,
				.activate = XRT_INPUT_VIVE_TRACKPAD_CLICK,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_VIVE_PRO,
		.path = "/interaction_profiles/htc/vive_pro",
		.localized_name = "HTC Vive Pro",
		.steamvr_input_profile_path = "htc_vive_pro_profile.json",
		.steamvr_controller_type = "monado_htc_vive_pro",
		.binding_count = 10,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/head",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/head/input/system/click",
					"/user/head/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVEPRO_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/head",
				.steamvr_path = "/input/volume_up/click",
				.localized_name = "Volume Up",
				.paths = { // array of paths
					"/user/head/input/volume_up/click",
					"/user/head/input/volume_up",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVEPRO_VOLUP_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/head",
				.steamvr_path = "/input/volume_down/click",
				.localized_name = "Volume Down",
				.paths = { // array of paths
					"/user/head/input/volume_down/click",
					"/user/head/input/volume_down",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVEPRO_VOLDN_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/head",
				.steamvr_path = "/input/mute_mic/click",
				.localized_name = "Mute Microphone",
				.paths = { // array of paths
					"/user/head/input/mute_mic/click",
					"/user/head/input/mute_mic",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVEPRO_MUTE_MIC_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_WMR_CONTROLLER,
		.path = "/interaction_profiles/microsoft/motion_controller",
		.localized_name = "Microsoft Mixed Reality Motion Controller",
		.steamvr_input_profile_path = "microsoft_motion_controller_profile.json",
		.steamvr_controller_type = "monado_microsoft_motion_controller",
		.binding_count = 30,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/click",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD,
				.dpad_activate = XRT_INPUT_WMR_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_WMR_HAPTIC,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/click",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_TRACKPAD,
				.dpad_activate = XRT_INPUT_WMR_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_WMR_HAPTIC,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_WMR_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 29
		}, // /array of binding_template
		.dpad_count = 4,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_WMR_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_WMR_TRACKPAD,
				.activate = XRT_INPUT_WMR_TRACKPAD_CLICK,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_WMR_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_WMR_TRACKPAD,
				.activate = XRT_INPUT_WMR_TRACKPAD_CLICK,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_XBOX_CONTROLLER,
		.path = "/interaction_profiles/microsoft/xbox_controller",
		.localized_name = "Microsoft Xbox Controller",
		.steamvr_input_profile_path = "microsoft_xbox_controller_profile.json",
		.steamvr_controller_type = "monado_microsoft_xbox_controller",
		.binding_count = 28,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/gamepad/input/menu/click",
					"/user/gamepad/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/view/click",
				.localized_name = "View",
				.paths = { // array of paths
					"/user/gamepad/input/view/click",
					"/user/gamepad/input/view",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_VIEW_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/gamepad/input/a/click",
					"/user/gamepad/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/gamepad/input/b/click",
					"/user/gamepad/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/x/click",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/gamepad/input/x/click",
					"/user/gamepad/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_X_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/y/click",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/gamepad/input/y/click",
					"/user/gamepad/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_Y_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/dpad_down/click",
				.localized_name = "DPAD down",
				.paths = { // array of paths
					"/user/gamepad/input/dpad_down/click",
					"/user/gamepad/input/dpad_down",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_DPAD_DOWN_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/dpad_right/click",
				.localized_name = "DPAD right",
				.paths = { // array of paths
					"/user/gamepad/input/dpad_right/click",
					"/user/gamepad/input/dpad_right",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_DPAD_RIGHT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/dpad_up/click",
				.localized_name = "DPAD up",
				.paths = { // array of paths
					"/user/gamepad/input/dpad_up/click",
					"/user/gamepad/input/dpad_up",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_DPAD_UP_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/dpad_left/click",
				.localized_name = "DPAD left",
				.paths = { // array of paths
					"/user/gamepad/input/dpad_left/click",
					"/user/gamepad/input/dpad_left",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_DPAD_LEFT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/shoulder_left/click",
				.localized_name = "Shoulder left",
				.paths = { // array of paths
					"/user/gamepad/input/shoulder_left/click",
					"/user/gamepad/input/shoulder_left",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_SHOULDER_LEFT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/shoulder_right/click",
				.localized_name = "Shoulder right",
				.paths = { // array of paths
					"/user/gamepad/input/shoulder_right/click",
					"/user/gamepad/input/shoulder_right",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_SHOULDER_RIGHT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/joystick_left/click",
				.localized_name = "Left Thumbstick",
				.paths = { // array of paths
					"/user/gamepad/input/thumbstick_left/click",
					"/user/gamepad/input/thumbstick_left",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_THUMBSTICK_LEFT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/joystick_left",
				.localized_name = "Left Thumbstick",
				.paths = { // array of paths
					"/user/gamepad/input/thumbstick_left/x",
					"/user/gamepad/input/thumbstick_left/y",
					"/user/gamepad/input/thumbstick_left/dpad_up",
					"/user/gamepad/input/thumbstick_left/dpad_down",
					"/user/gamepad/input/thumbstick_left/dpad_left",
					"/user/gamepad/input/thumbstick_left/dpad_right",
					"/user/gamepad/input/thumbstick_left",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_THUMBSTICK_LEFT,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/joystick_right/click",
				.localized_name = "Right Thumbstick",
				.paths = { // array of paths
					"/user/gamepad/input/thumbstick_right/click",
					"/user/gamepad/input/thumbstick_right",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_THUMBSTICK_RIGHT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/joystick_right",
				.localized_name = "Right Thumbstick",
				.paths = { // array of paths
					"/user/gamepad/input/thumbstick_right/x",
					"/user/gamepad/input/thumbstick_right/y",
					"/user/gamepad/input/thumbstick_right/dpad_up",
					"/user/gamepad/input/thumbstick_right/dpad_down",
					"/user/gamepad/input/thumbstick_right/dpad_left",
					"/user/gamepad/input/thumbstick_right/dpad_right",
					"/user/gamepad/input/thumbstick_right",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_THUMBSTICK_RIGHT,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/trigger_left/value",
				.localized_name = "Left Trigger",
				.paths = { // array of paths
					"/user/gamepad/input/trigger_left/value",
					"/user/gamepad/input/trigger_left",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_LEFT_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/input/trigger_right/value",
				.localized_name = "Right Trigger",
				.paths = { // array of paths
					"/user/gamepad/input/trigger_right/value",
					"/user/gamepad/input/trigger_right",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_XBOX_RIGHT_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/output/haptic_left",
				.localized_name = "Left Haptic",
				.paths = { // array of paths
					"/user/gamepad/output/haptic_left/haptic",
					"/user/gamepad/output/haptic_left",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/output/haptic_right",
				.localized_name = "Right Haptic",
				.paths = { // array of paths
					"/user/gamepad/output/haptic_right/haptic",
					"/user/gamepad/output/haptic_right",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/output/haptic_left_trigger",
				.localized_name = "Left Trigger Haptic",
				.paths = { // array of paths
					"/user/gamepad/output/haptic_left_trigger/haptic",
					"/user/gamepad/output/haptic_left_trigger",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT_TRIGGER,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/gamepad",
				.steamvr_path = "/output/haptic_right_trigger",
				.localized_name = "Right Trigger Haptic",
				.paths = { // array of paths
					"/user/gamepad/output/haptic_right_trigger/haptic",
					"/user/gamepad/output/haptic_right_trigger",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT_TRIGGER,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/gamepad",
				.paths = {
					"/user/gamepad/input/thumbstick_left/dpad_up",
					"/user/gamepad/input/thumbstick_left/dpad_down",
					"/user/gamepad/input/thumbstick_left/dpad_left",
					"/user/gamepad/input/thumbstick_left/dpad_right",
				},
				.position = XRT_INPUT_XBOX_THUMBSTICK_LEFT,
				.activate = 0			},
			{
				.subaction_path = "/user/gamepad",
				.paths = {
					"/user/gamepad/input/thumbstick_right/dpad_up",
					"/user/gamepad/input/thumbstick_right/dpad_down",
					"/user/gamepad/input/thumbstick_right/dpad_left",
					"/user/gamepad/input/thumbstick_right/dpad_right",
				},
				.position = XRT_INPUT_XBOX_THUMBSTICK_RIGHT,
				.activate = 0			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_GO_CONTROLLER,
		.path = "/interaction_profiles/oculus/go_controller",
		.localized_name = "Oculus Go Controller",
		.steamvr_input_profile_path = "oculus_go_controller_profile.json",
		.steamvr_controller_type = "monado_oculus_go_controller",
		.binding_count = 22,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/click",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/back/click",
				.localized_name = "Back",
				.paths = { // array of paths
					"/user/hand/left/input/back/click",
					"/user/hand/left/input/back",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_BACK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD,
				.dpad_activate = XRT_INPUT_GO_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/click",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/back/click",
				.localized_name = "Back",
				.paths = { // array of paths
					"/user/hand/right/input/back/click",
					"/user/hand/right/input/back",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_BACK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_TRACKPAD,
				.dpad_activate = XRT_INPUT_GO_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GO_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_GO_TRACKPAD,
				.activate = XRT_INPUT_GO_TRACKPAD_CLICK,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_GO_TRACKPAD,
				.activate = XRT_INPUT_GO_TRACKPAD_CLICK,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_TOUCH_CONTROLLER,
		.path = "/interaction_profiles/oculus/touch_controller",
		.localized_name = "Oculus Touch Controller",
		.steamvr_input_profile_path = "oculus_touch_controller_profile.json",
		.steamvr_controller_type = "monado_oculus_touch_controller",
		.binding_count = 36,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/x/click",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/hand/left/input/x/click",
					"/user/hand/left/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_X_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/x/touch",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/hand/left/input/x/touch",
					"/user/hand/left/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_X_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/y/click",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/hand/left/input/y/click",
					"/user/hand/left/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_Y_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/y/touch",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/hand/left/input/y/touch",
					"/user/hand/left/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_Y_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/value",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/touch",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/touch",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/thumbrest/touch",
				.localized_name = "Thumb Rest",
				.paths = { // array of paths
					"/user/hand/left/input/thumbrest/touch",
					"/user/hand/left/input/thumbrest",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBREST_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_TOUCH_HAPTIC,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/click",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/touch",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/touch",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_A_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/click",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/touch",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/touch",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_B_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/value",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/touch",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/touch",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/thumbrest/touch",
				.localized_name = "Thumb Rest",
				.paths = { // array of paths
					"/user/hand/right/input/thumbrest/touch",
					"/user/hand/right/input/thumbrest",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_THUMBREST_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_TOUCH_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_TOUCH_HAPTIC,
			}, // /binding_template 29
			{ // binding_template 30
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 30
			{ // binding_template 31
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 31
			{ // binding_template 32
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 32
			{ // binding_template 33
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 33
			{ // binding_template 34
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 34
			{ // binding_template 35
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 35
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_TOUCH_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_TOUCH_THUMBSTICK,
				.activate = 0			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_INDEX_CONTROLLER,
		.path = "/interaction_profiles/valve/index_controller",
		.localized_name = "Valve Index Controller",
		.steamvr_input_profile_path = "valve_index_controller_profile.json",
		.steamvr_controller_type = "monado_valve_index_controller",
		.binding_count = 46,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/touch",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/touch",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SYSTEM_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/left/input/a/click",
					"/user/hand/left/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/a/touch",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/left/input/a/touch",
					"/user/hand/left/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_A_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/left/input/b/click",
					"/user/hand/left/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/b/touch",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/left/input/b/touch",
					"/user/hand/left/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_B_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/force",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/force",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SQUEEZE_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/value",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/click",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/touch",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/thumbstick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/thumbstick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/touch",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/thumbstick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/force",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/force",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD,
				.dpad_activate = XRT_INPUT_INDEX_TRACKPAD_FORCE,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_INDEX_HAPTIC,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/touch",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/touch",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SYSTEM_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/click",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/touch",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/touch",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_A_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/click",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/touch",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/touch",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_B_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/force",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/force",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SQUEEZE_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/value",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/click",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/touch",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 29
			{ // binding_template 30
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 30
			{ // binding_template 31
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/thumbstick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 31
			{ // binding_template 32
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/thumbstick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/touch",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 32
			{ // binding_template 33
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/thumbstick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 33
			{ // binding_template 34
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 34
			{ // binding_template 35
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/force",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/force",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 35
			{ // binding_template 36
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_TRACKPAD,
				.dpad_activate = XRT_INPUT_INDEX_TRACKPAD_FORCE,
				.output = 0,
			}, // /binding_template 36
			{ // binding_template 37
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 37
			{ // binding_template 38
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_INDEX_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 38
			{ // binding_template 39
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_INDEX_HAPTIC,
			}, // /binding_template 39
			{ // binding_template 40
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 40
			{ // binding_template 41
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 41
			{ // binding_template 42
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 42
			{ // binding_template 43
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 43
			{ // binding_template 44
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 44
			{ // binding_template 45
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 45
		}, // /array of binding_template
		.dpad_count = 4,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_INDEX_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_INDEX_TRACKPAD,
				.activate = XRT_INPUT_INDEX_TRACKPAD_FORCE,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_INDEX_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_INDEX_TRACKPAD,
				.activate = XRT_INPUT_INDEX_TRACKPAD_FORCE,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_HP_REVERB_G2_CONTROLLER,
		.path = "/interaction_profiles/hp/mixed_reality_controller",
		.localized_name = "HP Reverb G2 Controller",
		.steamvr_input_profile_path = "hp_mixed_reality_controller_profile.json",
		.steamvr_controller_type = "monado_hp_mixed_reality_controller",
		.binding_count = 28,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/x/click",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/hand/left/input/x/click",
					"/user/hand/left/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_X_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/y/click",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/hand/left/input/y/click",
					"/user/hand/left/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_Y_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/value",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/click",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/click",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/value",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_G2_CONTROLLER_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_G2_CONTROLLER_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_G2_CONTROLLER_THUMBSTICK,
				.activate = 0			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_SAMSUNG_ODYSSEY_CONTROLLER,
		.path = "/interaction_profiles/samsung/odyssey_controller",
		.localized_name = "Samsung Odyssey Controller",
		.steamvr_input_profile_path = "samsung_odyssey_controller_profile.json",
		.steamvr_controller_type = "monado_samsung_odyssey_controller",
		.binding_count = 30,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/click",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD,
				.dpad_activate = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/click",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD,
				.dpad_activate = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 29
		}, // /array of binding_template
		.dpad_count = 4,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD,
				.activate = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD,
				.activate = XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_ML2_CONTROLLER,
		.path = "/interaction_profiles/ml/ml2_controller",
		.localized_name = "Magic Leap 2 Controller",
		.steamvr_input_profile_path = "ml_ml2_controller_profile.json",
		.steamvr_controller_type = "monado_ml_ml2_controller",
		.binding_count = 30,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/home/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/left/input/home/click",
					"/user/hand/left/input/home",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/click",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/force",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/force",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD,
				.dpad_activate = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/shoulder/click",
				.localized_name = "Shoulder",
				.paths = { // array of paths
					"/user/hand/left/input/shoulder/click",
					"/user/hand/left/input/shoulder",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/home/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/right/input/home/click",
					"/user/hand/right/input/home",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/click",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/click",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/force",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/force",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_TRACKPAD,
				.dpad_activate = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/shoulder/click",
				.localized_name = "Shoulder",
				.paths = { // array of paths
					"/user/hand/right/input/shoulder/click",
					"/user/hand/right/input/shoulder",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 29
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/trackpad/dpad_up",
					"/user/hand/left/input/trackpad/dpad_down",
					"/user/hand/left/input/trackpad/dpad_left",
					"/user/hand/left/input/trackpad/dpad_right",
					"/user/hand/left/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_ML2_CONTROLLER_TRACKPAD,
				.activate = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/trackpad/dpad_up",
					"/user/hand/right/input/trackpad/dpad_down",
					"/user/hand/right/input/trackpad/dpad_left",
					"/user/hand/right/input/trackpad/dpad_right",
					"/user/hand/right/input/trackpad/dpad_center",
				},
				.position = XRT_INPUT_ML2_CONTROLLER_TRACKPAD,
				.activate = XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK,
			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_HAND_INTERACTION,
		.path = "/interaction_profiles/microsoft/hand_interaction",
		.localized_name = "Microsoft hand interaction",
		.steamvr_input_profile_path = "microsoft_hand_interaction_profile.json",
		.steamvr_controller_type = "monado_microsoft_hand_interaction",
		.binding_count = 14,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/select/value",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/left/input/select/value",
					"/user/hand/left/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_SELECT_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/value",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/select/value",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/right/input/select/value",
					"/user/hand/right/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_SELECT_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/value",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_PSMV,
		.path = "/interaction_profiles/mndx/ball_on_a_stick_controller",
		.localized_name = "Monado ball on a stick controller",
		.steamvr_input_profile_path = "mndx_ball_on_a_stick_controller_profile.json",
		.steamvr_controller_type = "monado_mndx_ball_on_a_stick_controller",
		.binding_count = 34,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_PS_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_MOVE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/start/click",
				.localized_name = "Start",
				.paths = { // array of paths
					"/user/hand/left/input/start/click",
					"/user/hand/left/input/start",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_START_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/left/input/select/click",
					"/user/hand/left/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/square_mndx/click",
				.localized_name = "Square",
				.paths = { // array of paths
					"/user/hand/left/input/square_mndx/click",
					"/user/hand/left/input/square_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_SQUARE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/cross_mndx/click",
				.localized_name = "Cross",
				.paths = { // array of paths
					"/user/hand/left/input/cross_mndx/click",
					"/user/hand/left/input/cross_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_CROSS_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/circle_mndx/click",
				.localized_name = "Circle",
				.paths = { // array of paths
					"/user/hand/left/input/circle_mndx/click",
					"/user/hand/left/input/circle_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_CIRCLE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/triangle_mndx/click",
				.localized_name = "Triangle",
				.paths = { // array of paths
					"/user/hand/left/input/triangle_mndx/click",
					"/user/hand/left/input/triangle_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_TRIANGLE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/ball_mndx",
				.localized_name = "Ball",
				.paths = { // array of paths
					"/user/hand/left/input/ball_mndx/pose",
					"/user/hand/left/input/ball_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_BALL_CENTER_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/body_center_mndx",
				.localized_name = "Body Center",
				.paths = { // array of paths
					"/user/hand/left/input/body_center_mndx/pose",
					"/user/hand/left/input/body_center_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_BODY_CENTER_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_PS_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_MOVE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/start/click",
				.localized_name = "Start",
				.paths = { // array of paths
					"/user/hand/right/input/start/click",
					"/user/hand/right/input/start",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_START_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/select/click",
				.localized_name = "Select",
				.paths = { // array of paths
					"/user/hand/right/input/select/click",
					"/user/hand/right/input/select",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_SELECT_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/square_mndx/click",
				.localized_name = "Square",
				.paths = { // array of paths
					"/user/hand/right/input/square_mndx/click",
					"/user/hand/right/input/square_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_SQUARE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/cross_mndx/click",
				.localized_name = "Cross",
				.paths = { // array of paths
					"/user/hand/right/input/cross_mndx/click",
					"/user/hand/right/input/cross_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_CROSS_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/circle_mndx/click",
				.localized_name = "Circle",
				.paths = { // array of paths
					"/user/hand/right/input/circle_mndx/click",
					"/user/hand/right/input/circle_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_CIRCLE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/triangle_mndx/click",
				.localized_name = "Triangle",
				.paths = { // array of paths
					"/user/hand/right/input/triangle_mndx/click",
					"/user/hand/right/input/triangle_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_TRIANGLE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/ball_mndx",
				.localized_name = "Ball",
				.paths = { // array of paths
					"/user/hand/right/input/ball_mndx/pose",
					"/user/hand/right/input/ball_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_BALL_CENTER_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/body_center_mndx",
				.localized_name = "Body Center",
				.paths = { // array of paths
					"/user/hand/right/input/body_center_mndx/pose",
					"/user/hand/right/input/body_center_mndx",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_BODY_CENTER_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_PSMV_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 28
			{ // binding_template 29
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 29
			{ // binding_template 30
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 30
			{ // binding_template 31
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 31
			{ // binding_template 32
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 32
			{ // binding_template 33
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 33
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_HYDRA,
		.path = "/interaction_profiles/mndx/hydra",
		.localized_name = "Monado Hydra Controller",
		.steamvr_input_profile_path = "mndx_hydra_profile.json",
		.steamvr_controller_type = "monado_mndx_hydra",
		.binding_count = 24,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/1/click",
				.localized_name = "1",
				.paths = { // array of paths
					"/user/hand/left/input/1/click",
					"/user/hand/left/input/1",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_1_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/2/click",
				.localized_name = "2",
				.paths = { // array of paths
					"/user/hand/left/input/2/click",
					"/user/hand/left/input/2",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_2_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/3/click",
				.localized_name = "3",
				.paths = { // array of paths
					"/user/hand/left/input/3/click",
					"/user/hand/left/input/3",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_3_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/4/click",
				.localized_name = "4",
				.paths = { // array of paths
					"/user/hand/left/input/4/click",
					"/user/hand/left/input/4",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_4_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/bumper/click",
				.localized_name = "Bumper",
				.paths = { // array of paths
					"/user/hand/left/input/bumper/click",
					"/user/hand/left/input/bumper",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_BUMPER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_JOYSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_JOYSTICK_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/1/click",
				.localized_name = "1",
				.paths = { // array of paths
					"/user/hand/right/input/1/click",
					"/user/hand/right/input/1",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_1_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/2/click",
				.localized_name = "2",
				.paths = { // array of paths
					"/user/hand/right/input/2/click",
					"/user/hand/right/input/2",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_2_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/3/click",
				.localized_name = "3",
				.paths = { // array of paths
					"/user/hand/right/input/3/click",
					"/user/hand/right/input/3",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_3_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/4/click",
				.localized_name = "4",
				.paths = { // array of paths
					"/user/hand/right/input/4/click",
					"/user/hand/right/input/4",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_4_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/bumper/click",
				.localized_name = "Bumper",
				.paths = { // array of paths
					"/user/hand/right/input/bumper/click",
					"/user/hand/right/input/bumper",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_BUMPER_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_JOYSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_JOYSTICK_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HYDRA_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_HYDRA_JOYSTICK_VALUE,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_HYDRA_JOYSTICK_VALUE,
				.activate = 0			},
		}, // /array of dpad_emulation
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_EYE_GAZE_INTERACTION,
		.path = "/interaction_profiles/ext/eye_gaze_interaction",
		.localized_name = "Extension Eye Gaze Interaction",
		.steamvr_input_profile_path = "ext_eye_gaze_interaction_profile.json",
		.steamvr_controller_type = "monado_ext_eye_gaze_interaction",
		.binding_count = 7,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/eyes_ext",
				.steamvr_path = "/pose/gaze_ext",
				.localized_name = "Gaze",
				.paths = { // array of paths
					"/user/eyes_ext/input/gaze_ext/pose",
					"/user/eyes_ext/input/gaze_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_EYE_GAZE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_VIVE_TRACKER,
		.path = "/interaction_profiles/htc/vive_tracker_htcx",
		.localized_name = "HTC Vive Tracker",
		.steamvr_input_profile_path = "htc_vive_tracker_htcx_profile.json",
		.steamvr_controller_type = "monado_htc_vive_tracker_htcx",
		.binding_count = 24,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/left/input/system/click",
					"/user/hand/left/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/click",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/click",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/touch",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/left/input/trackpad/x",
					"/user/hand/left/input/trackpad/y",
					"/user/hand/left/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/system/click",
				.localized_name = "System",
				.paths = { // array of paths
					"/user/hand/right/input/system/click",
					"/user/hand/right/input/system",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/click",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/click",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/right/input/menu/click",
					"/user/hand/right/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/click",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/click",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad/touch",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/touch",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trackpad",
				.localized_name = "Trackpad",
				.paths = { // array of paths
					"/user/hand/right/input/trackpad/x",
					"/user/hand/right/input/trackpad/y",
					"/user/hand/right/input/trackpad",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_TRACKPAD,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_VIVE_TRACKER_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/left/input/palm_ext/pose",
					"/user/hand/left/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/palm_ext",
				.localized_name = "Palm Pose",
				.paths = { // array of paths
					"/user/hand/right/input/palm_ext/pose",
					"/user/hand/right/input/palm_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_GENERIC_PALM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/left/input/pinch_ext/pose",
					"/user/hand/left/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/left/input/poke_ext/pose",
					"/user/hand/left/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/pinch_ext",
				.localized_name = "Pinch",
				.paths = { // array of paths
					"/user/hand/right/input/pinch_ext/pose",
					"/user/hand/right/input/pinch_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_PINCH_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/poke_ext",
				.localized_name = "Poke",
				.paths = { // array of paths
					"/user/hand/right/input/poke_ext/pose",
					"/user/hand/right/input/poke_ext",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_HAND_POKE_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
		}, // /array of binding_template
		.dpad_count = 0,
		.dpads = NULL,
	}, // /profile_template
	{ // profile_template
		.name = XRT_DEVICE_OPPO_MR_CONTROLLER,
		.path = "/interaction_profiles/oppo/mr_controller_oppo",
		.localized_name = "OPPO MR Controller",
		.steamvr_input_profile_path = "oppo_mr_controller_oppo_profile.json",
		.steamvr_controller_type = "monado_oppo_mr_controller_oppo",
		.binding_count = 29,
		.bindings = (struct binding_template[]){ // array of binding_template
			{ // binding_template 0
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/x/click",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/hand/left/input/x/click",
					"/user/hand/left/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_X_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 0
			{ // binding_template 1
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/x/touch",
				.localized_name = "X",
				.paths = { // array of paths
					"/user/hand/left/input/x/touch",
					"/user/hand/left/input/x",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_X_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 1
			{ // binding_template 2
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/y/click",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/hand/left/input/y/click",
					"/user/hand/left/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_Y_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 2
			{ // binding_template 3
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/y/touch",
				.localized_name = "Y",
				.paths = { // array of paths
					"/user/hand/left/input/y/touch",
					"/user/hand/left/input/y",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_Y_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 3
			{ // binding_template 4
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/menu/click",
				.localized_name = "Menu",
				.paths = { // array of paths
					"/user/hand/left/input/menu/click",
					"/user/hand/left/input/menu",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_MENU_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 4
			{ // binding_template 5
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/heartrate_oppo/value",
				.localized_name = "HeartRate",
				.paths = { // array of paths
					"/user/hand/left/input/heartrate_oppo/value",
					"/user/hand/left/input/heartrate_oppo",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_HEART_RATE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 5
			{ // binding_template 6
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/left/input/squeeze/value",
					"/user/hand/left/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 6
			{ // binding_template 7
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/touch",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 7
			{ // binding_template 8
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/left/input/trigger/value",
					"/user/hand/left/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 8
			{ // binding_template 9
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/left/input/grip/pose",
					"/user/hand/left/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 9
			{ // binding_template 10
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/left/input/aim/pose",
					"/user/hand/left/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 10
			{ // binding_template 11
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/click",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 11
			{ // binding_template 12
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/touch",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 12
			{ // binding_template 13
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/left/input/thumbstick/x",
					"/user/hand/left/input/thumbstick/y",
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
					"/user/hand/left/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 13
			{ // binding_template 14
				.subaction_path = "/user/hand/left",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/left/output/haptic/haptic",
					"/user/hand/left/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_OPPO_MR_HAPTIC,
			}, // /binding_template 14
			{ // binding_template 15
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/click",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/click",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_A_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 15
			{ // binding_template 16
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/a/touch",
				.localized_name = "A",
				.paths = { // array of paths
					"/user/hand/right/input/a/touch",
					"/user/hand/right/input/a",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_A_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 16
			{ // binding_template 17
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/click",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/click",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_B_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 17
			{ // binding_template 18
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/b/touch",
				.localized_name = "B",
				.paths = { // array of paths
					"/user/hand/right/input/b/touch",
					"/user/hand/right/input/b",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_B_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 18
			{ // binding_template 19
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/home/click",
				.localized_name = "Home",
				.paths = { // array of paths
					"/user/hand/right/input/home/click",
					"/user/hand/right/input/home",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_HOME_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 19
			{ // binding_template 20
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/grip/value",
				.localized_name = "Squeeze",
				.paths = { // array of paths
					"/user/hand/right/input/squeeze/value",
					"/user/hand/right/input/squeeze",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_SQUEEZE_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 20
			{ // binding_template 21
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/touch",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/touch",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_TRIGGER_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 21
			{ // binding_template 22
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/trigger/value",
				.localized_name = "Trigger",
				.paths = { // array of paths
					"/user/hand/right/input/trigger/value",
					"/user/hand/right/input/trigger",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_TRIGGER_VALUE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 22
			{ // binding_template 23
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/grip",
				.localized_name = "Grip",
				.paths = { // array of paths
					"/user/hand/right/input/grip/pose",
					"/user/hand/right/input/grip",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_GRIP_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 23
			{ // binding_template 24
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/pose/aim",
				.localized_name = "Aim",
				.paths = { // array of paths
					"/user/hand/right/input/aim/pose",
					"/user/hand/right/input/aim",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_AIM_POSE,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 24
			{ // binding_template 25
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/click",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/click",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 25
			{ // binding_template 26
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick/touch",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/touch",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 26
			{ // binding_template 27
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/input/joystick",
				.localized_name = "Thumbstick",
				.paths = { // array of paths
					"/user/hand/right/input/thumbstick/x",
					"/user/hand/right/input/thumbstick/y",
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
					"/user/hand/right/input/thumbstick",
					NULL
				}, // /array of paths
				.input = XRT_INPUT_OPPO_MR_THUMBSTICK,
				.dpad_activate = 0,
				.output = 0,
			}, // /binding_template 27
			{ // binding_template 28
				.subaction_path = "/user/hand/right",
				.steamvr_path = "/output/haptic",
				.localized_name = "Haptic",
				.paths = { // array of paths
					"/user/hand/right/output/haptic/haptic",
					"/user/hand/right/output/haptic",
					NULL
				}, // /array of paths
				.input = 0,
				.dpad_activate = 0,
				.output = XRT_OUTPUT_NAME_OPPO_MR_HAPTIC,
			}, // /binding_template 28
		}, // /array of binding_template
		.dpad_count = 2,
		.dpads = (struct dpad_emulation[]){ // array of dpad_emulation
			{
				.subaction_path = "/user/hand/left",
				.paths = {
					"/user/hand/left/input/thumbstick/dpad_up",
					"/user/hand/left/input/thumbstick/dpad_down",
					"/user/hand/left/input/thumbstick/dpad_left",
					"/user/hand/left/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_OPPO_MR_THUMBSTICK,
				.activate = 0			},
			{
				.subaction_path = "/user/hand/right",
				.paths = {
					"/user/hand/right/input/thumbstick/dpad_up",
					"/user/hand/right/input/thumbstick/dpad_down",
					"/user/hand/right/input/thumbstick/dpad_left",
					"/user/hand/right/input/thumbstick/dpad_right",
				},
				.position = XRT_INPUT_OPPO_MR_THUMBSTICK,
				.activate = 0			},
		}, // /array of dpad_emulation
	}, // /profile_template
}; // /array of profile_template

const char *
xrt_input_name_string(enum xrt_input_name input)
{
	switch(input)
	{
	case XRT_INPUT_PSMV_SQUARE_CLICK: return "XRT_INPUT_PSMV_SQUARE_CLICK";
	case XRT_INPUT_GO_TRACKPAD_TOUCH: return "XRT_INPUT_GO_TRACKPAD_TOUCH";
	case XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK";
	case XRT_INPUT_G2_CONTROLLER_AIM_POSE: return "XRT_INPUT_G2_CONTROLLER_AIM_POSE";
	case XRT_INPUT_WMR_GRIP_POSE: return "XRT_INPUT_WMR_GRIP_POSE";
	case XRT_INPUT_XBOX_DPAD_DOWN_CLICK: return "XRT_INPUT_XBOX_DPAD_DOWN_CLICK";
	case XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE: return "XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE";
	case XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK: return "XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK";
	case XRT_INPUT_INDEX_TRIGGER_VALUE: return "XRT_INPUT_INDEX_TRIGGER_VALUE";
	case XRT_INPUT_HYDRA_3_CLICK: return "XRT_INPUT_HYDRA_3_CLICK";
	case XRT_INPUT_TOUCH_THUMBSTICK_TOUCH: return "XRT_INPUT_TOUCH_THUMBSTICK_TOUCH";
	case XRT_INPUT_WMR_HOME_CLICK: return "XRT_INPUT_WMR_HOME_CLICK";
	case XRT_INPUT_OPPO_MR_X_CLICK: return "XRT_INPUT_OPPO_MR_X_CLICK";
	case XRT_INPUT_WMR_MENU_CLICK: return "XRT_INPUT_WMR_MENU_CLICK";
	case XRT_INPUT_TOUCH_B_CLICK: return "XRT_INPUT_TOUCH_B_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_MENU_CLICK: return "XRT_INPUT_ML2_CONTROLLER_MENU_CLICK";
	case XRT_INPUT_GO_TRIGGER_CLICK: return "XRT_INPUT_GO_TRIGGER_CLICK";
	case XRT_INPUT_HYDRA_4_CLICK: return "XRT_INPUT_HYDRA_4_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_AIM_POSE: return "XRT_INPUT_ML2_CONTROLLER_AIM_POSE";
	case XRT_INPUT_HAND_AIM_POSE: return "XRT_INPUT_HAND_AIM_POSE";
	case XRT_INPUT_TOUCH_X_TOUCH: return "XRT_INPUT_TOUCH_X_TOUCH";
	case XRT_INPUT_INDEX_AIM_POSE: return "XRT_INPUT_INDEX_AIM_POSE";
	case XRT_INPUT_XBOX_DPAD_LEFT_CLICK: return "XRT_INPUT_XBOX_DPAD_LEFT_CLICK";
	case XRT_INPUT_TOUCH_TRIGGER_TOUCH: return "XRT_INPUT_TOUCH_TRIGGER_TOUCH";
	case XRT_INPUT_SIMPLE_SELECT_CLICK: return "XRT_INPUT_SIMPLE_SELECT_CLICK";
	case XRT_INPUT_G2_CONTROLLER_B_CLICK: return "XRT_INPUT_G2_CONTROLLER_B_CLICK";
	case XRT_INPUT_DAYDREAM_BAR_CLICK: return "XRT_INPUT_DAYDREAM_BAR_CLICK";
	case XRT_INPUT_INDEX_SYSTEM_CLICK: return "XRT_INPUT_INDEX_SYSTEM_CLICK";
	case XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK";
	case XRT_INPUT_PSMV_BODY_CENTER_POSE: return "XRT_INPUT_PSMV_BODY_CENTER_POSE";
	case XRT_INPUT_GO_TRACKPAD: return "XRT_INPUT_GO_TRACKPAD";
	case XRT_INPUT_OPPO_MR_Y_TOUCH: return "XRT_INPUT_OPPO_MR_Y_TOUCH";
	case XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH: return "XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH";
	case XRT_INPUT_VIVE_AIM_POSE: return "XRT_INPUT_VIVE_AIM_POSE";
	case XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK";
	case XRT_INPUT_GENERIC_HEAD_POSE: return "XRT_INPUT_GENERIC_HEAD_POSE";
	case XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK: return "XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK";
	case XRT_INPUT_TOUCH_MENU_CLICK: return "XRT_INPUT_TOUCH_MENU_CLICK";
	case XRT_INPUT_XBOX_SHOULDER_RIGHT_CLICK: return "XRT_INPUT_XBOX_SHOULDER_RIGHT_CLICK";
	case XRT_INPUT_INDEX_TRIGGER_TOUCH: return "XRT_INPUT_INDEX_TRIGGER_TOUCH";
	case XRT_INPUT_INDEX_THUMBSTICK_TOUCH: return "XRT_INPUT_INDEX_THUMBSTICK_TOUCH";
	case XRT_INPUT_INDEX_TRIGGER_CLICK: return "XRT_INPUT_INDEX_TRIGGER_CLICK";
	case XRT_INPUT_XBOX_DPAD_UP_CLICK: return "XRT_INPUT_XBOX_DPAD_UP_CLICK";
	case XRT_INPUT_OPPO_MR_B_TOUCH: return "XRT_INPUT_OPPO_MR_B_TOUCH";
	case XRT_INPUT_PSMV_BALL_CENTER_POSE: return "XRT_INPUT_PSMV_BALL_CENTER_POSE";
	case XRT_INPUT_XBOX_MENU_CLICK: return "XRT_INPUT_XBOX_MENU_CLICK";
	case XRT_INPUT_GENERIC_TRACKER_POSE: return "XRT_INPUT_GENERIC_TRACKER_POSE";
	case XRT_INPUT_TOUCH_GRIP_POSE: return "XRT_INPUT_TOUCH_GRIP_POSE";
	case XRT_INPUT_TOUCH_A_TOUCH: return "XRT_INPUT_TOUCH_A_TOUCH";
	case XRT_INPUT_HAND_AIM_ACTIVATE_VALUE: return "XRT_INPUT_HAND_AIM_ACTIVATE_VALUE";
	case XRT_INPUT_INDEX_A_TOUCH: return "XRT_INPUT_INDEX_A_TOUCH";
	case XRT_INPUT_G2_CONTROLLER_GRIP_POSE: return "XRT_INPUT_G2_CONTROLLER_GRIP_POSE";
	case XRT_INPUT_VIVE_TRACKER_MENU_CLICK: return "XRT_INPUT_VIVE_TRACKER_MENU_CLICK";
	case XRT_INPUT_SIMPLE_GRIP_POSE: return "XRT_INPUT_SIMPLE_GRIP_POSE";
	case XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE: return "XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE";
	case XRT_INPUT_HAND_AIM_ACTIVATE_READY: return "XRT_INPUT_HAND_AIM_ACTIVATE_READY";
	case XRT_INPUT_PSMV_START_CLICK: return "XRT_INPUT_PSMV_START_CLICK";
	case XRT_INPUT_VIVE_TRACKPAD_CLICK: return "XRT_INPUT_VIVE_TRACKPAD_CLICK";
	case XRT_INPUT_GENERIC_PALM_POSE: return "XRT_INPUT_GENERIC_PALM_POSE";
	case XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK: return "XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK";
	case XRT_INPUT_HYDRA_JOYSTICK_CLICK: return "XRT_INPUT_HYDRA_JOYSTICK_CLICK";
	case XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH: return "XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH";
	case XRT_INPUT_VIVE_TRIGGER_VALUE: return "XRT_INPUT_VIVE_TRIGGER_VALUE";
	case XRT_INPUT_G2_CONTROLLER_MENU_CLICK: return "XRT_INPUT_G2_CONTROLLER_MENU_CLICK";
	case XRT_INPUT_INDEX_SQUEEZE_VALUE: return "XRT_INPUT_INDEX_SQUEEZE_VALUE";
	case XRT_INPUT_OPPO_MR_B_CLICK: return "XRT_INPUT_OPPO_MR_B_CLICK";
	case XRT_INPUT_WMR_AIM_POSE: return "XRT_INPUT_WMR_AIM_POSE";
	case XRT_INPUT_GENERIC_HAND_TRACKING_RIGHT: return "XRT_INPUT_GENERIC_HAND_TRACKING_RIGHT";
	case XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH: return "XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH";
	case XRT_INPUT_VIVEPRO_VOLUP_CLICK: return "XRT_INPUT_VIVEPRO_VOLUP_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_TRACKPAD: return "XRT_INPUT_ML2_CONTROLLER_TRACKPAD";
	case XRT_INPUT_XBOX_SHOULDER_LEFT_CLICK: return "XRT_INPUT_XBOX_SHOULDER_LEFT_CLICK";
	case XRT_INPUT_OPPO_MR_Y_CLICK: return "XRT_INPUT_OPPO_MR_Y_CLICK";
	case XRT_INPUT_OPPO_MR_AIM_POSE: return "XRT_INPUT_OPPO_MR_AIM_POSE";
	case XRT_INPUT_WMR_TRIGGER_VALUE: return "XRT_INPUT_WMR_TRIGGER_VALUE";
	case XRT_INPUT_HYDRA_TRIGGER_VALUE: return "XRT_INPUT_HYDRA_TRIGGER_VALUE";
	case XRT_INPUT_INDEX_THUMBSTICK_CLICK: return "XRT_INPUT_INDEX_THUMBSTICK_CLICK";
	case XRT_INPUT_OPPO_MR_TRIGGER_TOUCH: return "XRT_INPUT_OPPO_MR_TRIGGER_TOUCH";
	case XRT_INPUT_WMR_SQUEEZE_CLICK: return "XRT_INPUT_WMR_SQUEEZE_CLICK";
	case XRT_INPUT_XBOX_LEFT_TRIGGER_VALUE: return "XRT_INPUT_XBOX_LEFT_TRIGGER_VALUE";
	case XRT_INPUT_INDEX_B_TOUCH: return "XRT_INPUT_INDEX_B_TOUCH";
	case XRT_INPUT_INDEX_THUMBSTICK: return "XRT_INPUT_INDEX_THUMBSTICK";
	case XRT_INPUT_OPPO_MR_X_TOUCH: return "XRT_INPUT_OPPO_MR_X_TOUCH";
	case XRT_INPUT_TOUCH_SQUEEZE_VALUE: return "XRT_INPUT_TOUCH_SQUEEZE_VALUE";
	case XRT_INPUT_VIVE_TRIGGER_CLICK: return "XRT_INPUT_VIVE_TRIGGER_CLICK";
	case XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK";
	case XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK: return "XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK";
	case XRT_INPUT_OPPO_MR_HEART_RATE_VALUE: return "XRT_INPUT_OPPO_MR_HEART_RATE_VALUE";
	case XRT_INPUT_WMR_TRACKPAD_TOUCH: return "XRT_INPUT_WMR_TRACKPAD_TOUCH";
	case XRT_INPUT_G2_CONTROLLER_X_CLICK: return "XRT_INPUT_G2_CONTROLLER_X_CLICK";
	case XRT_INPUT_VIVE_TRACKER_TRACKPAD: return "XRT_INPUT_VIVE_TRACKER_TRACKPAD";
	case XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE: return "XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE";
	case XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE: return "XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE";
	case XRT_INPUT_XBOX_X_CLICK: return "XRT_INPUT_XBOX_X_CLICK";
	case XRT_INPUT_PSMV_PS_CLICK: return "XRT_INPUT_PSMV_PS_CLICK";
	case XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE: return "XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE";
	case XRT_INPUT_OPPO_MR_A_CLICK: return "XRT_INPUT_OPPO_MR_A_CLICK";
	case XRT_INPUT_INDEX_SYSTEM_TOUCH: return "XRT_INPUT_INDEX_SYSTEM_TOUCH";
	case XRT_INPUT_VIVEPRO_SYSTEM_CLICK: return "XRT_INPUT_VIVEPRO_SYSTEM_CLICK";
	case XRT_INPUT_WMR_TRACKPAD_CLICK: return "XRT_INPUT_WMR_TRACKPAD_CLICK";
	case XRT_INPUT_G2_CONTROLLER_THUMBSTICK: return "XRT_INPUT_G2_CONTROLLER_THUMBSTICK";
	case XRT_INPUT_XBOX_THUMBSTICK_RIGHT: return "XRT_INPUT_XBOX_THUMBSTICK_RIGHT";
	case XRT_INPUT_G2_CONTROLLER_Y_CLICK: return "XRT_INPUT_G2_CONTROLLER_Y_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK: return "XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK";
	case XRT_INPUT_HAND_SQUEEZE_VALUE: return "XRT_INPUT_HAND_SQUEEZE_VALUE";
	case XRT_INPUT_HAND_GRASP_VALUE: return "XRT_INPUT_HAND_GRASP_VALUE";
	case XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK: return "XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK";
	case XRT_INPUT_TOUCH_THUMBREST_TOUCH: return "XRT_INPUT_TOUCH_THUMBREST_TOUCH";
	case XRT_INPUT_G2_CONTROLLER_HOME_CLICK: return "XRT_INPUT_G2_CONTROLLER_HOME_CLICK";
	case XRT_INPUT_PSMV_MOVE_CLICK: return "XRT_INPUT_PSMV_MOVE_CLICK";
	case XRT_INPUT_OPPO_MR_TRIGGER_VALUE: return "XRT_INPUT_OPPO_MR_TRIGGER_VALUE";
	case XRT_INPUT_GO_TRACKPAD_CLICK: return "XRT_INPUT_GO_TRACKPAD_CLICK";
	case XRT_INPUT_VIVE_TRACKPAD: return "XRT_INPUT_VIVE_TRACKPAD";
	case XRT_INPUT_INDEX_TRACKPAD_TOUCH: return "XRT_INPUT_INDEX_TRACKPAD_TOUCH";
	case XRT_INPUT_INDEX_A_CLICK: return "XRT_INPUT_INDEX_A_CLICK";
	case XRT_INPUT_PSMV_AIM_POSE: return "XRT_INPUT_PSMV_AIM_POSE";
	case XRT_INPUT_TOUCH_SYSTEM_CLICK: return "XRT_INPUT_TOUCH_SYSTEM_CLICK";
	case XRT_INPUT_HAND_PINCH_READY: return "XRT_INPUT_HAND_PINCH_READY";
	case XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH: return "XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH";
	case XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK: return "XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK";
	case XRT_INPUT_HAND_SELECT_VALUE: return "XRT_INPUT_HAND_SELECT_VALUE";
	case XRT_INPUT_VIVE_TRACKPAD_TOUCH: return "XRT_INPUT_VIVE_TRACKPAD_TOUCH";
	case XRT_INPUT_DAYDREAM_POSE: return "XRT_INPUT_DAYDREAM_POSE";
	case XRT_INPUT_HYDRA_1_CLICK: return "XRT_INPUT_HYDRA_1_CLICK";
	case XRT_INPUT_HYDRA_JOYSTICK_VALUE: return "XRT_INPUT_HYDRA_JOYSTICK_VALUE";
	case XRT_INPUT_PSMV_GRIP_POSE: return "XRT_INPUT_PSMV_GRIP_POSE";
	case XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE: return "XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE";
	case XRT_INPUT_WMR_THUMBSTICK: return "XRT_INPUT_WMR_THUMBSTICK";
	case XRT_INPUT_HAND_GRASP_READY: return "XRT_INPUT_HAND_GRASP_READY";
	case XRT_INPUT_HAND_GRIP_POSE: return "XRT_INPUT_HAND_GRIP_POSE";
	case XRT_INPUT_G2_CONTROLLER_A_CLICK: return "XRT_INPUT_G2_CONTROLLER_A_CLICK";
	case XRT_INPUT_VIVEPRO_VOLDN_CLICK: return "XRT_INPUT_VIVEPRO_VOLDN_CLICK";
	case XRT_INPUT_VIVE_GRIP_POSE: return "XRT_INPUT_VIVE_GRIP_POSE";
	case XRT_INPUT_TOUCH_AIM_POSE: return "XRT_INPUT_TOUCH_AIM_POSE";
	case XRT_INPUT_INDEX_GRIP_POSE: return "XRT_INPUT_INDEX_GRIP_POSE";
	case XRT_INPUT_GENERIC_HEAD_DETECT: return "XRT_INPUT_GENERIC_HEAD_DETECT";
	case XRT_INPUT_SIMPLE_AIM_POSE: return "XRT_INPUT_SIMPLE_AIM_POSE";
	case XRT_INPUT_OPPO_MR_THUMBSTICK: return "XRT_INPUT_OPPO_MR_THUMBSTICK";
	case XRT_INPUT_OPPO_MR_MENU_CLICK: return "XRT_INPUT_OPPO_MR_MENU_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK: return "XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK";
	case XRT_INPUT_TOUCH_THUMBSTICK: return "XRT_INPUT_TOUCH_THUMBSTICK";
	case XRT_INPUT_OPPO_MR_SQUEEZE_VALUE: return "XRT_INPUT_OPPO_MR_SQUEEZE_VALUE";
	case XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD: return "XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD";
	case XRT_INPUT_TOUCH_THUMBSTICK_CLICK: return "XRT_INPUT_TOUCH_THUMBSTICK_CLICK";
	case XRT_INPUT_XBOX_THUMBSTICK_LEFT: return "XRT_INPUT_XBOX_THUMBSTICK_LEFT";
	case XRT_INPUT_TOUCH_Y_CLICK: return "XRT_INPUT_TOUCH_Y_CLICK";
	case XRT_INPUT_VIVE_SYSTEM_CLICK: return "XRT_INPUT_VIVE_SYSTEM_CLICK";
	case XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK";
	case XRT_INPUT_INDEX_B_CLICK: return "XRT_INPUT_INDEX_B_CLICK";
	case XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE: return "XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE";
	case XRT_INPUT_SIMPLE_MENU_CLICK: return "XRT_INPUT_SIMPLE_MENU_CLICK";
	case XRT_INPUT_VIVE_MENU_CLICK: return "XRT_INPUT_VIVE_MENU_CLICK";
	case XRT_INPUT_INDEX_TRACKPAD_FORCE: return "XRT_INPUT_INDEX_TRACKPAD_FORCE";
	case XRT_INPUT_GO_GRIP_POSE: return "XRT_INPUT_GO_GRIP_POSE";
	case XRT_INPUT_PSMV_CROSS_CLICK: return "XRT_INPUT_PSMV_CROSS_CLICK";
	case XRT_INPUT_GENERIC_EYE_GAZE_POSE: return "XRT_INPUT_GENERIC_EYE_GAZE_POSE";
	case XRT_INPUT_VIVEPRO_MUTE_MIC_CLICK: return "XRT_INPUT_VIVEPRO_MUTE_MIC_CLICK";
	case XRT_INPUT_TOUCH_Y_TOUCH: return "XRT_INPUT_TOUCH_Y_TOUCH";
	case XRT_INPUT_HAND_PINCH_VALUE: return "XRT_INPUT_HAND_PINCH_VALUE";
	case XRT_INPUT_HAND_POKE_POSE: return "XRT_INPUT_HAND_POKE_POSE";
	case XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK: return "XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK";
	case XRT_INPUT_XBOX_Y_CLICK: return "XRT_INPUT_XBOX_Y_CLICK";
	case XRT_INPUT_GO_AIM_POSE: return "XRT_INPUT_GO_AIM_POSE";
	case XRT_INPUT_HAND_PINCH_POSE: return "XRT_INPUT_HAND_PINCH_POSE";
	case XRT_INPUT_TOUCH_TRIGGER_VALUE: return "XRT_INPUT_TOUCH_TRIGGER_VALUE";
	case XRT_INPUT_GO_BACK_CLICK: return "XRT_INPUT_GO_BACK_CLICK";
	case XRT_INPUT_INDEX_SQUEEZE_FORCE: return "XRT_INPUT_INDEX_SQUEEZE_FORCE";
	case XRT_INPUT_XBOX_A_CLICK: return "XRT_INPUT_XBOX_A_CLICK";
	case XRT_INPUT_HYDRA_POSE: return "XRT_INPUT_HYDRA_POSE";
	case XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK: return "XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK";
	case XRT_INPUT_XBOX_THUMBSTICK_LEFT_CLICK: return "XRT_INPUT_XBOX_THUMBSTICK_LEFT_CLICK";
	case XRT_INPUT_OPPO_MR_GRIP_POSE: return "XRT_INPUT_OPPO_MR_GRIP_POSE";
	case XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH: return "XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH";
	case XRT_INPUT_PSMV_CIRCLE_CLICK: return "XRT_INPUT_PSMV_CIRCLE_CLICK";
	case XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK: return "XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK";
	case XRT_INPUT_VIVE_SQUEEZE_CLICK: return "XRT_INPUT_VIVE_SQUEEZE_CLICK";
	case XRT_INPUT_TOUCH_B_TOUCH: return "XRT_INPUT_TOUCH_B_TOUCH";
	case XRT_INPUT_TOUCH_X_CLICK: return "XRT_INPUT_TOUCH_X_CLICK";
	case XRT_INPUT_GO_SYSTEM_CLICK: return "XRT_INPUT_GO_SYSTEM_CLICK";
	case XRT_INPUT_PSMV_TRIANGLE_CLICK: return "XRT_INPUT_PSMV_TRIANGLE_CLICK";
	case XRT_INPUT_TOUCH_A_CLICK: return "XRT_INPUT_TOUCH_A_CLICK";
	case XRT_INPUT_INDEX_TRACKPAD: return "XRT_INPUT_INDEX_TRACKPAD";
	case XRT_INPUT_WMR_THUMBSTICK_CLICK: return "XRT_INPUT_WMR_THUMBSTICK_CLICK";
	case XRT_INPUT_XBOX_RIGHT_TRIGGER_VALUE: return "XRT_INPUT_XBOX_RIGHT_TRIGGER_VALUE";
	case XRT_INPUT_PSMV_SELECT_CLICK: return "XRT_INPUT_PSMV_SELECT_CLICK";
	case XRT_INPUT_XBOX_VIEW_CLICK: return "XRT_INPUT_XBOX_VIEW_CLICK";
	case XRT_INPUT_HYDRA_2_CLICK: return "XRT_INPUT_HYDRA_2_CLICK";
	case XRT_INPUT_XBOX_THUMBSTICK_RIGHT_CLICK: return "XRT_INPUT_XBOX_THUMBSTICK_RIGHT_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_GRIP_POSE: return "XRT_INPUT_ML2_CONTROLLER_GRIP_POSE";
	case XRT_INPUT_OPPO_MR_A_TOUCH: return "XRT_INPUT_OPPO_MR_A_TOUCH";
	case XRT_INPUT_HYDRA_BUMPER_CLICK: return "XRT_INPUT_HYDRA_BUMPER_CLICK";
	case XRT_INPUT_OPPO_MR_HOME_CLICK: return "XRT_INPUT_OPPO_MR_HOME_CLICK";
	case XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE: return "XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE";
	case XRT_INPUT_XBOX_DPAD_RIGHT_CLICK: return "XRT_INPUT_XBOX_DPAD_RIGHT_CLICK";
	case XRT_INPUT_DAYDREAM_TOUCHPAD: return "XRT_INPUT_DAYDREAM_TOUCHPAD";
	case XRT_INPUT_WMR_TRACKPAD: return "XRT_INPUT_WMR_TRACKPAD";
	case XRT_INPUT_GENERIC_HAND_TRACKING_LEFT: return "XRT_INPUT_GENERIC_HAND_TRACKING_LEFT";
	case XRT_INPUT_XBOX_B_CLICK: return "XRT_INPUT_XBOX_B_CLICK";
	case XRT_INPUT_VIVE_TRACKER_GRIP_POSE: return "XRT_INPUT_VIVE_TRACKER_GRIP_POSE";
	case XRT_INPUT_PSMV_TRIGGER_VALUE: return "XRT_INPUT_PSMV_TRIGGER_VALUE";
	default: return "UNKNOWN";
	}
}
enum xrt_input_name
xrt_input_name_enum(const char *input)
{
	if(strcmp("XRT_INPUT_PSMV_SQUARE_CLICK", input) == 0) return XRT_INPUT_PSMV_SQUARE_CLICK;
	if(strcmp("XRT_INPUT_GO_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_GO_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_AIM_POSE", input) == 0) return XRT_INPUT_G2_CONTROLLER_AIM_POSE;
	if(strcmp("XRT_INPUT_WMR_GRIP_POSE", input) == 0) return XRT_INPUT_WMR_GRIP_POSE;
	if(strcmp("XRT_INPUT_XBOX_DPAD_DOWN_CLICK", input) == 0) return XRT_INPUT_XBOX_DPAD_DOWN_CLICK;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE", input) == 0) return XRT_INPUT_G2_CONTROLLER_SQUEEZE_VALUE;
	if(strcmp("XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_INDEX_TRIGGER_VALUE", input) == 0) return XRT_INPUT_INDEX_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_HYDRA_3_CLICK", input) == 0) return XRT_INPUT_HYDRA_3_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_THUMBSTICK_TOUCH", input) == 0) return XRT_INPUT_TOUCH_THUMBSTICK_TOUCH;
	if(strcmp("XRT_INPUT_WMR_HOME_CLICK", input) == 0) return XRT_INPUT_WMR_HOME_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_X_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_X_CLICK;
	if(strcmp("XRT_INPUT_WMR_MENU_CLICK", input) == 0) return XRT_INPUT_WMR_MENU_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_B_CLICK", input) == 0) return XRT_INPUT_TOUCH_B_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_MENU_CLICK", input) == 0) return XRT_INPUT_ML2_CONTROLLER_MENU_CLICK;
	if(strcmp("XRT_INPUT_GO_TRIGGER_CLICK", input) == 0) return XRT_INPUT_GO_TRIGGER_CLICK;
	if(strcmp("XRT_INPUT_HYDRA_4_CLICK", input) == 0) return XRT_INPUT_HYDRA_4_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_AIM_POSE", input) == 0) return XRT_INPUT_ML2_CONTROLLER_AIM_POSE;
	if(strcmp("XRT_INPUT_HAND_AIM_POSE", input) == 0) return XRT_INPUT_HAND_AIM_POSE;
	if(strcmp("XRT_INPUT_TOUCH_X_TOUCH", input) == 0) return XRT_INPUT_TOUCH_X_TOUCH;
	if(strcmp("XRT_INPUT_INDEX_AIM_POSE", input) == 0) return XRT_INPUT_INDEX_AIM_POSE;
	if(strcmp("XRT_INPUT_XBOX_DPAD_LEFT_CLICK", input) == 0) return XRT_INPUT_XBOX_DPAD_LEFT_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_TRIGGER_TOUCH", input) == 0) return XRT_INPUT_TOUCH_TRIGGER_TOUCH;
	if(strcmp("XRT_INPUT_SIMPLE_SELECT_CLICK", input) == 0) return XRT_INPUT_SIMPLE_SELECT_CLICK;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_B_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_B_CLICK;
	if(strcmp("XRT_INPUT_DAYDREAM_BAR_CLICK", input) == 0) return XRT_INPUT_DAYDREAM_BAR_CLICK;
	if(strcmp("XRT_INPUT_INDEX_SYSTEM_CLICK", input) == 0) return XRT_INPUT_INDEX_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_PSMV_BODY_CENTER_POSE", input) == 0) return XRT_INPUT_PSMV_BODY_CENTER_POSE;
	if(strcmp("XRT_INPUT_GO_TRACKPAD", input) == 0) return XRT_INPUT_GO_TRACKPAD;
	if(strcmp("XRT_INPUT_OPPO_MR_Y_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_Y_TOUCH;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_VIVE_AIM_POSE", input) == 0) return XRT_INPUT_VIVE_AIM_POSE;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_MENU_CLICK;
	if(strcmp("XRT_INPUT_GENERIC_HEAD_POSE", input) == 0) return XRT_INPUT_GENERIC_HEAD_POSE;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK", input) == 0) return XRT_INPUT_ML2_CONTROLLER_SELECT_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_MENU_CLICK", input) == 0) return XRT_INPUT_TOUCH_MENU_CLICK;
	if(strcmp("XRT_INPUT_XBOX_SHOULDER_RIGHT_CLICK", input) == 0) return XRT_INPUT_XBOX_SHOULDER_RIGHT_CLICK;
	if(strcmp("XRT_INPUT_INDEX_TRIGGER_TOUCH", input) == 0) return XRT_INPUT_INDEX_TRIGGER_TOUCH;
	if(strcmp("XRT_INPUT_INDEX_THUMBSTICK_TOUCH", input) == 0) return XRT_INPUT_INDEX_THUMBSTICK_TOUCH;
	if(strcmp("XRT_INPUT_INDEX_TRIGGER_CLICK", input) == 0) return XRT_INPUT_INDEX_TRIGGER_CLICK;
	if(strcmp("XRT_INPUT_XBOX_DPAD_UP_CLICK", input) == 0) return XRT_INPUT_XBOX_DPAD_UP_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_B_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_B_TOUCH;
	if(strcmp("XRT_INPUT_PSMV_BALL_CENTER_POSE", input) == 0) return XRT_INPUT_PSMV_BALL_CENTER_POSE;
	if(strcmp("XRT_INPUT_XBOX_MENU_CLICK", input) == 0) return XRT_INPUT_XBOX_MENU_CLICK;
	if(strcmp("XRT_INPUT_GENERIC_TRACKER_POSE", input) == 0) return XRT_INPUT_GENERIC_TRACKER_POSE;
	if(strcmp("XRT_INPUT_TOUCH_GRIP_POSE", input) == 0) return XRT_INPUT_TOUCH_GRIP_POSE;
	if(strcmp("XRT_INPUT_TOUCH_A_TOUCH", input) == 0) return XRT_INPUT_TOUCH_A_TOUCH;
	if(strcmp("XRT_INPUT_HAND_AIM_ACTIVATE_VALUE", input) == 0) return XRT_INPUT_HAND_AIM_ACTIVATE_VALUE;
	if(strcmp("XRT_INPUT_INDEX_A_TOUCH", input) == 0) return XRT_INPUT_INDEX_A_TOUCH;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_GRIP_POSE", input) == 0) return XRT_INPUT_G2_CONTROLLER_GRIP_POSE;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_MENU_CLICK", input) == 0) return XRT_INPUT_VIVE_TRACKER_MENU_CLICK;
	if(strcmp("XRT_INPUT_SIMPLE_GRIP_POSE", input) == 0) return XRT_INPUT_SIMPLE_GRIP_POSE;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE", input) == 0) return XRT_INPUT_VIVE_TRACKER_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_HAND_AIM_ACTIVATE_READY", input) == 0) return XRT_INPUT_HAND_AIM_ACTIVATE_READY;
	if(strcmp("XRT_INPUT_PSMV_START_CLICK", input) == 0) return XRT_INPUT_PSMV_START_CLICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_VIVE_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_GENERIC_PALM_POSE", input) == 0) return XRT_INPUT_GENERIC_PALM_POSE;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_HYDRA_JOYSTICK_CLICK", input) == 0) return XRT_INPUT_HYDRA_JOYSTICK_CLICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_VIVE_TRACKER_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_VIVE_TRIGGER_VALUE", input) == 0) return XRT_INPUT_VIVE_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_MENU_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_MENU_CLICK;
	if(strcmp("XRT_INPUT_INDEX_SQUEEZE_VALUE", input) == 0) return XRT_INPUT_INDEX_SQUEEZE_VALUE;
	if(strcmp("XRT_INPUT_OPPO_MR_B_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_B_CLICK;
	if(strcmp("XRT_INPUT_WMR_AIM_POSE", input) == 0) return XRT_INPUT_WMR_AIM_POSE;
	if(strcmp("XRT_INPUT_GENERIC_HAND_TRACKING_RIGHT", input) == 0) return XRT_INPUT_GENERIC_HAND_TRACKING_RIGHT;
	if(strcmp("XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH", input) == 0) return XRT_INPUT_DAYDREAM_TOUCHPAD_TOUCH;
	if(strcmp("XRT_INPUT_VIVEPRO_VOLUP_CLICK", input) == 0) return XRT_INPUT_VIVEPRO_VOLUP_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRACKPAD", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRACKPAD;
	if(strcmp("XRT_INPUT_XBOX_SHOULDER_LEFT_CLICK", input) == 0) return XRT_INPUT_XBOX_SHOULDER_LEFT_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_Y_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_Y_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_AIM_POSE", input) == 0) return XRT_INPUT_OPPO_MR_AIM_POSE;
	if(strcmp("XRT_INPUT_WMR_TRIGGER_VALUE", input) == 0) return XRT_INPUT_WMR_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_HYDRA_TRIGGER_VALUE", input) == 0) return XRT_INPUT_HYDRA_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_INDEX_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_INDEX_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_TRIGGER_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_TRIGGER_TOUCH;
	if(strcmp("XRT_INPUT_WMR_SQUEEZE_CLICK", input) == 0) return XRT_INPUT_WMR_SQUEEZE_CLICK;
	if(strcmp("XRT_INPUT_XBOX_LEFT_TRIGGER_VALUE", input) == 0) return XRT_INPUT_XBOX_LEFT_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_INDEX_B_TOUCH", input) == 0) return XRT_INPUT_INDEX_B_TOUCH;
	if(strcmp("XRT_INPUT_INDEX_THUMBSTICK", input) == 0) return XRT_INPUT_INDEX_THUMBSTICK;
	if(strcmp("XRT_INPUT_OPPO_MR_X_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_X_TOUCH;
	if(strcmp("XRT_INPUT_TOUCH_SQUEEZE_VALUE", input) == 0) return XRT_INPUT_TOUCH_SQUEEZE_VALUE;
	if(strcmp("XRT_INPUT_VIVE_TRIGGER_CLICK", input) == 0) return XRT_INPUT_VIVE_TRIGGER_CLICK;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_THUMBSTICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK", input) == 0) return XRT_INPUT_VIVE_TRACKER_SQUEEZE_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_HEART_RATE_VALUE", input) == 0) return XRT_INPUT_OPPO_MR_HEART_RATE_VALUE;
	if(strcmp("XRT_INPUT_WMR_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_WMR_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_X_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_X_CLICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_TRACKPAD", input) == 0) return XRT_INPUT_VIVE_TRACKER_TRACKPAD;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_AIM_POSE;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_XBOX_X_CLICK", input) == 0) return XRT_INPUT_XBOX_X_CLICK;
	if(strcmp("XRT_INPUT_PSMV_PS_CLICK", input) == 0) return XRT_INPUT_PSMV_PS_CLICK;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_GRIP_POSE;
	if(strcmp("XRT_INPUT_OPPO_MR_A_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_A_CLICK;
	if(strcmp("XRT_INPUT_INDEX_SYSTEM_TOUCH", input) == 0) return XRT_INPUT_INDEX_SYSTEM_TOUCH;
	if(strcmp("XRT_INPUT_VIVEPRO_SYSTEM_CLICK", input) == 0) return XRT_INPUT_VIVEPRO_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_WMR_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_WMR_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_THUMBSTICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_THUMBSTICK;
	if(strcmp("XRT_INPUT_XBOX_THUMBSTICK_RIGHT", input) == 0) return XRT_INPUT_XBOX_THUMBSTICK_RIGHT;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_Y_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_Y_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_HAND_SQUEEZE_VALUE", input) == 0) return XRT_INPUT_HAND_SQUEEZE_VALUE;
	if(strcmp("XRT_INPUT_HAND_GRASP_VALUE", input) == 0) return XRT_INPUT_HAND_GRASP_VALUE;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_VIVE_TRACKER_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_THUMBREST_TOUCH", input) == 0) return XRT_INPUT_TOUCH_THUMBREST_TOUCH;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_HOME_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_HOME_CLICK;
	if(strcmp("XRT_INPUT_PSMV_MOVE_CLICK", input) == 0) return XRT_INPUT_PSMV_MOVE_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_TRIGGER_VALUE", input) == 0) return XRT_INPUT_OPPO_MR_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_GO_TRACKPAD_CLICK", input) == 0) return XRT_INPUT_GO_TRACKPAD_CLICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKPAD", input) == 0) return XRT_INPUT_VIVE_TRACKPAD;
	if(strcmp("XRT_INPUT_INDEX_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_INDEX_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_INDEX_A_CLICK", input) == 0) return XRT_INPUT_INDEX_A_CLICK;
	if(strcmp("XRT_INPUT_PSMV_AIM_POSE", input) == 0) return XRT_INPUT_PSMV_AIM_POSE;
	if(strcmp("XRT_INPUT_TOUCH_SYSTEM_CLICK", input) == 0) return XRT_INPUT_TOUCH_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_HAND_PINCH_READY", input) == 0) return XRT_INPUT_HAND_PINCH_READY;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRIGGER_CLICK;
	if(strcmp("XRT_INPUT_HAND_SELECT_VALUE", input) == 0) return XRT_INPUT_HAND_SELECT_VALUE;
	if(strcmp("XRT_INPUT_VIVE_TRACKPAD_TOUCH", input) == 0) return XRT_INPUT_VIVE_TRACKPAD_TOUCH;
	if(strcmp("XRT_INPUT_DAYDREAM_POSE", input) == 0) return XRT_INPUT_DAYDREAM_POSE;
	if(strcmp("XRT_INPUT_HYDRA_1_CLICK", input) == 0) return XRT_INPUT_HYDRA_1_CLICK;
	if(strcmp("XRT_INPUT_HYDRA_JOYSTICK_VALUE", input) == 0) return XRT_INPUT_HYDRA_JOYSTICK_VALUE;
	if(strcmp("XRT_INPUT_PSMV_GRIP_POSE", input) == 0) return XRT_INPUT_PSMV_GRIP_POSE;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_WMR_THUMBSTICK", input) == 0) return XRT_INPUT_WMR_THUMBSTICK;
	if(strcmp("XRT_INPUT_HAND_GRASP_READY", input) == 0) return XRT_INPUT_HAND_GRASP_READY;
	if(strcmp("XRT_INPUT_HAND_GRIP_POSE", input) == 0) return XRT_INPUT_HAND_GRIP_POSE;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_A_CLICK", input) == 0) return XRT_INPUT_G2_CONTROLLER_A_CLICK;
	if(strcmp("XRT_INPUT_VIVEPRO_VOLDN_CLICK", input) == 0) return XRT_INPUT_VIVEPRO_VOLDN_CLICK;
	if(strcmp("XRT_INPUT_VIVE_GRIP_POSE", input) == 0) return XRT_INPUT_VIVE_GRIP_POSE;
	if(strcmp("XRT_INPUT_TOUCH_AIM_POSE", input) == 0) return XRT_INPUT_TOUCH_AIM_POSE;
	if(strcmp("XRT_INPUT_INDEX_GRIP_POSE", input) == 0) return XRT_INPUT_INDEX_GRIP_POSE;
	if(strcmp("XRT_INPUT_GENERIC_HEAD_DETECT", input) == 0) return XRT_INPUT_GENERIC_HEAD_DETECT;
	if(strcmp("XRT_INPUT_SIMPLE_AIM_POSE", input) == 0) return XRT_INPUT_SIMPLE_AIM_POSE;
	if(strcmp("XRT_INPUT_OPPO_MR_THUMBSTICK", input) == 0) return XRT_INPUT_OPPO_MR_THUMBSTICK;
	if(strcmp("XRT_INPUT_OPPO_MR_MENU_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_MENU_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK", input) == 0) return XRT_INPUT_ML2_CONTROLLER_SHOULDER_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_THUMBSTICK", input) == 0) return XRT_INPUT_TOUCH_THUMBSTICK;
	if(strcmp("XRT_INPUT_OPPO_MR_SQUEEZE_VALUE", input) == 0) return XRT_INPUT_OPPO_MR_SQUEEZE_VALUE;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_TRACKPAD;
	if(strcmp("XRT_INPUT_TOUCH_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_TOUCH_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_XBOX_THUMBSTICK_LEFT", input) == 0) return XRT_INPUT_XBOX_THUMBSTICK_LEFT;
	if(strcmp("XRT_INPUT_TOUCH_Y_CLICK", input) == 0) return XRT_INPUT_TOUCH_Y_CLICK;
	if(strcmp("XRT_INPUT_VIVE_SYSTEM_CLICK", input) == 0) return XRT_INPUT_VIVE_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_SQUEEZE_CLICK;
	if(strcmp("XRT_INPUT_INDEX_B_CLICK", input) == 0) return XRT_INPUT_INDEX_B_CLICK;
	if(strcmp("XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE", input) == 0) return XRT_INPUT_G2_CONTROLLER_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_SIMPLE_MENU_CLICK", input) == 0) return XRT_INPUT_SIMPLE_MENU_CLICK;
	if(strcmp("XRT_INPUT_VIVE_MENU_CLICK", input) == 0) return XRT_INPUT_VIVE_MENU_CLICK;
	if(strcmp("XRT_INPUT_INDEX_TRACKPAD_FORCE", input) == 0) return XRT_INPUT_INDEX_TRACKPAD_FORCE;
	if(strcmp("XRT_INPUT_GO_GRIP_POSE", input) == 0) return XRT_INPUT_GO_GRIP_POSE;
	if(strcmp("XRT_INPUT_PSMV_CROSS_CLICK", input) == 0) return XRT_INPUT_PSMV_CROSS_CLICK;
	if(strcmp("XRT_INPUT_GENERIC_EYE_GAZE_POSE", input) == 0) return XRT_INPUT_GENERIC_EYE_GAZE_POSE;
	if(strcmp("XRT_INPUT_VIVEPRO_MUTE_MIC_CLICK", input) == 0) return XRT_INPUT_VIVEPRO_MUTE_MIC_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_Y_TOUCH", input) == 0) return XRT_INPUT_TOUCH_Y_TOUCH;
	if(strcmp("XRT_INPUT_HAND_PINCH_VALUE", input) == 0) return XRT_INPUT_HAND_PINCH_VALUE;
	if(strcmp("XRT_INPUT_HAND_POKE_POSE", input) == 0) return XRT_INPUT_HAND_POKE_POSE;
	if(strcmp("XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK", input) == 0) return XRT_INPUT_DAYDREAM_TOUCHPAD_CLICK;
	if(strcmp("XRT_INPUT_XBOX_Y_CLICK", input) == 0) return XRT_INPUT_XBOX_Y_CLICK;
	if(strcmp("XRT_INPUT_GO_AIM_POSE", input) == 0) return XRT_INPUT_GO_AIM_POSE;
	if(strcmp("XRT_INPUT_HAND_PINCH_POSE", input) == 0) return XRT_INPUT_HAND_PINCH_POSE;
	if(strcmp("XRT_INPUT_TOUCH_TRIGGER_VALUE", input) == 0) return XRT_INPUT_TOUCH_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_GO_BACK_CLICK", input) == 0) return XRT_INPUT_GO_BACK_CLICK;
	if(strcmp("XRT_INPUT_INDEX_SQUEEZE_FORCE", input) == 0) return XRT_INPUT_INDEX_SQUEEZE_FORCE;
	if(strcmp("XRT_INPUT_XBOX_A_CLICK", input) == 0) return XRT_INPUT_XBOX_A_CLICK;
	if(strcmp("XRT_INPUT_HYDRA_POSE", input) == 0) return XRT_INPUT_HYDRA_POSE;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK", input) == 0) return XRT_INPUT_VIVE_TRACKER_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_XBOX_THUMBSTICK_LEFT_CLICK", input) == 0) return XRT_INPUT_XBOX_THUMBSTICK_LEFT_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_GRIP_POSE", input) == 0) return XRT_INPUT_OPPO_MR_GRIP_POSE;
	if(strcmp("XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_THUMBSTICK_TOUCH;
	if(strcmp("XRT_INPUT_PSMV_CIRCLE_CLICK", input) == 0) return XRT_INPUT_PSMV_CIRCLE_CLICK;
	if(strcmp("XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK", input) == 0) return XRT_INPUT_ODYSSEY_CONTROLLER_HOME_CLICK;
	if(strcmp("XRT_INPUT_VIVE_SQUEEZE_CLICK", input) == 0) return XRT_INPUT_VIVE_SQUEEZE_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_B_TOUCH", input) == 0) return XRT_INPUT_TOUCH_B_TOUCH;
	if(strcmp("XRT_INPUT_TOUCH_X_CLICK", input) == 0) return XRT_INPUT_TOUCH_X_CLICK;
	if(strcmp("XRT_INPUT_GO_SYSTEM_CLICK", input) == 0) return XRT_INPUT_GO_SYSTEM_CLICK;
	if(strcmp("XRT_INPUT_PSMV_TRIANGLE_CLICK", input) == 0) return XRT_INPUT_PSMV_TRIANGLE_CLICK;
	if(strcmp("XRT_INPUT_TOUCH_A_CLICK", input) == 0) return XRT_INPUT_TOUCH_A_CLICK;
	if(strcmp("XRT_INPUT_INDEX_TRACKPAD", input) == 0) return XRT_INPUT_INDEX_TRACKPAD;
	if(strcmp("XRT_INPUT_WMR_THUMBSTICK_CLICK", input) == 0) return XRT_INPUT_WMR_THUMBSTICK_CLICK;
	if(strcmp("XRT_INPUT_XBOX_RIGHT_TRIGGER_VALUE", input) == 0) return XRT_INPUT_XBOX_RIGHT_TRIGGER_VALUE;
	if(strcmp("XRT_INPUT_PSMV_SELECT_CLICK", input) == 0) return XRT_INPUT_PSMV_SELECT_CLICK;
	if(strcmp("XRT_INPUT_XBOX_VIEW_CLICK", input) == 0) return XRT_INPUT_XBOX_VIEW_CLICK;
	if(strcmp("XRT_INPUT_HYDRA_2_CLICK", input) == 0) return XRT_INPUT_HYDRA_2_CLICK;
	if(strcmp("XRT_INPUT_XBOX_THUMBSTICK_RIGHT_CLICK", input) == 0) return XRT_INPUT_XBOX_THUMBSTICK_RIGHT_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_GRIP_POSE", input) == 0) return XRT_INPUT_ML2_CONTROLLER_GRIP_POSE;
	if(strcmp("XRT_INPUT_OPPO_MR_A_TOUCH", input) == 0) return XRT_INPUT_OPPO_MR_A_TOUCH;
	if(strcmp("XRT_INPUT_HYDRA_BUMPER_CLICK", input) == 0) return XRT_INPUT_HYDRA_BUMPER_CLICK;
	if(strcmp("XRT_INPUT_OPPO_MR_HOME_CLICK", input) == 0) return XRT_INPUT_OPPO_MR_HOME_CLICK;
	if(strcmp("XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE", input) == 0) return XRT_INPUT_ML2_CONTROLLER_TRACKPAD_FORCE;
	if(strcmp("XRT_INPUT_XBOX_DPAD_RIGHT_CLICK", input) == 0) return XRT_INPUT_XBOX_DPAD_RIGHT_CLICK;
	if(strcmp("XRT_INPUT_DAYDREAM_TOUCHPAD", input) == 0) return XRT_INPUT_DAYDREAM_TOUCHPAD;
	if(strcmp("XRT_INPUT_WMR_TRACKPAD", input) == 0) return XRT_INPUT_WMR_TRACKPAD;
	if(strcmp("XRT_INPUT_GENERIC_HAND_TRACKING_LEFT", input) == 0) return XRT_INPUT_GENERIC_HAND_TRACKING_LEFT;
	if(strcmp("XRT_INPUT_XBOX_B_CLICK", input) == 0) return XRT_INPUT_XBOX_B_CLICK;
	if(strcmp("XRT_INPUT_VIVE_TRACKER_GRIP_POSE", input) == 0) return XRT_INPUT_VIVE_TRACKER_GRIP_POSE;
	if(strcmp("XRT_INPUT_PSMV_TRIGGER_VALUE", input) == 0) return XRT_INPUT_PSMV_TRIGGER_VALUE;
	return XRT_INPUT_GENERIC_TRACKER_POSE;
}
const char *
xrt_output_name_string(enum xrt_output_name output)
{
	switch(output)
	{
	case XRT_OUTPUT_NAME_OPPO_MR_HAPTIC: return "XRT_OUTPUT_NAME_OPPO_MR_HAPTIC";
	case XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT: return "XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT";
	case XRT_OUTPUT_NAME_WMR_HAPTIC: return "XRT_OUTPUT_NAME_WMR_HAPTIC";
	case XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT_TRIGGER: return "XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT_TRIGGER";
	case XRT_OUTPUT_NAME_INDEX_HAPTIC: return "XRT_OUTPUT_NAME_INDEX_HAPTIC";
	case XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION: return "XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION";
	case XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT_TRIGGER: return "XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT_TRIGGER";
	case XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC: return "XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC";
	case XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC: return "XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC";
	case XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION: return "XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION";
	case XRT_OUTPUT_NAME_SIMPLE_VIBRATION: return "XRT_OUTPUT_NAME_SIMPLE_VIBRATION";
	case XRT_OUTPUT_NAME_TOUCH_HAPTIC: return "XRT_OUTPUT_NAME_TOUCH_HAPTIC";
	case XRT_OUTPUT_NAME_VIVE_HAPTIC: return "XRT_OUTPUT_NAME_VIVE_HAPTIC";
	case XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT: return "XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT";
	case XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC: return "XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC";
	default: return "UNKNOWN";
	}
}
enum xrt_output_name
xrt_output_name_enum(const char *output)
{
	if(strcmp("XRT_OUTPUT_NAME_OPPO_MR_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_OPPO_MR_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT", output) == 0) return XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT;
	if(strcmp("XRT_OUTPUT_NAME_WMR_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_WMR_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT_TRIGGER", output) == 0) return XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT_TRIGGER;
	if(strcmp("XRT_OUTPUT_NAME_INDEX_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_INDEX_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION", output) == 0) return XRT_OUTPUT_NAME_PSMV_RUMBLE_VIBRATION;
	if(strcmp("XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT_TRIGGER", output) == 0) return XRT_OUTPUT_NAME_XBOX_HAPTIC_RIGHT_TRIGGER;
	if(strcmp("XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_ODYSSEY_CONTROLLER_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_G2_CONTROLLER_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION", output) == 0) return XRT_OUTPUT_NAME_ML2_CONTROLLER_VIBRATION;
	if(strcmp("XRT_OUTPUT_NAME_SIMPLE_VIBRATION", output) == 0) return XRT_OUTPUT_NAME_SIMPLE_VIBRATION;
	if(strcmp("XRT_OUTPUT_NAME_TOUCH_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_TOUCH_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_VIVE_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_VIVE_HAPTIC;
	if(strcmp("XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT", output) == 0) return XRT_OUTPUT_NAME_XBOX_HAPTIC_LEFT;
	if(strcmp("XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC", output) == 0) return XRT_OUTPUT_NAME_VIVE_TRACKER_HAPTIC;
	return XRT_OUTPUT_NAME_SIMPLE_VIBRATION;
}

// clang-format on
