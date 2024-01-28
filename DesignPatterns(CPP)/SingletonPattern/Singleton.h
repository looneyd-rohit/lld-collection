// make the constructor private so that it cannot be instantiated from outside
// also use static methods to retrieve the instance created

#include <bits/stdc++.h>
using namespace std;

#ifndef Singleton_H
#define Singleton_H

class Singleton {
public:
  static Singleton *getInstance() {
    if (instance == NULL) {
      instance = new Singleton();
    }
    return instance;
  }
  void execute() { cout << "See I am a Singleton class..." << endl; }

private:
  static Singleton *instance;
  Singleton() { cout << "Singleton constructor called..." << endl; }
};

#endif
