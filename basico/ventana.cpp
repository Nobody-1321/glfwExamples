#include <glad/glad.h>  // Incluye el archivo de cabecera de GLAD primero
#include <GLFW/glfw3.h>  // Luego incluye el archivo de cabecera de GLFW
#include <iostream>  // Finalmente, incluye otros archivos de cabecera necesarios


int main() {
    // Inicializar GLFW
    if (!glfwInit()) {
        return -1;
    }

    // Crear una ventana
    GLFWwindow* window = glfwCreateWindow(800, 600, "Mi Ventana", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Configurar el contexto OpenGL
    glfwMakeContextCurrent(window);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "failed to initialize GLAD " << std::endl;
        return -1;
    }
    // Bucle principal
    while (!glfwWindowShouldClose(window)) {
        // Renderizar aquí

        // Intercambiar los buffers y procesar los eventos
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Limpiar y terminar GLFW
    glfwTerminate();
    return 0;
}
