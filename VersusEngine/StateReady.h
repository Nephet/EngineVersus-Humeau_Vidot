#pragma once
#include "AttackState.h"

class StateReady : public AttackState
{
public:
	StateReady(Attack* parState, int parCD);
	~StateReady();

	void Update() override;

};

