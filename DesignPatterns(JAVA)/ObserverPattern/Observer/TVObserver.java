package ObserverPattern.Observer;

import ObserverPattern.Observable.IObservable;

public class TVObserver implements IObserver{
    String name;
    IObservable observable;

    public TVObserver(String name, IObservable observable){
        this.name = name;
        this.observable = observable;
    }
    @Override
    public void update() {
        System.out.println(this.name + " display temperature: " + observable.getData());
    }
}
