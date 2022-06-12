// playing around with api & basic rendering
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

GLFWwindow* gl_init(void) {
  // opengl has a lot of boilerplate
  // its best to create a template and never worry about it again lol
  glfwSetErrorCallback(
    [] (int id, const char* emsg) -> void {
      std::cout<<emsg<<std::endl;
    }
  );

  if (!glfwInit()) return 0;
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  GLFWwindow* window = glfwCreateWindow(800, 600, "random window", 0, 0);
  if (!window) {
    std::cerr<<"Could not create window!"<<std::endl;
    glfwTerminate();
    return 0;
  }
  glfwMakeContextCurrent(window);
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cerr<<"Could not initialize glad!"<<std::endl;
    return 0;
  }
  glViewport(0, 0, 800, 600);
  glfwSetFramebufferSizeCallback(window,
    [] (GLFWwindow* window, int w, int h) -> void {
      glViewport(0, 0, w, h);
      return;
    }
  );
  return window;
}

int main(int argc, char**argv) {
  const char* vert_shader_src = "#version 330 core\n"
      "layout (location = 0) in vec3 aPos;\n"
      "void main()\n"
      "{\n"
      "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
      "}\0";
  unsigned int vert_shader = glCreateShader(GL_VERTEX_SHADER);
  glShaderSource(vert_shader, 1, &vert_shader_src, 0);
  glCompileShader(vert_shader);
//  const char* frag_shader_src = "";

  GLFWwindow* window = gl_init();
  if (!window)
    return -1;
  while (!glfwWindowShouldClose(window)) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
      glfwSetWindowShouldClose(window, true);

    glClearColor(0.2f, 0.2f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // coordinate format: x, y, z
    

    glfwSwapBuffers(window);
    glfwPollEvents();
  }
  glfwTerminate();
  return 0;
}
