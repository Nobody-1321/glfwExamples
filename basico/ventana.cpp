#include <glad/glad.h>  // Incluye el archivo de cabecera de GLAD primero
#include <GLFW/glfw3.h>  // Luego incluye el archivo de cabecera de GLFW
#include <iostream>  // Finalmente, incluye otros archivos de cabecera necesarios

void processInput(GLFWwindow *window);
void processChangeColor();

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
        processInput(window);
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    // Limpiar y terminar GLFW
    glfwTerminate();
    return 0;
}
void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
       processChangeColor();
       // glfwSetWindowShouldClose(window, true);
        
}

void processChangeColor(){
 glClearColor(0.2f,0.3f,0.3f,1.0f);
 glClear(GL_COLOR_BUFFER_BIT);
}
