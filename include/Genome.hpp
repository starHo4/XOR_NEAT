#ifndef GENOME_H
#define GENOME_H

#include "Header.hpp"
#include "LinkGene.hpp"

class Genome
{
private:
public:
    Genome(){}
    ~Genome(){}

    //* Main Body *//
    // Genotype
    vector<LinkGene> LinkGenes; /* Genotype of Link */
    map<int, string> NodeGenes; /* Genotype of Nodes, which attributes to types of nodes; "Input", "Hidden", or "Output" */

    // Public Methods 
    void Initialize(const Parameter &P, mt19937_64 &mt);

    // Operator
    friend ostream& operator<<(ostream& os, const Genome &g);
};

#endif