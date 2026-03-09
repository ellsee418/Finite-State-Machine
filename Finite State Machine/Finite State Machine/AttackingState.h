#pragma once
#include "IState.h"
class AttackingState : public IState
{
public:
	~AttackingState() override = default;
	void OnEnter();
	void OnExit();
	void Update();
};

