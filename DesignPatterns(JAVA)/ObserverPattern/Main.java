package ObserverPattern;

import ObserverPattern.Observable.IObservable;
import ObserverPattern.Observable.WeatherObservable;
import ObserverPattern.Observer.IObserver;
import ObserverPattern.Observer.MobileObserver;
import ObserverPattern.Observer.TVObserver;

public class Main {
    public static void main(String[] args) {
        IObservable observable = new WeatherObservable();
        IObserver observer1 = new TVObserver("[mitv]", observable);
        IObserver observer2 = new MobileObserver("[iphone15]", observable);
        IObserver observer3 = new MobileObserver("[s24]", observable);


        observable.add(observer1);
        observable.add(observer2);
        observable.add(observer3);

        observable.setData(69);
    }
}
