file(GLOB_RECURSE COBRA_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(Cobra ${COBRA_INCLUDE} ${COBRA_SOURCE})

target_link_libraries(Cobra PUBLIC glfw fmtlog-static glad imgui)

if(MSVC)
  target_compile_options(Cobra PUBLIC "/ZI")
  target_link_options(Cobra PUBLIC "/INCREMENTAL")
endif()

target_include_directories(Cobra PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

