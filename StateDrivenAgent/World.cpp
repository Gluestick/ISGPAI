#include "World.h"

namespace SDA
{
	World::World()
	{
		_gameCharacter = new GameCharacter();
	}

	World::~World()
	{
		delete _gameCharacter;
	}

	void World::Update()
	{
		_gameCharacter->Update();
	}
}