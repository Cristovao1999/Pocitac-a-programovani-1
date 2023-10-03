# CMakeList.txt : CMake project for CV03, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CV03 "CV03.cpp" "CV03.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CV03 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
