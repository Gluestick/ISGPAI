#pragma once

#include "GameCharacter.h"
#include "State.h"

namespace SDA
{
	template <class T>
	class StateMachine
	{
	public:
		StateMachine(T* entity);
		~StateMachine();
		void ChangeState(&State<T> newState);
	private:
		T* _entity;
	};
}