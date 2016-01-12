#pragma once
#include "Observer.h"


class GameMode : public Observer
{
public:
	GameMode();
	~GameMode();

	virtual void Update() = 0;
	virtual void Actualize(Observable* parObservable, int player1Life, int player2Life, float time) override = 0;
	virtual void End() = 0;
};

