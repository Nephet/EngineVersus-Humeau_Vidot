#include "LowKickAttack.h"


LowKickAttack::LowKickAttack() : Attack()
{
	int CDtime = 4;

	m_mapState = new std::map<State, AttackState*>();

	stateReady = new StateReady(this,0);
	m_mapState->insert(std::pair<State, AttackState*>(stateReady->GetState(), stateReady));
	
	stateCast = new StateCast(this,0);
	m_mapState->insert(std::pair<State, AttackState*>(stateCast->GetState(), stateCast));

	stateCooldown = new StateCooldown(this, CDtime);
	m_mapState->insert(std::pair<State, AttackState*>(stateCooldown->GetState(), stateCooldown));

	stateEnd = new StateEnd(this,0);
	m_mapState->insert(std::pair<State, AttackState*>(stateEnd->GetState(), stateEnd));

	m_currentState = stateReady;
}


LowKickAttack::~LowKickAttack()
{
	for (std::map<State, AttackState*>::iterator it = m_mapState->begin(); it != m_mapState->end(); ++it)
	{
		delete it->second;
	}
	m_mapState->clear();
	delete m_mapState;
}

void LowKickAttack::Execute(int id, std::vector<Character*>* m_tabPlayer)
{
	int otherID = 0;
	if (m_currentState == stateReady)
	{
		if (id == 1) {
			otherID = 2;
		}
		else
		{
			otherID = 1;
		}

		int distance = abs(m_tabPlayer->at(id - 1)->xPos - m_tabPlayer->at(otherID - 1)->xPos);

		if (m_tabPlayer->at(otherID - 1)->m_playerState != playerState::JUMP && distance <= m_range)
		{
			std::cout << m_damage << std::endl;
			if (m_tabPlayer->at(otherID - 1)->m_playerState == playerState::BLOCK)
			{
				m_tabPlayer->at(otherID - 1)->life -= m_damage / 2;
			}
			else {
				m_tabPlayer->at(otherID - 1)->life -= m_damage;
			}
		}
	}
	m_currentState->Update();
		
}
void LowKickAttack::Update()
{
}


void LowKickAttack::ChangeState(State parState)
{
	m_currentState = m_mapState->at(parState);
}
