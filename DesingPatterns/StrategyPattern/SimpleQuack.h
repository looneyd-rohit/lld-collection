#include "IQuackBehaviour.h"
#include <bits/stdc++.h>
using namespace std;

class SimpleQuack : public IQuackBehaviour {
public:
  SimpleQuack() { cout << "SimpleQuack default constructor" << endl; }
  void quack() override {
    cout << "This is concrete Simple Quack behaviour." << endl;
  }
};