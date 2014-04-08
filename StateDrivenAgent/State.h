#pragma once

namespace SDA
{
	template <class T>
	class State
	{
	public:
		virtual void Enter(T& t) = 0;
		virtual void Execute(T& t) = 0;
		virtual void Exit(T& t) = 0;
	};
}