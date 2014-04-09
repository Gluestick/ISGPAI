#pragma once

#include "State.h"
#include "GameCharacter.h"

namespace SDA
{
	class HideState;

	class HideState : public State<GameCharacter>
	{
	public:
		void Enter(GameCharacter* t) override;
		void Execute(GameCharacter* t) override;
		void Exit(GameCharacter* t) override;

		// Get the singleton instance of HideState.
		static HideState* GetInstance();
	private:
		// Chance in percentage.
		static const int PatrolGoneChance;
		HideState();
		~HideState();
		static HideState* _instance;
	};
}