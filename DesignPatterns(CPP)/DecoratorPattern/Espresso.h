#include "Beverage.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Espresso_H
#define Espresso_H

// Beverage --> interface using abstract classes, pure virtual function
class Espresso : public Beverage {
public:
  Espresso() { cout << "Espresso constructor called" << endl; }
  int cost() override {
    // base case actually
    return 1;
  }
};

#endif