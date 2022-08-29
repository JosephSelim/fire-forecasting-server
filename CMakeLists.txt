# CMakeList.txt : CMake project for fire-forecasting-server, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("fire-forecasting-server")
set(CMAKE_CXX_STANDARD 14)

enable_testing()
include(GoogleTest)

add_subdirectory(server)
add_subdirectory(unitTests)

# Add source to this project's executable.
add_executable (fire-forecasting-server "fire-forecasting-server.cpp" "fire-forecasting-server.h" "server/serverNode.cpp" "server/serverNode.h" "server/sensorNode.h" "server/sensorNode.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET fire-forecasting-server PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
