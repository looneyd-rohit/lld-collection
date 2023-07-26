#include "IObserver.h"
#include <bits/stdc++.h>
using namespace std;

// header guards
#ifndef IObservable_H
#define IObservable_H

// Observable strategy --> implemented as interface (abstract class, pure
// virtual function)
class IObservable {
public:
  virtual void add(IObserver *o) = 0;
  virtual void remove(IObserver *o) = 0;
  virtual void notify() = 0;
};

#endif