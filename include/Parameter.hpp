#ifndef PARAMETER_H
#define PARAMETER_H

struct Parameter
{
    static constexpr int RANDOM_SEED = 1024;

    static constexpr int NumInput = 2;
    static constexpr int NumOutput = 1;
    static constexpr int PopulationSize = 5;
    static constexpr double ThresholdFitness = 0.999;
    static constexpr int MaxGenerations = 100000;
};

#endif