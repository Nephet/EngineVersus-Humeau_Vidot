#include "QuickFight.h"





QuickFight::QuickFight(Arena* parObservable, GameManager* GM, float parMaxTime)
{
	 arena = parObservable;
	 parObservable->AddObserver(this);
	 m_gm = GM;
	 maxTime = parMaxTime;
}


QuickFight::~QuickFight()
{

}

void QuickFight::Update()
{
	arena->Update();
}

void QuickFight::Actualize(Observable* parObservable, int player1Life, int player2Life, float time)
{

	if (player1Life == 0) {
		system("cls");
		std::cout << "Player 2 win !!" << std::endl;
		End();
	}
	else if (player2Life == 0)
	{
		system("cls");
		std::cout << "Player 1 win !!" << std::endl;
		End();
	}
	else if (time >= maxTime)
	{
		system("cls");
		if (player1Life > player2Life) 
		{
			std::cout << "Player 1 win !!" << std::endl;
		}
		else if (player1Life < player2Life)
		{
			std::cout << "Player 2 win !!" << std::endl;
		}
		else 
		{
			std::cout << "Tie game !" << std::endl;
		}
		End();
	}
}

void QuickFight::End()
{
	system("cls");
	m_gm->isPlaying = false;
}
