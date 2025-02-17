#ifndef GAME_INSTANCE_HPP
#define GAME_INSTANCE_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <asio.hpp>

#include <iostream>

class GameInstance
{
public:
	GameInstance();
	~GameInstance();
	void Run();
private:
	GLFWwindow* window = nullptr;

	asio::io_context io_context;
};

#endif