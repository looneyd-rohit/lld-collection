#include "Shape.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Square_H
#define Square_H

class Square : public Shape {
public:
  void getDetails() override { cout << "I am a Square..." << endl; }
};

#endif