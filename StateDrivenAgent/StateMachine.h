#pragma once

#include "GameCharacter.h"
#include "State.h"

namespace SDA
{
	template <class T>
	class StateMachine
	{
	public:
		StateMachine(T* entity)
		{
			this->_entity = entity;
		}

		~StateMachine()
		{
			// We do not own _entity. It must be deleted outside of this class.
		}

		void ChangeState(State<T>* newState)
		{
			_previousState = _currentState;
			_currentState = newState;
		}

		void Update()
		{
			if (_currentState)
			{
				_currentState->Execute(_entity);
			}
		}
	private:
		T* _entity;
		State<T>* _currentState;
		State<T>* _previousState;
	};
}