#include <bits/stdc++.h>
using namespace std;

#ifndef Beverage_H
#define Beverage_H

// Beverage --> interface using abstract classes, pure virtual function
class Beverage {
public:
  virtual int cost() = 0;
};

#endif