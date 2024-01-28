#include "IDisplay.h"
#include "IObserver.h"
#include "WeatherStation.h"
#include <bits/stdc++.h>
using namespace std;

class PhoneDisplay : public IObserver, public IDisplay {
  WeatherStation *ws;
  int t;

public:
  PhoneDisplay() : ws(NULL), t(0) {
    cout << "PhoneDisplay default constructor" << endl;
  }
  PhoneDisplay(WeatherStation *ws) : ws(ws), t(0) {
    cout << "PhoneDisplay parametrized constructor" << endl;
  }
  void update() override {
    // pull the changes from observable
    this->t = this->ws->getTemperature();
    this->display();
  }
  void display() override {
    // display the updated temperature
    cout << "----------------------------------------------------------------"
         << endl;
    cout << "PhoneDisplay: Current Temperature is " << this->t << "🔥" << endl;
    cout << "----------------------------------------------------------------"
         << endl;
  }
};