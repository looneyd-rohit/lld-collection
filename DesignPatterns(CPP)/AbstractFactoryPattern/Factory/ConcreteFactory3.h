// concrete factory 3 returns objects of type A as well as B, but only those
// combination of them which makes sense, like Linux background + Linux button
// and so. on...

#include "../ProductA/ConcreteProductALinux.h"
#include "../ProductB/ConcreteProductBLinux.h"
#include "Factory.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef ConcreteFactory3_H
#define ConcreteFactory3_H

class ConcreteFactory3 : public Factory {
public:
  ProductA *createProductA() {
    // returns Linux background
    return new ConcreteProductALinux();
  }
  ProductB *createProductB() {
    // returns Linux button
    return new ConcreteProductBLinux();
  }
};

#endif