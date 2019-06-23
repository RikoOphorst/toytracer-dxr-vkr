file(GLOB_RECURSE SRC_FILES "*.cpp" "*.h" "*.hpp")
assign_source_group("test" ${SRC_FILES})

add_executable(toytracer_test ${SRC_FILES})

target_link_libraries(toytracer_test toytracer)

set_target_properties(toytracer_test 
  PROPERTIES 
  RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/bin"
  RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/bin"
  RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_SOURCE_DIR}/bin")