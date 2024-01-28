#include "Beverage.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Decaf_H
#define Decaf_H

// Beverage --> interface using abstract classes, pure virtual function
class Decaf : public Beverage {
public:
  Decaf() { cout << "Decaf constructor called" << endl; }
  int cost() override {
    // base case actually
    return 2;
  }
};

#endif