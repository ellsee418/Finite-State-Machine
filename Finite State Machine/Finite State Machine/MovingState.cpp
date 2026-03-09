#include "MovingState.h"
#include "StateCommon.h"
#include <iostream>

void MovingState::OnEnter()
{
	std::cout << "enter move" << std::endl;
}

void MovingState::OnExit()
{
	std::cout << "exit move" << std::endl;
}

void MovingState::Update()
{
	std::cout << "update move" << std::endl;
}
