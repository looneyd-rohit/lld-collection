#include "../ProductA/ProductA.h"
#include "../ProductB/ProductB.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Factory_H
#define Factory_H

class Factory {
public:
  virtual ProductA *createProductA() = 0;
  virtual ProductB *createProductB() = 0;
};

#endif