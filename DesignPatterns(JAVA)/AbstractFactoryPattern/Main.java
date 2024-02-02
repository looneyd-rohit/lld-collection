package AbstractFactoryPattern;

import AbstractFactoryPattern.AbstractVehicleFactory.AbstractVehicleFactory;
import FactoryPattern.Vehicle.IVehicle;
import FactoryPattern.VehicleFactory.IVehicleFactory;
import FactoryPattern.VehicleFactory.LuxuryVehicleFactory;
import FactoryPattern.VehicleFactory.OrdinaryVehicleFactory;

public class Main {
    public static void main(String[] args) {
        AbstractVehicleFactory wrapper = new AbstractVehicleFactory();

        IVehicleFactory myFactory = wrapper.makeOrdinaryFactory();
        IVehicle myOrdinaryCar = myFactory.makeVehicle("2");
        myOrdinaryCar.run();

        myFactory = wrapper.makeLuxuryFactory();
        IVehicle myLuxuryCar = myFactory.makeVehicle("1");
        myLuxuryCar.run();
    }
}
