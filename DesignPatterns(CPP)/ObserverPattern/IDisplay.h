#include<bits/stdc++.h>
using namespace std;

#ifndef IDisplay_H
#define IDisplay_H

// Display strategy --> implemented as interface (abstract class, pure virtual function)
class IDisplay{
    public:
    virtual void display() = 0;
};

#endif