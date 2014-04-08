#pragma once

#include "GameCharacter.h"

namespace SDA
{
	GameCharacter::GameCharacter()
	{
		_stateMachine = new StateMachine<GameCharacter>(this);
	}

	GameCharacter::~GameCharacter()
	{
		delete _stateMachine;
	}

	int GameCharacter::GetStrength() const
	{
		return _strength;
	}

	void GameCharacter::SetStrength(int strength)
	{
		_strength = strength;
	}

	void GameCharacter::Update()
	{
		_stateMachine->Update();
	}
}