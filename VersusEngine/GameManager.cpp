#include "GameManager.h"
#include <Windows.h>
#include "Arena.h"




GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}

void GameManager::Update()
{
	while (true) 
	{
		std::cout << "Choose your GameMode" << std::endl << std::endl;;
		std::cout << "1- QuickFight" << std::endl;
		std::cout << "2- Adventure (Work in progress)" << std::endl;
		std::cout << "3- Tournament (Work in progress)" << std::endl;
		char c = _getch();

		if (c == '1')
		{
			isPlaying = true;
			Arena* arena = new Arena(10, 10, 90);
			QuickFight* quickFight = new QuickFight(arena, this, arena->maxTime);
			system("cls");
			std::cout << "FIGHT START !!" << std::endl;
			while (isPlaying)
			{
				quickFight->Update();
			}
			c = NULL;

			delete arena;
			arena = nullptr;
			delete quickFight;
			quickFight = nullptr;
			
		}
		else if( c == '2' || c == '3')
		{
			std::cout << "Work in progress" << std::endl;
			system("cls");

		}
		else {
			system("cls");
		}

	}
	
}
