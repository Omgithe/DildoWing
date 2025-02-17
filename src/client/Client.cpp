#include "GameInstance.hpp"

#include <thread>
#include <chrono>

int main(void) {
	GameInstance gi;

	gi.Run();

	std::cout << "Exit" << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	return 0;
}