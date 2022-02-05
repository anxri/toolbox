cmake_minimum_required(VERSION 3.21)
project(toolbox)

set(CMAKE_CXX_STANDARD 17)

file(
        GLOB HEADER_FILES

        "../src/*.h" ,
)

file(
        GLOB SOURCE_FILES

        "../src/*.cpp" ,
)

include_directories(../src)

add_executable(socket_client client.cpp ${HEADER_FILES} ${SOURCE_FILES} )
add_executable(socket_server server.cpp ${HEADER_FILES} ${SOURCE_FILES} )

target_link_libraries(socket_client stdc++fs)
target_link_libraries(socket_server stdc++fs)

