#include "Simulation.hpp"

#pragma region Constructor
Simulation::Simulation()
{
    mt.seed(param.RANDOM_SEED);
}
#pragma endregion Constructor

#pragma region PublicMethods
void Simulation::Run()
{
    // Test
    cout << "Hello, Simulation!" << endl;

    // Implementation
    population.Initialize(param, mt);
    cout << population;
}
#pragma endregion PublicMethods