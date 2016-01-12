#pragma once
#include "Command.h"

class Block : public Command
{
public:
	Block();
	~Block();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;

	
};

