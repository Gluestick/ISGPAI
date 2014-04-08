#pragma once

#include "State.h"
#include "GameCharacter.h"

namespace SDA
{
	class AttackState : public State<GameCharacter>
	{
		void Enter(GameCharacter& t) override;
		void Execute(GameCharacter& t) override;
		void Exit(GameCharacter& t) override;
	};
}