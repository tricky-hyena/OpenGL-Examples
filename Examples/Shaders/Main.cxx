#include "GLFW/glfw3.h"

int main()
{
    glfwInit();

    /* OpenGL version: 3.3 */

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    glfwWindowHint(
        GLFW_OPENGL_PROFILE,
        GLFW_OPENGL_CORE_PROFILE
    );

    glfwWindowHint(
        GLFW_OPENGL_FORWARD_COMPAT,
        GL_TRUE
    );
    
    GLFWwindow* window
        = glfwCreateWindow(800, 600, "Shaders", NULL, NULL);
    
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
        glfwPollEvents();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}