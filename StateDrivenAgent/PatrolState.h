#pragma once

#include "State.h"
#include "GameCharacter.h"

namespace SDA
{
	class PatrolState;

	class PatrolState : public State<GameCharacter>
	{
	public:
		void Enter(GameCharacter* t) override;
		void Execute(GameCharacter* t) override;
		void Exit(GameCharacter* t) override;

		// Get the singleton instance of AttackState.
		static PatrolState* GetInstance();
	private:
		PatrolState();
		~PatrolState();
		static PatrolState* _instance;
	};
}