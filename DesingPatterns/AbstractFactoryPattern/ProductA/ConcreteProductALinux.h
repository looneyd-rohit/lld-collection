#include "ProductA.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductALinux_H
#define ConcreteProductALinux_H

class ConcreteProductALinux : public ProductA {
public:
  void getBackground() override {
    cout << "I am a Linux background..." << endl;
  }
};

#endif