#pragma once
#include <iostream>
#include "Character.h"
#include <vector>
#include "InputHandler.h"

class Command
{
public:
	Command();
	~Command();

	virtual void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) = 0;
};

