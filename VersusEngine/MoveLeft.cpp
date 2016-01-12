#include "MoveLeft.h"



MoveLeft::MoveLeft()
{
}


MoveLeft::~MoveLeft()
{
}

void MoveLeft::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	if (m_tabPlayer->at(id - 1)->xPos - m_tabPlayer->at(id - 1)->speed > 0)
	{
		m_tabPlayer->at(id - 1)->xPos -= m_tabPlayer->at(id - 1)->speed;
		std::cout << "player " << id << " : move left" << std::endl;
	}
	else
	{
		std::cout << "player " << id << " : is block left" << std::endl;
	}
	cmd->ResetCommand();
}
