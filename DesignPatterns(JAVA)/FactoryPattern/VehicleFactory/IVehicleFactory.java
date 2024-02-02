package FactoryPattern.VehicleFactory;

import FactoryPattern.Vehicle.IVehicle;

public interface IVehicleFactory {
    public IVehicle makeVehicle(String model);
}
