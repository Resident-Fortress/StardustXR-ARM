# Copyright 2020, Collabora, Ltd.
# SPDX-License-Identifier: BSL-1.0

set(XRT_INSTALL_ABSOLUTE_SYSTEMD_UNIT_FILES ON)

# Set up variables to use when configuring files
set(conflicts monado-dev)
set(exit_on_disconnect OFF)
set(service_path "monado-service")
set(XRT_IPC_MSG_SOCK_FILENAME wivrn_comp_ipc)
if(XRT_INSTALL_ABSOLUTE_SYSTEMD_UNIT_FILES)
	set(service_path "${CMAKE_INSTALL_PREFIX}/bin/${service_path}")
endif()

# Create unit files
configure_file(/home/owner/WiVRn/build-server/_deps/monado-src/src/xrt/targets/service/monado.in.socket "/home/owner/WiVRn/build-server/_deps/monado-build/src/xrt/targets/service/monado.socket")
configure_file(/home/owner/WiVRn/build-server/_deps/monado-src/src/xrt/targets/service/monado.in.service "/home/owner/WiVRn/build-server/_deps/monado-build/src/xrt/targets/service/monado.service")

# Install them
file(
	INSTALL
	DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/systemd/user"
	TYPE
	FILE
	FILES
	"/home/owner/WiVRn/build-server/_deps/monado-build/src/xrt/targets/service/monado.socket"
	"/home/owner/WiVRn/build-server/_deps/monado-build/src/xrt/targets/service/monado.service"
	)
