#pragma once
#include <iostream>

class Attack;

enum State
{
	READY,
	COOLDOWN,
	CAST,
	END,
};

class AttackState
{
public:
	AttackState(Attack * parAttack, int parCD);
	~AttackState();

	virtual void Update() = 0;
	State GetState();

protected:
	State m_idState;
	Attack * m_Attack;
	int m_parCD;
};

