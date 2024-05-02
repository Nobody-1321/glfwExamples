cmake_minimum_required(VERSION 3.25)

project(glfwProject VERSION 2.0.1 LANGUAGES CXX)

set(SOURCE_MAIN_DIR basico)
set(MAIN_SOURCE 
    ${SOURCE_MAIN_DIR}/3dCube.cpp
    ${SOURCE_MAIN_DIR}/Utils.cpp
    ${SOURCE_MAIN_DIR}/Utils.hpp
    )

set(LIBRARIES_DIR libs)
set(LIBRARIES glad)

add_executable(glfwProject ${MAIN_SOURCE})

find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_subdirectory(${LIBRARIES_DIR}/${LIBRARIES})

target_link_libraries(glfwProject glad glfw glm::glm)
