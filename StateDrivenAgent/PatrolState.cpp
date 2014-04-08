#include "PatrolState.h"
#include <iostream>

namespace SDA
{
	// Lazy loading creates object when it is requested.
	PatrolState* PatrolState::_instance = nullptr;

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
	}

	void PatrolState::Exit(GameCharacter* t)
	{
	}
}