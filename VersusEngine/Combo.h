#pragma once
#include "Command.h"
#include <vector>

class Combo : public Command
{
public:
	Combo();
	~Combo();

	void Add(Command* cmd);
	void Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd) override;

	std::vector<Command*> children;
};

