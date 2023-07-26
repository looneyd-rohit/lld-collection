#include "ProductA.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductAMac_H
#define ConcreteProductAMac_H

class ConcreteProductAMac : public ProductA {
public:
  void getBackground() override {
    cout << "I am a MacOS background..." << endl;
  }
};

#endif