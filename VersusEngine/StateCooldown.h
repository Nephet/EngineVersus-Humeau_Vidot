#pragma once
#include "AttackState.h"
#include <cstdio>
#include <ctime>

class StateCooldown : public AttackState
{
public:
	StateCooldown(Attack* parState, int parCD);
	~StateCooldown();

	void Update() override;
	float m_cooldownTimer;
	clock_t startTime;
	float maxTime;
	float currentTime;

	
};

