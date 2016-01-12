#include "MoveRight.h"



MoveRight::MoveRight()
{
}


MoveRight::~MoveRight()
{
}

void MoveRight::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	if (m_tabPlayer->at(id - 1)->xPos + m_tabPlayer->at(id - 1)->speed < 10)
	{
		m_tabPlayer->at(id - 1)->xPos += m_tabPlayer->at(id - 1)->speed;
		std::cout << "player " << id << " : move right " <<  std::endl;
	}
	else 
	{
		std::cout << "player " << id << " : is block right" << std::endl;
	}
	cmd->ResetCommand();
}
