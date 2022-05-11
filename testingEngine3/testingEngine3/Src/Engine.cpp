#include "Engine.h"



//static void glfw_error_callback(int error, const char* description)
//{
//	fprintf(stderr, "Glfw Error %d: %s\n", error, description);
//}
//
//BaseGame::BaseGame() {}
//BaseGame::~BaseGame() {}
//
//int BaseGame::MainLoop(int width, int height, const char* windowName)
//{
//	if (InitEngine(width, height, windowName))
//	{
//		Init();
//		while (!glfwWindowShouldClose(window)) {
//
//			glClearColor(0, 0, 0, 0);
//			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//			Update();
//			Draw();
//		}
//	}
//	Deinit();
//	DeinitEngine();
//	return 0;
//}
//void BaseGame::DeinitEngine()
//{
//	glfwTerminate();
//}
//bool BaseGame::InitEngine(int windowSizeX, int windowSizeY, std::string windowName)
//{
//	std::cout << "+Init Engine" << std::endl;
//	glfwSetErrorCallback(glfw_error_callback);
//	if (!glfwInit())
//		return false;
//	if (!InitWindow(windowSizeX, windowSizeY, windowName))
//		return false;
//	if (!InitGlew())
//		return false;
//	std::cout << "-Init Engine" << std::endl;
//	return true;
//}
//
//bool BaseGame::InitGlew() {
//	//if (glewInit() != GLEW_OK) // tiene que ir despues de la creacion del contexto de glfw si o si
//	//{
//	//	std::cout << "Glew error" << std::endl;
//	//	return false;
//	//}
//	return true;
//}
//bool BaseGame::InitWindow(int w, int h, std::string name) {
//	window = glfwCreateWindow(w, h, name.c_str(), NULL, NULL);
//	if (window == nullptr)
//	{
//		glfwTerminate();
//		return false;
//	}
//	glfwMakeContextCurrent(window);
//	return true;
//}
