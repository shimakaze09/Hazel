cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 14)
find_package(OpenGL REQUIRED)

project(hazel)

add_compile_definitions(HZ_BUILD_DLL)

set(SRC_LIST
        src/Hazel/Application.cpp
        src/Hazel/Log.cpp
        src/Hazel/Platform/Windows/WindowsWindow.cpp
        src/Hazel/glad.c
)

add_library(hazel ${SRC_LIST})
add_subdirectory(vendor/GLFW)

target_link_libraries(${PROJECT_NAME} glfw)
target_include_directories(${PROJECT_NAME} PUBLIC
        vendor/spdlog/include
        vendor/GLFW/include
        src/Hazel/Core
        src/Hazel/Events
        src/Hazel
        src/Hazel/Platform/include
)
