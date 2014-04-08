#include "PatrolState.h"

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
	}

	void PatrolState::Execute(GameCharacter* t)
	{
	}

	void PatrolState::Exit(GameCharacter* t)
	{
	}
}