#pragma once

#include "State.h"
#include "GameCharacter.h"

namespace SDA
{
	class AttackState;

	class AttackState : public State<GameCharacter>
	{
	public:
		void Enter(GameCharacter* t) override;
		void Execute(GameCharacter* t) override;
		void Exit(GameCharacter* t) override;

		// Get the singleton instance of AttackState.
		static AttackState* GetInstance();
	private:
		AttackState();
		~AttackState();
		static AttackState* _instance;
	};
}