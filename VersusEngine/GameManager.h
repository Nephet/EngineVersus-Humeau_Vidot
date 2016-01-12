#pragma once
#include <iostream>
#include <conio.h>

class GameManager
{
public:
	GameManager();
	~GameManager();

	void Update();

	bool isPlaying = false;
};

