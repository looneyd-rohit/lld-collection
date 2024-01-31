package DecoratorPattern.BasePizza;

public class VegOverloadedPizza implements IBasePizza{
    @Override
    public int cost() {
        return 150;
    }
}
