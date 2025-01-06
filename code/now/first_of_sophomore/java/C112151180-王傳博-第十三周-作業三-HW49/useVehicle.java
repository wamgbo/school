import Vehicle.vehicle;
import Car.car;
public class useVehicle {
    public static void main(String args[])
    {
        vehicle v3 =new vehicle("汽車", "Toyota", 120, "汽油");
        System.out.println(v3.toString());
        car c2=(car)v3;
        c2.toString();
        //可編譯，無法執行，因為v3是mew成vehicle是car的父類別，父類別無法向下轉型成子類別

    }
    
}