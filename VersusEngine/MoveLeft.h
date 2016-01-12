#pragma once
#include "Command.h"

class MoveLeft : public Command
{
public:
	MoveLeft();
	~MoveLeft();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;
};

