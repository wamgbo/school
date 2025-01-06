public class main 
{
    public static void main(String args[])
    {
        var beer=new Beer(330,0.03);
        var wine=new Wine(750,0.08);
        var spirit=new Spirit(200,0.35);
        var mixedDrink =new MixedDrink(beer,wine);
        //輸出
        System.out.println("Beer:");
        beer.showProfile();
        System.out.println("Wine:");
        wine.showProfile();
        System.out.println("Spirit:");
        spirit.showProfile();
        //混合Beer,Spirit
        System.out.println("MixedDrink(混和Beer,Spirit):");
        mixedDrink.showProfile();
    }
    
}