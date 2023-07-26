#include "AddonDecorator.h"
#include "Beverage.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef CaramelDecorator_H
#define CaramelDecorator_H

// Beverage --> interface using abstract classes, pure virtual function
// inherits (is a relationship)
class CaramelDecorator : public AddonDecorator {
  // has a relationship
  Beverage *beverage;

public:
  CaramelDecorator() : beverage(NULL) {
    cout << "CaramelDecorator called" << endl;
  }
  CaramelDecorator(Beverage *beverage) : beverage(beverage) {
    cout << "CaramelDecorator (parametrized) called" << endl;
  }
  int cost() override { return this->beverage->cost() + 2; }
};

#endif