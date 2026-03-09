#pragma once
#include <unordered_map>
enum StateType;
class IState;
class StateManager
{
public:
	StateManager() = default;
	void AddState(StateType type, IState* newState);
	void ChangeState(StateType type);
	void Update();

	~StateManager() = default;


private:
	IState* m_state = nullptr;
	std::unordered_map<StateType, IState*> m_stateMap;
	bool b_init = false;
};

