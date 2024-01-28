#include "Beverage.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef AddonDecorator_H
#define AddonDecorator_H

// Beverage --> interface using abstract classes, pure virtual function
class AddonDecorator : public Beverage {
public:
  virtual int cost() = 0;
};

#endif