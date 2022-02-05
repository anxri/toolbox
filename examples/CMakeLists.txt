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

add_executable(toolbox_socket_client client.cpp ${HEADER_FILES} ${SOURCE_FILES} )
add_executable(toolbox_socket_server server.cpp ${HEADER_FILES} ${SOURCE_FILES} )

target_link_libraries(toolbox_socket_client stdc++fs)
target_link_libraries(toolbox_socket_server stdc++fs)

