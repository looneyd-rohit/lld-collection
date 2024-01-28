#include<bits/stdc++.h>
using namespace std;

// header guards
#ifndef IFlyBehaviour_H
#define IFlyBehaviour_H

// fly strategy --> implemented as interface (abstract class, pure virtual function)
class IFlyBehaviour{
    public:
    virtual void fly() = 0;
};

#endif