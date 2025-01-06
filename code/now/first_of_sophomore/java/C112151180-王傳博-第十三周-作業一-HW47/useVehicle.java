import Vehicle.vehicle;
public class useVehicle {
    public static void main(String args[])
    {
        var v1 = new vehicle();
        System.out.println(v1.toString());
        //toString()來自預設的obejct
        var v2 = new vehicle();
        //將toString()override成題目要求的樣子，如前面作業所做的override equal相同概念
    }
    
}