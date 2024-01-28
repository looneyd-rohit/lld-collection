package StrategyPattern.Fly;

public class JetFly implements IFlyBehaviour{

    @Override
    public void fly() {
        System.out.println("i fly in jet mode");
    }

    @Override
    public String type() {
        return "jet";
    }
}
