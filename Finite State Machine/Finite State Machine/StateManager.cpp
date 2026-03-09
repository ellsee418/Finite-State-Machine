#include "StateManager.h"
#include "IState.h"
#include "StateCommon.h"

void StateManager::AddState(StateType type, IState* newState)
{
	if (!b_init)
	{
		m_stateMap.insert({ type, newState });
		if (!m_state)
			m_state = newState;
	}
}

void StateManager::ChangeState(StateType type)
{
	b_init = true;

	auto it = m_stateMap.find(type);
	if (it == m_stateMap.end() || !m_state)
		return;

	m_state->OnExit();
	m_state = m_stateMap[type];
	m_state->OnEnter();
}

void StateManager::Update()
{
	if (!m_state)
		return;
	m_state->Update();
}