#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


void displaw(GLFWwindow* window, double currentTime){
   //glClearColor(0.2f, 0.3f, 0.3f, 1.0f); green
    //glClearColor(0.2f, 0.3f, 0.3f, 1.0f); //blue
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f); //red
    glClear(GL_COLOR_BUFFER_BIT);
}

int main(){

    if (!glfwInit())
    {
        std::cout << "Failed to initialize GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(600, 600, "LearnOpenGL-program1", NULL, NULL);
    glfwMakeContextCurrent(window);

     if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "failed to initialize GLAD " << std::endl;
        return -1;
    }

    glfwSwapInterval(1);

    while (!glfwWindowShouldClose(window))
    {
        displaw(window, glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}