
cmake_minimum_required(VERSION 2.8.9)
project (unitTestProject)
set(CMAKE_CXX_STANDARD 11)
include_directories("${PROJECT_SOURCE_DIR}/googleTestAPI/include")
add_subdirectory(googleTestAPI)
add_executable(unitTestProject Source.cpp)

target_link_libraries(unitTestProject googleTestAPI/GoogleTestProject)
set_target_properties(googleTestAPI PROPERTIES LINKER_LANGUAGE CXX)