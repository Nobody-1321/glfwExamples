cmake_minimum_required(VERSION 3.25)
project(glfwProject VERSION 2.0.1 LANGUAGES CXX)

set(SOURCE_MAIN_DIR basico)
set(MAIN_SOURCE ${SOURCE_MAIN_DIR}/ventana.cpp)

set(LIBRARIES_DIR libs)
set(LIBRARIES glad)


#message("este es el path de --------${LIBRARIES_DIR}/${LIBRARIES}")

add_executable(glfwProject ${MAIN_SOURCE})

find_package(glfw3 REQUIRED)
target_link_libraries(glfwProject glfw)

add_subdirectory(${LIBRARIES_DIR}/${LIBRARIES})
target_link_libraries(glfwProject glad)

