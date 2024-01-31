package DecoratorPattern.ToppingsDecorator;

import DecoratorPattern.BasePizza.IBasePizza;

public class ExtraCheeseTopping implements IToppingsDecorator{
    IBasePizza basePizza;

    public ExtraCheeseTopping(IBasePizza basePizza){
        this.basePizza = basePizza;
    }
    @Override
    public int cost() {
        return this.basePizza.cost() + 50;
    }
}
