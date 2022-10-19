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
    cout << endl;
    cout << "Start Initialization" << endl;
    cout << endl;
    population.Initialize(param, mt);
    cout << population;
    cout << "End of Initialization" << endl;
    cout << endl;
}
#pragma endregion PublicMethods