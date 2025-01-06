package Car;

import Vehicle.vehicle;

public class car extends vehicle {
    private int seatCount;
    public car() {
        super();
        setSeatCount(0);
    }

    public car(String type, String brand, int speed, String fuelType, int seatCount) {
        super(type, brand, speed, fuelType);
        setSeatCount(seatCount);
    }
    @Override
    public String toString() {
        return String.format("I am a Vehicle instance, my type is %s, brand is %s, speed is %d km/h, fuel type is %s, seatCount is %d",type,brand,speed,fuelType,seatCount);
    }
    public int getSeatCount() {
        return seatCount;
    }

    public void setSeatCount(int seatCount) {
        this.seatCount = seatCount;
    }
}
