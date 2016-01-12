#include "LowKick.h"




LowKick::LowKick()
{
	create = false;
}


LowKick::~LowKick()
{
}

void LowKick::Execute(int id,std::vector<Character*>* m_tabPlayer, InputHandler* cmd)
{
		
		if (!create) {
			std::cout << "player " << id << " : low kick" << std::endl;
			lowKickAttack = new LowKickAttack();
			create = true;
		}

		if (lowKickAttack != nullptr)
		{
			lowKickAttack->Execute(id, m_tabPlayer);
				
			if (lowKickAttack->m_currentState->GetState() == State::END)
			{
				cmd->ResetCommand();
				create = false;
				delete lowKickAttack;
				lowKickAttack = nullptr;
				
			}
		}
}
