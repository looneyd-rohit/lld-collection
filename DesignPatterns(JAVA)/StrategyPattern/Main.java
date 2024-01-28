package StrategyPattern;

import StrategyPattern.Display.DefaultDisplay;
import StrategyPattern.Fly.JetFly;
import StrategyPattern.Fly.NoFly;
import StrategyPattern.Quack.AlienQuack;
import StrategyPattern.Quack.DefaultQuack;

public class Main {
    public static void main(String[] args) {
        Duck duck1 = new Duck(new JetFly(), new AlienQuack(), new DefaultDisplay());
        System.out.println(duck1);
        duck1.display();

        System.out.println("------------------------------------------------------");

        Duck duck2 = new Duck(new NoFly(), new DefaultQuack(), new DefaultDisplay());
        System.out.println(duck2);
        duck2.display();
    }
}
