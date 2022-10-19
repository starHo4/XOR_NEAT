#include "Population.hpp"

void Population::Initialize(const Parameter &P, mt19937_64 &mt)
{
    population.clear();
    population = vector<NeuralNetwork>(P.PopulationSize);
    for (int i = 0; i < population.size(); i++)
    {
        population[i].Initialize(P, mt);
    }
}

void Population::EvaluateFitness()
{
    for(int i=0; i<population.size(); i++)
    {
        population[i].Compute();
    }
}

void Population::Reproduce()
{
}

void Population::Mutate()
{
}

ostream &operator<<(ostream &os, const Population &Pop)
{
    for (int i = 0; i < Pop.population.size(); i++)
    {
        os << "Neural Network #" << i << " : " << endl;
        os << Pop.population[i] << endl;
    }

    return os;
}