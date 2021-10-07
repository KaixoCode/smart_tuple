cmake_minimum_required (VERSION 3.0)
project (smart_tuple)

set (CMAKE_CXX_STANDARD 20)

include_directories(
  /
)

add_library(smart_tuple STATIC
  "${smart_tuple_SOURCE_DIR}/smart_tuple.hpp"
)

set_target_properties(smart_tuple PROPERTIES LINKER_LANGUAGE CXX)


add_executable(smart_tuple_example
  "${smart_tuple_SOURCE_DIR}/example.cpp"
)
