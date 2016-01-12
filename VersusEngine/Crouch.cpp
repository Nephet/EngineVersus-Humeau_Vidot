#include "Crouch.h"



Crouch::Crouch()
{
}


Crouch::~Crouch()
{
}

void Crouch::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	m_tabPlayer->at(id - 1)->m_playerState = playerState::CROUCH;
	std::cout << "player " << id << " : crouch" << std::endl;
	cmd->ResetCommand();
}
