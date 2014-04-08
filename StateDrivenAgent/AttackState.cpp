#include "AttackState.h"
#include <iostream>

namespace SDA
{
	// Lazy loading creates object when it is requested.
	AttackState* AttackState::_instance = nullptr;

	AttackState::AttackState()
	{
	}

	AttackState::~AttackState()
	{
	}

	AttackState* AttackState::GetInstance()
	{
		// Lazy loading.
		if (!_instance)
		{
			_instance = new AttackState();
		}
		return _instance;
	}

	void AttackState::Enter(GameCharacter* t)
	{
		std::cout << "Start the fight!" << std::endl;
	}

	void AttackState::Execute(GameCharacter* t)
	{
		std::cout << "Fighting" << std::endl;
	}

	void AttackState::Exit(GameCharacter* t)
	{
		std::cout << "I give up." << std::endl;
	}
}