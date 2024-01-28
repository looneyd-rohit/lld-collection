// concrete factory 2 returns objects of type A as well as B, but only those
// combination of them which makes sense, like Windows background + Windows
// button and so. on...

#include "../ProductA/ConcreteProductAWindows.h"
#include "../ProductB/ConcreteProductBWindows.h"
#include "Factory.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteFactory2_H
#define ConcreteFactory2_H

class ConcreteFactory2 : public Factory {
public:
  ProductA *createProductA() {
    // returns Windows background
    return new ConcreteProductAWindows();
  }
  ProductB *createProductB() {
    // returns Windows button
    return new ConcreteProductBWindows();
  }
};

#endif