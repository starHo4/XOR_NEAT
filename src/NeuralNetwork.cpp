#include "NeuralNetwork.hpp"

void NeuralNetwork::Initialize(const Parameter &P, mt19937_64 &mt)
{
    Genotype.Initialize(P, mt);
    // CreateNNFromGenoytpe();
}

ostream &operator<<(ostream &os, const NeuralNetwork &Net)
{
    os << Net.Genotype;
    return os;
}