#pragma once
#include "AttackState.h"
#include <map>
#include <vector>
#include "Character.h"
#include <stdlib.h> 

class Attack
{
public:
	Attack();
	~Attack();

	virtual void Execute(int id, std::vector<Character*>* m_tabPlayer) = 0;
	virtual void ChangeState(State parState) = 0;
	
	int m_damage = 2;
	int m_range = 2;
	AttackState* m_currentState;
	std::map<State, AttackState*> * m_mapState;
};

