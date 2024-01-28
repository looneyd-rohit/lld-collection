#include<bits/stdc++.h>
using namespace std;

// header guards
#ifndef IQuackBehaviour_H
#define IQuackBehaviour_H

// quack strategy --> implemented as interface (abstract class, pure virtual function)
class IQuackBehaviour{
    public:
    virtual void quack() = 0;
};

#endif