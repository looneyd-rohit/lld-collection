#include "Singleton.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  // create an object
  // Singleton *s = new Singleton(); ----> gives error as constructor is private

  // use static methods
  Singleton *instance1 = Singleton::getInstance();
  instance1->execute();

  Singleton *instance2 = Singleton::getInstance();
  instance2->execute();

  return 0;
}