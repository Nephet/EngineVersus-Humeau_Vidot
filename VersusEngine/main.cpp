#include <iostream>
#include "LowKickAttack.h"
#include "AttackState.h"
#include "Command.h"
#include "Combo.h"
#include "LowKick.h"
#include "GameManager.h"


int main()
{
	/*char c;
	while (true)
	{
		if (_kbhit())
		{
			c = _getch();
			std::cout << c << std::endl;
			fflush(stdin);
		}
	}*/
	
	GameManager* gameManager = new GameManager();
	gameManager->Update();
	//LowKickAttack * lowKickAttack = new LowKickAttack();
	/*Combo * combo = new Combo();


	for (int i = 0; i < 4; ++i)
	{
		//combo.push_back(new LowKick());
		combo->Add(new LowKick());
	}

	combo->Execute();*/
	


	/*while (true)
	{

		if (lowKickAttack != nullptr) 
		{
			lowKickAttack->Execute();
			if (lowKickAttack->m_currentState->GetState() == State::END)
			{
				delete lowKickAttack;
				lowKickAttack = nullptr;
			}
		}
		
	}*/
	system("pause");
	return 0;
}
