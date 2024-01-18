# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/owner/WiVRn/build-server/_deps/boostpfr-src"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-build"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/tmp"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/src/boostpfr-populate-stamp"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/src"
  "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/src/boostpfr-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/src/boostpfr-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/owner/WiVRn/build-server/_deps/boostpfr-subbuild/boostpfr-populate-prefix/src/boostpfr-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
