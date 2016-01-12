#pragma once
#include "AttackState.h"

class StateEnd : public AttackState
{
public:
	StateEnd(Attack* parState, int parCD);
	~StateEnd();

	void Update() override;


};

