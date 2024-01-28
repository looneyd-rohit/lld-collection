#include "ProductB.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductBMac_H
#define ConcreteProductBMac_H

class ConcreteProductBMac : public ProductB {
public:
  void getButton() override { cout << "I am a MacOS button..." << endl; }
};

#endif