package StrategyPattern.Fly;

public class DefaultFly implements IFlyBehaviour{

    @Override
    public void fly() {
        System.out.println("i fly in default mode");
    }

    @Override
    public String type() {
        return "default";
    }
}
