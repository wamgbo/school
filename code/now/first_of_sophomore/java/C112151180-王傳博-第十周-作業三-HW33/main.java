import java.util.*;
class Book{
    //private 外部只能利用seter geter設定及取得值，達到資訊隱藏
    private String BookName;
    private int Year ;
    private String Author;
    private int Price;
    Book()
    { 
        this("unKnown", 2024, "unKnown", 0);//4參數的Book()

    }
    Book(String BookName)
    {
        this();//無參數的Book()
        setBookName(BookName);
    }
    Book(String BookName,int Year)
    {
        this(BookName);//1參數的Book()
        setYear(Year);
        checkYear();
    }
    Book(String BookName,int Year,String Author)
    {
        this(BookName,Year);//2參數的Book()
        setAuthor(Author);
    }
    Book(String BookName,int Year ,String Author,int Price){//建構子
        setAuthor(Author);
        setBookName(BookName);
        setPrice(Price);
        setYear(Year);
        checkPrice();
    }
    private void checkYear()//諾時間非法則設為0
    {
        if(this.Year>2024||this.Year<1938)
            this.Year=0;
    }
    private void checkPrice()//諾價錢非法則設為0
    {
       if(this.Price<0)
            this.Price=0;
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
        if(Year[0]>2024||Year[0]<1938)
        {
            System.out.println("年份輸入錯誤，將設為0!");
            Year[0]=0;
        }
        System.out.print("請輸入作者：");
        Author[0] = s.next();
        System.out.print("請輸入價格：");
        while (!s.hasNextInt())
        {
            System.out.print("非法輸入!請重新輸入：");
            s.next();
        }
        Price[0] = s.nextInt();
        if(Price[0]<0)
        {
            System.out.println("價格輸入錯誤，將設為0!");
            Price[0]=0;
        }
    }

    public static void main(String[] args) {
        Book b1 = new Book();
        Book b2 = new Book("This is b2 book");
        Book b3 = new Book("Thinking in Java", 1980);
        Book b4 = new Book("Thinking in Java", 2024, "Davis");
        Book b5 = new Book("Hello World", 1900, "Gosh", -150); 
        b1.showProfile();   
        b2.showProfile();   
        b3.showProfile();   
        b4.showProfile();   
        b5.showProfile();   
    }
}