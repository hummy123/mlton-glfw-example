#include "export.h"
#include "glad.h"
#include <GLFW/glfw3.h>

void gl_ffi () {
  glfwInit();
  glfwWindowHint(GLFW_DECORATED, GLFW_FALSE);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);

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

