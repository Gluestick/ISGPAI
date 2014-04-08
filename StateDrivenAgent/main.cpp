#include "AttackState.h"
#include "PatrolState.h"

using namespace SDA;

int main(int argc, char **argv)
{
	AttackState* attackState = AttackState::GetInstance();
	PatrolState* patrolState = PatrolState::GetInstance();
	return 0;
}