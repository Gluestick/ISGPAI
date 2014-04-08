#pragma once

#include "GameCharacter.h"

namespace SDA
{
	const int GameCharacter::DefaultStrength = 10;

	GameCharacter::GameCharacter()
	{
		_strength = DefaultStrength;
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