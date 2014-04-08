#include "HideState.h"

namespace SDA
{
	// Lazy loading creates object when it is requested.
	HideState* HideState::_instance = nullptr;

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
	}

	void HideState::Execute(GameCharacter* t)
	{
	}

	void HideState::Exit(GameCharacter* t)
	{
	}
}