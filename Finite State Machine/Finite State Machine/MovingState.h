#pragma once
#include "IState.h"
class MovingState : public IState
{
public:
	~MovingState() override = default;
	void OnEnter();
	void OnExit();
	void Update();
};

