#include "Genome.hpp"

void Genome::Initialize(const Parameter &P, mt19937_64 &mt)
{
    LinkGenes.clear();
    NodeGenes.clear();

    // Initialize LinkGenes
    uniform_real_distribution<double> urd_weight(-1, 1);
    for (int i = 0; i < P.NumInput; i++)
    {
        for (int j = 0; j < P.NumOutput; j++)
        {
            int _from = i;
            int _to = P.NumInput + j;
            double _weight = urd_weight(mt);
            bool _enabled = true;
            LinkGenes.push_back(LinkGene(_from, _to, _weight, _enabled));
        }
    }

    // Initialize NodeGenes
    int Size = P.NumInput + P.NumOutput;
    for (int i = 0; i < Size; i++)
    {
        if (i < P.NumInput)
        {
            NodeGenes[i] = "Input";
        }
        else
        {
            NodeGenes[i] = "Output";
        }
    }
}

ostream &operator<<(ostream &os, const Genome &g)
{
    os << "\tLink : " << endl;
    for (int i = 0; i < g.LinkGenes.size(); i++)
    {
        os << "\t\t";
        os << g.LinkGenes[i] << endl;
    }
    os << "\tNode : " << endl;
    for (auto node : g.NodeGenes)
    {
        os << "\t\t";
        os << node.first << " : " << node.second << endl;
    }

    return os;
}