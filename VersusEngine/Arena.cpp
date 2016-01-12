#include "Arena.h"



Arena::Arena(int parWidth, int parNbPlayer, float parMaxTime)
{
	startTime = std::clock();
	m_width = parWidth;
	m_nbPlayer = parNbPlayer;
	maxTime = parMaxTime;

	m_listObserver = new std::vector<Observer*>();
	m_listPlayer = new std::vector<Character*>();

	player1 = new Character(1,1);
	m_listPlayer->push_back(player1);
	player2 = new Character(2, m_width-1);
	m_listPlayer->push_back(player2);

	player1->GetListPlayer(m_listPlayer);
	player2->GetListPlayer(m_listPlayer);

	//m_inputHandler = new InputHandler(m_listPlayer);


}


Arena::~Arena()
{
	m_listObserver->clear();
	delete m_listObserver;

	m_listPlayer->clear();
	delete m_listPlayer;
}

void Arena::AddObserver(Observer* parObserver)
{
	m_listObserver->push_back(parObserver);
}

void Arena::DeleteObserver(Observer* parObserver)
{
	for (int i = 0; i < m_listObserver->size(); ++i)
	{
		if (m_listObserver->at(i) == parObserver) {
			delete m_listObserver->at(i);
			break;
		}
	}
}

void Arena::Update()
{
	currentTime = (std::clock() - startTime) / CLOCKS_PER_SEC;
	player1->Update();
	player2->Update();

	if (lifeP1 != m_listPlayer->at(0)->life || lifeP2 != m_listPlayer->at(1)->life || currentTime ==maxTime)
	{
		
		lifeP1 = m_listPlayer->at(0)->life;
		lifeP2 = m_listPlayer->at(1)->life;
		NotifyObserver();

	}
	

}

void Arena::NotifyObserver()
{
	
	for (int i = 0; i < m_listObserver->size(); ++i)
	{
		m_listObserver->at(i)->Actualize(this, lifeP1, lifeP2, currentTime);
	}
}
