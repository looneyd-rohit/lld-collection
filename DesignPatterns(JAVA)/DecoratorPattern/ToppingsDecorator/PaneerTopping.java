package DecoratorPattern.ToppingsDecorator;

import DecoratorPattern.BasePizza.IBasePizza;

public class PaneerTopping implements IToppingsDecorator{
    IBasePizza basePizza;

    public PaneerTopping(IBasePizza basePizza){
        this.basePizza = basePizza;
    }
    @Override
    public int cost() {
        return this.basePizza.cost() + 80;
    }
}
