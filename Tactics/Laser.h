#ifndef LASER_H
#define LASER_H

#include "Tactic.h"

//Get some damage in with the laser
class Laser : public Tactic
{

public:
    Laser(GameState *state);
    ~Laser();
    void DetermineChain();
};

#endif
