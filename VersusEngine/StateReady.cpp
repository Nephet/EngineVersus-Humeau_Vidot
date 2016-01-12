#include "StateReady.h"
#include "Attack.h"


StateReady::StateReady(Attack* parState, int parCD) : AttackState(parState, parCD)
{
	m_idState = State::READY;
}


StateReady::~StateReady()
{
}

void StateReady::Update()
{
	m_Attack->ChangeState(State::CAST);
}
