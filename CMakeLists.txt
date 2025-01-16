cmake_minimum_required(VERSION 3.5)
project(RM_Project2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w -O3 -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g")

include_directories(${CMAKE_SOURCE_DIR}/include/)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB_RECURSE sources ${CMAKE_SOURCE_DIR}/src/*.cc)

# 添加可执行文件
add_executable(TEST main.cc ${sources})#改这里

target_link_libraries(TEST ${OpenCV_LIBS})


# # 定义函数，用于添加可执行文件
# function(add_auto_executable source_file)
#     # 获取源文件的名称（不包含扩展名）
#     get_filename_component(executable_name ${source_file} NAME_WE)
    
#     # 添加可执行文件
#     add_executable(${executable_name} ${source_file})

#     if(OpenCV_FOUND)
#         target_link_libraries(${executable_name} ${OpenCV_LIBS})
#     endif()
# endfunction()

# # 遍历所有源文件，调用add_auto_executable函数
# foreach(source_file IN LISTS sources)
#     add_auto_executable(${source_file})
# endforeach()


# add_executable(flip_Ball  flip_Ball.cc )
# target_link_libraries(flip_Ball ${OpenCV_LIBS})
# add_executable(helloworld helloworld.cc )
# target_link_libraries(helloworld ${OpenCV_LIBS})