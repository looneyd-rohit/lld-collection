package FactoryPattern;

import FactoryPattern.Vehicle.IVehicle;
import FactoryPattern.VehicleFactory.IVehicleFactory;
import FactoryPattern.VehicleFactory.LuxuryVehicleFactory;
import FactoryPattern.VehicleFactory.OrdinaryVehicleFactory;

public class Main {
    public static void main(String[] args) {
        IVehicleFactory luxuryFactory = new LuxuryVehicleFactory();
        IVehicle myLuxuryCar = luxuryFactory.makeVehicle("2");
        myLuxuryCar.run();

        IVehicleFactory ordinaryFactory = new OrdinaryVehicleFactory();
        IVehicle myOrdinaryCar = ordinaryFactory.makeVehicle("1");
        myOrdinaryCar.run();
    }
}
