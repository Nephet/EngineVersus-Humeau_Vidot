#pragma once
#include "AttackState.h"

class StateCast : public AttackState
{
public:
	StateCast(Attack* parState, int parCD);
	~StateCast();

	void Update() override;

private:
	float m_castTimer;
};

