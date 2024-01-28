package StrategyPattern.Quack;

public class NoQuack implements IQuackBehaviour{

    @Override
    public void quack() {
        System.out.println("i [don't] quack");
    }

    @Override
    public String type() {
        return "no";
    }
}
