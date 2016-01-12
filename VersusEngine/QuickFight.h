#pragma once
#include "GameMode.h"
#include "Arena.h"
#include "GameManager.h"

class Arena;

class QuickFight : public GameMode
{
public:
	QuickFight(Arena* parObservable, GameManager* GM, float parMaxTime);
	~QuickFight();

	void Update() override;
	void Actualize(Observable* parObservable, int player1Life, int player2Life, float time) override;
	void End() override;

	Arena* arena;
	GameManager* m_gm;
	float maxTime;

};

