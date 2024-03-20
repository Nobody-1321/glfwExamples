cmake_minimum_required(VERSION 3.25)
project(glfwProject VERSION 2.0.1 LANGUAGES CXX)

set(SOURCE_MAIN_DIR basico)
set(MAIN_SOURCE ${SOURCE_MAIN_DIR}/trangleRectan.cpp)

set(LIBRARIES_DIR libs)
set(LIBRARIES glad)

add_executable(glfwProject ${MAIN_SOURCE})


find_package(glfw3 REQUIRED)

# Incluir la biblioteca GLFW de forma estática
set(GLFW_BUILD_STATIC_LIBS OFF)
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)

target_link_libraries(glfwProject glfw)

add_subdirectory(${LIBRARIES_DIR}/${LIBRARIES})
target_link_libraries(glfwProject glad)

