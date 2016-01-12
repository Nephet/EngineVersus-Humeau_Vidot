#include "StateCooldown.h"
#include "Attack.h"



StateCooldown::StateCooldown(Attack* parState, int parCD) : AttackState(parState, parCD)
{
	m_idState = State::COOLDOWN;
	m_cooldownTimer = 0;
	startTime = clock();
	maxTime = parCD;

}


StateCooldown::~StateCooldown()
{
}

void StateCooldown::Update()
{
	currentTime = (std::clock() - startTime) / CLOCKS_PER_SEC;
	if (currentTime >= maxTime) {
		//cooldown
		m_cooldownTimer = 0;
		m_Attack->ChangeState(State::END);
	}
	
}
