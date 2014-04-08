#include "World.h"
#include <thread>

// Time between updates in ms.
const int IntervalTime = 1000;

int main(int argc, char **argv)
{
	SDA::World world;
	while (true)
	{
		world.Update();
		std::this_thread::sleep_for(std::chrono::milliseconds(IntervalTime));
	}
	return 0;
}