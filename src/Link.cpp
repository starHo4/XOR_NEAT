#include "Link.hpp"

Link::Link(const shared_ptr<Node> &_Target, const double &_Weight)
{
    Target = _Target;
    Weight = _Weight;

    // IsRecurrentLink = false;
}