#pragma once

#include "IdleState.h"
#include "AttackingState.h"
#include "MovingState.h"

enum StateType
{
	STATE_IDLE = 0,
	STATE_MOVE,
	STATE_ATTACK,
};