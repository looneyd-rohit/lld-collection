package ObserverPattern.Observer;

import ObserverPattern.Observable.IObservable;

public class MobileObserver implements IObserver{
    String name;
    IObservable observable;

    public MobileObserver(String name, IObservable observable){
        this.name = name;
        this.observable = observable;
    }
    @Override
    public void update() {
        System.out.println(this.name + " display temperature: " + observable.getData());
    }
}
