#include "Duck.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. default duck
  // Duck d;
  // cout<<"----------------------------------------------------------------"<<endl;
  // d.flyB->fly();
  // d.quackB->quack();
  // cout<<"----------------------------------------------------------------"<<endl;

  // 2. duck with jet fly and simple quack
  // Duck d1(new JetFly(), new SimpleQuack());
  // cout<<"----------------------------------------------------------------"<<endl;
  // d1.flyB->fly();
  // d1.quackB->quack();
  // cout<<"----------------------------------------------------------------"<<endl;

  // 3. duck with jet fly and no quack
  Duck d2(new JetFly(), new NoQuack());
  cout << "----------------------------------------------------------------"
       << endl;
  d2.flyB->fly();
  d2.quackB->quack();
  cout << "----------------------------------------------------------------"
       << endl;
  return 0;
}