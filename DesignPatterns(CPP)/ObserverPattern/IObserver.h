#include <bits/stdc++.h>
using namespace std;

#ifndef IObserver_H
#define IObserver_H

// Observer strategy --> implemented as interface (abstract class, pure virtual
// function)
class IObserver {

public:
  virtual void update() = 0;
};

#endif