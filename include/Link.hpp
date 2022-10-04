#ifndef LINK_H
#define LINK_H

#include "Header.hpp"

class Node;

struct Link
{
    // Constructor
    Link(const shared_ptr<Node> &_Target, const double &_Weight);

    // Variables
    //* Main Body *//
    shared_ptr<Node> Target;
    double Weight;
    //* *//
    // bool IsRecurrentLink;
};

#endif