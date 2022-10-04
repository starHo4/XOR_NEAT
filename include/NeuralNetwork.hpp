#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "Header.hpp"
#include "Genome.hpp"
#include "Node.hpp"

class NeuralNetwork
{
private:
public:
    // Constructor & Destructor
    NeuralNetwork() {}
    ~NeuralNetwork() {}

    // Public Methods
    // Network as a phenotype
    map<int, shared_ptr<Node>> Network;
    // For Computing
    vector<double> InputVal;
    vector<double> OutputVal;
    vector<shared_ptr<Node>> InputNodes;
    vector<shared_ptr<Node>> OutputNodes;
    // For Genetic Algorithm
    // Genome as a genotype
    Genome Genotype;
    // Fitness
    double Fitness;

    // Public Methods
    void Initialize(const Parameter &P, mt19937_64 &mt);
    void Compute(const vector<double> &_Input);

    // Operator
    friend ostream &operator<<(ostream &os, const NeuralNetwork &Net);
};

#endif