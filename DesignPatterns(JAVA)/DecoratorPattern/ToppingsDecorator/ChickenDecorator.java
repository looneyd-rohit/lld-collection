package DecoratorPattern.ToppingsDecorator;

import DecoratorPattern.BasePizza.IBasePizza;

public class ChickenDecorator implements IToppingsDecorator{
    IBasePizza basePizza;

    public ChickenDecorator(IBasePizza basePizza){
        this.basePizza = basePizza;
    }
    @Override
    public int cost() {
        return this.basePizza.cost() + 100;
    }
}
