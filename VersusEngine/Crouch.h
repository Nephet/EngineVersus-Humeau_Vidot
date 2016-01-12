#pragma once
#include "Command.h"

class Crouch : public Command
{
public:
	Crouch();
	~Crouch();

	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;

	
};


