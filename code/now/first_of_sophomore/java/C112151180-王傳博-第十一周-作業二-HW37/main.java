public class main 
{
    public static void main(String args[])
    {
        var drink=new Tea("紅茶",130,"2022/04/31");
        drink.setColor("紅");
        drink.setCc(300);
        drink.showProfile();
        drink.showExpiry();
    }
    
}