#ifndef __Simulation__
#define __Simulation__

#include "Header.hpp"

class Simulation
{
private:
    // Random Generator
    mt19937_64 mt;

public:
    /* Constructor & Destructor */
    Simulation() {}
    ~Simulation() {}

    /* Public Methods */
    void Run();
};

#endif