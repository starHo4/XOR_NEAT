#ifndef POPULATION_H
#define POPULATION_H

#include "Header.hpp"
#include "NeuralNetwork.hpp"

class Population
{
    private:
    //* Main Body *//
    vector<NeuralNetwork> population;

    public:
    Population(){}

    // Public Methods 
    void Initialize(const Parameter &P, mt19937_64 &mt);

    // Operator
    friend ostream& operator<<(ostream&os, const Population& Pop);
};

#endif