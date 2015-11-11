#include <typeinfo>

#include "Laser.h"
#include "../Chains/SHDL.h"

Laser::Laser(GameState *state) : Tactic(state)
{
    m_chain = NULL;
}

Laser::~Laser()
{
    delete m_chain;
}

void Laser::DetermineChain()
{
    //If the first SHDL is done, then let's do another one
    if(m_chain != NULL && m_chain->IsInterruptible())
    {
        delete m_chain;
        m_chain = new SHDL(m_state);
    }
    CreateChain(SHDL);
    m_chain->PressButtons();
}
