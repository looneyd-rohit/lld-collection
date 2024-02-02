package AbstractFactoryPattern.AbstractVehicleFactory;

import FactoryPattern.VehicleFactory.IVehicleFactory;
import FactoryPattern.VehicleFactory.LuxuryVehicleFactory;
import FactoryPattern.VehicleFactory.OrdinaryVehicleFactory;

public class AbstractVehicleFactory {
    public IVehicleFactory makeOrdinaryFactory(){
        return new OrdinaryVehicleFactory();
    }
    public IVehicleFactory makeLuxuryFactory(){
        return new LuxuryVehicleFactory();
    }
}
