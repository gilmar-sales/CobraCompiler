file(GLOB_RECURSE COBRA_SOURCE Source/*.cpp)
file(GLOB_RECURSE COBRA_INCLUDE Include/*.hpp)

add_library(Cobra ${COBRA_INCLUDE} ${COBRA_SOURCE})

