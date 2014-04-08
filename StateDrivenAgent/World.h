#pragma once

#include "GameCharacter.h"

namespace SDA
{
	class World
	{
	public:
		World();
		~World();
		void Update();
	private:
		GameCharacter* _gameCharacter;
	};
}