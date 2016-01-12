#pragma once
#include <vector>
#include <iostream>

class InputHandler;

enum playerState
{
	NORMAL,
	STUN,
	JUMP,
	CROUCH,
	BLOCK,
};

class Character
{
public:
	Character(int parIdPlayer, int X);
	~Character();
	void Update();
	void GetListPlayer(std::vector<Character*> * parlistPlayer);

	int life = 10;
	int speed = 1;
	int xPos;

	std::vector<Character*> * m_listPlayer;
	playerState m_playerState;
	int m_IdPlayer;

	float jumpTime = 0;
	float stunTime = 0;
	InputHandler* m_InputHandler;

};

