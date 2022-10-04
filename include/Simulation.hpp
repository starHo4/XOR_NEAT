#ifndef SIMULATION_H
#define SIMULATION_H

#include "Header.hpp"
#include "Parameter.hpp"
#include "Population.hpp"
#include "XOR.hpp"

class Simulation
{
private:
    // Random Generator
    mt19937_64 mt;

    // Static Parameter
    Parameter param;

    //* Main Body *//
    Population population; /* Vector of Neural Network */
    XOR _XOR;

public:
    /* Constructor & Destructor */
    Simulation();
    ~Simulation() {}

    /* Public Methods */
    void Run();
};

#endif