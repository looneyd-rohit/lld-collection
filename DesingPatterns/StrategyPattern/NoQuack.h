#include "IQuackBehaviour.h"
#include <bits/stdc++.h>
using namespace std;

class NoQuack : public IQuackBehaviour {
public:
  NoQuack() { cout << "NoQuack default constructor" << endl; }
  void quack() override {
    cout << "This is concrete No Quack behaviour." << endl;
  }
};