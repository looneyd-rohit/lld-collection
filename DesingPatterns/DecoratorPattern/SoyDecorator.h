#include "AddonDecorator.h"
#include "Beverage.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef SoyDecorator_H
#define SoyDecorator_H

// Beverage --> interface using abstract classes, pure virtual function
// inherits (is a relationship)
class SoyDecorator : public AddonDecorator {
  // has a relationship
  Beverage *beverage;

public:
  SoyDecorator() : beverage(NULL) { cout << "SoyDecorator called" << endl; }
  SoyDecorator(Beverage *beverage) : beverage(beverage) {
    cout << "SoyDecorator (parametrized) called" << endl;
  }

  int cost() override { return this->beverage->cost() + 1; }
};

#endif