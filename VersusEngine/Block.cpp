#include "Block.h"



Block::Block()
{
}


Block::~Block()
{
}

void Block::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	m_tabPlayer->at(id - 1)->m_playerState = playerState::BLOCK;
	std::cout << "player " << id << " : block" << std::endl;
	cmd->ResetCommand();
}

