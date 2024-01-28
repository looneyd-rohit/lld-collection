package StrategyPattern.Quack;

public class DefaultQuack implements IQuackBehaviour{

    @Override
    public void quack() {
        System.out.println("i quack in default mode");
    }

    @Override
    public String type() {
        return "default";
    }
}
