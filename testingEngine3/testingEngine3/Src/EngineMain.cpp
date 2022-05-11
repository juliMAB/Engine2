#include "Engine.h"
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include <GLM/glm.hpp>
int main() {

    GLFWwindow* window;
	glm::vec3 a = { 1,1,1 };
	if (!glfwInit())
		return -1;
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK) // tiene que ir despues de la creacion del contexto de glfw si o si
	{
		std::cout << "Glew error" << std::endl;
		return false;
	}

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}