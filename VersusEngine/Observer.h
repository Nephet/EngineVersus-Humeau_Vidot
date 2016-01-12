#pragma once
#include "Observable.h"
#include <iostream>

class Observer
{
public:
	Observer();
	~Observer();

	virtual void Actualize(Observable* parObservable, int player1Life, int player2Life, float time) = 0;
};

