#include "Beverage.h"
#include "CaramelDecorator.h"
#include "Decaf.h"
#include "Espresso.h"
#include "SoyDecorator.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. create a simple Decaf --> cost = 2
  Beverage *beverage1 = new Decaf();
  cout << "----------------------------------------------------------------"
       << endl;
  cout << "Cost of simple Decaf: " << beverage1->cost() << endl;
  ;
  cout << "----------------------------------------------------------------"
       << endl;

  // 2. create a combination of Decaf + Soy --> cost = 2 + 1 = 3
  Beverage *beverage2 = new SoyDecorator(new Decaf());
  cout << "----------------------------------------------------------------"
       << endl;
  cout << "Cost of Decaf + Soy: " << beverage2->cost() << endl;
  ;
  cout << "----------------------------------------------------------------"
       << endl;

  // 3. create a combination of Decaf + Soy --> cost = 2 + 1 = 3
  Beverage *beverage3 =
      new SoyDecorator(new CaramelDecorator(new SoyDecorator(new Espresso())));
  cout << "----------------------------------------------------------------"
       << endl;
  cout << "Cost of Espresso + Soy + Caramel + Soy: " << beverage3->cost()
       << endl;
  ;
  cout << "----------------------------------------------------------------"
       << endl;
  return 0;
}