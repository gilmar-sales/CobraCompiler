file(GLOB_RECURSE EDITOR_SOURCE Source/*.cpp)
file(GLOB_RECURSE EDITOR_INCLUDE Include/*.hpp)

add_executable(Editor ${EDITOR_SOURCE})

