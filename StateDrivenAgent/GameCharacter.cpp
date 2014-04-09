#pragma once

#include "GameCharacter.h"
#include "PatrolState.h"

namespace SDA
{
	const int GameCharacter::DefaultStrength = 10;

	GameCharacter::GameCharacter()
	{
		_strength = DefaultStrength;
		_stateMachine = new StateMachine<GameCharacter>(this);
		_stateMachine->ChangeState(PatrolState::GetInstance());
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

	void GameCharacter::ChangeState(State<GameCharacter>* newState)
	{
		_stateMachine->ChangeState(newState);
	}
}