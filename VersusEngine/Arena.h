#pragma once
#include "Observable.h"
#include "QuickFight.h"
#include "Character.h"
#include <vector>
#include <cstdio>
#include <ctime>

class Arena : public Observable
{
public:
	Arena(int parWidth, int parNbPlayer, float parMaxTime);
	~Arena();

	void AddObserver(Observer* parObserver) override;
	void DeleteObserver(Observer* parObserver) override;
	void NotifyObserver() override;

	void Update();

	std::vector<Observer*> *m_listObserver;

	std::vector<Character*> *m_listPlayer;

	int lifeP1;
	int lifeP2;
	int m_width;
	int m_nbPlayer;
	clock_t startTime;
	float currentTime;
	float maxTime;

	Character* player1;
	Character* player2;

	InputHandler* m_inputHandler;


};

