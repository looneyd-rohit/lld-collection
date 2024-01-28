package StrategyPattern.Display;

import StrategyPattern.Fly.IFlyBehaviour;
import StrategyPattern.Quack.IQuackBehaviour;

public class DefaultDisplay implements IDisplayBehaviour{

    @Override
    public void display(IFlyBehaviour fly, IQuackBehaviour quack) {
        System.out.println("i fly like: ["+fly.type() + "] and quack like: ["+quack.type()+"]");
    }
}
