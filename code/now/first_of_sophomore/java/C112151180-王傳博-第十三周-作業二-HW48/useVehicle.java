import Vehicle.vehicle;
public class useVehicle {
    public static void main(String args[])
    {
        Object v1 = new vehicle();
        //可以執行，因為Object是所有物件的父類別故vehicle是Object的子類別，v1是將obejct多形成vehicle，所以v1是Object的instance
        System.out.println(v1.toString());
        //vehicle v2=v1;
        //不能執行，
        vehicle v2 =(vehicle)v1;
        //因為Object多形成vehicle，但他還是Object，所以需要轉型成vehicle才可以        

    }
    
}