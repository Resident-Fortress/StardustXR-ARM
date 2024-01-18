# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/owner/WiVRn/build-server/_deps/monado-src"
  "/home/owner/WiVRn/build-server/_deps/monado-build"
  "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix"
  "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/tmp"
  "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/src/monado-populate-stamp"
  "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/src"
  "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/src/monado-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/src/monado-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/owner/WiVRn/build-server/_deps/monado-subbuild/monado-populate-prefix/src/monado-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
