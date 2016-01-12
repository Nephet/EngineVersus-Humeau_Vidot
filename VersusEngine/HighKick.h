#pragma once
#include "Command.h"
#include "HighKickAttack.h"

class HighKick : public Command
{
public:
	HighKick();
	~HighKick();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;
	bool create;
	HighKickAttack* highKickAttack;
};

