public class main 
{
    public static void main(String args[])
    {
        var T1=new Tea("綠茶",120, "2023-10-15","黃色",700);
        var T2=new Tea("綠茶",120, "2023-10-15","黃色",700);
        T1.showProfile();
        T1.showExpiry();
        System.out.println("-------------------");
        T2.showProfile();
        T2.showExpiry();
        System.out.println(T2.equals(T1));
        //(5)java.lang.Object的預設method
        //(6)false,兩者的hashcode不同,將equals 從比較hashcode override成比較class裡的memeber
    }
    
}