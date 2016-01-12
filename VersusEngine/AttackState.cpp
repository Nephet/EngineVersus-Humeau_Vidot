#include "AttackState.h"
#include "Attack.h"


AttackState::AttackState(Attack * parAttack, int parCD)
{
	m_idState = State::READY;
	m_Attack = parAttack;
	m_parCD = parCD;
}


AttackState::~AttackState()
{
}


State AttackState::GetState()
{
	return m_idState;
}