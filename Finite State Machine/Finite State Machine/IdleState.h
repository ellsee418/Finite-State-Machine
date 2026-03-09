#pragma once
#include "IState.h"
class IdleState : public IState
{
public:
	~IdleState() override = default;
	void OnEnter();
	void OnExit();
	void Update();
};

