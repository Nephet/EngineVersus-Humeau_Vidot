#pragma once
#include "Command.h"

class Jump : public Command
{
public:
	Jump();
	~Jump();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;

	
};

