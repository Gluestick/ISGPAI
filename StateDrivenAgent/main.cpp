#include "World.h"
#include <thread>

// Time between updates in ms.
const int IntervalTime = 500;

int main(int argc, char **argv)
{
	// Set random seed.
	srand(time(nullptr));

	SDA::World world;
	while (true)
	{
		world.Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(IntervalTime));
	}
	return 0;
}