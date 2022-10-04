#ifndef NODE_H
#define NODE_H

#include "Header.hpp"
#include "Link.hpp"

class Node
{
private:
    // Private Methods
    double ActivateFunction(const double _x);

public:
    // Constructor & Desturctor
    Node() {}
    Node(const int _ID, const string _Attribute);
    ~Node() {}

    // Public Variables
    //* Main Body *//
    // ID
    int ID;
    // Attribute
    string Attribute; // "Input", "Hidden", or "Output".
    // Recurrent or not?
    // bool IsRecurrentNode;
    // The layer in which this node is
    int Layer;
    // Links between this node and the target nodes
    vector<Link> Links;
    //* *//
    // For calculation
    double Sum;
    double OutVal;

    // Public Methods
    void ResetSum();
    void ReceiveInput(const double _InputFrom);
    void SendValue();
};

#endif