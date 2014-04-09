#include "HideState.h"
#include "PatrolState.h"
#include <iostream>

namespace SDA
{
	// Lazy loading creates object when it is requested.
	HideState* HideState::_instance = nullptr;
	const int HideState::PatrolGoneChance = 25;

	HideState::HideState()
	{
	}

	HideState::~HideState()
	{
	}

	HideState* HideState::GetInstance()
	{
		// Lazy loading.
		if (!_instance)
		{
			_instance = new HideState();
		}
		return _instance;
	}

	void HideState::Enter(GameCharacter* t)
	{
		std::cout << "Enemy in sight!" << std::endl;
	}

	void HideState::Execute(GameCharacter* t)
	{
		std::cout << "Hiding..." << std::endl;

		// Healing...
		t->SetStrength(t->GetStrength() + 1);
		
		if (rand() % 99 + 1 < PatrolGoneChance)
		{
			t->ChangeState(PatrolState::GetInstance());
		}
	}

	void HideState::Exit(GameCharacter* t)
	{
		std::cout << "It's safe again." << std::endl;
	}
}