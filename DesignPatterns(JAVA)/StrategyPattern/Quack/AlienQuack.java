package StrategyPattern.Quack;

public class AlienQuack implements IQuackBehaviour{

    @Override
    public void quack() {
        System.out.println("i quack in alien mode");
    }

    @Override
    public String type() {
        return "alien";
    }
}
