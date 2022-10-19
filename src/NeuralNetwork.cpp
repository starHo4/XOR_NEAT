#include "NeuralNetwork.hpp"

#pragma region Private Methods

void NeuralNetwork::CreateNNFromGenotype()
{
    Network.clear();
    InputNodes.clear();
    OutputNodes.clear();
}

#pragma endregion Private Methods

#pragma region Public Methods
void NeuralNetwork::Initialize(const Parameter &P, mt19937_64 &mt)
{
    Genotype.Initialize(P, mt);
    // CreateNNFromGenoytpe();
}

void NeuralNetwork::Compute()
{
}

ostream &operator<<(ostream &os, const NeuralNetwork &Net)
{
    os << Net.Genotype;
    return os;
}
#pragma endregion Public Methdos