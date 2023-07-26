#include "./Factory/ConcreteFactory1.h"
#include "./Factory/ConcreteFactory2.h"
#include "./Factory/ConcreteFactory3.h"
#include "./Factory/Factory.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  // Instantiate objects using factory interface
  Factory *factory = new ConcreteFactory3();

  // instantiate the products
  ProductA *pA = factory->createProductA();
  ProductB *pB = factory->createProductB();

  // get the background and button
  pA->getBackground();
  pB->getButton();

  return 0;
}