#include "IFlyBehaviour.h"
#include <bits/stdc++.h>
using namespace std;

class SimpleFly : public IFlyBehaviour {
public:
  SimpleFly() { cout << "SimpleFly default constructor" << endl; }
  void fly() override {
    cout << "This is concrete Simple Fly behaviour." << endl;
  }
};