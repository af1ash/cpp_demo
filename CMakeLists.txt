cmake_minimum_required(VERSION 3.18)
project(planning
    VERSION 0.0.1
)
set(cmake_cxx_standard 17)

enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${PROJECT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${PROJECT_SOURCE_DIR}/src/pnc_map)
set(EIGEN3_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/lib/eigen-3.4.0)
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake" )
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package(EIGEN3 3.4 REQUIRED)

if(TARGET Eigen3::Eigen)
    message(STATUS "**** Eigen3 3.4 find in ${EIGEN3_INCLUDE_DIR}")
endif()


add_subdirectory(src)
add_subdirectory(tests/map_test)

# cmake_minimum_required(version 3.18)
# project(planning)
# set(cmake_cxx_standard 17)

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# # set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
# add_library(common
# SHARED
# ${SRC_LISTS}
# )

# target_include_directories(common
# PUBLIC
# ${PROJECT_SOURCE_DIR}/include
# )

# # 可执行文件
# add_executable(planning_main planning_main.cpp)

# target_include_directories(planning_main
# PUBLIC
# ${PROJECT_SOURCE_DIR}/include
# )
# target_link_libraries(planning_main
# PUBLIC
# common
# )



# # cmake_minimum_required(VERSION 3.18)

# # project(torchtest)

# # # include_directories(${PROJECT_SOURCE_DIR}/include)
# # include_directories( ${OpenCV_INCLUDE_DIRS} )

# # set(CMAKE_PREFIX_PATH /Users/lixiaobing/workspace/torch_test/libs/libtorch)

# # find_package(Torch REQUIRED)

# # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

# # add_executable(${PROJECT_NAME} main.cpp)

# # target_link_libraries(${PROJECT_NAME} "${TORCH_LIBRARIES}")

# # set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

# # # The following code block is suggested to be used on Windows.
# # # According to https://github.com/pytorch/pytorch/issues/25457,
# # # the DLLs need to be copied to avoid memory errors.
# # if (MSVC)
# #   file(GLOB TORCH_DLLS "${TORCH_INSTALL_PREFIX}/lib/*.dll")
# #   add_custom_command(TARGET ${PROJECT_NAME}
# #                      POST_BUILD
# #                      COMMAND ${CMAKE_COMMAND} -E copy_if_different
# #                      ${TORCH_DLLS}
# #                      $<TARGET_FILE_DIR:${PROJECT_NAME}>)
# # endif (MSVC)