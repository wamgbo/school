package Vehicle;

public class vehicle {
    // 成員
    protected String type;
    protected String brand;
    protected int speed;
    protected String fuelType;

    // 建構子
    public vehicle() {
        this(" ", " ", 0, " ");
    }

    public vehicle(String type, String brand, int speed, String fuelType) {
        this.type = type;
        this.brand = brand;
        this.speed = speed;
        this.fuelType = fuelType;
    }

    // toString
    @Override
    public String toString() {
        return String.format("I am a Vehicle instance, my type is %s, brand is %s, speed is %d km/h, fuel type is %s",type,brand,speed,fuelType);
    }

    // setters&&getters
    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    public String getFuelType() {
        return fuelType;
    }

    public void setFuelType(String fuelType) {
        this.fuelType = fuelType;
    }

}