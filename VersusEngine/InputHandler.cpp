#include "InputHandler.h"
#include <conio.h>
#include <iostream>
#include "LowKick.h"
#include "Jump.h"
#include "MoveLeft.h"
#include "MoveRight.h"
#include "Block.h"
#include "HighKick.h"
#include "Crouch.h"



InputHandler::InputHandler(std::vector<Character*>* parTabPlayer)
{
	lowKickButton = new LowKick();
	highKickButton = new HighKick();
	jumButton = new Jump();
	moveLeftButton = new MoveLeft();
	moveRightButton = new MoveRight();
	blockButton = new Block();
	crouchButton = new Crouch();
	m_tabPlayer = parTabPlayer;
	currentCommand = nullptr;
}


InputHandler::~InputHandler()
{
}


void InputHandler::ResetCommand()
{
	currentCommand = nullptr;
}

void InputHandler::HandleInput()
{
	char c;
	fflush(stdin);

	m_tabPlayer->at(0)->jumpTime--;
	m_tabPlayer->at(1)->jumpTime--;

	m_tabPlayer->at(0)->stunTime--;
	m_tabPlayer->at(1)->stunTime--;

	m_tabPlayer->at(0)->m_playerState = playerState::NORMAL;
	m_tabPlayer->at(1)->m_playerState = playerState::NORMAL;

	if (m_tabPlayer->at(0)->jumpTime > 0) { m_tabPlayer->at(0)->m_playerState = playerState::JUMP; }
	if (m_tabPlayer->at(1)->jumpTime > 0) { m_tabPlayer->at(1)->m_playerState = playerState::JUMP; }

	if (m_tabPlayer->at(0)->stunTime > 0) { m_tabPlayer->at(0)->m_playerState = playerState::STUN; }
	if (m_tabPlayer->at(1)->stunTime > 0) { m_tabPlayer->at(1)->m_playerState = playerState::STUN; }

	if (currentCommand != nullptr)
	{

		this->currentCommand->Execute(currentId, m_tabPlayer, this);
	}

	if (_kbhit())
	{
		c = _getch();
			if (m_tabPlayer->at(0)->m_playerState != playerState::STUN && m_tabPlayer->at(0)->m_IdPlayer == 1)
			{
				if (c == 'z' && m_tabPlayer->at(0)->jumpTime <= 0)
				{
					m_tabPlayer->at(0)->jumpTime = 2;
					currentCommand = jumButton;
					currentId = 1;
				}
				else if (c == 'v')
				{
					currentCommand = blockButton;
					currentId = 1;
				}
				else if (c == 's')
				{
					currentCommand = crouchButton;
					currentId = 1;
				}
				else if (c == 'a')
				{
					currentCommand = lowKickButton;
					currentId = 1;
				}
				else if (c == 'e')
				{
					currentCommand = highKickButton;
					currentId = 1;
				}
				else if (c == 'q')
				{
					currentCommand = moveLeftButton;
					currentId = 1;
				}

				else if (c == 'd')
				{
					currentCommand = moveRightButton;
					currentId = 1;
				}

			}

			if (m_tabPlayer->at(1)->m_playerState != playerState::STUN && m_tabPlayer->at(1)->m_IdPlayer == 2)
			{
				if (c == '8' && m_tabPlayer->at(1)->jumpTime <= 0)
				{
					m_tabPlayer->at(1)->jumpTime = 2;
					currentCommand = jumButton;
					currentId = 2;
				}
				else if (c == '0')
				{
					currentCommand = blockButton;
					currentId = 2;
				}
				else if (c == '5')
				{
					currentCommand = crouchButton;
					currentId = 2;
				}
				else if (c == '7')
				{
					currentCommand = lowKickButton; 
					currentId = 2;
				}
				else if (c == '9')
				{
					currentCommand = highKickButton;
					currentId = 2;
				}
				else if (c == '4')
				{
					currentCommand = moveLeftButton;
					currentId = 2;
				}

				else if (c == '6')
				{
					currentCommand = moveRightButton;
					currentId = 2;
				}
			}
		
	}
	

}
