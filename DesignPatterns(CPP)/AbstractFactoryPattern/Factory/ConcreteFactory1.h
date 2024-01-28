// concrete factory 1 returns objects of type A as well as B, but only those
// combination of them which makes sense, like Mac background + Mac button and
// so. on...

#include "../ProductA/ConcreteProductAMac.h"
#include "../ProductB/ConcreteProductBMac.h"
#include "Factory.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteFactory1_H
#define ConcreteFactory1_H

class ConcreteFactory1 : public Factory {
public:
  ProductA *createProductA() {
    // returns Mac background
    return new ConcreteProductAMac();
  }
  ProductB *createProductB() {
    // returns Mac button
    return new ConcreteProductBMac();
  }
};

#endif