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

		// Get the singleton instance of PatrolState.
		static PatrolState* GetInstance();
	private:
		// 1 = 100%, 2 = 50%, 3 = 33%, etc...
		static const int PatrolRarity;
		PatrolState();
		~PatrolState();
		static PatrolState* _instance;
	};
}