#include "GameInstance.hpp"

GameInstance::GameInstance() {

}

GameInstance::~GameInstance() {
	glfwTerminate();
}

void GameInstance::Run() {

	if (!glfwInit()) {
		exit(-1);
	}

	window = glfwCreateWindow(640, 480, "Wing Client", NULL, NULL);

	if (!window) {
		std::cout << "glfwCreateWindow failed" << std::endl;
		glfwTerminate();
		exit(-1);
	}

	glfwMakeContextCurrent(window);

	if (!gladLoadGL()) {
		std::cout << "gladLoadGL failed" << std::endl;
		exit(-1);
	}

	std::cout << "Renderer: " << glGetString(GL_RENDERER) << "\nOpenGL: " << glGetString(GL_VERSION) << std::endl;
	std::cout << "c++ version " << __cplusplus << std::endl;

	glfwSwapInterval(1);

	glClearColor(0, 1, 0, 1);
	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}