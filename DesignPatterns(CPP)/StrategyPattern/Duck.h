#include "IFlyBehaviour.h"
#include "JetFly.h"
#include "SimpleFly.h"
#include <bits/stdc++.h>

#include "IQuackBehaviour.h"
#include "NoQuack.h"
#include "SimpleQuack.h"
using namespace std;

class Duck {
public:
  IFlyBehaviour *flyB;
  IQuackBehaviour *quackB;
  // constructor injection
  Duck() : flyB(new SimpleFly()), quackB(new SimpleQuack()) {
    cout << "Duck default constructor" << endl;
  }
  Duck(IFlyBehaviour *fly, IQuackBehaviour *quack) : flyB(fly), quackB(quack) {
    cout << "Duck parametrized constructor" << endl;
  }
};