#include "Jump.h"



Jump::Jump()
{
}


Jump::~Jump()
{
}

void Jump::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	if (m_tabPlayer->at(id - 1)->m_playerState == playerState::JUMP) 
	{
		std::cout << "player " << id << " : jump for " << m_tabPlayer->at(id - 1)->jumpTime << std::endl;
	}
	else {
		std::cout << "player " << id << " : yolo" << m_tabPlayer->at(id - 1)->jumpTime << std::endl;
		cmd->ResetCommand();
	}
	
}
