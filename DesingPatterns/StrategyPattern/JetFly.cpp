#include<bits/stdc++.h>
#include "IFlyBehaviour.h"
using namespace std;

class JetFly: public IFlyBehaviour{
    public:
    JetFly(){
        cout<<"JetFly default constructor"<<endl;
    }
    void fly(){
        cout<<"This is concrete Jet Fly behaviour."<<endl;
    }
};