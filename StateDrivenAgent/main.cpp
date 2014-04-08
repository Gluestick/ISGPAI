#include "AttackState.h"
#include "PatrolState.h"

using namespace SDA;

int main(int argc, char **argv)
{
	AttackState* attackState = AttackState::Instance();
	PatrolState* patrolState = PatrolState::Instance();
	return 0;
}