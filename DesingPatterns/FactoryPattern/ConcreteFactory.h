#include "Circle.h"
#include "Factory.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <bits/stdc++.h>
using namespace std;

class ConcreteFactory : public Factory {
public:
  Shape *createShape(int type) override {

    switch (type) {
    case 0:
      return new Circle();
    case 1:
      return new Square();
    case 2:
      return new Rectangle();
    default:
      break;
    }
  }
};
