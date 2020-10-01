#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;

int main() {
	//Init GLFW
	if (glfwInit() == GLFW_FALSE) {
		cout << "Failed to initialize Glad" << endl;
		return 1;
	}

	//Create new GLFW window
	GLFWwindow* window = glfwCreateWindow(300, 300, "100745472", nullptr, nullptr);
	//Want GL commands to be executed for our window, so make our window's context the current one
	glfwMakeContextCurrent(window);

	//Let Glad know what function loader we are using (will call gl commands via glfw)
	if (gladLoadGLLoader((GLADloadproc)glfwGetProcAddress) == 0) {
		cout << "Failed to initialize Glad" << endl;
		return 2;
	}

	cout << glGetString(GL_RENDERER) << endl;
	cout << glGetString(GL_VERSION) << endl;

	while (!glfwWindowShouldClose(window)) {
		//poll for events from windows, (clicks, keypress, closing)
		glfwPollEvents();

		//clear our screen every frame
			         //red green blue alpha
		glClearColor(0.3f, 0.1f, 0.7f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//present our image to windows
		glfwSwapBuffers(window);
	}

	return 0;
}