#include "AttackState.h"

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
	}

	void AttackState::Execute(GameCharacter* t)
	{
	}

	void AttackState::Exit(GameCharacter* t)
	{
	}
}