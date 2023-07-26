#include<bits/stdc++.h>
#include "IFlyBehaviour.h"
#include "SimpleFly.cpp"
#include "JetFly.cpp"

#include "IQuackBehaviour.h"
#include "SimpleQuack.cpp"
#include "NoQuack.cpp"
using namespace std;

class Duck{
    public:
    IFlyBehaviour *flyB;
    IQuackBehaviour *quackB;
    Duck(): flyB(new SimpleFly()), quackB(new SimpleQuack()){
        cout<<"Duck default constructor"<<endl;
    }
    Duck(IFlyBehaviour *fly, IQuackBehaviour *quack): flyB(fly), quackB(quack) {
        cout<<"Duck parametrized constructor"<<endl;
    }
};