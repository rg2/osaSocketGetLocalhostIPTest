
cmake_minimum_required(VERSION 2.8)

find_package(cisst REQUIRED)
include(${CISST_USE_FILE})

add_executable(local-ip-test main.cpp)

target_link_libraries(local-ip-test ${CISST_LIBRARIES})
