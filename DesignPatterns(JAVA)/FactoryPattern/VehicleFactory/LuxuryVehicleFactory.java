package FactoryPattern.VehicleFactory;

import FactoryPattern.Vehicle.IVehicle;
import FactoryPattern.Vehicle.LuxuryVehicle1;
import FactoryPattern.Vehicle.LuxuryVehicle2;

public class LuxuryVehicleFactory implements IVehicleFactory{
    @Override
    public IVehicle makeVehicle(String model) {
        switch(model){
            case "1": return new LuxuryVehicle1();
            case "2": return new LuxuryVehicle2();
            default: return null;
        }
    }
}
