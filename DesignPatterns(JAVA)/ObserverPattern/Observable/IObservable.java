package ObserverPattern.Observable;

import ObserverPattern.Observer.IObserver;

public interface IObservable {
    void add(IObserver ob);

    void remove(IObserver ob);

    void notifyObservers();

    void setData(int t);

    int getData();
}
