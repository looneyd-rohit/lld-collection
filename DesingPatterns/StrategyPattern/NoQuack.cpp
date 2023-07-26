#include<bits/stdc++.h>
#include "IQuackBehaviour.h"
using namespace std;

class NoQuack: public IQuackBehaviour{
    public:
    NoQuack(){
        cout<<"NoQuack default constructor"<<endl;
    }
    void quack(){
        cout<<"This is concrete No Quack behaviour."<<endl;
    }
};