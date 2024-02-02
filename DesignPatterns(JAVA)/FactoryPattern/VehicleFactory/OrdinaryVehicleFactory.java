package FactoryPattern.VehicleFactory;

import FactoryPattern.Vehicle.IVehicle;
import FactoryPattern.Vehicle.OrdinaryVehicle1;
import FactoryPattern.Vehicle.OrdinaryVehicle2;

public class OrdinaryVehicleFactory implements IVehicleFactory{
    @Override
    public IVehicle makeVehicle(String model) {
        switch(model){
            case "1": return new OrdinaryVehicle1();
            case "2": return new OrdinaryVehicle2();
            default: return null;
        }
    }
}
