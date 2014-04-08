#pragma once

namespace SDA
{
	class GameCharacter
	{
		GameCharacter();
		~GameCharacter();
		int GetStrength() const;
		int SetStrength(int strength);
		void Update();
	};
}