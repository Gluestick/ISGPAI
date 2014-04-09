#include "AttackState.h"
#include "HideState.h"
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
		std::cout << "Fighting..." << std::endl;

		// Make the gamecharacter weaker.
		t->SetStrength(t->GetStrength() - 1);

		// We're wounded, go hide!
		if (t->GetStrength() < 5)
		{
			t->ChangeState(HideState::GetInstance());
		}
	}

	void AttackState::Exit(GameCharacter* t)
	{
		std::cout << "I give up." << std::endl;
	}
}