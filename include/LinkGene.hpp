#ifndef LINKGENE_H
#define LINKGENE_H

#include "Header.hpp"

class LinkGene
{
private:
public:
    LinkGene() {}
    LinkGene(const int _From, const int _To, const double _Weight, const bool _Enabled);

    // Public Variables
    //* Main Body *//
    int From;
    int To;
    double Weight;
    bool Enabled;

    // Operator
    friend ostream &operator<<(ostream &os, const LinkGene &lg);
};

#endif