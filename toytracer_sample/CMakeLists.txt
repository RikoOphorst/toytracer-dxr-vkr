file(GLOB_RECURSE SRC_FILES "*.cpp" "*.h" "*.hpp")
assign_source_group("sample" ${SRC_FILES})
add_executable(toytracer_sample ${SRC_FILES})

target_link_libraries(toytracer_sample toytracer)

set_target_properties(toytracer_sample 
  PROPERTIES 
  RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_SOURCE_DIR}/bin"
  RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/bin"
  RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO "${CMAKE_SOURCE_DIR}/bin")

  set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT toytracer_sample)