#include "StateCast.h"
#include "Attack.h"



StateCast::StateCast(Attack* parState, int parCD) : AttackState(parState,parCD)
{
	m_idState = State::CAST;
}


StateCast::~StateCast()
{
}

void StateCast::Update()
{
	m_Attack-> ChangeState(State::COOLDOWN);
}
