#include "IdleState.h"
#include "StateCommon.h"
#include <iostream>

void IdleState::OnEnter()
{
	std::cout << "enter idle" << std::endl;
}

void IdleState::OnExit()
{
	std::cout << "exit idle" << std::endl;
}

void IdleState::Update()
{
	std::cout << "update idle" << std::endl;
}
