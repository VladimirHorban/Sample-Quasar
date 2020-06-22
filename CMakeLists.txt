cmake_minimum_required (VERSION 3.8)

set(PROJECT_NAME "SampleQuasar")

project (${PROJECT_NAME})

add_subdirectory(Quasar)
add_subdirectory(Assets)

add_executable (${PROJECT_NAME} "SampleQuasar.cpp" "SampleQuasar.h")

target_link_libraries(${PROJECT_NAME} Quasar)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

