#include "Character.h"
#include "InputHandler.h"


Character::Character(int parIdPlayer, int X)
{
	m_playerState = playerState::NORMAL;
	m_IdPlayer = parIdPlayer;
	xPos = X;
}


Character::~Character()
{
}

void Character::Update()
{
	this->m_InputHandler->HandleInput();
}

void Character::GetListPlayer(std::vector<Character*> * m_listPlayer)
{
	m_InputHandler = new InputHandler(m_listPlayer);
}
