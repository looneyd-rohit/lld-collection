#include "ProductA.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductAWindows_H
#define ConcreteProductAWindows_H

class ConcreteProductAWindows : public ProductA {
public:
  void getBackground() override {
    cout << "I am a Windows background..." << endl;
  }
};

#endif