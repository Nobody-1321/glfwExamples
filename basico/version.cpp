#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    // Inicializar GLFW
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Crear una ventana de GLFW (código omitido por brevedad)

    // Inicializar GLAD para cargar las funciones de OpenGL
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // Obtener la versión de OpenGL
    std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;

    // Terminar GLFW
    glfwTerminate();

    return 0;
}
