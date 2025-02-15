#ifndef GAME_INSTANCE_HPP
#define GAME_INSTANCE_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class GameInstance
{
public:
	GameInstance();
	~GameInstance();
	void Run();
	void test()
	{
	}

private:
	GLFWwindow *window = nullptr;
};

#endif