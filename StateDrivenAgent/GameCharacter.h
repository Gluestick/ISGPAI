#pragma once

namespace SDA
{
	class GameCharacter
	{
		GameCharacter();
		~GameCharacter();
		int magic_power() const;
		int magic_power(int val);
		int strength() const;
		int strength(int val);
		void Update();
	};
}