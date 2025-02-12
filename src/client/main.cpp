#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    //glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(640, 480, "Wing Client", NULL, NULL);

    if (!window)
    {
        std::cout << "glfwCreateWindow failed" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGL())
    {
        std::cout << "gladLoadGL failed" << std::endl;
        return -1;
    }
    
    std::cout << "Renderer: " << glGetString(GL_RENDERER) << "\nOpenGL: " << glGetString(GL_VERSION) << std::endl;
    std::cout << "c++ version " << __cplusplus << std::endl;
    
    glfwSwapInterval(1);

    glClearColor(0, 1, 0, 1);
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    std::cout << "Exit process" << std::endl;

    glfwTerminate();
    return 0;
}