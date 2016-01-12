#pragma once
#include "Attack.h"
#include "StateReady.h"
#include "StateCast.h"
#include "StateCooldown.h"
#include "StateEnd.h"

class HighKickAttack : public Attack
{
public:
	HighKickAttack();
	~HighKickAttack();

	void Execute(int id, std::vector<Character*>* m_tabPlayer) override;
	void ChangeState(State parState) override;

	StateReady * stateReady;
	StateCast * stateCast;
	StateCooldown * stateCooldown;
	StateEnd * stateEnd;

};

