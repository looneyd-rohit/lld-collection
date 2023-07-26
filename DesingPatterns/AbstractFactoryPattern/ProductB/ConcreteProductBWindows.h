#include "ProductB.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductBWindows_H
#define ConcreteProductBWindows_H

class ConcreteProductBWindows : public ProductB {
public:
  void getButton() override { cout << "I am a Windows button..." << endl; }
};

#endif