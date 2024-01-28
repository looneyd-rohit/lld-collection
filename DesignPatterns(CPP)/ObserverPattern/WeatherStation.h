#include "IObservable.h"
#include "IObserver.h"
#include <bits/stdc++.h>
using namespace std;

// header guard
#ifndef WeatherStation_H
#define WeatherStation_H

class WeatherStation : public IObservable {
  set<IObserver *> observers;

public:
  int temperature;
  WeatherStation() : temperature(0) {
    cout << "WeatherStation default constructor" << endl;
  }
  WeatherStation(int temperature) : temperature(temperature) {
    cout << "WeatherStation parametrized constructor" << endl;
  }
  void add(IObserver *observer) override { this->observers.insert(observer); }
  void remove(IObserver *observer) override { this->observers.erase(observer); }
  void notify() override {
    for (IObserver *observer : observers) {
      // push the update to observer
      observer->update();
    }
  }
  int getTemperature() { return this->temperature; }
};

#endif