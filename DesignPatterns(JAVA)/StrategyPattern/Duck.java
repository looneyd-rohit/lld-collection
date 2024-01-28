package StrategyPattern;

import StrategyPattern.Display.IDisplayBehaviour;
import StrategyPattern.Fly.IFlyBehaviour;
import StrategyPattern.Quack.IQuackBehaviour;

public class Duck {
    IFlyBehaviour fb;
    IQuackBehaviour qb;
    IDisplayBehaviour db;

    public Duck(IFlyBehaviour fb, IQuackBehaviour qb, IDisplayBehaviour db){
        this.fb = fb;
        this.qb = qb;
        this.db = db;
    }

    @Override
    public String toString(){
        return "[Duck: "+fb.type()+" | "+qb.type()+"]";
    }

    public void display(){
        this.db.display(fb, qb);
    }
}
