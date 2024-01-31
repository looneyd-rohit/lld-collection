package DecoratorPattern.BasePizza;

public class NonVegOverloadedPizza implements IBasePizza{
    @Override
    public int cost() {
        return 200;
    }
}
