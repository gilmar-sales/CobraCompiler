file(GLOB_RECURSE EDITOR_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp )

add_executable(Editor ${EDITOR_SOURCE})

if(MSVC)
  target_compile_options(Editor PUBLIC "/ZI")
  target_link_options(Editor PUBLIC "/INCREMENTAL")
endif()

target_link_libraries(Editor PUBLIC Cobra)
