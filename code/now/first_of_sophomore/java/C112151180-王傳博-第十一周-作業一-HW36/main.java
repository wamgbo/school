public class main 
{
    public static void main(String args[])
    {
        var drink=new Tea("紅茶",130,"2022/04/31");
        drink.setColor("紅色");
        drink.setCc(300);
        drink.showProfile();
        drink.showExpiry();
        //a.因為Tea繼承了Drink，所以Tea會有Drink的method及member
        //b.執行結果僅有name,calorie,date，透過呼叫父類別Drink的constructor，換言之使用了super
    }
    
}