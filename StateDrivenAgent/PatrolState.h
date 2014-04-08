#pragma once

#include "State.h"
#include "GameCharacter.h"

namespace SDA
{
	class PatrolState;

	class PatrolState : public State<GameCharacter>
	{
	public:
		void Enter(GameCharacter& t) override;
		void Execute(GameCharacter& t) override;
		void Exit(GameCharacter& t) override;
		static PatrolState* Instance();
	private:
		PatrolState();
		~PatrolState();
		static PatrolState* _instance;
	};
}