package AbstractFactoryPattern.VehicleFactory;

import AbstractFactoryPattern.Vehicle.IVehicle;
import AbstractFactoryPattern.Vehicle.OrdinaryVehicle1;
import AbstractFactoryPattern.Vehicle.OrdinaryVehicle2;

public class OrdinaryVehicleFactory implements IVehicleFactory {
    @Override
    public IVehicle makeVehicle(String model) {
        switch(model){
            case "1": return new OrdinaryVehicle1();
            case "2": return new OrdinaryVehicle2();
            default: return null;
        }
    }
}
