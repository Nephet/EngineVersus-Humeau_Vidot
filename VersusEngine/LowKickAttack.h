#pragma once
#include "Attack.h"
#include "StateReady.h"
#include "StateCast.h"
#include "StateCooldown.h"
#include "StateEnd.h"

class LowKickAttack : public Attack
{
public:
	LowKickAttack();
	~LowKickAttack();

	void Execute(int id, std::vector<Character*>* m_tabPlayer) override;
	void ChangeState(State parState) override;
	void Update();

	StateReady * stateReady;
	StateCast * stateCast;
	StateCooldown * stateCooldown;
	StateEnd * stateEnd;
};

