public class main 
{
    public static void main(String args[])
    {
        var beer=new Beer(300,0.02);
        var wine=new Wine(75,0.12);
        var spirit=new Spirit(31,0.35);
        var mixedDrink =new MixedDrink(beer,wine);
        var him = new People(70,"man"); 
        var h2= new People(55,"woman"); 
        him.drink(beer, 8);
        him.calculateRestTime();
        h2.drink(wine, 8);
        h2.calculateRestTime();
    }
    
}