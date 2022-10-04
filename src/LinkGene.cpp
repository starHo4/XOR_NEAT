#include "LinkGene.hpp"

LinkGene::LinkGene(const int _From,
                   const int _To,
                   const double _Weight,
                   const bool _Enabled)
    : From{_From}, To{_To}, Weight{_Weight}, Enabled{_Enabled}
{
}

ostream &operator<<(ostream &os, const LinkGene &lg)
{
    if (lg.Enabled)
    {
        os << lg.From << " -> " << lg.To << " : " << lg.Weight;
    }

    return os;
}