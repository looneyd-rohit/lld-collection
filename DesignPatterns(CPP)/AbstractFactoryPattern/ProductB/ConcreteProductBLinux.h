#include "ProductB.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteProductBLinux_H
#define ConcreteProductBLinux_H

class ConcreteProductBLinux : public ProductB {
public:
  void getButton() override { cout << "I am a Linux button..." << endl; }
};

#endif