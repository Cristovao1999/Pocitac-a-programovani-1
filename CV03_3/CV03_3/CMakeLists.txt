# CMakeList.txt : CMake project for CV03_3, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CV03_3 "CV03_3.cpp" "CV03_3.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CV03_3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
