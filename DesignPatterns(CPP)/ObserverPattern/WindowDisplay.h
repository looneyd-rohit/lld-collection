#include "IDisplay.h"
#include "IObserver.h"
#include "WeatherStation.h"
#include <bits/stdc++.h>
using namespace std;

class WindowDisplay : public IObserver, public IDisplay {
  WeatherStation *ws;
  int t;

public:
  WindowDisplay() : ws(NULL), t(0) {
    cout << "WindowDisplay default constructor" << endl;
  }
  WindowDisplay(WeatherStation *ws) : ws(ws), t(0) {
    cout << "WindowDisplay parametrized constructor" << endl;
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
    cout << "WindowDisplay: Current Temperature is " << this->t << "🔥" << endl;
    cout << "----------------------------------------------------------------"
         << endl;
  }
};