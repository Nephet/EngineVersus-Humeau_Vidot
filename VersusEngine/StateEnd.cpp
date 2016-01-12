#include "StateEnd.h"
#include "Attack.h"



StateEnd::StateEnd(Attack* parState, int parCD) : AttackState(parState, parCD)
{
	m_idState = State::END;

}


StateEnd::~StateEnd()
{
}

void StateEnd::Update()
{

}
