#include "StateManager.h"
#include "IState.h"
#include "StateCommon.h"
#include <iostream>

int main()
{
	StateManager stateManager;
	stateManager.AddState(STATE_IDLE, new IdleState);
	stateManager.AddState(STATE_MOVE, new MovingState);
	stateManager.AddState(STATE_ATTACK, new AttackingState);
	char input = ' ';
	while (input != 'q')
	{
		stateManager.Update();
		std::cin >> input;
		if (input == 'i')
			stateManager.ChangeState(STATE_IDLE);
		if (input == 'a')
			stateManager.ChangeState(STATE_ATTACK);
		if (input == 'm')
			stateManager.ChangeState(STATE_MOVE);
	}

	return 0;
}