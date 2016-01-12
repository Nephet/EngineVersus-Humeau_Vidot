#pragma once
#include "Command.h"

class MoveRight : public Command
{
public:
	MoveRight();
	~MoveRight();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;
};

