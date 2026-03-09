#include "AttackingState.h"
#include "StateCommon.h"
#include <iostream>

void AttackingState::OnEnter()
{
	std::cout << "enter attack" << std::endl;
}

void AttackingState::OnExit()
{
	std::cout << "exit attack" << std::endl;
}

void AttackingState::Update()
{
	std::cout << "update attack" << std::endl;
}
