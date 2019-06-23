#include <shaderc/shaderc.h>

#include <assimp/Importer.hpp>

#include <glm/vec3.hpp>

#include <GLFW/glfw3.h>

int main(char** argv, int argc)
{
  auto compiler = shaderc_compiler_initialize();

  Assimp::Importer importer;
  const aiScene* scene = importer.ReadFile("yomomma", 0);

  glm::vec3 a = glm::vec3(1.0f, 1.0f, 1.0f);
  glm::vec3 b = a + glm::vec3(1.0f, 1.0f, 1.0f);

  glfwInit();

  glfwCreateWindow(1280, 720, "titel", nullptr, nullptr);

  printf("%i", (int)scene + b.x);

  return 0;
}