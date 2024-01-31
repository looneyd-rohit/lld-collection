package DecoratorPattern;

import DecoratorPattern.BasePizza.IBasePizza;
import DecoratorPattern.BasePizza.NonVegOverloadedPizza;
import DecoratorPattern.ToppingsDecorator.ChickenDecorator;
import DecoratorPattern.ToppingsDecorator.ExtraCheeseTopping;
import DecoratorPattern.ToppingsDecorator.IToppingsDecorator;

public class Main {
    public static void main(String[] args) {
        // non veg + extra cheese + chicken
        IBasePizza basePizza = new ChickenDecorator(new ExtraCheeseTopping(new NonVegOverloadedPizza()));
        System.out.println("total cost of non veg + extra cheese + chicken pizza: "+basePizza.cost());
    }
}
