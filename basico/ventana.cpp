#include <GLFW/glfw3.h>

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
