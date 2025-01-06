//請確保cmd是以UTF-8顯示,UTF-8的Code Page是65001，指令:chcp 65001
import java.util.*;
class Employee{
    //member
    private String name;
    private String position;
    private int year;   
    private int money;
    //名稱，工作崗位
    Employee(String name,String position)
    {//method overload並利用this使用建構子
        this(name, position, 1);
    }
    //名稱，年分
    Employee(String name,int year)
    {
        this(name,"一般員工", year);
    }
    Employee()
    {
        this("unknown","一般員工",1);
    }
    Employee(String name,String position,int year){
        set_Name(name);
        set_Position(position);
        set_Year(year);
        checkPosition();
        checkYear();
        setMoney();
    }
    //設定defaultPosition以外的位置為一般員工
    public void checkPosition()
    {
        int count=0;
        String defaultPosition[]=new String[]{"一般員工","主管","部長"};
        //歷變defaultPosition內的元素
        for(String words:defaultPosition)
            if(this.position!=words)
                count++;
        //當this.position內容不在defaultPosition就設定為一般員工
        if(count==3)
            this.position="一般員工";
    }
    //不在0~15設為1
    public void checkYear()
    {
        if(this.year<0||this.year>15)
            this.year=1;   
    }
    //年資獎勵：5(含)年以下獎勵 2 千元，5~10(含)年獎勵 6 千，10~15(含)獎勵 1.2 萬
    public int yearMoney()
    {
        if(this.year<=5)
            return 2000;
        else if(this.year>5&&this.year<=10)
            return 6000;
        else
            return 12000;
    }
    //薪資=基本薪資+年資獎金
    public void setMoney()
    {
        switch (this.position) {
            case "一般員工":
                this.money=22000+yearMoney();
                break;
            case "主管":
                this.money=40000+yearMoney();
                break;
            case "部長":
                this.money=55000+yearMoney();
                break;
        }   
    }
    //輸出 姓名，職位，年資，月薪
    public void show()
    {
        System.out.println("姓名："+this.name+"，職位："+this.position+"，年資："+this.year+"，月薪："+this.money);
    }
    //setters getters
    public String get_Name() {
        return name;
    }

    public void set_Name(String name) {
        this.name = name;
    }

    public String get_Position() {
        return position;
    }

    public void set_Position(String position) {
        this.position = position;
    }

    public int get_Year() {
        return year;
    }

    public void set_Year(int year) {
        this.year = year;
    }
}
public class main {
    //判斷是否為數字
    public static boolean dependNumber(String information)
    {
        //計數器
        int count=0;
        //歷變字串，字元等於數字，計數器++
        for(int i = 0;i<information.length();i++)
        {
            if(information.charAt(i)>='0'&&information.charAt(i)<='9')
                count++;
        }
        //字串為數字回傳ture
        if(count==information.length())
            return true;
        return false;
    }
    public static void setInput(Employee employee,int numberOfTime,String information[])
    {
        String name;   
        String position;   
        int year;  
        name=information[0];
        //判斷多少參數
        if(numberOfTime==3)
        {//name,position,year
            position=information[1];
            year=Integer.parseInt(information[2]);
            employee=new Employee(name,position,year);
        }
        else if(numberOfTime==2&&dependNumber(information[1]))
        {//name,year   
            year=Integer.parseInt(information[1]);
            employee = new Employee(name,year);       
        }
        else
        {//name,position
            position=information[1];
            employee = new Employee(name,position);
        }
    }
    public static void main(String args[])
    {
        Employee employee;
        Scanner s=new Scanner(System.in);
        System.out.print("請輸入員工資訊[名稱、職位、年資]：");
        String register=s.nextLine();//輸入到register
        String information[]=register.split(",");//利用"，"切割register裡的內容
        int numberOfTime = information.length;//參數數量
        // setInput(employee, numberOfTime, information);             
        System.out.println("員工資訊：");
        
        String name;   
        String position;   
        int year;  
        name=information[0];
        //判斷多少參數
        if(numberOfTime==3)
        {//name,position,year
            position=information[1];
            year=Integer.parseInt(information[2]);
            employee=new Employee(name,position,year);
        }
        else if(numberOfTime==2&&dependNumber(information[1])==true)
        {//name,year   
            year=Integer.parseInt(information[1]);
            employee = new Employee(name,year);       
        }
        else
        {//name,position
            position=information[1];
            employee = new Employee(name,position);
        }
        employee.show();

    }
    
}