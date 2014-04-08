#pragma once

#include "StateMachine.h"

namespace SDA
{
	class GameCharacter
	{
	public:
		GameCharacter();
		~GameCharacter();
		static const int DefaultStrength;
		int GetStrength() const;
		void SetStrength(int strength);
		void Update();
	private:
		StateMachine<GameCharacter>* _stateMachine;
		int _strength;
	};
}