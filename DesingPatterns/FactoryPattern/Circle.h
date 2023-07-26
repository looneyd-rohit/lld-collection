#include "Shape.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Circle_H
#define Circle_H

class Circle : public Shape {
public:
  void getDetails() override { cout << "I am a Circle..." << endl; }
};

#endif