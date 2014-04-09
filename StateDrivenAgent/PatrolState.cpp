#include "PatrolState.h"
#include "AttackState.h"
#include "HideState.h"
#include <iostream>

namespace SDA
{
	// Lazy loading creates object when it is requested.
	PatrolState* PatrolState::_instance = nullptr;
	const int PatrolState::PatrolRarity = 4;

	PatrolState::PatrolState()
	{
	}

	PatrolState::~PatrolState()
	{
	}

	PatrolState* PatrolState::GetInstance()
	{
		// Lazy loading.
		if (!_instance)
		{
			_instance = new PatrolState();
		}
		return _instance;
	}

	void PatrolState::Enter(GameCharacter* t)
	{
		std::cout << "On patrol!" << std::endl;
	}

	void PatrolState::Execute(GameCharacter* t)
	{
		std::cout << "Patroling..." << std::endl;

		// Heal the gamecharacter.
		t->SetStrength(t->GetStrength() + 1);

		// If a patrol is nearby...
		if (rand() % PatrolRarity == 0)
		{
			// Change to fighting if strong enough.
			if (t->GetStrength() > 10)
			{
				t->ChangeState(AttackState::GetInstance());
			}
			else // We're too weak. Hide.
			{
				t->ChangeState(HideState::GetInstance());
			}
		}
	}

	void PatrolState::Exit(GameCharacter* t)
	{
	}
}