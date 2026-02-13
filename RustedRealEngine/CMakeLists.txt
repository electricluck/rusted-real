cmake_minimum_required(VERSION 3.16)
project(RustedRealEngine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# -------------------------
# FetchContent for dependencies
# -------------------------
include(FetchContent)

# GLFW
FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw.git
    GIT_TAG 3.3.10
)
FetchContent_MakeAvailable(glfw)

# GLAD
FetchContent_Declare(
    glad
    GIT_REPOSITORY https://github.com/Dav1dde/glad.git
    GIT_TAG v0.1.34
)
FetchContent_MakeAvailable(glad)

# GLM
FetchContent_Declare(
    glm
    GIT_REPOSITORY https://github.com/g-truc/glm.git
    GIT_TAG 0.9.9.8
)
FetchContent_MakeAvailable(glm)

# stb_image
FetchContent_Declare(
    stb
    GIT_REPOSITORY https://github.com/nothings/stb.git
    GIT_TAG master
)
FetchContent_MakeAvailable(stb)

# ImGui
FetchContent_Declare(
    imgui
    GIT_REPOSITORY https://github.com/ocornut/imgui.git
    GIT_TAG v1.91.1
)
FetchContent_MakeAvailable(imgui)

# -------------------------
# Source files
# -------------------------
file(GLOB_RECURSE ENGINE_SOURCES src/*.cpp)
file(GLOB_RECURSE ENGINE_HEADERS src/*.h)

# -------------------------
# ImGui + backends
# -------------------------
set(IMGUI_SOURCES
    ${imgui_SOURCE_DIR}/imgui.cpp
    ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_widgets.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_opengl3.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
)

# -------------------------
# Executable
# -------------------------
add_executable(RustedRealEngine
    ${ENGINE_SOURCES}
    ${ENGINE_HEADERS}
    ${IMGUI_SOURCES}
)

# -------------------------
# Include directories
# -------------------------
target_include_directories(RustedRealEngine PRIVATE
    ${glfw_SOURCE_DIR}/include
    ${glad_SOURCE_DIR}/include
    ${glm_SOURCE_DIR}
    ${stb_SOURCE_DIR}
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)

# -------------------------
# Link libraries
# -------------------------
target_link_libraries(RustedRealEngine PRIVATE
    glfw
    glad
    ${CMAKE_DL_LIBS}  # Linux dynamic linking
)

# -------------------------
# Compile options
# -------------------------
if(MSVC)
    target_compile_options(RustedRealEngine PRIVATE /W4 /WX)
else()
    target_compile_options(RustedRealEngine PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

