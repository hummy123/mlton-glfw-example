#include "export.h"
#include "glad.h"
#include <GLFW/glfw3.h>

void gl_ffi () {
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

  GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
  if (window == NULL)
  {
      glfwTerminate();
      return;
  }
  glfwMakeContextCurrent(window);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
      return;
  }

  glViewport(0, 0, 800, 600);

  while(!glfwWindowShouldClose(window))
  {
      glfwSwapBuffers(window);
      glfwWaitEvents();    
  }

  glfwTerminate();
  return;
}

