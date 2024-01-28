#include "Shape.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Rectangle_H
#define Rectangle_H

class Rectangle : public Shape {
public:
  void getDetails() override { cout << "I am a Rectangle..." << endl; }
};

#endif