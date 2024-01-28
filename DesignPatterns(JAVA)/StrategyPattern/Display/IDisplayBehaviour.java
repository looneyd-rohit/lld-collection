package StrategyPattern.Display;

import StrategyPattern.Fly.IFlyBehaviour;
import StrategyPattern.Quack.IQuackBehaviour;

public interface IDisplayBehaviour {
    void display(IFlyBehaviour fly, IQuackBehaviour quack);
}
