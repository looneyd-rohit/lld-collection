package StrategyPattern.Fly;

import StrategyPattern.Fly.IFlyBehaviour;

public class NoFly implements IFlyBehaviour {

    @Override
    public void fly() {
        System.out.println("i [don't] fly");
    }

    @Override
    public String type() {
        return "no";
    }
}
