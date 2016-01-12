#pragma once

class Observer;

class Observable
{
public:
	Observable();
	~Observable();

	virtual void AddObserver(Observer* parObserver) = 0;
	virtual void DeleteObserver(Observer* parObserver) = 0;
	virtual void NotifyObserver() = 0;
};

