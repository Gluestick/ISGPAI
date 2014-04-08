#pragma once

namespace SDA
{
	template <class T>
	class State
	{
	public:
		void Enter(T& t);
		void Execute(T& t);
		void Exit(T& t);
	};
}