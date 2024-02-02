package AbstractFactoryPattern.VehicleFactory;

import AbstractFactoryPattern.Vehicle.IVehicle;

public interface IVehicleFactory {
    public IVehicle makeVehicle(String model);
}
