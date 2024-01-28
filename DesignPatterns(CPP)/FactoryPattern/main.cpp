#include "Circle.h"
#include "ConcreteFactory.h"
#include "Factory.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Instantiate objects using factory interface
  Factory *factory = new ConcreteFactory();

  // 1. Circle
  Shape *s1 = factory->createShape(0);
  s1->getDetails();

  // 2. Square
  Shape *s2 = factory->createShape(1);
  s2->getDetails();

  // 3. Rectangle
  Shape *s3 = factory->createShape(2);
  s3->getDetails();
  return 0;
}