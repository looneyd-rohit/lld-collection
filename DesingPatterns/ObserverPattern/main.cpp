#include "PhoneDisplay.cpp"
#include "WeatherStation.cpp"
#include "WindowDisplay.cpp"
#include <bits/stdc++.h>
using namespace std;

int main() {
  WeatherStation *ws = new WeatherStation(69);
  PhoneDisplay *pd = new PhoneDisplay(ws);
  ws->add(pd);
  ws->notify();
  cout << "end of session..." << endl << endl;
  WindowDisplay *wd = new WindowDisplay(ws);
  ws->add(wd);
  ws->notify();
  cout << "end of session..." << endl << endl;
  ws->remove(pd);
  ws->notify();
  cout << "end of session..." << endl << endl;
  ws->add(pd);
  ws->temperature = 69420;
  cout << "updated temperature..." << endl << endl;
  ws->notify();
  return 0;
}