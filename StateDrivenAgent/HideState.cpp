#include "HideState.h"
#include <iostream>

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
		std::cout << "Enemy in sight!" << std::endl;
	}

	void HideState::Execute(GameCharacter* t)
	{
		std::cout << "Hiding..." << std::endl;
	}

	void HideState::Exit(GameCharacter* t)
	{
		std::cout << "It's safe again." << std::endl;
	}
}