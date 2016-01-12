#include "HighKick.h"




HighKick::HighKick()
{
	create = false;
}


HighKick::~HighKick()
{
}

void HighKick::Execute(int id, std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
	if (!create) {
		std::cout << "player " << id << " : high kick" << std::endl;
		highKickAttack = new HighKickAttack();
		create = true;
	}

	if (highKickAttack != nullptr)
	{
		highKickAttack->Execute(id, m_tabPlayer);

		if (highKickAttack->m_currentState->GetState() == State::END)
		{
			cmd->ResetCommand();
			create = false;
			delete highKickAttack;
			highKickAttack = nullptr;
			
		}
	}
}

