#include "IFlyBehaviour.h"
#include <bits/stdc++.h>
using namespace std;

class JetFly : public IFlyBehaviour {
public:
  JetFly() { cout << "JetFly default constructor" << endl; }
  void fly() override { cout << "This is concrete Jet Fly behaviour." << endl; }
};