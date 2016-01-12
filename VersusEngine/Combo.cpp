#include "Combo.h"

Combo::Combo()
{
}


Combo::~Combo()
{
}

void Combo::Add(Command* cmd)
{
	children.push_back(cmd);
}

void Combo::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	for (int i = 0; i < children.size(); ++i)
	{
		children[i]->Execute(id, m_tabPlayer, cmd);
	}
}