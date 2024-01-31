package ObserverPattern.Observable;

import ObserverPattern.Observer.IObserver;

import java.util.ArrayList;

public class WeatherObservable implements IObservable{
    int temperature;
    ArrayList<IObserver> observers;

    public WeatherObservable(){
        this.temperature = 0;
        observers = new ArrayList<>();
    }
    @Override
    public void add(IObserver ob) {
        observers.add(ob);
    }

    @Override
    public void remove(IObserver ob) {
        observers.remove(ob);
    }

    @Override
    public void notifyObservers() {
        observers.forEach(observer -> observer.update());
    }

    @Override
    public void setData(int t) {
        this.temperature = t;
        notifyObservers();
    }

    @Override
    public int getData() {
        return this.temperature;
    }
}
