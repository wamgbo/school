import java.util.*;
class Book{
    private String BookName;
    private int Year ;
    private String Author;
    private int Price;
    Book(String BookName,int Year ,String Author,int Price){//建構子
        setAuthor(Author);
        setBookName(BookName);
        setPrice(Price);
        setYear(Year);
    }
    private int getDiscount()//利用double存Price的八折，if year<=2010 then 輸出打折號的價格 else 回傳原價
    {
        double temp=this.Price*0.8;
        if(this.Year<=2010)   
            return (int)temp;
        return this.Price;
    }        
    public void showProfile(){//輸出
        System.out.println("書籍名稱： "+this.BookName+"，出版年份："+this.Year+"，作者："+this.BookName+"，原價："+this.Price+"，售價"+getDiscount());    
    }
    //seter and geter
    public String getBookName() {
        return BookName;
    }
    public void setBookName(String bookName) {
        BookName = bookName;
    }
    public int getYear() {
        return Year;
    }
    public void setYear(int year) {
        Year = year;
    }
    public String getAuthor() {
        return Author;
    }
    public void setAuthor(String author) {
        Author = author;
    }
    public int getPrice() {
        return Price;
    }
    public void setPrice(int price) {
        Price = price;
    }
}

public class main {
    public  static void input(String Book[], int Year[], String Author[], int Price[]) {//利用array傳入method
        Scanner s = new Scanner(System.in);
        System.out.print("請輸入書籍名稱：");
        Book[0] = s.next();
        System.out.print("請輸入出版年份：");
        while (!s.hasNextInt())//判斷是否為數字
        {
            System.out.print("非法輸入!請重新輸入：");
            s.next();
        }
        Year[0]=s.nextInt();
        System.out.print("請輸入作者：");
        Author[0] = s.next();
        System.out.print("請輸入價格：");
        while (!s.hasNextInt())
        {
            System.out.print("非法輸入!請重新輸入：");
            s.next();
        }
        Price[0] = s.nextInt();
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String BookName[]= new String[2];
        int Year[] = new int[2];
        String Author[] = new String[2];
        int Price[] = new int[2];
        input(BookName, Year, Author, Price);//輸入
        Book book=new Book(BookName[0],Year[0],Author[0],Price[0]);//建構子
        book.showProfile();//輸出
    }
}