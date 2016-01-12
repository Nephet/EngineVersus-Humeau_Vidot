#pragma once
#include "Command.h"
#include "LowKickAttack.h"

class LowKick : public Command
{
public:
	LowKick();
	~LowKick();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;
	int cooldown = 10;
	bool create;
	LowKickAttack* lowKickAttack;

};

