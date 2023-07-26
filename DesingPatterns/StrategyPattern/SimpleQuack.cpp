#include<bits/stdc++.h>
#include "IQuackBehaviour.h"
using namespace std;

class SimpleQuack: public IQuackBehaviour{
    public:
    SimpleQuack(){
        cout<<"SimpleQuack default constructor"<<endl;
    }
    void quack(){
        cout<<"This is concrete Simple Quack behaviour."<<endl;
    }
};