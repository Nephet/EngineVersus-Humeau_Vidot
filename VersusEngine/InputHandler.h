#pragma once
//#include "LowKick.h"
//#include "Jump.h"
//#include "MoveLeft.h"
//#include "MoveRight.h"
//#include "Block.h"
//#include "HighKick.h"
//#include "Crouch.h"
#include <vector>
#include "Character.h"

class LowKick;
class Jump;
class MoveLeft;
class MoveRight;
class Block;
class HighKick;
class Crouch;
class Command;

class InputHandler
{
public:
	InputHandler(std::vector<Character*>* parTabPlayer);
	~InputHandler();

	void HandleInput();

	int m_IdPlayer;
	std::vector<Character*>* m_tabPlayer;
	void ResetCommand();
	Command * currentCommand;

private:
	LowKick* lowKickButton;
	HighKick* highKickButton;
	Jump* jumButton;
	MoveLeft* moveLeftButton;
	MoveRight* moveRightButton;
	Block* blockButton;
	Crouch* crouchButton;

	
	int currentId;
};

