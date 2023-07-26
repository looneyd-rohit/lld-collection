#include "Shape.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef Factory_H
#define Factory_H

class Factory {
public:
  virtual Shape *createShape(int type) = 0;
};

#endif