#include<bits/stdc++.h>
#include "IFlyBehaviour.h"
using namespace std;

class SimpleFly: public IFlyBehaviour{
    public:
    SimpleFly(){
        cout<<"SimpleFly default constructor"<<endl;
    }
    void fly(){
        cout<<"This is concrete Simple Fly behaviour."<<endl;
    }
};